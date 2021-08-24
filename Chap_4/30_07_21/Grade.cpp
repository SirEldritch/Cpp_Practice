/*
Program to assign grades from scores. The score of 100 does not work to well since has
a remainder less than three so it assigns a negative value.
How to fix:                                        (student_Score == 100)
Add everything you want afterwards
student_Marks += (student_Score % 10 > 7) ? '+' : (student_Score % 10 < 3) ? '-' : ' ';
*/
#include <iostream>
#include <string>
#include <vector>

using namespace std;
using std::vector;

int main(){
    string student_Marks = {};
    unsigned student_Score = 0;
    cin >> student_Score;
    vector<string> letter_Grades = {"F","D","C","B","A","A+"};
    if (student_Score < 60)
        student_Marks = letter_Grades[0];   
    else
        student_Marks = letter_Grades[((student_Score - 50) / 10)];
    student_Marks += (student_Score % 10 > 7) ? '+' : (student_Score % 10 < 3) ? '-' : ' ';
    cout<<student_Marks<<'\t'<<student_Score<<endl;
    return 0;
}