#include <iostream>
#include <string>
using namespace std;

int main(){
    string str;
    unsigned vow_Cnt = 0, spc_Cnt = 0, tab_Cnt = 0, nli_Cnt = 0, 
        ff_Cnt = 0, fl_Cnt = 0, fi_Cnt = 0;
    bool f_buffer = false;
    getline(cin,str);
    for (auto &o : str){
        o = tolower(o);
        switch (o)
        {
        case 'a': case 'e': case 'o': case 'u':
            f_buffer = false;
            ++vow_Cnt;
            break;
        case ' ':
            f_buffer = false;
            ++spc_Cnt;
            break;
        case '\t':
            f_buffer = false;
            ++tab_Cnt;
            break;
        case '\n':
            f_buffer = false;
            ++nli_Cnt;
            break;
        case 'f':
            if (f_buffer == true)
                ++ff_Cnt;
            else
                f_buffer = true;
            break;
        case 'l':
            if (f_buffer == true)
                ++fl_Cnt;
            break;
        case 'i':
            ++vow_Cnt;
            if (f_buffer == true)
                ++fi_Cnt;
            break;
        default:
            f_buffer = false;
        }
    }

    cout<< "Number of vowels found:    " << '\t' << vow_Cnt << endl;
    cout<< "Number of spaces found:    " << '\t' << spc_Cnt << endl;
    cout<< "Number of tabs found:      " << '\t' << tab_Cnt << endl;
    cout<< "Number of new lines found: " << '\t' << nli_Cnt << endl;
    cout<< "Number of ff's found:      " << '\t' << ff_Cnt << endl;
    cout<< "Number of fl's found:      " << '\t' << fl_Cnt << endl;
    cout<< "Number of fi's found:      " << '\t' << fi_Cnt << endl;
        // Number of f's found after another f
    
    /*
    char ch;
    unsigned vow_Cnt = 0, spc_Cnt = 0, tab_Cnt = 0, nli_Cnt = 0;
    while (cin.get(ch) && isalpha(ch)){
        // >> this skips white spaces or so I've been told
        ch = tolower(ch);
        switch (ch)
        {
        case 'a' : case 'e' : case 'i' : case 'o' : case 'u' :
            ++vow_Cnt;
            break;
        case ' ':
            ++spc_Cnt;
            break;
        case '\t':
            ++tab_Cnt;
            break;
        case '\n':
            ++nli_Cnt;
            break;
        }
    }

    cout<< "Number of vowels found:    " << '\t' << vow_Cnt << endl;
    cout<< "Number of spaces found:    " << '\t' << spc_Cnt << endl;
    cout<< "Number of tabs found:      " << '\t' << tab_Cnt << endl;
    cout<< "Number of new lines found: " << '\t' << nli_Cnt << endl;
    */

    return 0;
}