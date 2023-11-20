/*
    File Name     : Main.cpp
    Matrix Number : AM23070139
	                AM2307013938
                    AM2307014330
                    AM2307013946
    Section       : 2
    Lecturer      : SITI ROBAYA BINTI JANTAN
    Subject       : SWC1323 - FUNDAMENTAL OF PROGRAMMING
    Program Desc. : To manage Starlight High School effectively manage student records,
                    delete student records, academic performance, and attendance data.
*/


#include <iostream>
#include <string>

using namespace std;

const int MAX_STUDENTS = 50;

// Declaration of arrays
int studentID[MAX_STUDENTS];
string studentName[MAX_STUDENTS];
double scores[MAX_STUDENTS];
int attendance[MAX_STUDENTS];

int main() {
    int numOfStudents;

    cout << "Enter the number of students (up to " << MAX_STUDENTS << "): ";
    cin >> numOfStudents;
    
    if (numOfStudents > 0 && numOfStudents <= MAX_STUDENTS) {
        // Function calls
        inputStudentData(numOfStudents);
        double averageScores = calculateAverageScores(numOfStudents);
        displayStudentRecords(numOfStudents, averageScores);
    } else {
        cout << "Invalid number of students. Please run the program again.\n";
    }

    return 0;
}