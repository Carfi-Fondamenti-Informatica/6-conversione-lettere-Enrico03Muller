#include <iostream>
#include "lib.h"
using namespace std;

int main() {
    char a;
    cin >> a;
   if (funzione(a) == 0){
       cout << convertitore(a);
   }else{
       cout << "errore";
   }
    return 0;
}
