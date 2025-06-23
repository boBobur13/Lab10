#include <iostream>
#include <string>
using namespace std;
int count(const string& s, char a) {
  int cnt = 0;
   for(int i = 0; i < s.length(); i++) {
   if(s[i] == a) {
     cnt++;
        }
    }
   return cnt;
}
int main() {
    string s= "Hello world";
    cout << count(s, ch) << endl;
    return 0;
}
