#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int a, b, c, d, e, i, j, k, n=0, m, l, r=0;
    scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);
    m=d; l=e;
    for(i=0;pow(a,i)<e;i++)
    {
        for(j=0;pow(b,j)<e;j++)
        {
            for(k=0; pow(c,k)<e;k++){
                n=pow(a,i)*pow(b,j)*pow(c,k);
                if(n>=d&&n<=e){
                    if(n>=m)m=n;
                    if(n<=l)l=n;
                    r++;
                }
                
            }   
        } 
    }
    printf("%d %d %d", r, l, m);
            
        
    
	return 0;
    }