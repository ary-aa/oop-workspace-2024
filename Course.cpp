#include "Course.h"

Course::Course(int id, const std::string& name) : courseId(id), courseName(name) {}

std::string Course::getCourseName() const {
    return courseName;
}

void Course::addPerson(Person* person) {
    persons.push_back(person);
}

void Course::addGrade(int studentId, float grade) {
    gradebook.addGrade(studentId, grade);
}
