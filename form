#include<iostream>
#include<string>

using namespace std;

struct UserData {
      string name;
      int age;
      int phone_number;
};

UserData user_input() {
   UserData x;

      cout << "Enter your name: ";
      cin >> x.name;

      cout << "Enter your age: ";
      cin >> x.age;

      cout << "Enter your phone number: ";
      cin >> x.phone_number;

      return x;
};

void store_data(UserData & x) {
      cout<<"data stored!"<<endl;
}

void output_stored_data(UserData & x) {
    cout << "Name: " << x.name << endl;
    cout << "Age: " << x.age << endl;
    cout << "Phone number: " << x.phone_number << endl;
}

int main() {

      UserData x = user_input();
      store_data(x);
      output_stored_data(x);

      return 0;
}
