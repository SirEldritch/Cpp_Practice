/*
return type after a loop means it might go unnoticed which is bad. Always
have a return at the end of a non-void function and you will be alright.
*/

#include <iostream>
#include <string>

bool str_subrange(const std::string &str1, const std::string &str2){
    if (str1.size() == str2.size())
        return str1 == str2;
    auto size = (str1.size()<str2.size()) ? str1.size() : str2.size();
    for (decltype(size) i = 0; i != size; ++i){
        if (str1[i] != str2[i])
            return 0;
            // This was just return which gave a huge error
    }
    return 1;
    // There was no return but Vscode did let me know
}

int main(){
    std::string fstr = "Something Cool", sstr = "Something not Cool";
    str_subrange(fstr,sstr);
    return 0;
}