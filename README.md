# Using The String Header In C++
```cpp
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
}
```
## How To Run
### Make Sure gcc/g++ Is Installed
### Run
```zsh
g++ -o yourexename yourc++filename.cpp
```

