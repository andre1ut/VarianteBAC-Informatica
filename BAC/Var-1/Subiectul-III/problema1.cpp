#include <iostream>

using namespace std;

int main()
{
  int a, b, produs = 1;

  cin >> a >> b;

  int iA = 0, iB = 0;
  
  int divizoriA[1000];
  int divizoriB[1000];

  for(int d=2;d * d <= a;d++) {
    if(a%d == 0){
      if(d * d == a) {
        divizoriA[iA] = d;
        iA++;
      }
      else {
        divizoriA[iA] = d;
        divizoriA[iA + 1] = a/d;
        iA += 2;
      }
    }
  }

  for(int d=2;d * d <= b;d++) {
    if(b%d == 0){
      if(d * d == b) {
        divizoriB[iB] = d;
        iB++;
      }
      else {
        divizoriB[iB] = d;
        divizoriB[iB + 1] = b/d;
        iB += 2;
      }
    }
  }

  // for(int i=0;i<iA;i++) cout << divizoriA[i] << " ";
  // cout << '\n';
  // for(int i=0;i<iB;i++) cout << divizoriB[i] << " ";
  // cout << '\n';
  
  for(int i=0;i<iA;i++) {
    for(int j=0;j<iB;j++) {
      if(divizoriA[i] == divizoriB[j]) {
        produs *= divizoriA[i];
      }
    }
  }

  cout << produs;
}