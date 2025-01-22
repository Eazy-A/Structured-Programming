#include <iostream>
#include <cstring>
using namespace std;

void prazni_mesta(char *s) {
   int j = 0;
   for (int i = 0; i<strlen(s); i++) {
      if (s[i] != ' ') {
         s[j++] = s[i];
      }
   }
   s[j] = '\0';
}

int main() {
   char s[100];
   cin.getline(s, 100);
   prazni_mesta(s);
   cout << s;
}
