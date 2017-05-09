#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>

#define N_Particles 20

struct particle {
	int x,y;
};
unsigned char stencil[192*2];

struct particle array[N_Particles];
int main()
{
        int i,j,k,l,tempx,tempy;
		int r,t;
		int e,tx,ty;
	    struct particle pat;
		time_t z;
		
		srand((unsigned) time(&z));

		for(i=0;i<N_Particles;i++){
			tx=rand()%255;
			ty=rand()%175;
			pat.x=tx;
			pat.y=ty;
			// printf("x %d y %d \n",pat.x,pat.y);
			array[i]=pat;
		}
		
    
	 // clear screen
	    
	   for(i=0;i<N_Particles;i++){
			tempx=array[i].x;
			tempy=array[i].y;
			printf("x %d y %d \n",tempx,tempy);
			//plot(tempx,tempy);
		} 
}