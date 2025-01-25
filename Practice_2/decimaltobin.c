#include <stdio.h>

void decimalToBinary(int n) {
    int binary[32]; // Array to store binary digits
    int i = 0;

    // Handle edge case for 0
    if (n == 0) {
        printf("Binary: 0\n");
        return;
    }

    // Convert decimal to binary
    while (n > 0) {
        binary[i] = n % 2;
        n = n / 2;
        i++;
    }

    // Print the binary representation in reverse order
    printf("Binary: ");
    for (int j = i - 1; j >= 0; j--) {
        printf("%d", binary[j]);
    }
    printf("\n");
}

int main() {
    int decimal;

    printf("Enter a decimal number: ");
    scanf("%d", &decimal);

    decimalToBinary(decimal);

    return 0;
}

// #include<stdio.h>
// int main(){
//     int number = 5 , i =0;
//     int arr[32];
//     if(number==0){
//         return 0;
//     }
//     else{
//         while(number>0){
//             arr[i] = number%2;
//             number = number/2;
//             i++;
//         }
//         for(int j = i-1; i>=0; i--){
//             printf("%d ",arr[j]);
//         }
//     }
//     return 0;
// }