#include <stdio.h>

int main()
{

	int i,a,b,soma = 0;

	scanf("%d""%d",&a,&b);

	if (a < b) {

		for ( i=a+1 ; i<b ; i++ ){
			if(i % 2 != 0) {
				soma+=i;
			}
		}
	}
    else {

    	for ( i=b+1 ; i<a ; i++ ){
    		if ( i % 2 != 0 ) {
    			soma+=i;
    		}
    	}
    printf("%d\n",soma);
    }

return 0;

}
