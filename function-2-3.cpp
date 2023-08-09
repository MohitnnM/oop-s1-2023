#include <iostream>
using namespace std;

int sum_integers(int integers[], int length){
    int sum = 0;
    if (length > 0){
    for (int i = 0; i < length; i++){
        sum += integers[i];
    }
    } else {
        return(0);
    }

    return(sum);
}

bool is_palindrome(int integers[], int length){

    int palindrome_true_false = 1;
    int count = 0;

    for (int i = 0; i < length/2; i++){
        if (integers[i] != integers[length-i-1]){
            return(false);

        }
    }
    if (palindrome_true_false == 1){
        return(true);
    } else{
        return(-2);
    }
}

int palindrome_sum(int integers[], int length){
    int palindrome_t_f = is_palindrome(integers, length);
    int final_sum = 0;
    if (length <= 0){
        return 0;
    }
    if (palindrome_t_f == 1){
        final_sum = sum_integers(integers, length);
    }

    return(final_sum);

}