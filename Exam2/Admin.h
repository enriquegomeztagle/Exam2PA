#ifndef EXAMEN2_ADMIN_H
#define EXAMEN2_ADMIN_H

class Admin {
public:
    string name;
    string lastName1;
    string lastName2;
    int age;
    char gender;

    void add_admin() {
        int id, age;
        string name, lastName1, lastName2;
        cout << " -Register Admin- " << endl;
        id = ID_GEN();
        cout << "ID: " << id << endl;
        cout << "Name: ";
        cin >> name;
        cin.ignore();
        cout << "Middle Name: ";
        cin >> lastName1;
        cin.ignore();
        cout << "Last Name: ";
        cin >> lastName2;
        cin.ignore();
        cout << "Age: ";
        cin >> age;
        cin.ignore();
        cout << "Gender (M-F): ";
        cin >> gender;
        cin.ignore();

        system("clear");
    }


    void store(){

    }

    void enable(){

    }

    void disable(){

    }


private:
    int id;
};

#endif //EXAMEN2_ADMIN_H
