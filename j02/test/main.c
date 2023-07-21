#include<stdio.h>

int main()
{
    int num, ans = 0;
    
    //get input from user
    scanf("%d",&num);
    
    //do till num > 0
    while(num > 0)
    {
        //split the last digit 
        int mod = num % 10;
        
        //multiply ans with 10 and add the splitted digit
        ans = ans * 10 + mod;
        
        //divide num by 10
        num = num / 10;
    }
    
    //print the reversed number
    printf("Reversed Number is %d\n",ans);
    
    return 0;
}