#ifndef STUDENT_H
#define STUDENT_H

#include "Person.h"

class Student : public Person {
public:
    Student(const std::string& name, int id);
};

#endif