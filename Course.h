#ifndef COURSE_H
#define COURSE_H

#include <string>
#include <vector>
#include "Person.h"
#include "Gradebook.h"

class Course {
private:
    std::string courseName;
    int courseId;
    Gradebook gradebook;
    std::vector<Person*> persons;

public:
    Course(int id, const std::string& name);
    std::string getCourseName() const;
    void addPerson(Person* person);
    void addGrade(int studentId, float grade);
};

#endif
