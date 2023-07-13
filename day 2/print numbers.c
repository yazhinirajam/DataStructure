int calculateLength(int n){  
    int length = 0;  
    while(n != 0){  
        length = length + 1;  
        n = n/10;  
    }  
    return length;  
}  
int sumOfDigits(int num){  
    int sum = 0, rem = 0;  
    int len = calculateLength(num);  
      
    while(num > 0){  
        rem = num%10;  
        sum = sum + pow(rem,len);  
        num = num/10;  
        len--;  
    }  
    return sum;  
}  
      
int main()  
{  
    int result = 0;
    printf("Disarium numbers between 1 and 100 are\n");  
    for(int i = 1; i <= 100; i++){  
        result = sumOfDigits(i);  
      
        if(result == i)  
            printf("%d ", i);  
    }  
   
    return 0;  
}  
