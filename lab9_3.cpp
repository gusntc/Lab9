/*
"Enter your age: "
"Enter your height: "
"Enter your property: "
"Your status = "
"UNFRIEND"
"FRIEND"
"BEST FRIEND"
"ONE-NIGHT-STAND"
"MARRIED"
*/
#include<iostream>
#include<iomanip>
#include<string>
using namespace std;

int age,hight,prop;
int main(){
    cout << "Enter your age: ";
    cin >> age;
    if(age <= 20){
        cout << "Enter your height: ";
        cin >> hight;
        if(hight < 160){
            cout << "Your status = " << "UNFRIEND" ;
        }else if(hight < 175){
            cout << "Your status = " << "FRIEND" ;
        }else{
            cout << "Enter your property: ";
            cin >> prop;
            if(prop > 69e6){
                cout << "Your status = " << "MARRIED" ;
            }else{
                cout << "Your status = " << "ONE-NIGHT-STAND" ;
            }
        }
    }else if(age < 30){
        cout << "Enter your property: ";
        cin >> prop;
        if(prop > 10e6){
            cout << "Your status = " << "BEST FRIEND";
        }else{
            cout << "Your status = " << "UNFRIEND";
        }
    }else{
        cout << "Your status = " << "UNFRIEND";
    }
    
}