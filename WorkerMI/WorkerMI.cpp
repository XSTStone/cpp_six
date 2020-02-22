//
//  WorkerMI.cpp
//  WorkerMI
//
//  Created by stone on 2020/2/22.
//  Copyright © 2020 Stone. All rights reserved.
//

#include "WorkerMI.hpp"
#include <iostream>
using std::cin;
using std::cout;
using std::endl;

Worker::~Worker() {}

void Worker::Data() const {
    cout << "Name: " << fullName << endl;
    cout << "Employee ID: " << id << endl;
}

void Worker::Get() {
    getline(cin, fullName);
    cout << "Enter worker's ID: ";
    cin >> id;
    while (cin.get() != '\n')
        continue;
}

void Waiter::Data() const {
    cout << "Panache rating: " << panache << endl;
}

void Waiter::Get() {
    cout << "Enter waiter's panache rating: ";
    cin >> panache;
    while (cin.get() != '\n') {
        continue;
    }
}

void Waiter::Set() {
    cout << "Enter waiter's name: ";
    Worker::Get();
    Get();
}

void Waiter::Show() const {
    cout << "Category: waiter\n";
    Worker::Data();
    Data();
}

char* Singer::pv[Singer::Vtypes] = {"other", "alto", "contralto", "soprano", "bass", "baritone", "tenor"};

void Singer::Data() const {
    cout << "Vocal range: " << pv[voice] << endl;
}

void Singer::Get() {
    cout << "Enter singer's vocal range:\n";
    int i;
    for (i = 0;i < Vtypes;++i) {
        cout << i << ": " << pv[i] << "  ";
        if(i % 4 == 3)
            cout << endl;
    }
    if(i % 4 != 0)
        cout << endl;
    cin >> voice;
    while (cin.get() != '\n')
        continue;
}

void Singer::Set() {
    cout << "Enter singer's name:\n";
    Worker::Get();
    Get();
}

void Singer::Show() const {
    cout << "Category: singer\n";
    Worker::Data();
    Data();
}

void SingingWaiter::Data() const {
    Singer::Data();
    Worker::Data();
}

void SingingWaiter::Get() {
    Waiter::Get();
    Singer::Get();
}

void SingingWaiter::Set() {
    cout << "Enter singing waiter's name:\n";
    Worker::Get();
    Get();
}

void SingingWaiter::Show() const {
    cout << "Category: singing waiter\n";
    Worker::Data();
    Data();
}