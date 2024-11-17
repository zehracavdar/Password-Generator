#include<iostream>
#include<cstdlib>
#include<ctime>
#include<string>
using namespace std;

string genPassword(int length){
    string password = "";
    string characters = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQSTUVWXYZ0123456789-?*&%!.+";
    int charSize = characters.size();
    srand(time(0));
    int randomIndex;
    for(int i=0; i<length ; i++){
        randomIndex = rand() % charSize;
        password += characters[randomIndex];
    }
    return password;
}

int main(){

    int length;
    cout << "Enter the length of the password: ";
    cin >> length;
    string password = genPassword(length);
    cout << "Password: " <<password;
    
    return 0;
}