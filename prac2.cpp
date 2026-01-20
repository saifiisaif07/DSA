#include <iostream>
using namespace std;

int main() {
    int x = 5;
    int *p = &x;
      (*p)++;
    cout << (*p)++ << " ";
    cout << x << endl;
}

