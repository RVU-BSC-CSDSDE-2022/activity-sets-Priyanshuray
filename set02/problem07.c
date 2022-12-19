#include<stdio.h>
struct triangle
{
float base;
float height;
float area;
};
typedef struct triangle Triangle;

Triangle input_triangle();
void find_area(Triangle *t);
void output(Triangle t);
float main()
{
  Triangle t;
  t=input_triangle();
  find_area(&t);
  output(t);
  return 0;
}


Triangle input_triangle()
{
  Triangle t;
  printf("enter the base and height\n");
  scanf("%f %f",&t.base,&t.height);
  return t;
}
void find_area(Triangle *t)
{
 float area;
  t->area=(0.5)*(t->base)*(t->height);
}
void output(Triangle t)
{
  printf("the area of triangle is %f",t.area);
}