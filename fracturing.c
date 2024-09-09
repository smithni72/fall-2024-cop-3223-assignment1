//********************************************************
// fracturing.c
// Author: Nicholas Smith - ID: 4830135
// Date: 9/8/24
// Class: COP 3223, Professor Parra
// Purpose: This program calculates a number of dimensional operations:
// width, height, distance, area, and perimeter
// Input: Measurements
// Output: Wanted dimensional calculations
// //********************************************************

#include <stdio.h>
#include <math.h>

#define PI 3.14159

// Function prototypes
double calculateDistance(int x1, int y1, int x2, int y2);
double calculatePerimeter(double distance);
double calculateArea(double distance);
double calculateWidth(double distance);
double calculateHeight(double distance);

int main(int argc, char **argv){
    int x1, y1, x2, y2;

    // Input for Point #1
    printf("Enter x1: ");
    scanf("%d", &x1);
    printf("Enter x2: ");
    scanf("%d", &x2);

    // Input for Point #2
    printf("Enter y1: ");
    scanf("%d", &y1);
    printf("Enter y2: ");
    scanf("%d", &y2);

    // Calculate distance
    double distance = calculateDistance(x1, y1, x2, y2);

    // Call the other functions with the calculated distance
    printf("\nPoint #1 entered: x1 = %d; y1 = %d", x1, y1);
    printf("\nPoint #1 entered: x2 = %d; y2 = %d", x2, y2);
    double perimeterRating = calculatePerimeter(distance);
    printf("\nPoint #1 entered: x1 = %d; y1 = %d", x1, y1);
    printf("\nPoint #1 entered: x2 = %d; y2 = %d", x2, y2);
    double areaRating = calculateArea(distance);
    printf("\nPoint #1 entered: x1 = %d; y1 = %d", x1, y1);
    printf("\nPoint #1 entered: x2 = %d; y2 = %d", x2, y2);
    double widthRating = calculateWidth(distance);
    printf("\nPoint #1 entered: x1 = %d; y1 = %d", x1, y1);
    printf("\nPoint #1 entered: x2 = %d; y2 = %d", x2, y2);
    double heightRating = calculateHeight(distance);

    // Since main should have no output, return 1 as required
    return 1;
}

double calculateDistance(int x1, int y1, int x2, int y2){
    double distance = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
    printf("\nPoint #1 entered: x1 = %d; y1 = %d", x1, y1);
    printf("\nPoint #1 entered: x2 = %d; y2 = %d", x2, y2);
    printf("\nThe distance between the two points is %.3f\n", distance);
    return distance;
}

double calculatePerimeter(double distance){
    double perimeter = PI * distance;
    printf("\nThe perimeter of the city encompassed by your request is %.3f\n", perimeter);
    double ratingPerimeter = 3.0;
    return ratingPerimeter; 
}

double calculateArea(double distance){
    double area = PI * pow(distance / 2, 2);  // Assuming a circular area with radius = distance / 2
    printf("\nThe area of the city encompassed by your request is %.3f\n", area);
    double ratingArea = 2.0;
    return ratingArea;
}

double calculateWidth(double distance){
    double width = distance;
    printf("\nThe width of the city encompassed by your request is %.3f\n", width);
    double ratingWidth = 2.0;
    return ratingWidth;
}

double calculateHeight(double distance){
    double height = distance;  // Assuming height equals distance for simplicity
    printf("\nThe height of the city encompassed by your request is %.3f\n", height);
    double ratingHeight = 1.5;
    return ratingHeight;
}
