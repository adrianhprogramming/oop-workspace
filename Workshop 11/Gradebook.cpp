// Gradebook.cpp
#include "Gradebook.h"

void Gradebook::addGrade(int student_id, int course_id, const std::string& assignment, int value) {
    grades.emplace_back(student_id, course_id, assignment, value);
}

std::vector<Grade> Gradebook::get_grades() const {
    return grades;
}