/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <string>
#include <vector>

using namespace std;

struct Birthday {
    string name;
    int date;
    int month;
    int year;
};

vector<Birthday> birthdayList;

void addBirthday() {
    Birthday bday;
    cout << "Enter name: "; //Loved ones family and friend name
    cin >> bday.name;
    cout << "Enter date: "; //birthday date
    cin >> bday.date;
    cout << "Enter month: "; //birthday month
    cin >> bday.month;
    cout<<"Enter year:"; //birthday year
    cin>> bday.year;
    birthdayList.push_back(bday);
}

void displayBirthdays() {       //Display birthday
    if (birthdayList.empty()) {
        cout << "The list is empty.\n";
    } else {
        cout << "Birthday List:\n";
        for (int i = 0; i < birthdayList.size(); i++) {
            cout << birthdayList[i].name << " - " << birthdayList[i].date << "/" << birthdayList[i].month << "/" << birthdayList[i].year << "\n";
        }
    }
}

void searchBirthday() {      //Search birthday by name
    string name;
    bool found = false;
    cout << "Enter name to search: ";  //Enter the name which you would like to search
    cin >> name;
    for (int i = 0; i < birthdayList.size(); i++) {
        if (birthdayList[i].name == name) {
            cout << birthdayList[i].name << " - " << birthdayList[i].date << "/" << birthdayList[i].month << "/" << birthdayList[i].year << "\n";
            found = true;
        }
    }
    if (!found) {
        cout << "Name not found in list.\n";
    }
}

int main() {
    int choice;                   //Choice for task perform 
    do {
        cout << "\n1. Add Birthday\n";
        cout << "2. Display All Birthdays\n";
        cout << "3. Search Birthday\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;
        switch (choice) {
            case 1:
                addBirthday();
                break;
            case 2:
                displayBirthdays();
                break;
            case 3:
                searchBirthday();
                break;
            case 4:
                cout << "Exiting program...\n";
                break;
            default:
                cout << "Invalid choice. Please try again.\n";
                break;
        }
    } while (choice != 4);  //exit

    return 0;
}
