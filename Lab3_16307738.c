#include <stdio.h>
#include <stdbool.h>

int myMax(int arr[], int length){
   int max = arr[0];
   int i;
   for(i=1; i<length; i++){
      if(arr[i] > max){
         max = arr[i];
      }
   }
   return max;
}

float myAvg(int arr[], int length){
   float sum = 0.0;
   int i;
   for(i=0; i<length; i++){
      sum = sum + arr[i];
   }
   return (sum/length);
}

void myCopy(int arr[], int length, int* b){
   int i;
   for(i=0; i<length; i++){
      b[i] = arr[i];
   }
}

void printNumbers(int *copy, int length){
   int i;
    for(int i=0; i < length; i++){
        printf("%d\n", copy[i]); ;  
       }
}

void myReverse(int arr[], int length) {
      int temp;
      for (int i = 0; i < length/2; i++) {
          int temp = arr[i];
          arr[i] = arr[length- i-1];
          arr[length - i - 1] = temp;  

      }
   }

bool isPrime(long num) {
       if ( num < 2){
          return false;
       } 
       for (long i = 2; i * i <= num; i++){
              if ( num % i == 0){
                  return false;
              } 
      }
      return true;
}

void printPrimeNumbers(int arr[], int length){
      for (int i=0; i < length; i++)
         if (isPrime(arr[i])){
            printf("%d\n", arr[i]);;
    } 
}

int main(int argc, char *argv[]) {
   int arr[] = {10, 5, 15, 12};
   int length_of_array;
   int highest;
   float average;
   int copy[length_of_array];
   // Calculate length of array 
   length_of_array = sizeof(arr)/sizeof(int);
   // Max value
   highest = myMax(arr, length_of_array);
   printf("The highest number is %d\n", highest); 
   // Average value
   average = myAvg(arr, length_of_array);
   printf("The average of the numbers is %.2f\n", average); 
   // Original array
   printf("The original array\n");
   myCopy(arr, length_of_array, copy);
   printNumbers(copy, length_of_array);
   // Reverse elements in array
   myReverse(arr, length_of_array);
   printf("The reverse array\n");
   printNumbers(arr, length_of_array);
   // Prime numbers function
   printf("These are the prime numbers in the array\n");
   printPrimeNumbers(arr, length_of_array);
   return 0;
}