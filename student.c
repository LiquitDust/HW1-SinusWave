//***************************************
//** SUBMIT ONLY THIS FILE
//** DO NOT CHANGE ANYTHING
//** ONLY ADD THE IMPLEMENTATION
//***************************************
#include <stdio.h>
#include <math.h>

//****************** Q1 ******************
#define WIDTH 70*3
#define HEIGHT 10*2


void generateSine(){

    double i, k, W, H;
    W = WIDTH-1;
    H = HEIGHT;
    for (i=H;i>=-H;--i) {
        
        for (k=0;k<=2*M_PI;k+=2*M_PI/W) {
            if(i==round(H*sin(k)) &&  (fabs(i-(H*sin(k)))==(fabs(i-H*(sin(k-(2*M_PI/W))))) || fabs(i-(H*sin(k)))==(fabs(i-H*(sin(k+(2*M_PI/W)))))) && fabs(i-(H*sin(k)))<(fabs(i-H*(sin(k+(2*M_PI/W)))))){
                printf("*");      }
            else{
            if (i==round(H*sin(k)) && fabs(i-(H*sin(k)))<(fabs(i-H*(sin(k-(2*M_PI/W))))) &&fabs(i-(H*sin(k)))<(fabs(i-H*(sin(k+(2*M_PI/W)))))  )  {
              
              printf("*");
            } 
            else{
                 printf(" ");
            } 
            
            }
        }
        printf("\n");
    }
    
}

// EFEKAN ERGUL 820220502 Electric & Electronics 





   
      
    
    


//****************** Q2 ******************
double line_segment_distance(int x1,int y1,int x2,int y2,int x3,int y3)    // A(x1,y1) B(x2,y2) C(x3, y3) önce A sonra B sonra C 'nin coord AB doğrusunun C noktasına olan uzaklığı
{
    
    double ust,m_line,result,a,b,c;
    m_line = (double)(y2-y1)/(x2-x1);   //y-y1 =m(x-x1)
    a = m_line;
    b = -1;
    c = (-m_line*x1+y1); 
    ust = (a*x3+b*y3+c);
   
    result = fabs(ust)/(pow(pow(a,2)+pow(b,2),0.5));
    
     return result;
   
    return 0;
}

