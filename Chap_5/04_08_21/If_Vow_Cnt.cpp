#include <iostream>
using namespace std;

int main(){
    char ch;
    unsigned vow_Cnt = 0;
    while (cin >> ch && isalpha(ch)){
        ch = tolower(ch);
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u'){
            ++vow_Cnt;
        }
    }
    cout<<"Number of vowels found:" << '\t' << vow_Cnt <<endl;
    return 0;
}

