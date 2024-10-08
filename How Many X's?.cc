#include <iostream>
using namespace std;

int main() {
    string s;
    cin>>s;
    int count=0;
        for (char c : s) {
            if(c=='X')count++;
        }
   cout<<count;

   return 0;
}
