#include <iostream>
using namespace std;

int* readNumbers() {
  int* numbers = new int[5];

  for (int i = 0; i < 5; i++) {
    cin >> numbers[i];
  }

  return numbers;
}

int* reverseArray(int* numbers1, int length) {
  int* reverseArray = new int[length];


  for (int i = length; i > 0; i--){
    reverseArray[i] = numbers1[length - i-1];
  }
  return reverseArray;
}

bool equalsArray(int *numbers1, int* numbers2, int length){
    int count = 0;
    if (length > 0){
        for (int i = 0; i < length; i++){
            if (numbers1[i] == numbers2[i]){
                count++;
            }
        }
        if (count == length){
            return true;
        } else {
            return false;
        }
    }else{
      return false;
    }

}
