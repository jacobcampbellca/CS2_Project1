#include <iostream>

using namespace std;

void Header() {
    cout << endl;
    cout << " --------------------------------- " << endl;
    cout << "|     START OF PROGRAM OUTPUT     |" << endl;
    cout << " --------------------------------- " << endl;
    return;
}

void Footer() {
    cout << " --------------------------------- " << endl;
    cout << "|      END OF PROGRAM OUTPUT      |" << endl;
    cout << " --------------------------------- " << endl;
    cout << endl;
    return;
}

int main() {
    
    Header();
    
    char name[100];
    int age;
    
    cout << "Please enter your name: \n";
    cin.getline(name, 100);
    cout << endl;
  
    cout << "Please enter your age (in years): \n";
    cin >> age;
    cout << endl;
    
    cout << "Generating output ... \n";
    cout << endl;
    
    if(age < 0) {
        cout << name << " Does Not Exist \n";
    }
    else if(age == 0) {
        cout << "Hello infant " << name << "\n";
    }
    else {
        while(age > 0) {
            cout << "Hello " << name << "\n";
            age--;
        }
    }
    
    cout << "Output complete!" << endl;
    cout << endl;
    
    Footer();
    
    return 0;
}

 
