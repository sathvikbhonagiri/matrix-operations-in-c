#include<stdio.h>
void main()
{
    int n, m, c,k, d, first[10][10], second[10][10], sum[10][10], diff[10][10],mul[10][10];
    printf("\nEnter the number of rows and columns of the matrix \n\n");
    scanf("%d%d", &m, &n);

    printf("\nEnter the %d elements of the first matrix \n\n", m*n);
    for(c = 0; c < m; c++)   
        for(d = 0; d < n; d++)   
            scanf("%d", &first[c][d]);

    printf("\nEnter the %d elements of the second matrix \n\n", m*n);
    for(c = 0; c < m; c++)  
        for(d = 0; d < n; d++)   
            scanf("%d", &second[c][d]);
    /*   finding the SUM of the two matrices    */
    for(c = 0; c < m; c++)
        for(d = 0; d < n; d++)
            sum[c][d] = first[c][d] + second[c][d];
    printf("\n\nThe sum of the two entered matrices is: \n\n");
    for(c = 0; c < m; c++)
    {
        for(d = 0; d < n; d++)
        {
            printf("%d\t", sum[c][d]);
        }
        printf("\n");
    }

    /* finding the DIFFERENCE of the two matrices */
    for(c = 0; c < m; c++)
        for(d = 0; d < n; d++)
            diff[c][d] = first[c][d] - second[c][d];
    printf("\n\nThe difference(subtraction) of the two entered matrices is: \n\n");
    for(c = 0; c < m; c++)
    {
        for(d = 0; d < n; d++)
        {
            printf("%d\t", diff[c][d]);
        }
        printf("\n");
    }
    
printf("multiply of the matrix=\n");    
for(c=0;c<m;c++)    
{    
for(d=0;d<n;d++)    
{    
mul[c][d]=0;    
for(k=0;k<n;k++)    
{    
mul[c][d]+=first[c][k]*second[k][d];    
}    
      }    
}
   
for(c=0;c<m;c++)    
{    
for(d=0;d<n;d++)    
{    
printf("%d\t",mul[c][d]);    
}    
printf("\n"); }
}