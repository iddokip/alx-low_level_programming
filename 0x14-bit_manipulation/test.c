 #include <stdio.h>

int main() {
    int number = 42;
    char arr[32]; // assume 32-bit binary representation
    int i = 0;
    
    while (number > 0) {
        int remainder = number % 2;
        arr[i] = remainder + '0';
        i++;
        
    
        number /= 2;
          
    }
    
    arr[i] = '\0'; // add null terminator to mark end of string
    printf("Binary array%s:", arr);
    
  
    
    return 0;
}

