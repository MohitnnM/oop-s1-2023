#include <iostream>
using namespace std;

int arraySum(int array[], int n) {
  int sum = 0;
  if (n > 0) {
    for (int i = 0; i < n; i++) {
      sum += array[i];
    }
  } else {
    return (0);
  }

  return (sum);
}

double arrayMean(int array[], int n) {
  int sum = 0;
  double mean = 0;
  if (n > 0) {
    for (int i = 0; i < n; i++) {
      sum += array[i];
    }
  } else {
    return (0);
  }
  mean = sum / n;

  return (mean);
}

int numCount(int array[], int n, int number) {
  int count = 0;

  if (n > 0) {
    for (int i = 0; i < n; i++) {
      if (array[i] == number) {
        count++;
      }
    }
  } else {
    return (0);
  }

  return (count);
}

int sum_2_arrays(int array1[], int array2[], int n) {
  int sum = 0;
  if (n > 0) {
    for (int i = 0; i < n; i++) {
      sum += array1[i] + array2[i];
    }
  } else {
    return (0);
  }

  return (sum);
}

int count_evens(int number) { 
    int num_evens = 0; 

    if (number > 0) {
        for (int i = 1; i <= number; i++){
            if (i % 2 == 0){
                num_evens++;
            }
        }
    } else {
        return(0);
    }    

    return(num_evens);
}

bool is_ascending(int array[], int n){
    int count = 0;
    int element = array[0];
    if (n > 0) {
        for (int i = 1; i < n; i++){
            if(element <= array[i]){
                element = array[i];
                count++;
            }
        }
    } else{
        return(0);
    }

    if(count == n-1){
        return(1);
    } else {
        return(0);
    }
}

bool is_descending(int array[], int n){
    int count = 0;
    int element = array[0];
    if (n > 0) {
        for (int i = 1; i < n; i++){
            if(element >= array[i]){
                element = array[i];
                count++;
            }
        }
    } else{
        return(0);
    }

    if(count == n-1){
        return(1);
    } else {
        return(0);
    }
}