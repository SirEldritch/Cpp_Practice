/*
This counts how many times a word appears in a row in a vector
string, main issue was the end of the vector string. If nothing
was there, the longest word count won't be counted on. So I had
to add an empty string to the end of the vector for it to work.
*/
#include <iostream>
#include <string>
#include <vector>
using namespace std;
using std::vector;
int main(){
    unsigned curr_Cnt = 0, saved_Cnt = 0;
    string user_Int, comp_Word, saved_Word, fluff = " ";
    vector<string> vecString  = {};
    while (cin>>user_Int){
        vecString.push_back(user_Int);
    }
    vecString.push_back(fluff);
    for (decltype(vecString.begin()) iter = vecString.begin(); 
    iter != vecString.end(); ++iter){
        if (iter == vecString.begin()){
            comp_Word = *iter;
            ++curr_Cnt;
            saved_Word = comp_Word;
            saved_Cnt = curr_Cnt;
        }
        else if (*iter != *(iter-1) && curr_Cnt > saved_Cnt){
            saved_Word = comp_Word;
            saved_Cnt = curr_Cnt;
            curr_Cnt = 1;
            comp_Word = *iter;
        }
        else if (*iter == *(iter-1)){
            ++curr_Cnt;
            //cout<<comp_Word<<'\t'<<curr_Cnt<<endl;
        }
        else {
            comp_Word = *iter;
            curr_Cnt = 1;
            //cout<<comp_Word<<'\t'<<curr_Cnt<<endl;
        }
    }
    cout<<saved_Word<<'\t'<<saved_Cnt<<endl;
    return 0;
}