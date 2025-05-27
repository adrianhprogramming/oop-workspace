#include <iostream>
#include "Student.h"
#include "Instructor.h"
#include "Course.h"

int main() {
    // Create student and instructor
    Student* seb = new Student("Seb", 1884670);
    Instructor* drV = new Instructor("Dr.V");

    // Create a coursecl
    Course oopCourse(1234, "OOP");

    // Add student and instructor to the course
    oopCourse.addPerson(seb);
    oopCourse.addPerson(drV);

    // Retrieve persons and print details
    std::vector<Person*> people = oopCourse.get_persons();

    for (Person* p : people) {
        // Try casting to Student first
        Student* student = dynamic_cast<Student*>(p);
        if (student) {
            std::cout << "Name of Student: " << student->get_name() << std::endl;
            std::cout << "Id of Student: " << student->get_id() << std::endl;
        } else {
            // Must be an instructor
            std::cout << "Name of Instructor: " << p->get_name() << std::endl;
        }
    }

    // Clean up
    delete seb;
    delete drV;

    return 0;
}