#include<iostream>
#include<vector>

using namespace std;

int N,M;
int arr[8];

void printArr(const int* arr, int length) {
   for (int i=0; i<length; i++)
      cout << arr[i] + 1;
   cout << endl;
}

void func(int* arr, int n, int m) {
   if (m == M - 1) {
      for (int i=n; i<N; i++) {
         arr[m] = i;
         printArr(arr, M);
      }
   } else {
      for (int i=n; i<N-m-1; i++) {
         arr[m] = i;
         func(arr, i+1, m+1);
      }
   }
}

int main() {
   cin >> N >> M;
   func(arr, 0, 0);
}
