//  program to add two very large numbers

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int convert(char ch)
{
 if(ch >= 48 && ch <= 57)
 {
  int temp;
  temp = ch;
  return (temp-48);
 }
 else
 {
  clrscr();
  printf("\n\n\nYou entered a wrong number\n\n\nPress any key to exit....");
  getch();
  exit(1);
 }
}

void main()
{
 clrscr();
 char str1[111];
 char str2[111];
 int arr1[111], arr2[111], sum[151];
 int i, first3, add, end1, end2, j, k, end3, rem, carry = 0;
 printf("\nEnter first string\t");
 scanf("%s",&str1);
 printf("\nEnter Second string\t");
 scanf("%s",&str2);
 for(i=0;str1[i]!='\0';i++)
 {
  arr1[i] = convert(str1[i]);
 }
 end1 = i-1;

 for(i=0;str2[i]!='\0';i++)
 {
  arr2[i] = convert(str2[i]);
 }

 end2 = i-1;

 //print the elements of both array
 printf("\n\nFirst number is:\t");
 for(i=0;i<=end1;i++)
 {
  printf("%d",arr1[i]);
 }
printf("\n\nSecond number is:\t");
 for(i=0;i<=end2;i++)
 {
  printf("%d",arr2[i]);
 }

 // add both array

 i = end2;
 j = end1;
 end3 = k = 150;

 while(i>=0 || j>=0)
 {
   if(i<0)
    add = arr1[j] + carry;
   else if(j<0)
    add = arr2[i] + carry;
   else
    add = arr1[j] + arr2[i] + carry;

   rem = add % 10;
   sum[k] = rem;
   carry = add / 10;

   i--;j--;k--;
 }
 if(carry > 0)
 {
  sum[k] = carry;
  first3 = k;
 }
 else
 {
  first3 = k+1;
 }
 printf("\n\nAfter addition number become:\t");

 for(i=first3;i<=end3;i++)
 {
  printf("%d",sum[i]);
 }


 getch();
}