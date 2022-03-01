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

int *myCopy(int arr[], int length){
   int b[length];
   int i;
   for(i=0; i<length; i++){
      b[i] = arr[i];
   }
   return b;
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
              if ( num % i == 0) return false;
       return true;
 
    }
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
   int *copy;
   // Calculate length of array 
   length_of_array = sizeof(arr)/sizeof(int);
   // Max value
   highest = myMax(arr, length_of_array);
   printf("The highest number is %d\n", highest); 
   // Average value
   average = myAvg(arr, length_of_array);
   printf("The average number is %f\n", average); 
   // Original array
   printf("The original array\n");
   copy = myCopy(arr, length_of_array);
   for(int k=0; k<length_of_array; k++){
      printf("%d\n", copy[k]);
   }
   return 0;
}




