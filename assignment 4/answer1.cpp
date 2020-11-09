#include<iostream>
using namespace std;
class Pets {
public:
void normal() {
cout << "hello everyone" << "\n";
}
};
class Dogs : public Pets {
public:
void Woff() {
cout << "Woof! Let's go for a walk Human!!" << "\n";
}
};
int main() {
Dogs oreo;
oreo.Woff();
oreo.normal();
}
