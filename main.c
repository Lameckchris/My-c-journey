i//
//  main.c
//  C language 1
//
//  Created by CHRISPINE WAMEYO OJOW on 27/05/2024.
//
/*Shipping companies don't especially like boxes that are large but very light, since they take up valuable space in a truck or airplaine.Infact, companies often charge extra for such a box, basing the fee on its volume instead of its weight. In the United States the Usual method is to divide the volume by 166 (the allowed number of cubic inches per pound.) If this number - the box's "dimension" or "volumentric" weight-exceeds its actual weight, the shipping fee is based on dimensional weight.(The 166 divisor for international shipments and 194 divisor for domestic/local shipment)
Here is a C program that is written to compute dimensional weight of the box */
#include <stdio.h>
#define Local_divisor 194
#define International_divisor 166
//program to compute the dimension weight of a box.
float height;
float length;
float width;
float Volume;
float Weight;


int main(int argc, const char * argv[])
{
    printf("Enter the Height of the box:");
    scanf("%f",&height);
    printf("Enter the Length of the box:");
    scanf("%f", &length);
    printf("Enter the Width of the box:");
    scanf("%f",&width);
    
    Volume=length*width*height;
    
    int option;
    
    printf("Select the type of shipment for the box\n");
    printf("1:International Shipment\n");
    printf("2:Domestic/Local Shipment\n");
    scanf("%d",&option);
    
    switch (option)
    {
        case 1:
        {
            Weight=Volume/International_divisor;
            printf("Dimension Weight(In Pound):%.3f\n",Weight);
            break;
        }
            
        case 2:
        {
            Weight=Volume/Local_divisor;
            printf("Dimension Weight(In Pounds):%.3f\n",Weight);
            break;
        }
            
        default:
        {
            printf("Please enter the type of shipping!!!!!!!!");
            break;
        }
          
    }

    return 0;
}
