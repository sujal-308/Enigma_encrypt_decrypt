#include <stdio.h>
#include <conio.h>
main()
{
    int i ,Task_No;
    char User_Data[500];
    printf("Please enter the user Data:\n");
    gets(User_Data);
    printf("\nChoose any of the  following Tasks:\n");
    printf("1 for Encryption.\n");
    printf("2 for Decryption.\n");
    printf("The task number is:");
    scanf("%d", &Task_No);
    if(Task_No==1)
    {
        int Lucky_No;
        printf("\nEnter your lucky number for encryption of this data:  ");
        scanf("%d",&Lucky_No);
        for(i = 0;(i<500&&User_Data[i]!='\0');i++)
        User_Data[i]=User_Data[i]+Lucky_No;
        printf("\nEncrypted Data is: %s\n",User_Data);
    }
    if(Task_No==2)
    {
        int Lucky_No;
        printf("\nWARNING:-The lucky number used to encrypt the data is unique and no other number will give required Data\n\nEnter the lucky number for decryption of this data:  ");
        scanf("%d",&Lucky_No);
        for(i=0;(i<100&&User_Data[i]!='\0');i++)
        User_Data[i] = User_Data[i]-Lucky_No;
        printf("\nDecrypted Data is: %s\n",User_Data);
    }
}
