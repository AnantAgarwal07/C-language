#include<stdio.h>
#include<math.h>
int det(int a[10][10],int n);
void minor_construct(int a[10][10],int minor[10][10],int exclude_row, int exclude_column,int n);
int main()
{
    int i,j,n,m,o;
    printf("Enter the order of the matrix: ");
    scanf("%d %d",&n,&m);
    int a[10][10];
    printf("Enter the value of matrix A:\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            printf("A[%d][%d] = ",i+1,j+1);
            scanf(" %d",&a[i][j]);
        }
    }

    printf("Enter 1 to find the transpose and 2 to find the determinant: ");
    scanf(" %d",&o);
    
    if(o==1)//Transpose
    {
        int transpose[10][10];
        for(i=0;i<m;i++)
        {
            for(j=0;j<n;j++)
            {
                transpose[i][j]=a[j][i];
                printf("%d\t",transpose[i][j]);
            }
            printf("\n");
        }
    }
    
    else if(o==2)//Determinant
    {
        int determinant=0,minor[10][10];
        if(n==m)
        {
            determinant=det(a,n);
            printf("%d",determinant);
        }
        else
        {
            printf("The no. of rows and columns should be same to find the determinant of a matrix");
        }
    }
   
    else
    {
        printf("Invalid input");
    }

    return 0;
}
void minor_construct(int a[10][10],int minor[10][10],int exclude_row, int exclude_column,int n)
{
    int i,j;
    int minor_row=0,minor_column=0;
    for(i=0;i<n;i++)
    {   
        minor_column=0;
        if(i==exclude_row)
        {
            continue;
        }
        for(j=0;j<n;j++)
            {
                if(j==exclude_column)
                {
                    continue;
                }
                else
                {
                    minor[minor_row][minor_column]=a[i][j];
                    minor_column++;
                }
            }
        minor_row++;
    }
}
int det(int a[10][10],int n)
{
    int i,j;
    if(n==1)
    {
        return a[0][0];
    }
    else if(n==2)
    {
        return (a[0][0]*a[1][1]-a[0][1]*a[1][0]);
    }
    else
    {
        int minor[10][10],determinant=0;
        for(j=0;j<n;j++)
        {
            minor_construct(a,minor,0,j,n);
            determinant+=((j%2==0)? 1 : -1)*a[0][j]*det(minor,n-1);

        }
        return determinant;
    }
}
