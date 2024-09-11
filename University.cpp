#include "University.h"
#include <iostream>

University::University(const std::string& name, const std::string& location) : name(name), location(location) {}

void University::addCourse(const Course& course) {
    courses.push_back(course);
}

void University::displayCourses() const {
    std::cout << "Courses at " << name << ":\n";
    for (const auto& course : courses) {
        std::cout << course.getCourseName() << std::endl;
    }
}
