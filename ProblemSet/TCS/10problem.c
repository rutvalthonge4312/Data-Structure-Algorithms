/*
We want to estimate the cost of painting a property. Interior wall painting cost is Rs.18 per sq.ft. and exterior wall painting cost is Rs.12 per sq.ft.

Take input as
1. Number of Interior walls
2. Number of Exterior walls
3. Surface Area of each Interior
4. Wall in units of square feet
Surface Area of each Exterior Wall in units of square feet

If a user enters zero  as the number of walls then skip Surface area values as User may don’t  want to paint that wall.

Calculate and display the total cost of painting the property
Example 1:
6
3
12.3
15.2
12.3
15.2
12.3
15.2
10.10
10.10
10.00
Total estimated Cost : 1847.4 INR
Note: Follow in input and output format as given in above example
*/

#include<stdio.h>

int main(){
    int int_walls,ext_wall,i,temp;
    float sur_int,sur_ext;
    int interirr_cost=0 , exteriror_cost=0;

    printf("Enter Number of Interiror walls: ");
    scanf("%d",&int_walls);
    printf("Enter Number of Exteriro walls: ");
    scanf("%d",&ext_wall);
    if(int_walls!=0){
    for(i=0;i<int_walls;i++){
        printf("Enter Surface Area of Interriror wall %d ",i+1);
        scanf("%d",&temp);
        interirr_cost=(interirr_cost+temp)*18;
       
    }
    }
     if(ext_wall!=0){
    for(i=0;i<int_walls;i++){
        printf("Enter Surface Area of Exteriror wall %d ",i+1);
        scanf("%d",&temp);
        exteriror_cost=(exteriror_cost+temp)*12;
        
    }
     }
    printf("Total Cost is %d .",(interirr_cost+exteriror_cost));
    return 0;
}