
#include <iostream>
#include <map>
#include <string>

using namespace std;

struct Person {
    string name, birthDate, telephoneNo;
};

void displayPerson(const Person& p) {
    cout << "Name: " << p.name << "\nBirth Date: " << p.birthDate << "\nTelephone No: " << p.telephoneNo << "\n\n";
}

int main() {
    map<string, Person> persons;

    while (true) {
        cout << "1. Add Person\n2. Display All\n3. Search Person\n4. Delete Person\n5. Update Person\n6. Exit\nEnter choice: ";
        int choice;
        cin >> choice;

        switch (choice) {
            case 1: {
                Person newPerson;
                cout << "Enter Name: ";
                cin >> newPerson.name;
                cout << "Enter Birth Date: ";
                cin >> newPerson.birthDate;
                cout << "Enter Telephone No: ";
                cin >> newPerson.telephoneNo;
                persons[newPerson.name] = newPerson;
                cout << "Person added successfully.\n\n";
                break;
            }

            case 2:
                if (persons.empty()) cout << "No records available.\n\n";
                else for (const auto& entry : persons) displayPerson(entry.second);
                break;

            case 3: {
                string searchName;
                cout << "Enter Name to search: ";
                cin >> searchName;
                auto it = persons.find(searchName);
                if (it != persons.end()) { cout << "Person found:\n"; displayPerson(it->second); }
                else cout << "Person not found.\n";
                break;
            }

            case 4: {
                string deleteName;
                cout << "Enter Name to delete: ";
                cin >> deleteName;
                auto it = persons.find(deleteName);
                if (it != persons.end()) { persons.erase(it); cout << "Person deleted successfully.\n\n"; }
                else cout << "Person not found.\n";
                break;
            }

            case 5: {
                string updateName;
                cout << "Enter Name to update: ";
                cin >> updateName;
                auto it = persons.find(updateName);
                if (it != persons.end()) { cout << "Enter updated details:\n"; cin >> it->second.birthDate >> it->second.telephoneNo; cout << "Person updated successfully.\n\n"; }
                else cout << "Person not found.\n";
                break;
            }

            case 6:
                cout << "Exiting program.\n";
                return 0;

            default:
                cout << "Invalid choice. Please try again.\n";
                break;
        }
    }

    return 0;
}