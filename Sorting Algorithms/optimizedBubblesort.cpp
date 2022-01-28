#include<iostream>
using namespace std;

void optimizedbubbleSort(int a[],int n) {
  int count = 0;
  for (int i = 0; i < n; i++) {
    count++;
    int flag = false;
    for (int j = 0; j < (n - i - 1); j++) {
      if (a[j] > a[j + 1]) {
        flag = true;
        int temp = a[j];
        a[j] = a[j + 1];
        a[j + 1] = temp;
      }
    }
    if (flag == false) {
      break;
    }
  }
  cout << "No of count : " << count << endl;
}

int main() {
  int n;
  cin>>n;
  int myarray[n];
  cout << "Enter integers in any order: " << endl;
  for (int i = 0; i < n; i++) {
    cin >> myarray[i];
  }
  cout << "Before Sorting" << endl;
  for (int i = 0; i < n; i++) {
    cout << myarray[i] << " ";
  }
  cout << endl;
  optimizedbubbleSort(myarray,n); 

  cout << "After Sorting" << endl;
  for (int i = 0; i < n; i++) {
    cout << myarray[i] << " ";
  }

  return 0;
}