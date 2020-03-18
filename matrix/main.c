/*for input please enter the order of matrix for
NxN just enter N and then the matrix*/

//It can rotate any order of the matrix

//Adityavardhan Singh owner

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,a[5][5],b[5][5];
    int k=0,count=0,i,j;

    scanf("%d",&n);
    printf("\n Entered order of matrix is:%d",n);

    printf("\nEnter the matrix\n");
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
        printf("\n");
    }

    printf("\n ----Original Matrix is---\n");
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
    //For transpose
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {

            b[i][j]=a[j][i];
        }
        printf("\n");
    }
    //now this is for swapping
    for(int i=0;i<n;i++)
    {
        if(n==2 || n==3)
        {
        int temp=b[i][0];
        b[i][0]=b[i][n-1];
        b[i][n-1]=temp;
        }
        else//this for swapping any  NxN matrix
        {

            while(k<n-2)
            {

                while(count!=(n-2))
                {
                    j=n-(k+1);
                    while(i!=n)
                    {
                        int temp=b[i][count];
                        b[i][count]=b[i][j];
                        b[i][j]=temp;
                        i++;
                    }

                    k=k+1;
                    count=k;
                    i=0;
                }
                k=k+1;
            }
        }
    }

    printf("\n ****The rotated matrix is****\n");
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            printf("%d\t",b[i][j]);
        }
        printf("\n");
    }



    return 0;
}


