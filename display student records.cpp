/*
    File Name     : Display student records.cpp
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


// Function to display all student records
void displayStudentRecords(int numOfStudents, double averageScores) {
    cout << "\nStudent Records:\n";
    cout << "--------------------------------------------------\n";
    cout << "ID\tName\t\tScores\tAttendance\n";
    cout << "--------------------------------------------------\n";

    for (int i = 0; i < numOfStudents; ++i) {
        cout << studentID[i] << "\t" << studentName[i] << "\t\t"<< scores[i] << "\t" << attendance[i] << "%\n";
    }

    cout << "--------------------------------------------------\n";
    cout << "Average Scores: " << averageScores << "\n\n";
}