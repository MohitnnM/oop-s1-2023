#include <iostream>
using namespace std;

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