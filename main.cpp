#include <iostream>
#include <string>
using namespace std;
int main() {
string username;
cout << "Enter Username\n";
getline(cin,username);
if (username == "admin") {
    cout << "Welcome Back Admin\n";
}
else{
    cout << "Wrong Username\n";
}
return 0;
