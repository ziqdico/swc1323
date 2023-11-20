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