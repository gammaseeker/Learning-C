#include <iostream>
#include <string>

using namespace std;
int main(){
    char happy[6] = {'H', 'a', 'p', 'p', 'y', '\0'};
    string birthday = " Birthday";
    cout << happy + birthday << endl;
    cout << "Size of birthday: " << birthday.size() << endl;
    cout << "Empty string birthday? " << birthday.empty() << endl;
    string dog = "dog";
    string cat = "cat";

    cout << dog.compare(cat) << endl;
    cout << dog.compare(dog) << endl;
    cout << cat.compare(dog) << endl;
    return 0;
}
