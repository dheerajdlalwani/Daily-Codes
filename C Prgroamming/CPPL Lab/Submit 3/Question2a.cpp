#include <iostream>

using namespace std;

int main()
{
    string name, number, branch, surname, board10, board12, email, batch, address, roll, standard, marks;
    cout << "\tThis is a student record\n";
    cout << "----------------------------------------------\n\n";
    cout << "Enter the credentials\n";

    cout << "Enter your Full Name\n";
    cin >> name;
    cin >> surname;
    cout << "Enter your Roll number\n";
    cin >> roll;
    cout << "Enter your Branch\n";
    cin >> branch;
    cout << "Enter your Batch\n";
    cin >> batch;
    cout << "Enter your Board of Passing for tenth grade\n";
    cin >> board10;
    cout << "Enter your 10th Marks\n";
    cin >> standard;

    cout << "Enter your Board of Passing for grade twelve\n";
    cin >> board12;
    cout << "Enter your 12th Marks\n";
    cin >> marks;

    cout << "Enter your Contact Number\n";
    cin >> number;
    cout << "Enter your Email id\n";
    cin >> email;
    cout << "\n";
    cout << "----------------------------------------------\n";
    cout << "\tThe Student Credentials are as follows :";
    cout << "\nName : " << name;
    cout << " " << surname;
    cout << "\nRoll Number : " << roll;
    cout << "\nBranch : " << branch;
    cout << "\nBatch : " << batch;
    cout << "\nContact Number : " << number;
    cout << "\nEmail ID : " << email;

    cout << "\nBoard of Passing for Tenth grade: " << board10;
    cout << "\nTenth grade Marks : " << standard;
    cout << "\nBoard of Passing for Grade Twelve: " << board12;
    cout << "\nTwelve grade Marks : " << marks;

    return 0;
}