#include "student.h"
#include <string>
#include <vector>

using namespace std;

void student::setName(string fName, string lName){
firstName = fName;
lastName = lName;
}

string student::fullName(){
        string fullName = firstName + " " + lastName;
        return fullName;
}
void student::addGrade(double grade){
        grades.push_back(grade);
}

double student::getScore(){
        double total = 0;
        for(int i = 0; i < grades.size(); i++){
                total += grades[i];
        }
        return total / grades.size();
}
