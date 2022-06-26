#include<iostream>

using namespace std;

int getMax(int num[], int n) {
  int max = INT_FAST8_MIN; //Minimum possible number in cpp

  for (int i = 0; i < n; i++) {
    if (num[i] > max) {
      max = num[i];
    }
  }
  return max;
}

int getMin(int num[], int n) {
  int min = INT_FAST8_MAX; //maximum possible number in cpp
  for (int i = 0; i < n; i++) {
    if (num[i] < min) {
      min = num[i];
    }

  }
  return min;
}

int main() {
  int size;
  cin >> size;

  int num[100];

  for (int i = 0; i < size; i++) {
    cin >> num[i];
  }

  cout << "The maximum element is " << getMax(num, size) << endl;
  cout << "The minimum element is " << getMin(num, size) << endl;

}
