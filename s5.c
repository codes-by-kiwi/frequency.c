/*Write a program in C to find the number of times (frequency) occurs a given number in an array.
Expected Output :
The given array is : 2 3 4 4 4 4 5 5 5 6 7 7
The number of times the number 4 occurs in the given array is: 4
*/

#include <stdio.h>
int i,count;
int arr[50];
int counter(int sizeofarray,int notobefound); //function for counting the time a number is a part of the array
int main()

{
//int count;

int sizeofarray;
//int i;
int notobefound;
scanf("%d",&sizeofarray);//scans for size of array
for (i=1;i<=sizeofarray;i++)
{
scanf("%d",&arr[i]);//scans for each element of the array 
}
scanf("%d",&notobefound);//scans for the element to be found


printf("The number of times the number %d occurs in the given array is : %d\n",notobefound,counter(sizeofarray,notobefound));



    return 0;
}

int counter(int sizeofarray,int notobefound)
{
    for(i=0;i<sizeofarray;i++)
    {
        if(arr[i]==notobefound)
        {
            count++;
        }
    }
    return count;
}