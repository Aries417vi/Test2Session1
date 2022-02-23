#include <stdio.h>
#include <math.h>
void input(float *x1,float *y1,float *x2,float *y2)
{
  printf("enter two points:");
  scanf("%f%f%f%f",x1,y1,x2,y2);
}

void find_distance(float x1,float y1,float x2,float y2,float *distance)
{
  *distance = sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2 -y1));
}

void output(float x1,float y1,float x2,float y2,float distance)
{
 printf("the distance between %.1f,%.1f and %.1f,%.1f is %.1f",x1,y1,x2,y2,distance);
}

int main()
{
  float x1,y1,x2,y2,distance;
  input(&x1,&y1,&x2,&y2);
  find_distance(x1,y1,x2,y2,&distance);
  output (x1,y1,x2,y2,distance);
  return 0;
}