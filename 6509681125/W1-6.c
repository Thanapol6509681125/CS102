#include<stdio.h>
#include<math.h>
//Thanapol Moolchalee
//6509681125

int main()
{
    const double PI = 3.1416;
    int height, width, length, area1, perimeter;
    float  radius, circumference, volume, surface, area2;
    char shape;
    printf("Enter the shape type (a.rectangle, b.circle, c.cylinder): ");
    scanf(" %c",&shape);
    switch(shape)
    {
    case 'a':
        printf("\n\nEnter the length of the rectangle: ");
        scanf("%d",&length);
        printf("\nEnter the width of the rectangle: ");
        scanf("%d",&width);
        area1=length*width;
        perimeter=(length+width)*2;
        printf("\n\nPerimeter of the rectangle = %d",perimeter);
        printf("\nArea of the rectangle = %d",area1);
        break;
    case 'b':
        printf("\n\nEnter the radius of the circle: ");
        scanf("%f",&radius);
        area2=PI*pow((radius),2);
        circumference=2*PI*radius;
        printf("\n\nArea of the circle = %.3f",area2);
        printf("\nCircumference of the circle: %.4f",circumference);
        break;
    case 'c':
        printf("\n\nEnter the height of the cylinder: ");
        scanf("%d",&height);
        printf("\n\nEnter the radius of the base of the cylinder: ");
        scanf("%f",&radius);
        area2=(2*PI*radius*height)+(2*PI*(pow(radius,2)));
        volume=PI*pow(radius,2)*height;
        printf("\n\nVolume of the cylinder = %.2f",volume);
        printf("\nSurface of the cylinder = %.2f",area2);
        break;
    }

    return 0;
}
