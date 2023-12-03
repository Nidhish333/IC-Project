#include <stdio.h>
#include <math.h>
#include<stdlib.h>

int main() {
    int choice;
    printf(" WELCOME TO AREA CALCULATOR\n");
    printf("\n");
    printf("For calculating the area of a shape:\n");
    printf("1. Circle\n");
    printf("2. Rectangle\n");
    printf("3. Square\n");
    printf("4. Parallelogram\n");
    printf("5. Trapzium\n");
    printf("6. Rhombus\n");
    printf("7. Cube\n");
    printf("8. Cuboid\n");
    printf("9. Sphere\n");
    printf("10. Cone\n");
    printf("11. Cylinder\n");
    printf("12. Triangle\n");
    printf("\n");
    printf("For area under the curve.\n");
    printf("Choose a function:\n");
    printf("\n");
    printf("13. n degree polynomial\n");
    printf("14. sin(x)\n");
    printf("15. cos(x)\n");
    printf("16. a^x\n");
    printf("17. log_(a)(x)\n");
    printf("18. sinh(x)\n");
    printf("19. cosh(x)\n");
    printf("20. x^(-n)\n");
    printf("21. x^(1/n),n != 0\n");
    printf("Choose an option (1-21):");
    scanf("%d", &choice);
    double a,b;
    double area = 0;
    if(choice>12 && choice<22){
    printf("Enter lower limit of integration: ");
            scanf("%lf",&a);
    printf("Enter upper limit of integration: "); 
     scanf("%lf",&b);
     if(a>b){
        printf("\nPlease enter the limits in proper order");
        return 0;
     }
    }
    switch(choice) {
         case 1: { 
            printf("Chosen shape is Circle\n");   
            float radius;
            printf("Enter Radius: ");
            scanf("%f", &radius);
            if(radius<0) {
                printf("invalid radius\n");
                return 1;
            }
            double area = 3.14*radius*radius;
            printf("Area of the Circle is: %.2lf", area);
        }
            break;

        case 2: {
            printf("Chosen shape is Rectangle\n");
            float length, breadth;
            printf("Enter length: ");
            scanf("%f", &length);
            printf("Enter breadth: ");
            scanf("%f", &breadth);
            if(length<0 || breadth<0) {
                printf("invalid input\n");
               return 1;
            }
            double area = length*breadth;
             printf("Area of the Rectangle is: %.2lf", area);
        } 
            break;

        case 3: {
            printf("Chosen shape is Square\n");
            float side;
            printf("Enter side: ");
            scanf("%f", &side);
            if(side<0) {
                printf("invalid side\n");
               return 1;
            }
            double area = side*side;
             printf("Area of the Square is: %.2lf", area);
        } 
            break;

        case 4: {
            printf("Chosen shape is Parallelogram\n");
            float base, height;
            printf("Enter base of parallelogram: ");
            scanf("%f", &base);
            printf("Enter height of parallelogram from base: ");
            scanf("%f", &height);
            if(base<0 || height<0) {
                printf("invalid input\n");
               return 1;
            }
            double area = base*height;
             printf("Area of the Parallelogram is %.2lf", area);
        } 
            break;

        case 5: {
             printf("Chosen shape is Trapzium\n");
            float a, b, h;
            printf("Enter length of 1st parallel side: ");
            scanf("%f", &a);
            printf("Enter length of 2nd parallel side: ");
            scanf("%f", &b);
            printf("Enter perpendicular distance between two parallel sides: ");
            scanf("%f", &h);
            if(a<0 || b<0 || h<0) {
                printf("invalid input\n");
               return 1;
            }
            double area = .5*(a+b)*h;
             printf("Area of the Trapzium is: %.2lf", area);
        }     
            break;

        case 6: {
             printf("Chosen shape is Rhombus\n");
             printf("find area with help of\n");
             printf("1. diagonals\n");
             printf("2. base and height\n");

             int choice;
             printf("Enter choice(1 or 2): ");
             scanf("%d", &choice);

             switch(choice) {
                case 1: {
            float d1, d2;
            printf("Enter length of 1st diagonal: ");
            scanf("%f", &d1);
             printf("Enter length of 2nd diagonal: ");
            scanf("%f", &d2);
            if(d1<0 || d2<0) {
                printf("invalid input\n");
               return 1;
            }
            double area = .5*d1*d2;
             printf("Area of the Rhombus is: %.2lf", area);
               }
               break;

               case 2: {
                float base, height;
            printf("Enter base: ");
            scanf("%f", &base);
             printf("Enter height of rhombus from base: ");
            scanf("%f", &height);
            if(base<0 || height<0) {
                printf("invalid input\n");
               return 1;
            }
            double area = base*height;
             printf("Area of the Rhombus is: %.2lf", area);
               }
               break;

               default:
               printf("invalid choice\n");
               break;
            }
        }
        break;

        case 7: {
            printf("Chosen shape is Cube\n");
            float side;
            printf("Enter side: ");
            scanf("%f", &side);
            if(side<0) {
                printf("invalid side\n");
               return 1;
            }
            double area = 6*side*side;
             printf("Total Surface Area of the Cube is: %.2lf", area); 
        }
            break;

        case 8: {
            printf("Chosen shape is Cuboid\n");
            float l, w, h;
            printf("Enter length: ");
            scanf("%f", &l);
            printf("Enter width: ");
            scanf("%f", &w);
            printf("Enter height: ");
            scanf("%f", &h);
            if(l<0 || w<0 || h<0) {
                printf("invalid input\n");
               return 1;
            }
            double area = 2*(l*w + w*h + h*l);
             printf("Total Surface Area of the Cuboid is: %.2lf", area); 
        }
            break;

        case 9: { 
            printf("Chosen shape is Sphere\n");   
            float radius;
            printf("Enter Radius: ");
            scanf("%f", &radius);
            if(radius<0) {
                printf("invalid radius\n");
                return 1;
            }
            double area = 4*3.14*radius*radius;
            printf("Total Surface Area of the Sphere is: %.2lf", area);
         }
            break;

        case 10: {
            printf("Chosen shape is Cone\n");   
            float r, h;
            printf("Enter Radius of base: ");
            scanf("%f", &r);
            printf("Enter height of cone from base: ");
            scanf("%f", &h);
            if(r<0 || h<0) {
                printf("invalid input\n");
                return 1;
            }
            double area = 3.14*r*(r+sqrt((h*h + r*r)));
            printf("Total Surface Area of the cone is: %.2lf", area);
        }
            break;

        case 11: {
             printf("Chosen shape is Cylinder\n");   
            float r, h;
            printf("Enter Radius of base: ");
            scanf("%f", &r);
            printf("Enter height of cylinder from base: ");
            scanf("%f", &h);
            if(r<0 || h<0) {
                printf("invalid input\n");
                return 1;
            }
            double area = 2*3.14*r*(r+h);
            printf("Total Surface Area of the cylinder is: %.2lf", area);
        }
            break;

        case 12:{
            printf("chosen shape is Triangle\n");
            printf("choose one of triangle from below\n");
            printf("1. Equilateral triangle\n");
            printf("2. Right angled triangle\n");
            printf("3. Isosceles triangle\n");
            printf("4. Scalane triangle\n");

            int choice;
            printf("Enter your choice(1-4): ");
            scanf("%d", &choice);

            switch(choice) {
                case 1: {
                    printf("Equilateral triangle\n");
                    float side;
                    printf("Enter side: ");
                    scanf("%f", &side);
                    if(side<0) {
                        printf("invalid input\n");
                        return 1;
                    }
                    double area = (1.73*side*side)/4;
                    printf("Area of equilateral triangle is: %.2lf", area);
                }
                break;

                case 2: {
                    printf("Right angled triangle\n");
                    float base, height;
                    printf("Enter base of triangle: ");
                    scanf("%f", &base);
                    printf("Enter height of triangle: ");
                    scanf("%f", &height);
                    if(base<0 || height<0) {
                        printf("invalid input\n");
                        return 1;
                    }
                    double area = .5*base*height;
                    printf("Area of right angled triangle is: %.2lf", area);
                }
                break;

                case 3: {
                    printf("Isosceles triangle\n");
                    float a, b;
                    printf("Enter base of triangle: ");
                    scanf("%f", &a);
                    printf("Enter length of equal side of triangle: ");
                    scanf("%f", &b);
                    if(a<0 || b<0) {
                        printf("invalid input\n");
                        return 1;
                    }
                    if(a+b<b || b+b<a){
                        printf("Triangle will not form\n");
                        return 1;
                    }
                    double area = .5*a*sqrt((b*b)-(a*a/4));
                    printf("Area of isosceles triangle is: %.2lf", area);
                }
                break;

                case 4: {
                    printf("Scalane triangle\n");
                    float a, b, c;
                    printf("Enter 1st side: ");
                    scanf("%f", &a);
                    printf("Enter 2nd side: ");
                    scanf("%f", &b);
                    printf("Enter 3rd side: ");
                    scanf("%f", &c);
                    if(a<0 || b<0 || c<0) {
                        printf("invalid input\n");
                        return 1;
                    }
                    if(a+b<c || b+c<a || c+a<b){
                        printf("Triangle will not form\n");
                        return 1;
                    }
                    float s = (a+b+c)/2;
                    double area = sqrt(s*(s-a)*(s-b)*(s-c)); 
                    printf("Area of scalane triangle is: %.2lf", area);
                }
                break;

                default:
                printf("Invalid choice");
                break;
            }
        }
            break;
        case 13: {
         int n;
    printf("Enter the degree of polynomial: ");
    scanf("%d",&n);
    double *arr = (double *)calloc(n+1,sizeof(double));
    for(int i=n;i>=0;i--){
        if(i == 0){
            printf("Enter the constant term: \n");
             scanf("%lf",&arr[i]);
    }
    else {
        printf("Enter the coefficient of x^(%d): ",i);
        scanf("%lf",&arr[i]);
        }
    }
   double sumb=0,suma=0;
    for(int i=n;i>=0;i--){
        sumb+=(arr[i]*pow(b,i+1)/(i+1));
        suma+=(arr[i]*pow(a,i+1)/(i+1));
    }
    area = sumb - suma;
    printf("Signed area under the curve: %lf\n", area);
    free(arr);
            break;
        }
        case 14:
            area = cos(a) - cos(b);
            printf("Signed area under the curve: %lf\n", area);
            break;
        case 15:
            area = sin(b) - sin(a);
            printf("Signed area under the curve: %lf\n", area);
            break;
        case 16: {
            double base;
            printf("Enter the base (a) for a^x: ");
            scanf("%lf", &base);
            if(base < 0 || base == 1 ){
                printf("Invalid base");
             }
             else{
            area = (pow(base,b) - pow(base,a))/log(base);
            printf("Signed area under the curve: %lf\n", area);
             }
            break;
        }
        case 17: {
            double base;
            printf("Enter the base (a) of log_(a)(x)\n");
             scanf("%lf",&base);
             if(base > 0 && base != 1 ){
             area = ((b*log(b)-b) - (a*log(a)-a))/log(base);
             printf("Signed area under the curve: %lf\n", area);
             }
             else
             printf("Invalid base");
             break;
        }
        case 18:
            area = cosh(b) - cosh(a);
            printf("Signed area under the curve: %lf\n", area);
            break;
        case 19:
            area = sinh(b) - sinh(a);
            printf("Signed area under the curve: %lf\n", area);
            break;
        case 20: {
        double n;
         printf("Enter the value of n for x^(-n): ");
         scanf("%lf", &n);
         if(n<=0){
                printf("Calculation error");
                break;
            }
         if(n == 0){
            printf("Invalid n");
         }
            else if(n == 1){
                area = log(b) - log(a);
                printf("Signed area under the curve: %lf\n", area);
            }
            else{
            area = n*(pow(a,-(n+1)) - pow(b,-(n+1)));
            printf("Signed area under the curve: %lf\n", area);
            }
            break;
        }
        case 21: {
           double n;
            printf("Enter the value of n for x^(1/n): ");
            scanf("%lf", &n);
            area = (pow(b,((1/n)-1)) - pow(a,((1/n)-1)))/n;
            printf("Signed area under the curve: %lf\n", area);
            break;
        }
         default:
            printf("Invalid choice");
            break;
    }
    
    return 0;
}


