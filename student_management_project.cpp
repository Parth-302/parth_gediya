#include <iostream>
#include <vector>
#include <fstream>
#include <limits>

using namespace std;

// Base class: Student
class Student {
protected:
    int rollNo;
    string name;
    string mobile;
    string currentStudy;

public:
    Student(int r, string n, string m, string c) : rollNo(r), name(n), mobile(m), currentStudy(c) {}

    virtual void display() { // Polymorphism (Virtual function)
        cout << "Roll No: " << rollNo << ", Name: " << name
             << ", Mobile: " << mobile << ", Current Study: " << currentStudy << endl;
    }

    int getRollNo() { return rollNo; }
    string getName() { return name; }
    string getMobile() { return mobile; }
    string getCurrentStudy() { return currentStudy; }

    void setName(string n) { name = n; }
    void setMobile(string m) { mobile = m; }
    void setCurrentStudy(string c) { currentStudy = c; }
};

// Derived class: StudentManager
class StudentManager : public Student {
private:
    vector<Student> students; // Vector to store students

public:
    StudentManager() : Student(0, "", "", "") {} // Default constructor

    // Function to add a new student
    void addStudent() {
        int rollNo;
        string name, mobile, currentStudy;

        cout << "\nEnter Roll No: ";
        cin >> rollNo;
        cin.ignore();

        cout << "Enter Name: ";
        getline(cin, name);

        cout << "Enter Mobile Number: ";
        getline(cin, mobile);

        cout << "Enter Current Study: ";
        getline(cin, currentStudy);

        students.push_back(Student(rollNo, name, mobile, currentStudy));
        cout << "Student Added Successfully!\n";
    }

    // Function to edit student details
    void editStudent() {
        int roll;
        cout << "\nEnter Roll No to Edit: ";
        cin >> roll;

        for (size_t i = 0; i < students.size(); i++) {
            if (students[i].getRollNo() == roll) {
                string name, mobile, study;
                cout << "Enter New Name: ";
                cin.ignore();
                getline(cin, name);
                cout << "Enter New Mobile: ";
                getline(cin, mobile);
                cout << "Enter New Current Study: ";
                getline(cin, study);

                students[i].setName(name);
                students[i].setMobile(mobile);
                students[i].setCurrentStudy(study);

                cout << "? Student Updated Successfully!\n";
                return;
            }
        }
        cout << "? Student Not Found!\n";
    }

    // Function to delete student by Roll No
    void deleteStudent() {
        int roll;
        cout << "\nEnter Roll No to Delete: ";
        cin >> roll;

        for (size_t i = 0; i < students.size(); i++) {
            if (students[i].getRollNo() == roll) {
                students.erase(students.begin() + i);
                cout << "? Student Deleted Successfully!\n";
                return;
            }
        }
        cout << "? Student Not Found!\n";
    }

    // Function to search student by Roll No
    void searchStudent() {
        int roll;
        cout << "\nEnter Roll No to Search: ";
        cin >> roll;

        for (size_t i = 0; i < students.size(); i++) {
            if (students[i].getRollNo() == roll) {
                cout << "? Student Found:\n";
                students[i].display();
                return;
            }
        }
        cout << "? Student Not Found!\n";
    }

    // Function to display all students
    void displayStudents() {
        cout << "\n?? Student List:\n";
        if (students.empty()) {
            cout << "No students available.\n";
            return;
        }
        for (size_t i = 0; i < students.size(); i++) {
            students[i].display();
        }
    }

    // Function to export student details to a file
    void exportDetails() {
        ofstream file("exportDetails.txt");
        if (!file) {
            cout << "? Error opening file!\n";
            return;
        }

        for (size_t i = 0; i < students.size(); i++) {
            file << "Roll No: " << students[i].getRollNo()
                 << ", Name: " << students[i].getName()
                 << ", Mobile: " << students[i].getMobile()
                 << ", Current Study: " << students[i].getCurrentStudy() << "\n";
        }

        file.close();
        cout << "? Student Details Exported to 'exportDetails.txt' Successfully!\n";
    }
};

// Main function
int main() {
    StudentManager manager;
    int choice;

    while (true) {
        cout << "\n========== ?? Student Management System ==========\n";
        cout << "1. Add Student\n2. Edit Student\n3. Delete Student\n";
        cout << "4. Search Student\n5. Display Students\n6. Export Details\n7. Exit\n";
        cout << "Enter Choice: ";

        try {
            cin >> choice;
            if (cin.fail()) { // Check for invalid input
            }

            switch (choice) {
                case 1:
                    manager.addStudent();
                    break;
                case 2:
                    manager.editStudent();
                    break;
                case 3:
                    manager.deleteStudent();
                    break;
                case 4:
                    manager.searchStudent();
                    break;
                case 5:
                    manager.displayStudents();
                    break;
                case 6:
                    manager.exportDetails();
                    break;
                case 7:
                    cout << "?? Exiting... Thank you!\n";
                    return 0;
                default:
                    cout << "? Invalid Choice! Try again.\n";
            }
        } catch (const exception &e) {
            cout << e.what() << endl;
            cin.clear();  
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }
    }
}

