/*
    File Name     : Calculate Average Score.cpp
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


// Function to calculate the average scores for all students
double calculateAverageScores(int numOfStudents) {
    double totalScores = 0;
    for (int i = 0; i < numOfStudents; ++i) {
        totalScores += scores[i];
    }
    return (numOfStudents > 0) ? (totalScores / numOfStudents) : 0;
}