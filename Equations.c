/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <stdbool.h>
void main()
{
    int u;float a1,b1,c1,c2,b2,a2,x,y,x_,y_,z_,a_1,b_1,c_1,d_1,a_2,b_2,c_2,d_2,a_3,b_3,c_3,d_3,D,Dx,Dy,Dz;
    bool a=true;
    while (a)
    {
        printf("Enter the number of unknowns (2/3), Keep the constant after the \'=\':");
        scanf("%d",&u);
        if (u==2)
        {
            printf("Enter the values of a1,b1,c1:");
            scanf("%f,%f,%f",&a1,&b1,&c1);
            printf("Enter the values of a2,b2,c2:");
            scanf("%f,%f,%f",&a2,&b2,&c2);
            x=((c1*b2)-(b1*c2))/((a1*b2)-(a2*b1));
            y=((a1*c2)-(a2*c1))/((a1*b2)-(a2*b1));
            printf("x=%f,y=%f\n",x,y);
            a=false;
        }
        else if (u==3)
        {
            printf("Enter the values of a1,b1,c1,d1:");
            scanf("%f,%f,%f,%f",&a_1,&b_1,&c_1,&d_1);
            printf("Enter the values of a2,b2,c2,d2:");
            scanf("%f,%f,%f,%f",&a_2,&b_2,&c_2,&d_2);
            printf("Enter the values of a3,b3,c3,d3:");
            scanf("%f,%f,%f,%f",&a_3,&b_3,&c_3,&d_3);
            D=(a_1*((b_2*c_3)-(c_2*b_3)))-(b_1*((a_2*c_3)-(c_2*a_3)))+(c_1*((a_2*b_3)-(b_2*a_3)));
            Dx=(d_1*((b_2*c_3)-(c_2*b_3)))-(b_1*((d_2*c_3)-(c_2*d_3)))+(c_1*((d_2*b_3)-(b_2*d_3)));
            Dy=(a_1*((d_2*c_3)-(c_2*d_3)))-(d_1*((a_2*c_3)-(c_2*a_3)))+(c_1*((a_2*d_3)-(d_2*a_3)));
            Dz=(a_1*((b_2*d_3)-(d_2*b_3)))-(b_1*((a_2*d_3)-(d_2*a_3)))+(d_1*((a_2*b_3)-(b_2*a_3)));
            x_=Dx/D;
            y_=Dy/D;
            z_=Dz/D;
            printf("x=%f,y=%f,z=%f",x_,y_,z_);
            a=false;
        }
        else
        printf("Enter correct choice between 2 or 3 variables...\n");
    }
}
   

