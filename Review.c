//CSC150 review

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
//Initialize all global variables
int quantity, max, min, pos1, pos2, avg, sum;
//Function to create array
int array(int num[quantity]){
    //initialize variables in function
    int i, myRand;
    srand(time(0));
    for (i = 0; i < quantity; i++){
        myRand = rand() % 1001;
        num[i] = myRand;
    }
    return 0;
}
//Function to find minimum and position of it in array
int minimum(int num[quantity], int num2[quantity]){
    //Initialize variables in function
    int i, j, a;
    //Set second array to arr
    for (i = 0; i < quantity; i++){
        num2[i] = num[i];
    }
    //Sort array in descending order
    for (i = 0; i < quantity; i++){
        for (j = 0; j < quantity; j++){
            if (num2[i] > num2[j]) {
                a = num2[i];
                num2[i] = num2[j];
                num2[j] = a;
            }
        }
    }
    min = num2[quantity - 1];
    for (i = 0; i < quantity; i++){
        if (min == num[i]){
            pos2 = i;
        }
        else {
            printf("");
        }
    }
}
//Function to find maximum and position of it in array
int maximum(int num[quantity], int num2[quantity]) {
    //Initialize variables in function
    int i;
    max = num2[0];
    for (i = 0; i < quantity; i++){
        if (max == num[i]){
            pos1 = i;
        }
        else {
            printf("");
        }
    }
}
//Function to find Sum and Average
int average(int num[quantity]) {
    int i;
    for (i = 0; i < quantity; i++){
        sum = sum + num[i];
    }
    avg = sum / quantity;
}

int print(maxi, position1, mini, position2, aver, add){
    printf("Max:%7d Pos:%7d\n", maxi, position1);
    printf("Min:%7d Pos:%7d\n", mini, position2);
    printf("Avg:%7d \n", aver);
    printf("Sum:%7d \n", add);
    printf(" Pos  :   Val\n");
    printf("---------------\n");
}
int print2(int num[quantity]){
    int i;
    for (i = 0; i < quantity; i++){
        printf("%4d  :%6d\n", i, num[i]);
    }
}
int main(){
    //Ask for quantity of array
    printf("How many numbers?");
    scanf("%3d", &quantity);
    //Initialize the 2 arrays
    int arr[quantity];
    int sortedArr[quantity];
    //Run all the functions in order
    array(arr);
    minimum(arr, sortedArr);
    maximum(arr, sortedArr);
    average(arr);
    print(max, pos1, min, pos2, avg, sum);
    print2(arr);
}
