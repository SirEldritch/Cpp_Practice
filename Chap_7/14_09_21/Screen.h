#include <string>
#include <iostream>
#include <vector>

#ifndef SCREEN
#define SCREEN

class Screen{
public:
    typedef std::string::size_type pos;
    friend class Window_mgr;
    //friend void Window_mgr::clear(ScreenIndex);
    Screen() = default;
    Screen(pos ht, pos wd, char c) : height(ht), width(wd), contents(ht * wd,c) { }
    
    Screen &display(std::ostream &os) { do_Display(os); return *this; }
    const Screen &display(std::ostream &os) const { do_Display(os); return *this; }
    
    char get() const {
        return contents[cursor];
    }

    inline char get(pos ht, pos wd) const;
    Screen &move (pos r, pos c);
    
    Screen &set(char);
    Screen &set(pos,pos,char);

    size_t some_Function() const;
private:
    pos cursor = 0;
    pos height = 0, width = 0;
    std::string contents;
    
    //never const
    mutable size_t access_ctr = 0;
    void do_Display(std::ostream &os) const {os << contents;}
};

 
inline Screen &Screen::move(pos r, pos c){
    pos row = r * width;
    cursor = row + c;
    return *this;
}

char Screen::get(pos r, pos c) const {
    pos row = r * width;
    return contents[row+c];
}

inline Screen &Screen::set(char c){
    contents[cursor] = c;
    return *this;
}

inline Screen &Screen::set(pos r, pos col, char ch){
    contents[r*width + col] = ch;
    return *this;
}

inline size_t Screen::some_Function() const {
    ++access_ctr;
    return access_ctr;
} 

class Window_mgr{
public:
    using ScreenIndex = std::vector<Screen>::size_type;
    void clear(ScreenIndex);

private:
    std::vector<Screen> screens{Screen(24,80,' ')};
};

void Window_mgr::clear(ScreenIndex i){
    Screen &s = screens[i];
    s.contents = std::string(s.height * s.width, ' ');
}

#endif