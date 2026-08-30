#include <iostream>
#include <string>
using namespace std;

struct Student
{
    int rollNo;
    string name;
    float marks;
};

Student students[100];
int totalStudents = 0;

// Add Student
void addStudent()
{
    cout << "\n--- Add Student ---\n";

    cout << "Enter Roll No: ";
    cin >> students[totalStudents].rollNo;

    cin.ignore();

    cout << "Enter Name: ";
    getline(cin, students[totalStudents].name);

    cout << "Enter Marks: ";
    cin >> students[totalStudents].marks;

    totalStudents++;

    cout << "\nStudent added successfully!\n";
}

// Display Students
void displayStudents()
{
    cout << "\n--- All Students ---\n";

    if (totalStudents == 0)
    {
        cout << "No students available.\n";
        return;
    }

    for (int i = 0; i < totalStudents; i++)
    {
        cout << "\nRoll No: " << students[i].rollNo;
        cout << "\nName: " << students[i].name;
        cout << "\nMarks: " << students[i].marks;
        cout << "\n-------------------";
    }
}

// Search Student
void searchStudent()
{
    int roll;
    bool found = false;

    cout << "\nEnter Roll No to search: ";
    cin >> roll;

    for (int i = 0; i < totalStudents; i++)
    {
        if (students[i].rollNo == roll)
        {
            cout << "\nStudent Found!";
            cout << "\nRoll No: " << students[i].rollNo;
            cout << "\nName: " << students[i].name;
            cout << "\nMarks: " << students[i].marks;
            found = true;
            break;
        }
    }

    if (!found)
        cout << "\nStudent not found!";
}

// Update Student
void updateStudent()
{
    int roll;
    bool found = false;

    cout << "\nEnter Roll No to update: ";
    cin >> roll;

    for (int i = 0; i < totalStudents; i++)
    {
        if (students[i].rollNo == roll)
        {
            cin.ignore();

            cout << "Enter New Name: ";
            getline(cin, students[i].name);

            cout << "Enter New Marks: ";
            cin >> students[i].marks;

            cout << "\nStudent updated successfully!";
            found = true;
            break;
        }
    }

    if (!found)
        cout << "\nStudent not found!";
}

// Delete Student
void deleteStudent()
{
    int roll;
    bool found = false;

    cout << "\nEnter Roll No to delete: ";
    cin >> roll;

    for (int i = 0; i < totalStudents; i++)
    {
        if (students[i].rollNo == roll)
        {
            for (int j = i; j < totalStudents - 1; j++)
            {
                students[j] = students[j + 1];
            }

            totalStudents--;

            cout << "\nStudent deleted successfully!";
            found = true;
            break;
        }
    }

    if (!found)
        cout << "\nStudent not found!";
}

int main()
{
    int choice;

    cout << "================================\n";
    cout << "     STUDENT MANAGEMENT SYSTEM\n";
    cout << "================================\n";

    do
    {
        cout << "\n\n1. Add Student";
        cout << "\n2. Display Students";
        cout << "\n3. Search Student";
        cout << "\n4. Update Student";
        cout << "\n5. Delete Student";
        cout << "\n6. Exit";

        cout << "\n\nEnter your choice: ";
        cin >> choice;

        switch (choice)
        {
            case 1:
                addStudent();
                break;

            case 2:
                displayStudents();
                break;

            case 3:
                searchStudent();
                break;

            case 4:
                updateStudent();
                break;

            case 5:
                deleteStudent();
                break;

            case 6:
                cout << "\nThank you for using Student Management System!";
                break;

            default:
                cout << "\nInvalid choice! Please try again.";
        }

    } while (choice != 6);

    return 0;
}
