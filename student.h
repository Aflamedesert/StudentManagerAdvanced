#ifndef _STUDENT_H_
#define _STUDENT_H_
#include <string>
#include <vector>

class student
{
        private:
        public:
          std::vector<double> grades;
          std::string firstName;
          std::string lastName;
          student(){
                  firstName = "";
                  lastName = "";

          }
          void setName(std::string, std::string);
          std::string fullName();
          void addGrade(double);
          double getScore();
};

#endif
