#include <stdio.h>
#include <stdlib.h>
#define row 3
#define colomn 4
int main()
{
    int degree[row][colomn]={0};
    int i,j;
    int sumDegree=0;
    int sumSubject=0;
    int max;
    double avg;
    for(i=0;i<row;i++)
    {
        printf("**Student %d**  \n", i+1);
        for(j=0; j<colomn; j++)
        {
           printf("Subject %d Degrees is: ", j+1);
           scanf("%d",&degree[i][j]);
           if(max < degree[i][j])
            {
             max = degree[i][j];
            }
            sumDegree+=degree[i][j];
        }
            printf("Max Degree for Student %d is: %d \n",i+1, max);
            printf("Sum of degrees: %d\n\n", sumDegree);
            max =0;
            sumDegree=0;
    }
    for(i=0;i<colomn;i++)
    {

      for(j=0;j<row;j++)
      {
         sumSubject+=degree[j][i];
         avg = sumSubject / row;
      }
       printf("Subject %d Average is: %f\n", i+1, avg);
       avg=0;
       sumSubject=0;
    }

    return 0;
}
