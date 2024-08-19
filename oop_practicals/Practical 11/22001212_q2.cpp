#include <iostream>
#include <string>

using namespace std;

class Person {
protected:
    string name;
    int age;
    static int idCounter;

public:
    Person() {
        idCounter++;
    }
};

int Person::idCounter = 0;

class Doctor : public Person {
private:
    int doctor_specialist;
    int doctor_id;

public:
    Doctor() {
        doctor_id = idCounter;
    }

    void getdata() {
        cout << "Enter doctor's name: ";
        cin >> name;
        cout << "Enter doctor's age: ";
        cin >> age;
        cout << "Enter doctor's specialist code: ";
        cin >> doctor_specialist;
    }

    void putdata() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Specialist Code: " << doctor_specialist << endl;
        cout << "Doctor ID: " << doctor_id << endl;
    }
};

class Patient : public Person {
private:
    string admission_date;
    int patient_id;

public:
    Patient() {
        patient_id = idCounter;
    }

    void getdata() {
        cout << "Enter patient's name: ";
        cin >> name;
        cout << "Enter patient's age: ";
        cin >> age;
        cout << "Enter admission date: ";
        cin >> admission_date;
    }

    void putdata() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Admission Date: " << admission_date << endl;
        cout << "Patient ID: " << patient_id << endl;
    }
};

int main() {
    Doctor doctor;
    Patient patient;

    cout << "Enter doctor's information:" << endl;
    doctor.getdata();
    cout << "\nEnter patient's information:" << endl;
    patient.getdata();

    cout << "\nDoctor's Information:" << endl;
    doctor.putdata();
    cout << "\nPatient's Information:" << endl;
    patient.putdata();
    return 0;
}

