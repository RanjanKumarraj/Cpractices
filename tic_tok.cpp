#include<stdio.h>
#include<graphics.h>
//
// checkWin(int a, int b, int c) {
//    return (a == b && b == c);
//}
int main(){
	int i,j,r=1;
	int terms1,terms2,terms3,terms4,terms5,terms6,terms7,terms8,terms9,terms;
	char firstPlayer[30];
	char secondPlayer[30];
	int input[10][10];
	int puzzle[10][10];
	
	printf("\n\n\n\n\n\n\n\n\t\t\t\t\t\t------------------------");
	printf("\t\t\t\t\t\t\t\t\t\t\t~WELCOME TO TIC-TOK-TOI~");
	printf("\t\t\t\t\t\t\t\t\t\t\t------------------------");
	printf("\n\n\n\t\t~Enter First Player Name~\t");
	gets(firstPlayer);
	printf("\n\n\t\t~Enter Second Player Name~\t");
	gets(secondPlayer);
	printf("\n\n\t\t~The %s Symbol Is-\tX",firstPlayer);
	printf("\n\n\t\t~The %s Symbol Is-\tO\n\n",secondPlayer);
	printf("\n\t\t 1  | 2  | 3  \t\t\t| ~If You Choice Any Number~ ");
	printf("\n\t\t----|----|----");
	printf("\n\t\t 4  | 5  | 6    \t\t| ~That's Replace The No~'");
	printf("\n\t\t----|----|----"); 
	printf("\n\t\t 7  | 8  | 9    \t\t| ~And Put Symabol.~");	
	printf("\n\t\t----|----|----"); 
	printf("\n\n");
	printf("\t\t\n\n\t\t%s`s ~ terms -",firstPlayer);
	scanf("%d",&terms1);
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			puzzle[i][j]=r;
			r++;
		}
	}
	printf("\n\n\n\n");
   	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			//printf("\t\t\t");
			
			if(puzzle[i][j]==terms1){
		    
			printf(" \tX |");
			//printf("---");		
			}
			else	
			printf(" \t%d |",puzzle[i][j]);
			//printf("---");
		}
		printf("\n\t--------------------");
		printf("\n");
	} 
	printf("\t\t\n\n\t\t%s terms -",secondPlayer);
	scanf("%d",&terms2);	

	printf("\n\n\n\n");
   	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			//printf("\t\t\t");
			
			if(puzzle[i][j]==terms1){
		    
			printf(" \tX |");
			//printf("---");		
			}
			else if(puzzle[i][j]==terms2){
				printf(" \tO |");
			}
			else	
			printf(" \t%d |",puzzle[i][j]);
			//printf("---");
		}
		printf("\n\t--------------------");
		printf("\n");
	} 

	printf("\t\t\n\n\t\t%s~`s ~ terms -",firstPlayer);
	scanf("%d",&terms3);	

	printf("\n\n\n\n");
   	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			//printf("\t\t\t");
			
			if(puzzle[i][j]==terms1){
		    
			printf(" \tX |");
			//printf("---");		
			}
			else if(puzzle[i][j]==terms2){
				printf(" \tO |");
			}
			else if(puzzle[i][j]==terms3){
				printf(" \tX |");
			}
			else	
			printf(" \t%d |",puzzle[i][j]);
			//printf("---");
		}
		printf("\n\t--------------------");
		printf("\n");
	} 

	printf("\t\t\n\n\t\t%s's ~ terms -",secondPlayer);
	scanf("%d",&terms4);	

	printf("\n\n\n\n");
   	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			//printf("\t\t\t");
			
			if(puzzle[i][j]==terms1){
		    
			printf(" \tX |");
			//printf("---");		
			}
			else if(puzzle[i][j]==terms2){
				printf(" \tO |");
			}
			else if(puzzle[i][j]==terms3){
				printf(" \tX |");
			}
			else if(puzzle[i][j]==terms4){
				printf(" \tO |");
			}			
			else	
			printf(" \t%d |",puzzle[i][j]);
			//printf("---");
		}
		printf("\n\t--------------------");
		printf("\n");
	} 
	
	printf("\t\t\n\n\t\t%s terms -",firstPlayer);
	scanf("%d",&terms5);	

	printf("\n\n\n\n");
   	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			//printf("\t\t\t");
			
			if(puzzle[i][j]==terms1){
		    
			printf(" \tX |");
			//printf("---");		
			}
			else if(puzzle[i][j]==terms2){
				printf(" \tO |");
			}
			else if(puzzle[i][j]==terms3){
				printf(" \tX |");
			}
			else if(puzzle[i][j]==terms4){
				printf(" \tO |");
			}
			else if(puzzle[i][j]==terms5){
				printf(" \tX |");
			}						
			else	
			printf(" \t%d |",puzzle[i][j]);
			//printf("---");
		}
		printf("\n\t--------------------");
		printf("\n");
	}
	if(terms1==1 && terms3==4 && terms5==7 || terms1==1 && terms3==2 && terms5==3 || terms1==4 && terms3==5 && terms5==6 || terms1==7 && terms3==8 && terms5==9
	    || terms1==2 && terms3==5 && terms5==8 || terms1==3 && terms3==6 && terms5==9 || terms1==1 && terms3==5 && terms5==9 || terms1==3 && terms3==5 && terms5==7  ){
		printf("\n\t\t %s Win THE MATCH",firstPlayer);
	}
	else if(terms1==7 && terms3==4 && terms5==1 || terms1==3 && terms3==2 && terms5==1 || terms1==6 && terms3==5 && terms5==4 || terms1==9 && terms3==8 && terms5==7
	    || terms1==8 && terms3==5 && terms5==2 || terms1==9 && terms3==6 && terms5==3 || terms1==9 && terms3==5 && terms5==1 || terms1==7 && terms3==5 && terms5==3  ){
		printf("\n\t\t %s Win THE MATCH",firstPlayer);
	} 
	else if(terms1==4 && terms3==7 && terms5==1 || terms1==2 && terms3==3 && terms5==1 || terms1==5 && terms3==6 && terms5==4 || terms1==8 && terms3==9 && terms5==7
	    || terms1==5 && terms3==8 && terms5==2 || terms1==6 && terms3==9 && terms5==3 || terms1==5 && terms3==9 && terms5==1 || terms1==5 && terms3==7 && terms5==3  ){
		printf("\n\t\t %s Win THE MATCH",firstPlayer);
	}
	else if(terms1==4 && terms3==1 && terms5==7 || terms1==2 && terms3==1 && terms5==3 || terms1==5 && terms3==4 && terms5==6 || terms1==8 && terms3==7 && terms5==9
	    || terms1==5 && terms3==2 && terms5==8 || terms1==6 && terms3==3 && terms5==9 || terms1==5 && terms3==1 && terms5==9 || terms1==5 && terms3==3 && terms5==7  ){
		printf("\n\t\t %s Win THE MATCH",firstPlayer);
	}	
	
	
	 		 
else{
	
	
	printf("\t\t\n\n\t\t%s terms -",secondPlayer);
	scanf("%d",&terms6);	

	printf("\n\n\n\n");
   	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			//printf("\t\t\t");
			
			if(puzzle[i][j]==terms1){
		    
			printf(" \tX |");
			//printf("---");		
			}
			else if(puzzle[i][j]==terms2){
				printf(" \tO |");
			}
			else if(puzzle[i][j]==terms3){
				printf(" \tX |");
			}
			else if(puzzle[i][j]==terms4){
				printf(" \tO |");
			}
			else if(puzzle[i][j]==terms5){
				printf(" \tX |");
			}
			else if(puzzle[i][j]==terms6){
				printf(" \tO |");
			}									
			else	
			printf(" \t%d |",puzzle[i][j]);
			//printf("---");
		}
		printf("\n\t--------------------");
		printf("\n");
}


							  							  							  							  							  						  						  							  								  							  						  							  

	printf("\t\t\n\n\t\t%s terms -",firstPlayer);
	scanf("%d",&terms7);	

	printf("\n\n\n\n");
   	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			//printf("\t\t\t");
			
			if(puzzle[i][j]==terms1){
		    
			printf(" \tX |");
			//printf("---");		
			}
			else if(puzzle[i][j]==terms2){
				printf(" \tO |");
			}
			else if(puzzle[i][j]==terms3){
				printf(" \tX |");
			}
			else if(puzzle[i][j]==terms4){
				printf(" \tO |");
			}
			else if(puzzle[i][j]==terms5){
				printf(" \tX |");
			}
			else if(puzzle[i][j]==terms6){
				printf(" \tO |");
			}
			else if(puzzle[i][j]==terms7){
				printf(" \tX |");
			}												
			else	
			printf(" \t%d |",puzzle[i][j]);
			//printf("---");
		}
		printf("\n\t--------------------");
		printf("\n");
	}																											
	
  if(terms1==1 && terms3==4 && terms7==7 ||
	 terms1==1 && terms3==2 && terms7==3 ||
	 terms1==4 && terms3==5 && terms7==6 ||
	 terms1==7 && terms3==8 && terms7==9 || 
	 terms1==2 && terms3==5 && terms7==8 ||
	 terms1==3 && terms3==6 && terms7==9 ||
	 terms1==1 && terms3==5 && terms7==9 ||
	 terms1==3 && terms3==5 && terms7==7  ){
		printf("\n\t\t %s Win THE MATCH",firstPlayer);
	
	}
else if(terms1==7 && terms3==4 && terms7==1 ||
        terms1==3 && terms3==2 && terms7==1 ||
	    terms1==6 && terms3==5 && terms7==4 || 
		terms1==9 && terms3==8 && terms7==7 || 
		terms1==8 && terms3==5 && terms7==2 || 
		terms1==9 && terms3==6 && terms7==3 ||
	    terms1==9 && terms3==5 && terms7==1 || 
		terms1==7 && terms3==5 && terms7==3  ){
		printf("\n\t\t %s Win THE MATCH",firstPlayer);
	} 
else if(terms1==4 && terms3==7 && terms7==1 || 
        terms1==2 && terms3==3 && terms7==1 || 
		terms1==5 && terms3==6 && terms7==4 || 
		terms1==8 && terms3==9 && terms7==7 || 
		terms1==5 && terms3==8 && terms7==2 || 
		terms1==6 && terms3==9 && terms7==3 || 
		terms1==5 && terms3==9 && terms7==1 || 
		terms1==5 && terms3==7 && terms7==3  ){
		printf("\n\t\t %s Win THE MATCH",firstPlayer);
	}
else if(terms1==4 && terms3==1 && terms7==7 || 
        terms1==2 && terms3==1 && terms7==3 || 
		terms1==5 && terms3==4 && terms7==6 || 
		terms1==8 && terms3==7 && terms7==9 || 
		terms1==5 && terms3==2 && terms7==8 || 
		terms1==6 && terms3==3 && terms7==9 || 
		terms1==5 && terms3==1 && terms7==9 || 
		terms1==5 && terms3==3 && terms7==7  ){
		printf("\n\t\t %s Win THE MATCH",firstPlayer);
	}
	
	
else if(terms1==1 && terms5==4 && terms7==7 ||
	 terms1==1 && terms5==2 && terms7==3 ||
	 terms1==4 && terms5==5 && terms7==6 ||
	 terms1==7 && terms5==8 && terms7==9 || 
	 terms1==2 && terms5==5 && terms7==8 ||
	 terms1==3 && terms5==6 && terms7==9 ||
	 terms1==1 && terms5==5 && terms7==9 ||
	 terms1==3 && terms5==5 && terms7==7  ){
		printf("\n\t\t %s Win THE MATCH",firstPlayer);
	}
else if(terms1==7 && terms5==4 && terms7==1 ||
        terms1==3 && terms5==2 && terms7==1 ||
	    terms1==6 && terms5==5 && terms7==4 || 
		terms1==9 && terms5==8 && terms7==7 || 
		terms1==8 && terms5==5 && terms7==2 || 
		terms1==9 && terms5==6 && terms7==3 ||
	    terms1==9 && terms5==5 && terms7==1 || 
		terms1==7 && terms5==5 && terms7==3  ){
		printf("\n\t\t %s Win THE MATCH",firstPlayer);
	} 
else if(terms1==4 && terms5==7 && terms7==1 || 
        terms1==2 && terms5==3 && terms7==1 || 
		terms1==5 && terms5==6 && terms7==4 || 
		terms1==8 && terms5==9 && terms7==7 || 
		terms1==5 && terms5==8 && terms7==2 || 
		terms1==6 && terms5==9 && terms7==3 || 
		terms1==5 && terms5==9 && terms7==1 || 
		terms1==5 && terms5==7 && terms7==3  ){
		printf("\n\t\t %s Win THE MATCH",firstPlayer);
	}
else if(terms1==4 && terms5==1 && terms7==7 || 
        terms1==2 && terms5==1 && terms7==3 || 
		terms1==5 && terms5==4 && terms7==6 || 
		terms1==8 && terms5==7 && terms7==9 || 
		terms1==5 && terms5==2 && terms7==8 || 
		terms1==6 && terms5==3 && terms7==9 || 
		terms1==5 && terms5==1 && terms7==9 || 
		terms1==5 && terms5==3 && terms7==7  ){
		printf("\n\t\t %s Win THE MATCH",firstPlayer);
	}

else if(terms1==1 && terms7==4 && terms3==7 ||
	 terms1==1 && terms7==2 && terms3==3 ||
	 terms1==4 && terms7==5 && terms3==6 ||
	 terms1==7 && terms7==8 && terms3==9 || 
	 terms1==2 && terms7==5 && terms3==8 ||
	 terms1==3 && terms7==6 && terms3==9 ||
	 terms1==1 && terms7==5 && terms3==9 ||
	 terms1==3 && terms7==5 && terms3==7  ){
		printf("\n\t\t %s Win THE MATCH",firstPlayer);
	}
else if(terms1==7 && terms7==4 && terms3==1 ||
        terms1==3 && terms7==2 && terms3==1 ||
	    terms1==6 && terms7==5 && terms3==4 || 
		terms1==9 && terms7==8 && terms3==7 || 
		terms1==8 && terms7==5 && terms3==2 || 
		terms1==9 && terms7==6 && terms3==3 ||
	    terms1==9 && terms7==5 && terms3==1 || 
		terms1==7 && terms7==5 && terms3==3  ){
		printf("\n\t\t %s Win THE MATCH",firstPlayer);
	} 
else if(terms1==4 && terms7==7 && terms3==1 || 
        terms1==2 && terms7==3 && terms3==1 || 
		terms1==5 && terms7==6 && terms3==4 || 
		terms1==8 && terms7==9 && terms3==7 || 
		terms1==5 && terms7==8 && terms3==2 || 
		terms1==6 && terms7==9 && terms3==3 || 
		terms1==5 && terms7==9 && terms3==1 || 
		terms1==5 && terms7==7 && terms3==3  ){
		printf("\n\t\t %s Win THE MATCH",firstPlayer);
	}
else if(terms1==4 && terms7==1 && terms3==7 || 
        terms1==2 && terms7==1 && terms3==3 || 
		terms1==5 && terms7==4 && terms3==6 || 
		terms1==8 && terms7==7 && terms3==9 || 
		terms1==5 && terms7==2 && terms3==8 || 
		terms1==6 && terms7==3 && terms3==9 || 
		terms1==5 && terms7==1 && terms3==9 || 
		terms1==5 && terms7==3 && terms3==7  ){
		printf("\n\t\t %s Win THE MATCH",firstPlayer);
	
	}

else if(terms1==1 && terms7==4 && terms5==7 ||
	 terms1==1 && terms7==2 && terms5==3 ||
	 terms1==4 && terms7==5 && terms5==6 ||
	 terms1==7 && terms7==8 && terms5==9 || 
	 terms1==2 && terms7==5 && terms5==8 ||
	 terms1==3 && terms7==6 && terms5==9 ||
	 terms1==1 && terms7==5 && terms5==9 ||
	 terms1==3 && terms7==5 && terms5==7  ){
		printf("\n\t\t %s Win THE MATCH",firstPlayer);
	}
else if(terms1==7 && terms7==4 && terms5==1 ||
        terms1==3 && terms7==2 && terms5==1 ||
	    terms1==6 && terms7==5 && terms5==4 || 
		terms1==9 && terms7==8 && terms5==7 || 
		terms1==8 && terms7==5 && terms5==2 || 
		terms1==9 && terms7==6 && terms5==3 ||
	    terms1==9 && terms7==5 && terms5==1 || 
		terms1==7 && terms7==5 && terms5==3  ){
		printf("\n\t\t %s Win THE MATCH",firstPlayer);
	} 
else if(terms1==4 && terms7==7 && terms5==1 || 
        terms1==2 && terms7==3 && terms5==1 || 
		terms1==5 && terms7==6 && terms5==4 || 
		terms1==8 && terms7==9 && terms5==7 || 
		terms1==5 && terms7==8 && terms5==2 || 
		terms1==6 && terms7==9 && terms5==3 || 
		terms1==5 && terms7==9 && terms5==1 || 
		terms1==5 && terms7==7 && terms5==3  ){
		printf("\n\t\t %s Win THE MATCH",firstPlayer);
	}
else if(terms1==4 && terms7==1 && terms5==7 || 
        terms1==2 && terms7==1 && terms5==3 || 
		terms1==5 && terms7==4 && terms5==6 || 
		terms1==8 && terms7==7 && terms5==9 || 
		terms1==5 && terms7==2 && terms5==8 || 
		terms1==6 && terms7==3 && terms5==9 || 
		terms1==5 && terms7==1 && terms5==9 || 
		terms1==5 && terms7==3 && terms5==7  ){
		printf("\n\t\t %s Win THE MATCH",firstPlayer);
	}
	
	
	
else if(terms3==1 && terms1==4 && terms7==7 ||
	 terms3==1 && terms1==2 && terms7==3 ||
	 terms3==4 && terms1==5 && terms7==6 ||
	 terms3==7 && terms1==8 && terms7==9 || 
	 terms3==2 && terms1==5 && terms7==8 ||
	 terms3==3 && terms1==6 && terms7==9 ||
	 terms3==1 && terms1==5 && terms7==9 ||
	 terms3==3 && terms1==5 && terms7==7  ){
		printf("\n\t\t %s Win THE MATCH",firstPlayer);
	
	}
else if(terms3==7 && terms1==4 && terms7==1 ||
        terms3==3 && terms1==2 && terms7==1 ||
	    terms3==6 && terms1==5 && terms7==4 || 
		terms3==9 && terms1==8 && terms7==7 || 
		terms3==8 && terms1==5 && terms7==2 || 
		terms3==9 && terms1==6 && terms7==3 ||
	    terms3==9 && terms1==5 && terms7==1 || 
		terms3==7 && terms1==5 && terms7==3  ){
		printf("\n\t\t %s Win THE MATCH",firstPlayer);
	} 
else if(terms3==4 && terms1==7 && terms7==1 || 
        terms3==2 && terms1==3 && terms7==1 || 
		terms3==5 && terms1==6 && terms7==4 || 
		terms3==8 && terms1==9 && terms7==7 || 
		terms3==5 && terms1==8 && terms7==2 || 
		terms3==6 && terms1==9 && terms7==3 || 
		terms3==5 && terms1==9 && terms7==1 || 
		terms3==5 && terms1==7 && terms7==3  ){
		printf("\n\t\t %s Win THE MATCH",firstPlayer);
	}
else if(terms3==4 && terms1==1 && terms7==7 || 
        terms3==2 && terms1==1 && terms7==3 || 
		terms3==5 && terms1==4 && terms7==6 || 
		terms3==8 && terms1==7 && terms7==9 || 
		terms3==5 && terms1==2 && terms7==8 || 
		terms3==6 && terms1==3 && terms7==9 || 
		terms3==5 && terms1==1 && terms7==9 || 
		terms3==5 && terms1==3 && terms7==7  ){
		printf("\n\t\t %s Win THE MATCH",firstPlayer);
	}
	
	
else if(terms3==1 && terms5==4 && terms7==7 ||
	 terms3==1 && terms5==2 && terms7==3 ||
	 terms3==4 && terms5==5 && terms7==6 ||
	 terms3==7 && terms5==8 && terms7==9 || 
	 terms3==2 && terms5==5 && terms7==8 ||
	 terms3==3 && terms5==6 && terms7==9 ||
	 terms3==1 && terms5==5 && terms7==9 ||
	 terms3==3 && terms5==5 && terms7==7  ){
		printf("\n\t\t %s Win THE MATCH",firstPlayer);
	
	}
else if(terms3==7 && terms5==4 && terms7==1 ||
        terms3==3 && terms5==2 && terms7==1 ||
	    terms3==6 && terms5==5 && terms7==4 || 
		terms3==9 && terms5==8 && terms7==7 || 
		terms3==8 && terms5==5 && terms7==2 || 
		terms3==9 && terms5==6 && terms7==3 ||
	    terms3==9 && terms5==5 && terms7==1 || 
		terms3==7 && terms5==5 && terms7==3  ){
		printf("\n\t\t %s Win THE MATCH",firstPlayer);
	} 
else if(terms3==4 && terms5==7 && terms7==1 || 
        terms3==2 && terms5==3 && terms7==1 || 
		terms3==5 && terms5==6 && terms7==4 || 
		terms3==8 && terms5==9 && terms7==7 || 
		terms3==5 && terms5==8 && terms7==2 || 
		terms3==6 && terms5==9 && terms7==3 || 
		terms3==5 && terms5==9 && terms7==1 || 
		terms3==5 && terms5==7 && terms7==3  ){
		printf("\n\t\t %s Win THE MATCH",firstPlayer);
	}
else if(terms3==4 && terms5==1 && terms7==7 || 
        terms3==2 && terms5==1 && terms7==3 || 
		terms3==5 && terms5==4 && terms7==6 || 
		terms3==8 && terms5==7 && terms7==9 || 
		terms3==5 && terms5==2 && terms7==8 || 
		terms3==6 && terms5==3 && terms7==9 || 
		terms3==5 && terms5==1 && terms7==9 || 
		terms3==5 && terms5==3 && terms7==7  ){
		printf("\n\t\t %s Win THE MATCH",firstPlayer);
	}

else if(terms3==1 && terms7==4 && terms1==7 ||
	 terms3==1 && terms7==2 && terms1==3 ||
	 terms3==4 && terms7==5 && terms1==6 ||
	 terms3==7 && terms7==8 && terms1==9 || 
	 terms3==2 && terms7==5 && terms1==8 ||
	 terms3==3 && terms7==6 && terms1==9 ||
	 terms3==1 && terms7==5 && terms1==9 ||
	 terms3==3 && terms7==5 && terms1==7  ){
		printf("\n\t\t %s Win THE MATCH",firstPlayer);
	
	}
else if(terms3==7 && terms7==4 && terms1==1 ||
        terms3==3 && terms7==2 && terms1==1 ||
	    terms3==6 && terms7==5 && terms1==4 || 
		terms3==9 && terms7==8 && terms1==7 || 
		terms3==8 && terms7==5 && terms1==2 || 
		terms3==9 && terms7==6 && terms1==3 ||
	    terms3==9 && terms7==5 && terms1==1 || 
		terms3==7 && terms7==5 && terms1==3  ){
		printf("\n\t\t %s Win THE MATCH",firstPlayer);
	} 
else if(terms3==4 && terms7==7 && terms1==1 || 
        terms3==2 && terms7==3 && terms1==1 || 
		terms3==5 && terms7==6 && terms1==4 || 
		terms3==8 && terms7==9 && terms1==7 || 
		terms3==5 && terms7==8 && terms1==2 || 
		terms3==6 && terms7==9 && terms1==3 || 
		terms3==5 && terms7==9 && terms1==1 || 
		terms3==5 && terms7==7 && terms1==3  ){
		printf("\n\t\t %s Win THE MATCH",firstPlayer);
	}
else if(terms3==4 && terms7==1 && terms1==7 || 
        terms3==2 && terms7==1 && terms1==3 || 
		terms3==5 && terms7==4 && terms1==6 || 
		terms3==8 && terms7==7 && terms1==9 || 
		terms3==5 && terms7==2 && terms1==8 || 
		terms3==6 && terms7==3 && terms1==9 || 
		terms3==5 && terms7==1 && terms1==9 || 
		terms3==5 && terms7==3 && terms1==7  ){
		printf("\n\t\t %s Win THE MATCH",firstPlayer);
	}


else if(terms3==1 && terms7==4 && terms5==7 ||
	 terms3==1 && terms7==2 && terms5==3 ||
	 terms3==4 && terms7==5 && terms5==6 ||
	 terms3==7 && terms7==8 && terms5==9 || 
	 terms3==2 && terms7==5 && terms5==8 ||
	 terms3==3 && terms7==6 && terms5==9 ||
	 terms3==1 && terms7==5 && terms5==9 ||
	 terms3==3 && terms7==5 && terms5==7  ){
		printf("\n\t\t %s Win THE MATCH",firstPlayer);
	
	}
else if(terms3==7 && terms7==4 && terms5==1 ||
        terms3==3 && terms7==2 && terms5==1 ||
	    terms3==6 && terms7==5 && terms5==4 || 
		terms3==9 && terms7==8 && terms5==7 || 
		terms3==8 && terms7==5 && terms5==2 || 
		terms3==9 && terms7==6 && terms5==3 ||
	    terms3==9 && terms7==5 && terms5==1 || 
		terms3==7 && terms7==5 && terms5==3  ){
		printf("\n\t\t %s Win THE MATCH",firstPlayer);
	} 
else if(terms3==4 && terms7==7 && terms5==1 || 
        terms3==2 && terms7==3 && terms5==1 || 
		terms3==5 && terms7==6 && terms5==4 || 
		terms3==8 && terms7==9 && terms5==7 || 
		terms3==5 && terms7==8 && terms5==2 || 
		terms3==6 && terms7==9 && terms5==3 || 
		terms3==5 && terms7==9 && terms5==1 || 
		terms3==5 && terms7==7 && terms5==3  ){
		printf("\n\t\t %s Win THE MATCH",firstPlayer);
	}
else if(terms3==4 && terms7==1 && terms5==7 || 
        terms3==2 && terms7==1 && terms5==3 || 
		terms3==5 && terms7==4 && terms5==6 || 
		terms3==8 && terms7==7 && terms5==9 || 
		terms3==5 && terms7==2 && terms5==8 || 
		terms3==6 && terms7==3 && terms5==9 || 
		terms3==5 && terms7==1 && terms5==9 || 
		terms3==5 && terms7==3 && terms5==7  ){
		printf("\n\t\t %s Win THE MATCH",firstPlayer);
	}
	
else if(terms5==1 && terms1==4 && terms7==7 ||
	 terms5==1 && terms1==2 && terms7==3 ||
	 terms5==4 && terms1==5 && terms7==6 ||
	 terms5==7 && terms1==8 && terms7==9 || 
	 terms5==2 && terms1==5 && terms7==8 ||
	 terms5==3 && terms1==6 && terms7==9 ||
	 terms5==1 && terms1==5 && terms7==9 ||
	 terms5==3 && terms1==5 && terms7==7  ){
		printf("\n\t\t %s Win THE MATCH",firstPlayer);
	
	}
		
else if(terms5==8 && terms1==5 && terms7==2 || 
        terms5==7 && terms1==4 && terms7==1 ||
        terms5==3 && terms1==2 && terms7==1 ||
	    terms5==6 && terms1==5 && terms7==4 || 
		terms5==9 && terms1==8 && terms7==7 || 
		terms5==9 && terms1==6 && terms7==3 ||
	    terms5==9 && terms1==5 && terms7==1 || 
		terms5==7 && terms1==5 && terms7==3  ){
		printf("\n\t\t %s Win THE MATCH",firstPlayer);
	} 
else if(terms5==4 && terms1==7 && terms7==1 || 
        terms5==2 && terms1==3 && terms7==1 || 
		terms5==5 && terms1==6 && terms7==4 || 
		terms5==8 && terms1==9 && terms7==7 || 
		terms5==5 && terms1==8 && terms7==2 || 
		terms5==6 && terms1==9 && terms7==3 || 
		terms5==5 && terms1==9 && terms7==1 || 
		terms5==5 && terms1==7 && terms7==3  ){
		printf("\n\t\t %s Win THE MATCH",firstPlayer);
	}
else if(terms5==4 && terms1==1 && terms7==7 || 
        terms5==2 && terms1==1 && terms7==3 || 
		terms5==5 && terms1==4 && terms7==6 || 
		terms5==8 && terms1==7 && terms7==9 || 
		terms5==5 && terms1==2 && terms7==8 || 
		terms5==6 && terms1==3 && terms7==9 || 
		terms5==5 && terms1==1 && terms7==9 || 
		terms5==5 && terms1==3 && terms7==7  ){
		printf
		("\n\t\t %s Win THE MATCH",firstPlayer);
	}
	
	
else if(terms5==1 && terms3==4 && terms7==7 ||
	 terms5==1 && terms3==2 && terms7==3 ||
	 terms5==4 && terms3==5 && terms7==6 ||
	 terms5==7 && terms3==8 && terms7==9 || 
	 terms5==2 && terms3==5 && terms7==8 ||
	 terms5==3 && terms3==6 && terms7==9 ||
	 terms5==1 && terms3==5 && terms7==9 ||
	 terms5==3 && terms3==5 && terms7==7  ){
		printf("\n\t\t %s Win THE MATCH",firstPlayer);
	
	}
else if(terms5==8 && terms3==5 && terms7==2 || 
        terms5==7 && terms3==4 && terms7==1 ||
        terms5==3 && terms3==2 && terms7==1 ||
	    terms5==6 && terms3==5 && terms7==4 || 
		terms5==9 && terms3==8 && terms7==7 || 
		terms5==9 && terms3==6 && terms7==3 ||
	    terms5==9 && terms3==5 && terms7==1 || 
		terms5==7 && terms3==5 && terms7==3  ){
		printf("\n\t\t %s Win THE MATCH",firstPlayer);
	} 
else if(terms5==4 && terms3==7 && terms7==1 || 
        terms5==2 && terms3==3 && terms7==1 || 
		terms5==5 && terms3==6 && terms7==4 || 
		terms5==8 && terms3==9 && terms7==7 || 
		terms5==5 && terms3==8 && terms7==2 || 
		terms5==6 && terms3==9 && terms7==3 || 
		terms5==5 && terms3==9 && terms7==1 || 
		terms5==5 && terms3==7 && terms7==3  ){
		printf("\n\t\t %s Win THE MATCH",firstPlayer);
	}
else if(terms5==4 && terms3==1 && terms7==7 || 
        terms5==2 && terms3==1 && terms7==3 || 
		terms5==5 && terms3==4 && terms7==6 || 
		terms5==8 && terms3==7 && terms7==9 || 
		terms5==5 && terms3==2 && terms7==8 || 
		terms5==6 && terms3==3 && terms7==9 || 
		terms5==5 && terms3==1 && terms7==9 || 
		terms5==5 && terms3==3 && terms7==7  ){
		printf("\n\t\t %s Win THE MATCH",firstPlayer);
	}
	
	
else if(terms5==1 && terms7==4 && terms1==7 ||
	 terms5==1 && terms7==2 && terms1==3 ||
	 terms5==4 && terms7==5 && terms1==6 ||
	 terms5==7 && terms7==8 && terms1==9 || 
	 terms5==2 && terms7==5 && terms1==8 ||
	 terms5==3 && terms7==6 && terms1==9 ||
	 terms5==1 && terms7==5 && terms1==9 ||
	 terms5==3 && terms7==5 && terms1==7  ){
		printf("\n\t\t %s Win THE MATCH",firstPlayer);
	
	}
else if(terms5==8 && terms7==5 && terms1==2 || 
        terms5==7 && terms7==4 && terms1==1 ||
        terms5==3 && terms7==2 && terms1==1 ||
	    terms5==6 && terms7==5 && terms1==4 || 
		terms5==9 && terms7==8 && terms1==7 || 
		terms5==9 && terms7==6 && terms1==3 ||
	    terms5==9 && terms7==5 && terms1==1 || 
		terms5==7 && terms7==5 && terms1==3  ){
		printf("\n\t\t %s Win THE MATCH",firstPlayer);
	} 
else if(terms5==4 && terms7==7 && terms1==1 || 
        terms5==2 && terms7==3 && terms1==1 || 
		terms5==5 && terms7==6 && terms1==4 || 
		terms5==8 && terms7==9 && terms1==7 || 
		terms5==5 && terms7==8 && terms1==2 || 
		terms5==6 && terms7==9 && terms1==3 || 
		terms5==5 && terms7==9 && terms1==1 || 
		terms5==5 && terms7==7 && terms1==3  ){
		printf("\n\t\t %s Win THE MATCH",firstPlayer);
	}
else if(terms5==4 && terms7==1 && terms1==7 || 
        terms5==2 && terms7==1 && terms1==3 || 
		terms5==5 && terms7==4 && terms1==6 || 
		terms5==8 && terms7==7 && terms1==9 || 
		terms5==5 && terms7==2 && terms1==8 || 
		terms5==6 && terms7==3 && terms1==9 || 
		terms5==5 && terms7==1 && terms1==9 || 
		terms5==5 && terms7==3 && terms1==7  ){
		printf("\n\t\t %s Win THE MATCH",firstPlayer);
	}
	
	
else if(terms5==1 && terms7==4 && terms3==7 ||
	 terms5==1 && terms7==2 && terms3==3 ||
	 terms5==4 && terms7==5 && terms3==6 ||
	 terms5==7 && terms7==8 && terms3==9 || 
	 terms5==2 && terms7==5 && terms3==8 ||
	 terms5==3 && terms7==6 && terms3==9 ||
	 terms5==1 && terms7==5 && terms3==9 ||
	 terms5==3 && terms7==5 && terms3==7  ){
		printf("\n\t\t %s Win THE MATCH",firstPlayer);
	
	}
else if(terms5==8 && terms7==5 && terms3==2 || 
        terms5==7 && terms7==4 && terms3==1 ||
        terms5==3 && terms7==2 && terms3==1 ||
	    terms5==6 && terms7==5 && terms3==4 || 
		terms5==9 && terms7==8 && terms3==7 || 
		terms5==9 && terms7==6 && terms3==3 ||
	    terms5==9 && terms7==5 && terms3==1 || 
		terms5==7 && terms7==5 && terms3==3  ){
		printf("\n\t\t %s Win THE MATCH",firstPlayer);
	} 
else if(terms5==4 && terms7==7 && terms3==1 || 
        terms5==2 && terms7==3 && terms3==1 || 
		terms5==5 && terms7==6 && terms3==4 || 
		terms5==8 && terms7==9 && terms3==7 || 
		terms5==5 && terms7==8 && terms3==2 || 
		terms5==6 && terms7==9 && terms3==3 || 
		terms5==5 && terms7==9 && terms3==1 || 
		terms5==5 && terms7==7 && terms3==3  ){
		printf("\n\t\t %s Win THE MATCH",firstPlayer);
	}
else if(terms5==4 && terms7==1 && terms3==7 || 
        terms5==2 && terms7==1 && terms3==3 || 
		terms5==5 && terms7==4 && terms3==6 || 
		terms5==8 && terms7==7 && terms3==9 || 
		terms5==5 && terms7==2 && terms3==8 || 
		terms5==6 && terms7==3 && terms3==9 || 
		terms5==5 && terms7==1 && terms3==9 || 
		terms5==5 && terms7==3 && terms3==7  ){
		printf("\n\t\t %s Win THE MATCH",firstPlayer);
	}
	
	
else if(terms7==1 && terms1==4 && terms3==7 ||
	 terms7==1 && terms1==2 && terms3==3 ||
	 terms7==4 && terms1==5 && terms3==6 ||
	 terms7==7 && terms1==8 && terms3==9 || 
	 terms7==2 && terms1==5 && terms3==8 ||
	 terms7==3 && terms1==6 && terms3==9 ||
	 terms7==1 && terms1==5 && terms3==9 ||
	 terms7==3 && terms1==5 && terms3==7  ){
		printf("\n\t\t %s Win THE MATCH",firstPlayer);
	
	}
else if(terms7==8 && terms1==5 && terms3==2 || 
        terms7==7 && terms1==4 && terms3==1 ||
        terms7==3 && terms1==2 && terms3==1 ||
	    terms7==6 && terms1==5 && terms3==4 || 
		terms7==9 && terms1==8 && terms3==7 || 
		terms7==9 && terms1==6 && terms3==3 ||
	    terms7==9 && terms1==5 && terms3==1 || 
		terms7==7 && terms1==5 && terms3==3  ){
		printf("\n\t\t %s Win THE MATCH",firstPlayer);
	} 
else if(terms7==4 && terms1==7 && terms3==1 || 
        terms7==2 && terms1==3 && terms3==1 || 
		terms7==5 && terms1==6 && terms3==4 || 
		terms7==8 && terms1==9 && terms3==7 || 
		terms7==5 && terms1==8 && terms3==2 || 
		terms7==6 && terms1==9 && terms3==3 || 
		terms7==5 && terms1==9 && terms3==1 || 
		terms7==5 && terms1==7 && terms3==3  ){
		printf("\n\t\t %s Win THE MATCH",firstPlayer);
	}
else if(terms7==4 && terms1==1 && terms3==7 || 
        terms7==2 && terms1==1 && terms3==3 || 
		terms7==5 && terms1==4 && terms3==6 || 
		terms7==8 && terms1==7 && terms3==9 || 
		terms7==5 && terms1==2 && terms3==8 || 
		terms7==6 && terms1==3 && terms3==9 || 
		terms7==5 && terms1==1 && terms3==9 || 
		terms7==5 && terms1==3 && terms3==7  ){
		printf("\n\t\t %s Win THE MATCH",firstPlayer);
	}
	
	
else if(terms7==1 && terms3==4 && terms5==7 ||
	 terms7==1 && terms3==2 && terms5==3 ||
	 terms7==4 && terms3==5 && terms5==6 ||
	 terms7==7 && terms3==8 && terms5==9 || 
	 terms7==2 && terms3==5 && terms5==8 ||
	 terms7==3 && terms3==6 && terms5==9 ||
	 terms7==1 && terms3==5 && terms5==9 ||
	 terms7==3 && terms3==5 && terms5==7  ){
		printf("\n\t\t %s Win THE MATCH",firstPlayer);
	
	}
		
		
else if(terms7==8 && terms3==5 && terms5==2 || 
        terms7==7 && terms3==4 && terms5==1 ||
        terms7==3 && terms3==2 && terms5==1 ||
	    terms7==6 && terms3==5 && terms5==4 || 
		terms7==9 && terms3==8 && terms5==7 || 
		terms7==9 && terms3==6 && terms5==3 ||
	    terms7==9 && terms3==5 && terms5==1 || 
		terms7==7 && terms3==5 && terms5==3  ){
		printf("\n\t\t %s Win THE MATCH",firstPlayer);
	} 
else if(terms7==4 && terms3==7 && terms5==1 || 
		terms7==5 && terms3==6 && terms5==4 || 
		terms7==8 && terms3==9 && terms5==7 || 
        terms7==2 && terms3==3 && terms5==1 || 
		terms7==5 && terms3==8 && terms5==2 || 
		terms7==6 && terms3==9 && terms5==3 || 
		terms7==5 && terms3==9 && terms5==1 || 
		terms7==5 && terms3==7 && terms5==3  ){
		printf("\n\t\t %s Win THE MATCH",firstPlayer);
	}
else if(terms7==4 && terms3==1 && terms5==7 || 
        terms7==2 && terms3==1 && terms5==3 || 
		terms7==5 && terms3==4 && terms5==6 || 
		terms7==8 && terms3==7 && terms5==9 || 
		terms7==5 && terms3==2 && terms5==8 || 
		terms7==6 && terms3==3 && terms5==9 || 
		terms7==5 && terms3==1 && terms5==9 || 
		terms7==5 && terms3==3 && terms5==7  ){
		printf("\n\t\t %s Win THE MATCH",firstPlayer);
	}

else if(terms7==1 && terms1==4 && terms5==7 ||
	 terms7==1 && terms1==2 && terms5==3 ||
	 terms7==4 && terms1==5 && terms5==6 ||
	 terms7==7 && terms1==8 && terms5==9 || 
	 terms7==2 && terms1==5 && terms5==8 ||
	 terms7==3 && terms1==6 && terms5==9 ||
	 terms7==1 && terms1==5 && terms5==9 ||
	 terms7==3 && terms1==5 && terms5==7  ){
		printf("\n\t\t %s Win THE MATCH",firstPlayer);
	
	}
		
		
else if(terms7==8 && terms1==5 && terms5==2 || 
        terms7==7 && terms1==4 && terms5==1 ||
        terms7==3 && terms1==2 && terms5==1 ||
	    terms7==6 && terms1==5 && terms5==4 || 
		terms7==9 && terms1==8 && terms5==7 || 
		terms7==9 && terms1==6 && terms5==3 ||
	    terms7==9 && terms1==5 && terms5==1 || 
		terms7==7 && terms1==5 && terms5==3  ){
		printf("\n\t\t %s Win THE MATCH",firstPlayer);
	} 
else if(terms7==4 && terms1==7 && terms5==1 || 
		terms7==5 && terms1==6 && terms5==4 || 
		terms7==8 && terms1==9 && terms5==7 || 
        terms7==2 && terms1==3 && terms5==1 || 
		terms7==5 && terms1==8 && terms5==2 || 
		terms7==6 && terms1==9 && terms5==3 || 
		terms7==5 && terms1==9 && terms5==1 || 
		terms7==5 && terms1==7 && terms5==3  ){
		printf("\n\t\t %s Win THE MATCH",firstPlayer);
	}
else if(terms7==4 && terms1==1 && terms5==7 || 
        terms7==2 && terms1==1 && terms5==3 || 
		terms7==5 && terms1==4 && terms5==6 || 
		terms7==8 && terms1==7 && terms5==9 || 
		terms7==5 && terms1==2 && terms5==8 || 
		terms7==6 && terms1==3 && terms5==9 || 
		terms7==5 && terms1==1 && terms5==9 || 
		terms7==5 && terms1==3 && terms5==7  ){
		printf("\n\t\t %s Win THE MATCH",firstPlayer);
	}

else if(terms7==1 && terms5==4 && terms1==7 ||
	 terms7==1 && terms5==2 && terms1==3 ||
	 terms7==4 && terms5==5 && terms1==6 ||
	 terms7==7 && terms5==8 && terms1==9 || 
	 terms7==2 && terms5==5 && terms1==8 ||
	 terms7==3 && terms5==6 && terms1==9 ||
	 terms7==1 && terms5==5 && terms1==9 ||
	 terms7==3 && terms5==5 && terms1==7  ){
		printf("\n\t\t %s Win THE MATCH",firstPlayer);
	
	}
		
		
else if(terms7==8 && terms5==5 && terms1==2 || 
        terms7==7 && terms5==4 && terms1==1 ||
        terms7==3 && terms5==2 && terms1==1 ||
	    terms7==6 && terms5==5 && terms1==4 || 
		terms7==9 && terms5==8 && terms1==7 || 
		terms7==9 && terms5==6 && terms1==3 ||
	    terms7==9 && terms5==5 && terms1==1 || 
		terms7==7 && terms5==5 && terms1==3  ){
		printf("\n\t\t %s Win THE MATCH",firstPlayer);
	} 
else if(terms7==4 && terms5==7 && terms1==1 || 
		terms7==5 && terms5==6 && terms1==4 || 
		terms7==8 && terms5==9 && terms1==7 || 
        terms7==2 && terms5==3 && terms1==1 || 
		terms7==5 && terms5==8 && terms1==2 || 
		terms7==6 && terms5==9 && terms1==3 || 
		terms7==5 && terms5==9 && terms1==1 || 
		terms7==5 && terms5==7 && terms1==3  ){
		printf("\n\t\t %s Win THE MATCH",firstPlayer);
	}
else if(terms7==4 && terms5==1 && terms1==7 || 
        terms7==2 && terms5==1 && terms1==3 || 
		terms7==5 && terms5==4 && terms1==6 || 
		terms7==8 && terms5==7 && terms1==9 || 
		terms7==5 && terms5==2 && terms1==8 || 
		terms7==6 && terms5==3 && terms1==9 || 
		terms7==5 && terms5==1 && terms1==9 || 
		terms7==5 && terms5==3 && terms1==7  ){
		printf("\n\t\t %s Win THE MATCH",firstPlayer);
	}	
		
		
										
	else{
	
 
	
	printf("\t\t\n\n\t\t%s terms -",secondPlayer);
	scanf("%d",&terms8);	

	printf("\n\n\n\n");
   	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			//printf("\t\t\t");
			
			if(puzzle[i][j]==terms1){
		    
			printf(" \tX |");
			//printf("---");		
			}
			else if(puzzle[i][j]==terms2){
				printf(" \tO |");
			}
			else if(puzzle[i][j]==terms3){
				printf(" \tX |");
			}
			else if(puzzle[i][j]==terms4){
				printf(" \tO |");
			}
			else if(puzzle[i][j]==terms5){
				printf(" \tX |");
			}
			else if(puzzle[i][j]==terms6){
				printf(" \tO |");
			}
			else if(puzzle[i][j]==terms7){
				printf(" \tX |");
			}
			else if(puzzle[i][j]==terms8){
				printf(" \tO |");
			}															
			else	
			printf(" \t%d |",puzzle[i][j]);
			//printf("---");
		}
		printf("\n\t--------------------");
		printf("\n");
	} 

  if(terms2==1 && terms4==4 && terms8==7 ||
	 terms2==1 && terms4==2 && terms8==3 ||
	 terms2==4 && terms4==5 && terms8==6 ||
	 terms2==7 && terms4==8 && terms8==9 || 
	 terms2==2 && terms4==5 && terms8==8 ||
	 terms2==3 && terms4==6 && terms8==9 ||
	 terms2==1 && terms4==5 && terms8==9 ||
	 terms2==3 && terms4==5 && terms8==7 || 
	 terms2==8 && terms4==5 && terms8==2 || 
     terms2==7 && terms4==4 && terms8==1 ||
     terms2==3 && terms4==2 && terms8==1 ||
     terms2==6 && terms4==5 && terms8==4 || 
     terms2==9 && terms4==8 && terms8==7 || 
   	 terms2==9 && terms4==6 && terms8==3 ||
	 terms2==9 && terms4==5 && terms8==1 || 
	 terms2==7 && terms4==5 && terms8==3 || 
	 terms2==4 && terms4==7 && terms8==1 || 
	 terms2==5 && terms4==6 && terms8==4 || 
     terms2==8 && terms4==9 && terms8==7 || 
     terms2==2 && terms4==3 && terms8==1 || 
	 terms2==5 && terms4==8 && terms8==2 || 
	 terms2==6 && terms4==9 && terms8==3 || 
	 terms2==5 && terms4==9 && terms8==1 || 
	 terms2==5 && terms4==7 && terms8==3 || 
     terms2==4 && terms4==1 && terms8==7 || 
     terms2==2 && terms4==1 && terms8==3 || 
	 terms2==5 && terms4==4 && terms8==6 || 
	 terms2==8 && terms4==7 && terms8==9 || 
	 terms2==5 && terms4==2 && terms8==8 || 
	 terms2==6 && terms4==3 && terms8==9 || 
	 terms2==5 && terms4==1 && terms8==9 || 
	 terms2==5 && terms4==3 && terms8==7  )
 	{
 	printf("\n\t\t %s Win THE MATCH",secondPlayer);
	 }

  if(terms2==1 && terms6==4 && terms8==7 ||
	 terms2==1 && terms6==2 && terms8==3 ||
	 terms2==4 && terms6==5 && terms8==6 ||
	 terms2==7 && terms6==8 && terms8==9 || 
	 terms2==2 && terms6==5 && terms8==8 ||
	 terms2==3 && terms6==6 && terms8==9 ||
	 terms2==1 && terms6==5 && terms8==9 ||
	 terms2==3 && terms6==5 && terms8==7 || 
	 terms2==8 && terms6==5 && terms8==2 || 
     terms2==7 && terms6==4 && terms8==1 ||
     terms2==3 && terms6==2 && terms8==1 ||
     terms2==6 && terms6==5 && terms8==4 || 
     terms2==9 && terms6==8 && terms8==7 || 
   	 terms2==9 && terms6==6 && terms8==3 ||
	 terms2==9 && terms6==5 && terms8==1 || 
	 terms2==7 && terms6==5 && terms8==3 || 
	 terms2==4 && terms6==7 && terms8==1 || 
	 terms2==5 && terms6==6 && terms8==4 || 
     terms2==8 && terms6==9 && terms8==7 || 
     terms2==2 && terms6==3 && terms8==1 || 
	 terms2==5 && terms6==8 && terms8==2 || 
	 terms2==6 && terms6==9 && terms8==3 || 
	 terms2==5 && terms6==9 && terms8==1 || 
	 terms2==5 && terms6==7 && terms8==3 || 
     terms2==4 && terms6==1 && terms8==7 || 
     terms2==2 && terms6==1 && terms8==3 || 
	 terms2==5 && terms6==4 && terms8==6 || 
	 terms2==8 && terms6==7 && terms8==9 || 
	 terms2==5 && terms6==2 && terms8==8 || 
	 terms2==6 && terms6==3 && terms8==9 || 
	 terms2==5 && terms6==1 && terms8==9 || 
	 terms2==5 && terms6==3 && terms8==7  )
 	{
 	printf("\n\t\t %s Win THE MATCH",secondPlayer);
	 }

  if(terms2==1 && terms8==4 && terms4==7 ||
	 terms2==1 && terms8==2 && terms4==3 ||
	 terms2==4 && terms8==5 && terms4==6 ||
	 terms2==7 && terms8==8 && terms4==9 || 
	 terms2==2 && terms8==5 && terms4==8 ||
	 terms2==3 && terms8==6 && terms4==9 ||
	 terms2==1 && terms8==5 && terms4==9 ||
	 terms2==3 && terms8==5 && terms4==7 || 
	 terms2==8 && terms8==5 && terms4==2 || 
     terms2==7 && terms8==4 && terms4==1 ||
     terms2==3 && terms8==2 && terms4==1 ||
     terms2==6 && terms8==5 && terms4==4 || 
     terms2==9 && terms8==8 && terms4==7 || 
   	 terms2==9 && terms8==6 && terms4==3 ||
	 terms2==9 && terms8==5 && terms4==1 || 
	 terms2==7 && terms8==5 && terms4==3 || 
	 terms2==4 && terms8==7 && terms4==1 || 
	 terms2==5 && terms8==6 && terms4==4 || 
     terms2==8 && terms8==9 && terms4==7 || 
     terms2==2 && terms8==3 && terms4==1 || 
	 terms2==5 && terms8==8 && terms4==2 || 
	 terms2==6 && terms8==9 && terms4==3 || 
	 terms2==5 && terms8==9 && terms4==1 || 
	 terms2==5 && terms8==7 && terms4==3 || 
     terms2==4 && terms8==1 && terms4==7 || 
     terms2==2 && terms8==1 && terms4==3 || 
	 terms2==5 && terms8==4 && terms4==6 || 
	 terms2==8 && terms8==7 && terms4==9 || 
	 terms2==5 && terms8==2 && terms4==8 || 
	 terms2==6 && terms8==3 && terms4==9 || 
	 terms2==5 && terms8==1 && terms4==9 || 
	 terms2==5 && terms8==3 && terms4==7  )
 	{
 	printf("\n\t\t %s Win THE MATCH",secondPlayer);
	 }

  if(terms2==1 && terms8==4 && terms6==7 ||
	 terms2==1 && terms8==2 && terms6==3 ||
	 terms2==4 && terms8==5 && terms6==6 ||
	 terms2==7 && terms8==8 && terms6==9 || 
	 terms2==2 && terms8==5 && terms6==8 ||
	 terms2==3 && terms8==6 && terms6==9 ||
	 terms2==1 && terms8==5 && terms6==9 ||
	 terms2==3 && terms8==5 && terms6==7 || 
	 terms2==8 && terms8==5 && terms6==2 || 
     terms2==7 && terms8==4 && terms6==1 ||
     terms2==3 && terms8==2 && terms6==1 ||
     terms2==6 && terms8==5 && terms6==4 || 
     terms2==9 && terms8==8 && terms6==7 || 
   	 terms2==9 && terms8==6 && terms6==3 ||
	 terms2==9 && terms8==5 && terms6==1 || 
	 terms2==7 && terms8==5 && terms6==3 || 
	 terms2==4 && terms8==7 && terms6==1 || 
	 terms2==5 && terms8==6 && terms6==4 || 
     terms2==8 && terms8==9 && terms6==7 || 
     terms2==2 && terms8==3 && terms6==1 || 
	 terms2==5 && terms8==8 && terms6==2 || 
	 terms2==6 && terms8==9 && terms6==3 || 
	 terms2==5 && terms8==9 && terms6==1 || 
	 terms2==5 && terms8==7 && terms6==3 || 
     terms2==4 && terms8==1 && terms6==7 || 
     terms2==2 && terms8==1 && terms6==3 || 
	 terms2==5 && terms8==4 && terms6==6 || 
	 terms2==8 && terms8==7 && terms6==9 || 
	 terms2==5 && terms8==2 && terms6==8 || 
	 terms2==6 && terms8==3 && terms6==9 || 
	 terms2==5 && terms8==1 && terms6==9 || 
	 terms2==5 && terms8==3 && terms6==7  )
 	{
 	printf("\n\t\t %s Win THE MATCH",secondPlayer);
	 }

  if(terms4==1 && terms6==4 && terms8==7 ||
	 terms4==1 && terms6==2 && terms8==3 ||
	 terms4==4 && terms6==5 && terms8==6 ||
	 terms4==7 && terms6==8 && terms8==9 || 
	 terms4==2 && terms6==5 && terms8==8 ||
	 terms4==3 && terms6==6 && terms8==9 ||
	 terms4==1 && terms6==5 && terms8==9 ||
	 terms4==3 && terms6==5 && terms8==7 || 
	 terms4==8 && terms6==5 && terms8==2 || 
     terms4==7 && terms6==4 && terms8==1 ||
     terms4==3 && terms6==2 && terms8==1 ||
     terms4==6 && terms6==5 && terms8==4 || 
     terms4==9 && terms6==8 && terms8==7 || 
   	 terms4==9 && terms6==6 && terms8==3 ||
	 terms4==9 && terms6==5 && terms8==1 || 
	 terms4==7 && terms6==5 && terms8==3 || 
	 terms4==4 && terms6==7 && terms8==1 || 
	 terms4==5 && terms6==6 && terms8==4 || 
     terms4==8 && terms6==9 && terms8==7 || 
     terms4==2 && terms6==3 && terms8==1 || 
	 terms4==5 && terms6==8 && terms8==2 || 
	 terms4==6 && terms6==9 && terms8==3 || 
	 terms4==5 && terms6==9 && terms8==1 || 
	 terms4==5 && terms6==7 && terms8==3 || 
     terms4==4 && terms6==1 && terms8==7 || 
     terms4==2 && terms6==1 && terms8==3 || 
	 terms4==5 && terms6==4 && terms8==6 || 
	 terms4==8 && terms6==7 && terms8==9 || 
	 terms4==5 && terms6==2 && terms8==8 || 
	 terms4==6 && terms6==3 && terms8==9 || 
	 terms4==5 && terms6==1 && terms8==9 || 
	 terms4==5 && terms6==3 && terms8==7  )
 	{
 	printf("\n\t\t %s Win THE MATCH",secondPlayer);
	 }

  if(terms4==1 && terms2==4 && terms8==7 ||
	 terms4==1 && terms2==2 && terms8==3 ||
	 terms4==4 && terms2==5 && terms8==6 ||
	 terms4==7 && terms2==8 && terms8==9 || 
	 terms4==2 && terms2==5 && terms8==8 ||
	 terms4==3 && terms2==6 && terms8==9 ||
	 terms4==1 && terms2==5 && terms8==9 ||
	 terms4==3 && terms2==5 && terms8==7 || 
	 terms4==8 && terms2==5 && terms8==2 || 
     terms4==7 && terms2==4 && terms8==1 ||
     terms4==3 && terms2==2 && terms8==1 ||
     terms4==6 && terms2==5 && terms8==4 || 
     terms4==9 && terms2==8 && terms8==7 || 
   	 terms4==9 && terms2==6 && terms8==3 ||
	 terms4==9 && terms2==5 && terms8==1 || 
	 terms4==7 && terms2==5 && terms8==3 || 
	 terms4==4 && terms2==7 && terms8==1 || 
	 terms4==5 && terms2==6 && terms8==4 || 
     terms4==8 && terms2==9 && terms8==7 || 
     terms4==2 && terms2==3 && terms8==1 || 
	 terms4==5 && terms2==8 && terms8==2 || 
	 terms4==6 && terms2==9 && terms8==3 || 
	 terms4==5 && terms2==9 && terms8==1 || 
	 terms4==5 && terms2==7 && terms8==3 || 
     terms4==4 && terms2==1 && terms8==7 || 
     terms4==2 && terms2==1 && terms8==3 || 
	 terms4==5 && terms2==4 && terms8==6 || 
	 terms4==8 && terms2==7 && terms8==9 || 
	 terms4==5 && terms2==2 && terms8==8 || 
	 terms4==6 && terms2==3 && terms8==9 || 
	 terms4==5 && terms2==1 && terms8==9 || 
	 terms4==5 && terms2==3 && terms8==7  )
 	{
 	printf("\n\t\t %s Win THE MATCH",secondPlayer);
	 }

  if(terms4==1 && terms8==4 && terms6==7 ||
	 terms4==1 && terms8==2 && terms6==3 ||
	 terms4==4 && terms8==5 && terms6==6 ||
	 terms4==7 && terms8==8 && terms6==9 || 
	 terms4==2 && terms8==5 && terms6==8 ||
	 terms4==3 && terms8==6 && terms6==9 ||
	 terms4==1 && terms8==5 && terms6==9 ||
	 terms4==3 && terms8==5 && terms6==7 || 
	 terms4==8 && terms8==5 && terms6==2 || 
     terms4==7 && terms8==4 && terms6==1 ||
     terms4==3 && terms8==2 && terms6==1 ||
     terms4==6 && terms8==5 && terms6==4 || 
     terms4==9 && terms8==8 && terms6==7 || 
   	 terms4==9 && terms8==6 && terms6==3 ||
	 terms4==9 && terms8==5 && terms6==1 || 
	 terms4==7 && terms8==5 && terms6==3 || 
	 terms4==4 && terms8==7 && terms6==1 || 
	 terms4==5 && terms8==6 && terms6==4 || 
     terms4==8 && terms8==9 && terms6==7 || 
     terms4==2 && terms8==3 && terms6==1 || 
	 terms4==5 && terms8==8 && terms6==2 || 
	 terms4==6 && terms8==9 && terms6==3 || 
	 terms4==5 && terms8==9 && terms6==1 || 
	 terms4==5 && terms8==7 && terms6==3 || 
     terms4==4 && terms8==1 && terms6==7 || 
     terms4==2 && terms8==1 && terms6==3 || 
	 terms4==5 && terms8==4 && terms6==6 || 
	 terms4==8 && terms8==7 && terms6==9 || 
	 terms4==5 && terms8==2 && terms6==8 || 
	 terms4==6 && terms8==3 && terms6==9 || 
	 terms4==5 && terms8==1 && terms6==9 || 
	 terms4==5 && terms8==3 && terms6==7  )
 	{
 	printf("\n\t\t %s Win THE MATCH",secondPlayer);
	 }

  if(terms4==1 && terms8==4 && terms2==7 ||
	 terms4==1 && terms8==2 && terms2==3 ||
	 terms4==4 && terms8==5 && terms2==6 ||
	 terms4==7 && terms8==8 && terms2==9 || 
	 terms4==2 && terms8==5 && terms2==8 ||
	 terms4==3 && terms8==6 && terms2==9 ||
	 terms4==1 && terms8==5 && terms2==9 ||
	 terms4==3 && terms8==5 && terms2==7 || 
	 terms4==8 && terms8==5 && terms2==2 || 
     terms4==7 && terms8==4 && terms2==1 ||
     terms4==3 && terms8==2 && terms2==1 ||
     terms4==6 && terms8==5 && terms2==4 || 
     terms4==9 && terms8==8 && terms2==7 || 
   	 terms4==9 && terms8==6 && terms2==3 ||
	 terms4==9 && terms8==5 && terms2==1 || 
	 terms4==7 && terms8==5 && terms2==3 || 
	 terms4==4 && terms8==7 && terms2==1 || 
	 terms4==5 && terms8==6 && terms2==4 || 
     terms4==8 && terms8==9 && terms2==7 || 
     terms4==2 && terms8==3 && terms2==1 || 
	 terms4==5 && terms8==8 && terms2==2 || 
	 terms4==6 && terms8==9 && terms2==3 || 
	 terms4==5 && terms8==9 && terms2==1 || 
	 terms4==5 && terms8==7 && terms2==3 || 
     terms4==4 && terms8==1 && terms2==7 || 
     terms4==2 && terms8==1 && terms2==3 || 
	 terms4==5 && terms8==4 && terms2==6 || 
	 terms4==8 && terms8==7 && terms2==9 || 
	 terms4==5 && terms8==2 && terms2==8 || 
	 terms4==6 && terms8==3 && terms2==9 || 
	 terms4==5 && terms8==1 && terms2==9 || 
	 terms4==5 && terms8==3 && terms2==7  )
 	{
 	printf("\n\t\t %s Win THE MATCH",secondPlayer);
	 }

  if(terms6==1 && terms2==4 && terms8==7 ||
	 terms6==1 && terms2==2 && terms8==3 ||
	 terms6==4 && terms2==5 && terms8==6 ||
	 terms6==7 && terms2==8 && terms8==9 || 
	 terms6==2 && terms2==5 && terms8==8 ||
	 terms6==3 && terms2==6 && terms8==9 ||
	 terms6==1 && terms2==5 && terms8==9 ||
	 terms6==3 && terms2==5 && terms8==7 || 
	 terms6==8 && terms2==5 && terms8==2 || 
     terms6==7 && terms2==4 && terms8==1 ||
     terms6==3 && terms2==2 && terms8==1 ||
     terms6==6 && terms2==5 && terms8==4 || 
     terms6==9 && terms2==8 && terms8==7 || 
   	 terms6==9 && terms2==6 && terms8==3 ||
	 terms6==9 && terms2==5 && terms8==1 || 
	 terms6==7 && terms2==5 && terms8==3 || 
	 terms6==4 && terms2==7 && terms8==1 || 
	 terms6==5 && terms2==6 && terms8==4 || 
     terms6==8 && terms2==9 && terms8==7 || 
     terms6==2 && terms2==3 && terms8==1 || 
	 terms6==5 && terms2==8 && terms8==2 || 
	 terms6==6 && terms2==9 && terms8==3 || 
	 terms6==5 && terms2==9 && terms8==1 || 
	 terms6==5 && terms2==7 && terms8==3 || 
     terms6==4 && terms2==1 && terms8==7 || 
     terms6==2 && terms2==1 && terms8==3 || 
	 terms6==5 && terms2==4 && terms8==6 || 
	 terms6==8 && terms2==7 && terms8==9 || 
	 terms6==5 && terms2==2 && terms8==8 || 
	 terms6==6 && terms2==3 && terms8==9 || 
	 terms6==5 && terms2==1 && terms8==9 || 
	 terms6==5 && terms2==3 && terms8==7  )
 	{
 	printf("\n\t\t %s Win THE MATCH",secondPlayer);
	 }

  if(terms6==1 && terms4==4 && terms8==7 ||
	 terms6==1 && terms4==2 && terms8==3 ||
	 terms6==4 && terms4==5 && terms8==6 ||
	 terms6==7 && terms4==8 && terms8==9 || 
	 terms6==2 && terms4==5 && terms8==8 ||
	 terms6==3 && terms4==6 && terms8==9 ||
	 terms6==1 && terms4==5 && terms8==9 ||
	 terms6==3 && terms4==5 && terms8==7 || 
	 terms6==8 && terms4==5 && terms8==2 || 
     terms6==7 && terms4==4 && terms8==1 ||
     terms6==3 && terms4==2 && terms8==1 ||
     terms6==6 && terms4==5 && terms8==4 || 
     terms6==9 && terms4==8 && terms8==7 || 
   	 terms6==9 && terms4==6 && terms8==3 ||
	 terms6==9 && terms4==5 && terms8==1 || 
	 terms6==7 && terms4==5 && terms8==3 || 
	 terms6==4 && terms4==7 && terms8==1 || 
	 terms6==5 && terms4==6 && terms8==4 || 
     terms6==8 && terms4==9 && terms8==7 || 
     terms6==2 && terms4==3 && terms8==1 || 
	 terms6==5 && terms4==8 && terms8==2 || 
	 terms6==6 && terms4==9 && terms8==3 || 
	 terms6==5 && terms4==9 && terms8==1 || 
	 terms6==5 && terms4==7 && terms8==3 || 
     terms6==4 && terms4==1 && terms8==7 || 
     terms6==2 && terms4==1 && terms8==3 || 
	 terms6==5 && terms4==4 && terms8==6 || 
	 terms6==8 && terms4==7 && terms8==9 || 
	 terms6==5 && terms4==2 && terms8==8 || 
	 terms6==6 && terms4==3 && terms8==9 || 
	 terms6==5 && terms4==1 && terms8==9 || 
	 terms6==5 && terms4==3 && terms8==7  )
 	{
 	printf("\n\t\t %s Win THE MATCH",secondPlayer);
	 }
  if(terms6==1 && terms8==4 && terms2==7 ||
	 terms6==1 && terms8==2 && terms2==3 ||
	 terms6==4 && terms8==5 && terms2==6 ||
	 terms6==7 && terms8==8 && terms2==9 || 
	 terms6==2 && terms8==5 && terms2==8 ||
	 terms6==3 && terms8==6 && terms2==9 ||
	 terms6==1 && terms8==5 && terms2==9 ||
	 terms6==3 && terms8==5 && terms2==7 || 
	 terms6==8 && terms8==5 && terms2==2 || 
     terms6==7 && terms8==4 && terms2==1 ||
     terms6==3 && terms8==2 && terms2==1 ||
     terms6==6 && terms8==5 && terms2==4 || 
     terms6==9 && terms8==8 && terms2==7 || 
   	 terms6==9 && terms8==6 && terms2==3 ||
	 terms6==9 && terms8==5 && terms2==1 || 
	 terms6==7 && terms8==5 && terms2==3 || 
	 terms6==4 && terms8==7 && terms2==1 || 
	 terms6==5 && terms8==6 && terms2==4 || 
     terms6==8 && terms8==9 && terms2==7 || 
     terms6==2 && terms8==3 && terms2==1 || 
	 terms6==5 && terms8==8 && terms2==2 || 
	 terms6==6 && terms8==9 && terms2==3 || 
	 terms6==5 && terms8==9 && terms2==1 || 
	 terms6==5 && terms8==7 && terms2==3 || 
     terms6==4 && terms8==1 && terms2==7 || 
     terms6==2 && terms8==1 && terms2==3 || 
	 terms6==5 && terms8==4 && terms2==6 || 
	 terms6==8 && terms8==7 && terms2==9 || 
	 terms6==5 && terms8==2 && terms2==8 || 
	 terms6==6 && terms8==3 && terms2==9 || 
	 terms6==5 && terms8==1 && terms2==9 || 
	 terms6==5 && terms8==3 && terms2==7  )
 	{
 	printf("\n\t\t %s Win THE MATCH",secondPlayer);
	 }

  if(terms6==1 && terms8==4 && terms4==7 ||
	 terms6==1 && terms8==2 && terms4==3 ||
	 terms6==4 && terms8==5 && terms4==6 ||
	 terms6==7 && terms8==8 && terms4==9 || 
	 terms6==2 && terms8==5 && terms4==8 ||
	 terms6==3 && terms8==6 && terms4==9 ||
	 terms6==1 && terms8==5 && terms4==9 ||
	 terms6==3 && terms8==5 && terms4==7 || 
	 terms6==8 && terms8==5 && terms4==2 || 
     terms6==7 && terms8==4 && terms4==1 ||
     terms6==3 && terms8==2 && terms4==1 ||
     terms6==6 && terms8==5 && terms4==4 || 
     terms6==9 && terms8==8 && terms4==7 || 
   	 terms6==9 && terms8==6 && terms4==3 ||
	 terms6==9 && terms8==5 && terms4==1 || 
	 terms6==7 && terms8==5 && terms4==3 || 
	 terms6==4 && terms8==7 && terms4==1 || 
	 terms6==5 && terms8==6 && terms4==4 || 
     terms6==8 && terms8==9 && terms4==7 || 
     terms6==2 && terms8==3 && terms4==1 || 
	 terms6==5 && terms8==8 && terms4==2 || 
	 terms6==6 && terms8==9 && terms4==3 || 
	 terms6==5 && terms8==9 && terms4==1 || 
	 terms6==5 && terms8==7 && terms4==3 || 
     terms6==4 && terms8==1 && terms4==7 || 
     terms6==2 && terms8==1 && terms4==3 || 
	 terms6==5 && terms8==4 && terms4==6 || 
	 terms6==8 && terms8==7 && terms4==9 || 
	 terms6==5 && terms8==2 && terms4==8 || 
	 terms6==6 && terms8==3 && terms4==9 || 
	 terms6==5 && terms8==1 && terms4==9 || 
	 terms6==5 && terms8==3 && terms4==7  )
 	{
 	printf("\n\t\t %s Win THE MATCH",secondPlayer);
	 }

  if(terms6==1 && terms2==4 && terms8==7 ||
	 terms6==1 && terms2==2 && terms8==3 ||
	 terms6==4 && terms2==5 && terms8==6 ||
	 terms6==7 && terms2==8 && terms8==9 || 
	 terms6==2 && terms2==5 && terms8==8 ||
	 terms6==3 && terms2==6 && terms8==9 ||
	 terms6==1 && terms2==5 && terms8==9 ||
	 terms6==3 && terms2==5 && terms8==7 || 
	 terms6==8 && terms2==5 && terms8==2 || 
     terms6==7 && terms2==4 && terms8==1 ||
     terms6==3 && terms2==2 && terms8==1 ||
     terms6==6 && terms2==5 && terms8==4 || 
     terms6==9 && terms2==8 && terms8==7 || 
   	 terms6==9 && terms2==6 && terms8==3 ||
	 terms6==9 && terms2==5 && terms8==1 || 
	 terms6==7 && terms2==5 && terms8==3 || 
	 terms6==4 && terms2==7 && terms8==1 || 
	 terms6==5 && terms2==6 && terms8==4 || 
     terms6==8 && terms2==9 && terms8==7 || 
     terms6==2 && terms2==3 && terms8==1 || 
	 terms6==5 && terms2==8 && terms8==2 || 
	 terms6==6 && terms2==9 && terms8==3 || 
	 terms6==5 && terms2==9 && terms8==1 || 
	 terms6==5 && terms2==7 && terms8==3 || 
     terms6==4 && terms2==1 && terms8==7 || 
     terms6==2 && terms2==1 && terms8==3 || 
	 terms6==5 && terms2==4 && terms8==6 || 
	 terms6==8 && terms2==7 && terms8==9 || 
	 terms6==5 && terms2==2 && terms8==8 || 
	 terms6==6 && terms2==3 && terms8==9 || 
	 terms6==5 && terms2==1 && terms8==9 || 
	 terms6==5 && terms2==3 && terms8==7  )
 	{
 	printf("\n\t\t %s Win THE MATCH",secondPlayer);
	 }

  if(terms6==1 && terms4==4 && terms8==7 ||
	 terms6==1 && terms4==2 && terms8==3 ||
	 terms6==4 && terms4==5 && terms8==6 ||
	 terms6==7 && terms4==8 && terms8==9 || 
	 terms6==2 && terms4==5 && terms8==8 ||
	 terms6==3 && terms4==6 && terms8==9 ||
	 terms6==1 && terms4==5 && terms8==9 ||
	 terms6==3 && terms4==5 && terms8==7 || 
	 terms6==8 && terms4==5 && terms8==2 || 
     terms6==7 && terms4==4 && terms8==1 ||
     terms6==3 && terms4==2 && terms8==1 ||
     terms6==6 && terms4==5 && terms8==4 || 
     terms6==9 && terms4==8 && terms8==7 || 
   	 terms6==9 && terms4==6 && terms8==3 ||
	 terms6==9 && terms4==5 && terms8==1 || 
	 terms6==7 && terms4==5 && terms8==3 || 
	 terms6==4 && terms4==7 && terms8==1 || 
	 terms6==5 && terms4==6 && terms8==4 || 
     terms6==8 && terms4==9 && terms8==7 || 
     terms6==2 && terms4==3 && terms8==1 || 
	 terms6==5 && terms4==8 && terms8==2 || 
	 terms6==6 && terms4==9 && terms8==3 || 
	 terms6==5 && terms4==9 && terms8==1 || 
	 terms6==5 && terms4==7 && terms8==3 || 
     terms6==4 && terms4==1 && terms8==7 || 
     terms6==2 && terms4==1 && terms8==3 || 
	 terms6==5 && terms4==4 && terms8==6 || 
	 terms6==8 && terms4==7 && terms8==9 || 
	 terms6==5 && terms4==2 && terms8==8 || 
	 terms6==6 && terms4==3 && terms8==9 || 
	 terms6==5 && terms4==1 && terms8==9 || 
	 terms6==5 && terms4==3 && terms8==7  )
 	{
 	printf("\n\t\t %s Win THE MATCH",secondPlayer);
	 }

  if(terms6==1 && terms8==4 && terms2==7 ||
	 terms6==1 && terms8==2 && terms2==3 ||
	 terms6==4 && terms8==5 && terms2==6 ||
	 terms6==7 && terms8==8 && terms2==9 || 
	 terms6==2 && terms8==5 && terms2==8 ||
	 terms6==3 && terms8==6 && terms2==9 ||
	 terms6==1 && terms8==5 && terms2==9 ||
	 terms6==3 && terms8==5 && terms2==7 || 
	 terms6==8 && terms8==5 && terms2==2 || 
     terms6==7 && terms8==4 && terms2==1 ||
     terms6==3 && terms8==2 && terms2==1 ||
     terms6==6 && terms8==5 && terms2==4 || 
     terms6==9 && terms8==8 && terms2==7 || 
   	 terms6==9 && terms8==6 && terms2==3 ||
	 terms6==9 && terms8==5 && terms2==1 || 
	 terms6==7 && terms8==5 && terms2==3 || 
	 terms6==4 && terms8==7 && terms2==1 || 
	 terms6==5 && terms8==6 && terms2==4 || 
     terms6==8 && terms8==9 && terms2==7 || 
     terms6==2 && terms8==3 && terms2==1 || 
	 terms6==5 && terms8==8 && terms2==2 || 
	 terms6==6 && terms8==9 && terms2==3 || 
	 terms6==5 && terms8==9 && terms2==1 || 
	 terms6==5 && terms8==7 && terms2==3 || 
     terms6==4 && terms8==1 && terms2==7 || 
     terms6==2 && terms8==1 && terms2==3 || 
	 terms6==5 && terms8==4 && terms2==6 || 
	 terms6==8 && terms8==7 && terms2==9 || 
	 terms6==5 && terms8==2 && terms2==8 || 
	 terms6==6 && terms8==3 && terms2==9 || 
	 terms6==5 && terms8==1 && terms2==9 || 
	 terms6==5 && terms8==3 && terms2==7  )
 	{
 	printf("\n\t\t %s Win THE MATCH",secondPlayer);
	 }

  if(terms6==1 && terms8==4 && terms4==7 ||
	 terms6==1 && terms8==2 && terms4==3 ||
	 terms6==4 && terms8==5 && terms4==6 ||
	 terms6==7 && terms8==8 && terms4==9 || 
	 terms6==2 && terms8==5 && terms4==8 ||
	 terms6==3 && terms8==6 && terms4==9 ||
	 terms6==1 && terms8==5 && terms4==9 ||
	 terms6==3 && terms8==5 && terms4==7 || 
	 terms6==8 && terms8==5 && terms4==2 || 
     terms6==7 && terms8==4 && terms4==1 ||
     terms6==3 && terms8==2 && terms4==1 ||
     terms6==6 && terms8==5 && terms4==4 || 
     terms6==9 && terms8==8 && terms4==7 || 
   	 terms6==9 && terms8==6 && terms4==3 ||
	 terms6==9 && terms8==5 && terms4==1 || 
	 terms6==7 && terms8==5 && terms4==3 || 
	 terms6==4 && terms8==7 && terms4==1 || 
	 terms6==5 && terms8==6 && terms4==4 || 
     terms6==8 && terms8==9 && terms4==7 || 
     terms6==2 && terms8==3 && terms4==1 || 
	 terms6==5 && terms8==8 && terms4==2 || 
	 terms6==6 && terms8==9 && terms4==3 || 
	 terms6==5 && terms8==9 && terms4==1 || 
	 terms6==5 && terms8==7 && terms4==3 || 
     terms6==4 && terms8==1 && terms4==7 || 
     terms6==2 && terms8==1 && terms4==3 || 
	 terms6==5 && terms8==4 && terms4==6 || 
	 terms6==8 && terms8==7 && terms4==9 || 
	 terms6==5 && terms8==2 && terms4==8 || 
	 terms6==6 && terms8==3 && terms4==9 || 
	 terms6==5 && terms8==1 && terms4==9 || 
	 terms6==5 && terms8==3 && terms4==7  )
 	{
 	printf("\n\t\t %s Win THE MATCH",secondPlayer);
	 }

   else{
	printf("\t\t\n\n\t\t%s terms -",firstPlayer);
	scanf("%d",&terms9);	

	printf("\n\n\n\n");
   	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			//printf("\t\t\t");
			
			if(puzzle[i][j]==terms1){
		    
			printf(" \tX |");
			//printf("---");		
			}
			else if(puzzle[i][j]==terms2){
				printf(" \tO |");
			}
			else if(puzzle[i][j]==terms3){
				printf(" \tX |");
			}
			else if(puzzle[i][j]==terms4){
				printf(" \tO |");
			}
			else if(puzzle[i][j]==terms5){
				printf(" \tX |");
			}
			else if(puzzle[i][j]==terms6){
				printf(" \tO |");
			}
			else if(puzzle[i][j]==terms7){
				printf(" \tX |");
			}
			else if(puzzle[i][j]==terms8){
				printf(" \tO |");
			}
			else if(puzzle[i][j]==terms9){
				printf(" \tX |");
			}																		
			else	
			printf(" \t%d |",puzzle[i][j]);
			//printf("---");
		}
		printf("\n\t--------------------");
		printf("\n");
	}
	
  if(terms1==1 && terms3==4 && terms9==7 ||
	 terms1==1 && terms3==2 && terms9==3 ||
	 terms1==4 && terms3==5 && terms9==6 ||
	 terms1==7 && terms3==8 && terms9==9 || 
	 terms1==2 && terms3==5 && terms9==8 ||
	 terms1==3 && terms3==6 && terms9==9 ||
	 terms1==1 && terms3==5 && terms9==9 ||
	 terms1==3 && terms3==5 && terms9==7 || 
	 terms1==8 && terms3==5 && terms9==2 || 
     terms1==7 && terms3==4 && terms9==1 ||
     terms1==3 && terms3==2 && terms9==1 ||
     terms1==6 && terms3==5 && terms9==4 || 
     terms1==9 && terms3==8 && terms9==7 || 
   	 terms1==9 && terms3==6 && terms9==3 ||
	 terms1==9 && terms3==5 && terms9==1 || 
	 terms1==7 && terms3==5 && terms9==3 || 
	 terms1==4 && terms3==7 && terms9==1 || 
	 terms1==5 && terms3==6 && terms9==4 || 
     terms1==8 && terms3==9 && terms9==7 || 
     terms1==2 && terms3==3 && terms9==1 || 
	 terms1==5 && terms3==8 && terms9==2 || 
	 terms1==6 && terms3==9 && terms9==3 || 
	 terms1==5 && terms3==9 && terms9==1 || 
	 terms1==5 && terms3==7 && terms9==3 || 
     terms1==4 && terms3==1 && terms9==7 || 
     terms1==2 && terms3==1 && terms9==3 || 
	 terms1==5 && terms3==4 && terms9==6 || 
	 terms1==8 && terms3==7 && terms9==9 || 
	 terms1==5 && terms3==2 && terms9==8 || 
	 terms1==6 && terms3==3 && terms9==9 || 
	 terms1==5 && terms3==1 && terms9==9 || 
	 terms1==5 && terms3==3 && terms9==7  )
 	{
 	printf("\n\t\t %s Win THE MATCH",firstPlayer);
	 }
else if(terms1==1 && terms5==4 && terms9==7 ||
	 terms1==1 && terms5==2 && terms9==3 ||
	 terms1==4 && terms5==5 && terms9==6 ||
	 terms1==7 && terms5==8 && terms9==9 || 
	 terms1==2 && terms5==5 && terms9==8 ||
	 terms1==3 && terms5==6 && terms9==9 ||
	 terms1==1 && terms5==5 && terms9==9 ||
	 terms1==3 && terms5==5 && terms9==7 || 
	 terms1==8 && terms5==5 && terms9==2 || 
     terms1==7 && terms5==4 && terms9==1 ||
     terms1==3 && terms5==2 && terms9==1 ||
     terms1==6 && terms5==5 && terms9==4 || 
     terms1==9 && terms5==8 && terms9==7 || 
   	 terms1==9 && terms5==6 && terms9==3 ||
	 terms1==9 && terms5==5 && terms9==1 || 
	 terms1==7 && terms5==5 && terms9==3 || 
	 terms1==4 && terms5==7 && terms9==1 || 
	 terms1==5 && terms5==6 && terms9==4 || 
     terms1==8 && terms5==9 && terms9==7 || 
     terms1==2 && terms5==3 && terms9==1 || 
	 terms1==5 && terms5==8 && terms9==2 || 
	 terms1==6 && terms5==9 && terms9==3 || 
	 terms1==5 && terms5==9 && terms9==1 || 
	 terms1==5 && terms5==7 && terms9==3 || 
     terms1==4 && terms5==1 && terms9==7 || 
     terms1==2 && terms5==1 && terms9==3 || 
	 terms1==5 && terms5==4 && terms9==6 || 
	 terms1==8 && terms5==7 && terms9==9 || 
	 terms1==5 && terms5==2 && terms9==8 || 
	 terms1==6 && terms5==3 && terms9==9 || 
	 terms1==5 && terms5==1 && terms9==9 || 
	 terms1==5 && terms5==3 && terms9==7  )
 	{
 	printf("\n\t\t %s Win THE MATCH",firstPlayer);
	 } 

 else if(terms1==1 && terms7==4 && terms9==7 ||
	 terms1==1 && terms7==2 && terms9==3 ||
	 terms1==4 && terms7==5 && terms9==6 ||
	 terms1==7 && terms7==8 && terms9==9 || 
	 terms1==2 && terms7==5 && terms9==8 ||
	 terms1==3 && terms7==6 && terms9==9 ||
	 terms1==1 && terms7==5 && terms9==9 ||
	 terms1==3 && terms7==5 && terms9==7 || 
	 terms1==8 && terms7==5 && terms9==2 || 
     terms1==7 && terms7==4 && terms9==1 ||
     terms1==3 && terms7==2 && terms9==1 ||
     terms1==6 && terms7==5 && terms9==4 || 
     terms1==9 && terms7==8 && terms9==7 || 
   	 terms1==9 && terms7==6 && terms9==3 ||
	 terms1==9 && terms7==5 && terms9==1 || 
	 terms1==7 && terms7==5 && terms9==3 || 
	 terms1==4 && terms7==7 && terms9==1 || 
	 terms1==5 && terms7==6 && terms9==4 || 
     terms1==8 && terms7==9 && terms9==7 || 
     terms1==2 && terms7==3 && terms9==1 || 
	 terms1==5 && terms7==8 && terms9==2 || 
	 terms1==6 && terms7==9 && terms9==3 || 
	 terms1==5 && terms7==9 && terms9==1 || 
	 terms1==5 && terms7==7 && terms9==3 || 
     terms1==4 && terms7==1 && terms9==7 || 
     terms1==2 && terms7==1 && terms9==3 || 
	 terms1==5 && terms7==4 && terms9==6 || 
	 terms1==8 && terms7==7 && terms9==9 || 
	 terms1==5 && terms7==2 && terms9==8 || 
	 terms1==6 && terms7==3 && terms9==9 || 
	 terms1==5 && terms7==1 && terms9==9 || 
	 terms1==5 && terms7==3 && terms9==7  )
 	{
 	printf("\n\t\t %s Win THE MATCH",firstPlayer);
	 }

 else if(terms1==1 && terms9==4 && terms3==7 ||
	 terms1==1 && terms9==2 && terms3==3 ||
	 terms1==4 && terms9==5 && terms3==6 ||
	 terms1==7 && terms9==8 && terms3==9 || 
	 terms1==2 && terms9==5 && terms3==8 ||
	 terms1==3 && terms9==6 && terms3==9 ||
	 terms1==1 && terms9==5 && terms3==9 ||
	 terms1==3 && terms9==5 && terms3==7 || 
	 terms1==8 && terms9==5 && terms3==2 || 
     terms1==7 && terms9==4 && terms3==1 ||
     terms1==3 && terms9==2 && terms3==1 ||
     terms1==6 && terms9==5 && terms3==4 || 
     terms1==9 && terms9==8 && terms3==7 || 
   	 terms1==9 && terms9==6 && terms3==3 ||
	 terms1==9 && terms9==5 && terms3==1 || 
	 terms1==7 && terms9==5 && terms3==3 || 
	 terms1==4 && terms9==7 && terms3==1 || 
	 terms1==5 && terms9==6 && terms3==4 || 
     terms1==8 && terms9==9 && terms3==7 || 
     terms1==2 && terms9==3 && terms3==1 || 
	 terms1==5 && terms9==8 && terms3==2 || 
	 terms1==6 && terms9==9 && terms3==3 || 
	 terms1==5 && terms9==9 && terms3==1 || 
	 terms1==5 && terms9==7 && terms3==3 || 
     terms1==4 && terms9==1 && terms3==7 || 
     terms1==2 && terms9==1 && terms3==3 || 
	 terms1==5 && terms9==4 && terms3==6 || 
	 terms1==8 && terms9==7 && terms3==9 || 
	 terms1==5 && terms9==2 && terms3==8 || 
	 terms1==6 && terms9==3 && terms3==9 || 
	 terms1==5 && terms9==1 && terms3==9 || 
	 terms1==5 && terms9==3 && terms3==7  )
 	{
 	printf("\n\t\t %s Win THE MATCH",firstPlayer);
	 }

 else if(terms1==1 && terms9==4 && terms5==7 ||
	 terms1==1 && terms9==2 && terms5==3 ||
	 terms1==4 && terms9==5 && terms5==6 ||
	 terms1==7 && terms9==8 && terms5==9 || 
	 terms1==2 && terms9==5 && terms5==8 ||
	 terms1==3 && terms9==6 && terms5==9 ||
	 terms1==1 && terms9==5 && terms5==9 ||
	 terms1==3 && terms9==5 && terms5==7 || 
	 terms1==8 && terms9==5 && terms5==2 || 
     terms1==7 && terms9==4 && terms5==1 ||
     terms1==3 && terms9==2 && terms5==1 ||
     terms1==6 && terms9==5 && terms5==4 || 
     terms1==9 && terms9==8 && terms5==7 || 
   	 terms1==9 && terms9==6 && terms5==3 ||
	 terms1==9 && terms9==5 && terms5==1 || 
	 terms1==7 && terms9==5 && terms5==3 || 
	 terms1==4 && terms9==7 && terms5==1 || 
	 terms1==5 && terms9==6 && terms5==4 || 
     terms1==8 && terms9==9 && terms5==7 || 
     terms1==2 && terms9==3 && terms5==1 || 
	 terms1==5 && terms9==8 && terms5==2 || 
	 terms1==6 && terms9==9 && terms5==3 || 
	 terms1==5 && terms9==9 && terms5==1 || 
	 terms1==5 && terms9==7 && terms5==3 || 
     terms1==4 && terms9==1 && terms5==7 || 
     terms1==2 && terms9==1 && terms5==3 || 
	 terms1==5 && terms9==4 && terms5==6 || 
	 terms1==8 && terms9==7 && terms5==9 || 
	 terms1==5 && terms9==2 && terms5==8 || 
	 terms1==6 && terms9==3 && terms5==9 || 
	 terms1==5 && terms9==1 && terms5==9 || 
	 terms1==5 && terms9==3 && terms5==7  )
 	{
 	printf("\n\t\t %s Win THE MATCH",firstPlayer);
	 }

 else if(terms1==1 && terms9==4 && terms7==7 ||
	 terms1==1 && terms9==2 && terms7==3 ||
	 terms1==4 && terms9==5 && terms7==6 ||
	 terms1==7 && terms9==8 && terms7==9 || 
	 terms1==2 && terms9==5 && terms7==8 ||
	 terms1==3 && terms9==6 && terms7==9 ||
	 terms1==1 && terms9==5 && terms7==9 ||
	 terms1==3 && terms9==5 && terms7==7 || 
	 terms1==8 && terms9==5 && terms7==2 || 
     terms1==7 && terms9==4 && terms7==1 ||
     terms1==3 && terms9==2 && terms7==1 ||
     terms1==6 && terms9==5 && terms7==4 || 
     terms1==9 && terms9==8 && terms7==7 || 
   	 terms1==9 && terms9==6 && terms7==3 ||
	 terms1==9 && terms9==5 && terms7==1 || 
	 terms1==7 && terms9==5 && terms7==3 || 
	 terms1==4 && terms9==7 && terms7==1 || 
	 terms1==5 && terms9==6 && terms7==4 || 
     terms1==8 && terms9==9 && terms7==7 || 
     terms1==2 && terms9==3 && terms7==1 || 
	 terms1==5 && terms9==8 && terms7==2 || 
	 terms1==6 && terms9==9 && terms7==3 || 
	 terms1==5 && terms9==9 && terms7==1 || 
	 terms1==5 && terms9==7 && terms7==3 || 
     terms1==4 && terms9==1 && terms7==7 || 
     terms1==2 && terms9==1 && terms7==3 || 
	 terms1==5 && terms9==4 && terms7==6 || 
	 terms1==8 && terms9==7 && terms7==9 || 
	 terms1==5 && terms9==2 && terms7==8 || 
	 terms1==6 && terms9==3 && terms7==9 || 
	 terms1==5 && terms9==1 && terms7==9 || 
	 terms1==5 && terms9==3 && terms7==7  )
 	{
 	printf("\n\t\t %s Win THE MATCH",firstPlayer);
	 }

 else if(terms3==1 && terms1==4 && terms9==7 ||
	 terms3==1 && terms1==2 && terms9==3 ||
	 terms3==4 && terms1==5 && terms9==6 ||
	 terms3==7 && terms1==8 && terms9==9 || 
	 terms3==2 && terms1==5 && terms9==8 ||
	 terms3==3 && terms1==6 && terms9==9 ||
	 terms3==1 && terms1==5 && terms9==9 ||
	 terms3==3 && terms1==5 && terms9==7 || 
	 terms3==8 && terms1==5 && terms9==2 || 
     terms3==7 && terms1==4 && terms9==1 ||
     terms3==3 && terms1==2 && terms9==1 ||
     terms3==6 && terms1==5 && terms9==4 || 
     terms3==9 && terms1==8 && terms9==7 || 
   	 terms3==9 && terms1==6 && terms9==3 ||
	 terms3==9 && terms1==5 && terms9==1 || 
	 terms3==7 && terms1==5 && terms9==3 || 
	 terms3==4 && terms1==7 && terms9==1 || 
	 terms3==5 && terms1==6 && terms9==4 || 
     terms3==8 && terms1==9 && terms9==7 || 
     terms3==2 && terms1==3 && terms9==1 || 
	 terms3==5 && terms1==8 && terms9==2 || 
	 terms3==6 && terms1==9 && terms9==3 || 
	 terms3==5 && terms1==9 && terms9==1 || 
	 terms3==5 && terms1==7 && terms9==3 || 
     terms3==4 && terms1==1 && terms9==7 || 
     terms3==2 && terms1==1 && terms9==3 || 
	 terms3==5 && terms1==4 && terms9==6 || 
	 terms3==8 && terms1==7 && terms9==9 || 
	 terms3==5 && terms1==2 && terms9==8 || 
	 terms3==6 && terms1==3 && terms9==9 || 
	 terms3==5 && terms1==1 && terms9==9 || 
	 terms3==5 && terms1==3 && terms9==7  )
 	{
 	printf("\n\t\t %s Win THE MATCH",firstPlayer);
	 }

else if(terms3==1 && terms5==4 && terms9==7 ||
	 terms3==1 && terms5==2 && terms9==3 ||
	 terms3==4 && terms5==5 && terms9==6 ||
	 terms3==7 && terms5==8 && terms9==9 || 
	 terms3==2 && terms5==5 && terms9==8 ||
	 terms3==3 && terms5==6 && terms9==9 ||
	 terms3==1 && terms5==5 && terms9==9 ||
	 terms3==3 && terms5==5 && terms9==7 || 
	 terms3==8 && terms5==5 && terms9==2 || 
     terms3==7 && terms5==4 && terms9==1 ||
     terms3==3 && terms5==2 && terms9==1 ||
     terms3==6 && terms5==5 && terms9==4 || 
     terms3==9 && terms5==8 && terms9==7 || 
   	 terms3==9 && terms5==6 && terms9==3 ||
	 terms3==9 && terms5==5 && terms9==1 || 
	 terms3==7 && terms5==5 && terms9==3 || 
	 terms3==4 && terms5==7 && terms9==1 || 
	 terms3==5 && terms5==6 && terms9==4 || 
     terms3==8 && terms5==9 && terms9==7 || 
     terms3==2 && terms5==3 && terms9==1 || 
	 terms3==5 && terms5==8 && terms9==2 || 
	 terms3==6 && terms5==9 && terms9==3 || 
	 terms3==5 && terms5==9 && terms9==1 || 
	 terms3==5 && terms5==7 && terms9==3 || 
     terms3==4 && terms5==1 && terms9==7 || 
     terms3==2 && terms5==1 && terms9==3 || 
	 terms3==5 && terms5==4 && terms9==6 || 
	 terms3==8 && terms5==7 && terms9==9 || 
	 terms3==5 && terms5==2 && terms9==8 || 
	 terms3==6 && terms5==3 && terms9==9 || 
	 terms3==5 && terms5==1 && terms9==9 || 
	 terms3==5 && terms5==3 && terms9==7  )
 	{
 	printf("\n\t\t %s Win THE MATCH",firstPlayer);
	 }

 else if(terms3==1 && terms7==4 && terms9==7 ||
	 terms3==1 && terms7==2 && terms9==3 ||
	 terms3==4 && terms7==5 && terms9==6 ||
	 terms3==7 && terms7==8 && terms9==9 || 
	 terms3==2 && terms7==5 && terms9==8 ||
	 terms3==3 && terms7==6 && terms9==9 ||
	 terms3==1 && terms7==5 && terms9==9 ||
	 terms3==3 && terms7==5 && terms9==7 || 
	 terms3==8 && terms7==5 && terms9==2 || 
     terms3==7 && terms7==4 && terms9==1 ||
     terms3==3 && terms7==2 && terms9==1 ||
     terms3==6 && terms7==5 && terms9==4 || 
     terms3==9 && terms7==8 && terms9==7 || 
   	 terms3==9 && terms7==6 && terms9==3 ||
	 terms3==9 && terms7==5 && terms9==1 || 
	 terms3==7 && terms7==5 && terms9==3 || 
	 terms3==4 && terms7==7 && terms9==1 || 
	 terms3==5 && terms7==6 && terms9==4 || 
     terms3==8 && terms7==9 && terms9==7 || 
     terms3==2 && terms7==3 && terms9==1 || 
	 terms3==5 && terms7==8 && terms9==2 || 
	 terms3==6 && terms7==9 && terms9==3 || 
	 terms3==5 && terms7==9 && terms9==1 || 
	 terms3==5 && terms7==7 && terms9==3 || 
     terms3==4 && terms7==1 && terms9==7 || 
     terms3==2 && terms7==1 && terms9==3 || 
	 terms3==5 && terms7==4 && terms9==6 || 
	 terms3==8 && terms7==7 && terms9==9 || 
	 terms3==5 && terms7==2 && terms9==8 || 
	 terms3==6 && terms7==3 && terms9==9 || 
	 terms3==5 && terms7==1 && terms9==9 || 
	 terms3==5 && terms7==3 && terms9==7  )
 	{
 	printf("\n\t\t %s Win THE MATCH",firstPlayer);
	 }	 	 

 else if(terms3==1 && terms9==4 && terms1==7 ||
	 terms3==1 && terms9==2 && terms1==3 ||
	 terms3==4 && terms9==5 && terms1==6 ||
	 terms3==7 && terms9==8 && terms1==9 || 
	 terms3==2 && terms9==5 && terms1==8 ||
	 terms3==3 && terms9==6 && terms1==9 ||
	 terms3==1 && terms9==5 && terms1==9 ||
	 terms3==3 && terms9==5 && terms1==7 || 
	 terms3==8 && terms9==5 && terms1==2 || 
     terms3==7 && terms9==4 && terms1==1 ||
     terms3==3 && terms9==2 && terms1==1 ||
     terms3==6 && terms9==5 && terms1==4 || 
     terms3==9 && terms9==8 && terms1==7 || 
   	 terms3==9 && terms9==6 && terms1==3 ||
	 terms3==9 && terms9==5 && terms1==1 || 
	 terms3==7 && terms9==5 && terms1==3 || 
	 terms3==4 && terms9==7 && terms1==1 || 
	 terms3==5 && terms9==6 && terms1==4 || 
     terms3==8 && terms9==9 && terms1==7 || 
     terms3==2 && terms9==3 && terms1==1 || 
	 terms3==5 && terms9==8 && terms1==2 || 
	 terms3==6 && terms9==9 && terms1==3 || 
	 terms3==5 && terms9==9 && terms1==1 || 
	 terms3==5 && terms9==7 && terms1==3 || 
     terms3==4 && terms9==1 && terms1==7 || 
     terms3==2 && terms9==1 && terms1==3 || 
	 terms3==5 && terms9==4 && terms1==6 || 
	 terms3==8 && terms9==7 && terms1==9 || 
	 terms3==5 && terms9==2 && terms1==8 || 
	 terms3==6 && terms9==3 && terms1==9 || 
	 terms3==5 && terms9==1 && terms1==9 || 
	 terms3==5 && terms9==3 && terms1==7  )
 	{
 	printf("\n\t\t %s Win THE MATCH",firstPlayer);
	 }

 else if(terms3==1 && terms9==4 && terms5==7 ||
	 terms3==1 && terms9==2 && terms5==3 ||
	 terms3==4 && terms9==5 && terms5==6 ||
	 terms3==7 && terms9==8 && terms5==9 || 
	 terms3==2 && terms9==5 && terms5==8 ||
	 terms3==3 && terms9==6 && terms5==9 ||
	 terms3==1 && terms9==5 && terms5==9 ||
	 terms3==3 && terms9==5 && terms5==7 || 
	 terms3==8 && terms9==5 && terms5==2 || 
     terms3==7 && terms9==4 && terms5==1 ||
     terms3==3 && terms9==2 && terms5==1 ||
     terms3==6 && terms9==5 && terms5==4 || 
     terms3==9 && terms9==8 && terms5==7 || 
   	 terms3==9 && terms9==6 && terms5==3 ||
	 terms3==9 && terms9==5 && terms5==1 || 
	 terms3==7 && terms9==5 && terms5==3 || 
	 terms3==4 && terms9==7 && terms5==1 || 
	 terms3==5 && terms9==6 && terms5==4 || 
     terms3==8 && terms9==9 && terms5==7 || 
     terms3==2 && terms9==3 && terms5==1 || 
	 terms3==5 && terms9==8 && terms5==2 || 
	 terms3==6 && terms9==9 && terms5==3 || 
	 terms3==5 && terms9==9 && terms5==1 || 
	 terms3==5 && terms9==7 && terms5==3 || 
     terms3==4 && terms9==1 && terms5==7 || 
     terms3==2 && terms9==1 && terms5==3 || 
	 terms3==5 && terms9==4 && terms5==6 || 
	 terms3==8 && terms9==7 && terms5==9 || 
	 terms3==5 && terms9==2 && terms5==8 || 
	 terms3==6 && terms9==3 && terms5==9 || 
	 terms3==5 && terms9==1 && terms5==9 || 
	 terms3==5 && terms9==3 && terms5==7  )
 	{
 	printf("\n\t\t %s Win THE MATCH",firstPlayer);
	 }
 else if(terms3==1 && terms9==4 && terms7==7 ||
	 terms3==1 && terms9==2 && terms7==3 ||
	 terms3==4 && terms9==5 && terms7==6 ||
	 terms3==7 && terms9==8 && terms7==9 || 
	 terms3==2 && terms9==5 && terms7==8 ||
	 terms3==3 && terms9==6 && terms7==9 ||
	 terms3==1 && terms9==5 && terms7==9 ||
	 terms3==3 && terms9==5 && terms7==7 || 
	 terms3==8 && terms9==5 && terms7==2 || 
     terms3==7 && terms9==4 && terms7==1 ||
     terms3==3 && terms9==2 && terms7==1 ||
     terms3==6 && terms9==5 && terms7==4 || 
     terms3==9 && terms9==8 && terms7==7 || 
   	 terms3==9 && terms9==6 && terms7==3 ||
	 terms3==9 && terms9==5 && terms7==1 || 
	 terms3==7 && terms9==5 && terms7==3 || 
	 terms3==4 && terms9==7 && terms7==1 || 
	 terms3==5 && terms9==6 && terms7==4 || 
     terms3==8 && terms9==9 && terms7==7 || 
     terms3==2 && terms9==3 && terms7==1 || 
	 terms3==5 && terms9==8 && terms7==2 || 
	 terms3==6 && terms9==9 && terms7==3 || 
	 terms3==5 && terms9==9 && terms7==1 || 
	 terms3==5 && terms9==7 && terms7==3 || 
     terms3==4 && terms9==1 && terms7==7 || 
     terms3==2 && terms9==1 && terms7==3 || 
	 terms3==5 && terms9==4 && terms7==6 || 
	 terms3==8 && terms9==7 && terms7==9 || 
	 terms3==5 && terms9==2 && terms7==8 || 
	 terms3==6 && terms9==3 && terms7==9 || 
	 terms3==5 && terms9==1 && terms7==9 || 
	 terms3==5 && terms9==3 && terms7==7  )
 	{
 	printf("\n\t\t %s Win THE MATCH",firstPlayer);
	 }

else if(terms5==1 && terms1==4 && terms9==7 ||
	 terms5==1 && terms1==2 && terms9==3 ||
	 terms5==4 && terms1==5 && terms9==6 ||
	 terms5==7 && terms1==8 && terms9==9 || 
	 terms5==2 && terms1==5 && terms9==8 ||
	 terms5==3 && terms1==6 && terms9==9 ||
	 terms5==1 && terms1==5 && terms9==9 ||
	 terms5==3 && terms1==5 && terms9==7 || 
	 terms5==8 && terms1==5 && terms9==2 || 
     terms5==7 && terms1==4 && terms9==1 ||
     terms5==3 && terms1==2 && terms9==1 ||
     terms5==6 && terms1==5 && terms9==4 || 
     terms5==9 && terms1==8 && terms9==7 || 
   	 terms5==9 && terms1==6 && terms9==3 ||
	 terms5==9 && terms1==5 && terms9==1 || 
	 terms5==7 && terms1==5 && terms9==3 || 
	 terms5==4 && terms1==7 && terms9==1 || 
	 terms5==5 && terms1==6 && terms9==4 || 
     terms5==8 && terms1==9 && terms9==7 || 
     terms5==2 && terms1==3 && terms9==1 || 
	 terms5==5 && terms1==8 && terms9==2 || 
	 terms5==6 && terms1==9 && terms9==3 || 
	 terms5==5 && terms1==9 && terms9==1 || 
	 terms5==5 && terms1==7 && terms9==3 || 
     terms5==4 && terms1==1 && terms9==7 || 
     terms5==2 && terms1==1 && terms9==3 || 
	 terms5==5 && terms1==4 && terms9==6 || 
	 terms5==8 && terms1==7 && terms9==9 || 
	 terms5==5 && terms1==2 && terms9==8 || 
	 terms5==6 && terms1==3 && terms9==9 || 
	 terms5==5 && terms1==1 && terms9==9 || 
	 terms5==5 && terms1==3 && terms9==7  )
 	{
 	printf("\n\t\t %s Win THE MATCH",firstPlayer);
	 }

 else if(terms5==1 && terms3==4 && terms9==7 ||
	 terms5==1 && terms3==2 && terms9==3 ||
	 terms5==4 && terms3==5 && terms9==6 ||
	 terms5==7 && terms3==8 && terms9==9 || 
	 terms5==2 && terms3==5 && terms9==8 ||
	 terms5==3 && terms3==6 && terms9==9 ||
	 terms5==1 && terms3==5 && terms9==9 ||
	 terms5==3 && terms3==5 && terms9==7 || 
	 terms5==8 && terms3==5 && terms9==2 || 
     terms5==7 && terms3==4 && terms9==1 ||
     terms5==3 && terms3==2 && terms9==1 ||
     terms5==6 && terms3==5 && terms9==4 || 
     terms5==9 && terms3==8 && terms9==7 || 
   	 terms5==9 && terms3==6 && terms9==3 ||
	 terms5==9 && terms3==5 && terms9==1 || 
	 terms5==7 && terms3==5 && terms9==3 || 
	 terms5==4 && terms3==7 && terms9==1 || 
	 terms5==5 && terms3==6 && terms9==4 || 
     terms5==8 && terms3==9 && terms9==7 || 
     terms5==2 && terms3==3 && terms9==1 || 
	 terms5==5 && terms3==8 && terms9==2 || 
	 terms5==6 && terms3==9 && terms9==3 || 
	 terms5==5 && terms3==9 && terms9==1 || 
	 terms5==5 && terms3==7 && terms9==3 || 
     terms5==4 && terms3==1 && terms9==7 || 
     terms5==2 && terms3==1 && terms9==3 || 
	 terms5==5 && terms3==4 && terms9==6 || 
	 terms5==8 && terms3==7 && terms9==9 || 
	 terms5==5 && terms3==2 && terms9==8 || 
	 terms5==6 && terms3==3 && terms9==9 || 
	 terms5==5 && terms3==1 && terms9==9 || 
	 terms5==5 && terms3==3 && terms9==7  )
 	{
 	printf("\n\t\t %s Win THE MATCH",firstPlayer);
	 }

else if(terms5==1 && terms7==4 && terms9==7 ||
	 terms5==1 && terms7==2 && terms9==3 ||
	 terms5==4 && terms7==5 && terms9==6 ||
	 terms5==7 && terms7==8 && terms9==9 || 
	 terms5==2 && terms7==5 && terms9==8 ||
	 terms5==3 && terms7==6 && terms9==9 ||
	 terms5==1 && terms7==5 && terms9==9 ||
	 terms5==3 && terms7==5 && terms9==7 || 
	 terms5==8 && terms7==5 && terms9==2 || 
     terms5==7 && terms7==4 && terms9==1 ||
     terms5==3 && terms7==2 && terms9==1 ||
     terms5==6 && terms7==5 && terms9==4 || 
     terms5==9 && terms7==8 && terms9==7 || 
   	 terms5==9 && terms7==6 && terms9==3 ||
	 terms5==9 && terms7==5 && terms9==1 || 
	 terms5==7 && terms7==5 && terms9==3 || 
	 terms5==4 && terms7==7 && terms9==1 || 
	 terms5==5 && terms7==6 && terms9==4 || 
     terms5==8 && terms7==9 && terms9==7 || 
     terms5==2 && terms7==3 && terms9==1 || 
	 terms5==5 && terms7==8 && terms9==2 || 
	 terms5==6 && terms7==9 && terms9==3 || 
	 terms5==5 && terms7==9 && terms9==1 || 
	 terms5==5 && terms7==7 && terms9==3 || 
     terms5==4 && terms7==1 && terms9==7 || 
     terms5==2 && terms7==1 && terms9==3 || 
     terms5==5 && terms7==4 && terms9==6 || 
	 terms5==8 && terms7==7 && terms9==9 || 
	 terms5==5 && terms7==2 && terms9==8 || 
	 terms5==6 && terms7==3 && terms9==9 || 
	 terms5==5 && terms7==1 && terms9==9 || 
	 terms5==5 && terms7==3 && terms9==7  )
 	{
 	printf("\n\t\t %s Win THE MATCH",firstPlayer);
	 }

else if(terms5==1 && terms9==4 && terms1==7 ||
	 terms5==1 && terms9==2 && terms1==3 ||
	 terms5==4 && terms9==5 && terms1==6 ||
	 terms5==7 && terms9==8 && terms1==9 || 
	 terms5==2 && terms9==5 && terms1==8 ||
	 terms5==3 && terms9==6 && terms1==9 ||
	 terms5==1 && terms9==5 && terms1==9 ||
	 terms5==3 && terms9==5 && terms1==7 || 
	 terms5==8 && terms9==5 && terms1==2 || 
     terms5==7 && terms9==4 && terms1==1 ||
     terms5==3 && terms9==2 && terms1==1 ||
     terms5==6 && terms9==5 && terms1==4 || 
     terms5==9 && terms9==8 && terms1==7 || 
   	 terms5==9 && terms9==6 && terms1==3 ||
	 terms5==9 && terms9==5 && terms1==1 || 
	 terms5==7 && terms9==5 && terms1==3 || 
	 terms5==4 && terms9==7 && terms1==1 || 
	 terms5==5 && terms9==6 && terms1==4 || 
     terms5==8 && terms9==9 && terms1==7 || 
     terms5==2 && terms9==3 && terms1==1 || 
	 terms5==5 && terms9==8 && terms1==2 || 
	 terms5==6 && terms9==9 && terms1==3 || 
	 terms5==5 && terms9==9 && terms1==1 || 
	 terms5==5 && terms9==7 && terms1==3 || 
     terms5==4 && terms9==1 && terms1==7 || 
     terms5==2 && terms9==1 && terms1==3 || 
	 terms5==5 && terms9==4 && terms1==6 || 
	 terms5==8 && terms9==7 && terms1==9 || 
	 terms5==5 && terms9==2 && terms1==8 || 
	 terms5==6 && terms9==3 && terms1==9 || 
	 terms5==5 && terms9==1 && terms1==9 || 
	 terms5==5 && terms9==3 && terms1==7  )
 	{
 	printf("\n\t\t %s Win THE MATCH",firstPlayer);
	 }

 else if(terms5==1 && terms9==4 && terms3==7 ||
	 terms5==1 && terms9==2 && terms3==3 ||
	 terms5==4 && terms9==5 && terms3==6 ||
	 terms5==7 && terms9==8 && terms3==9 || 
	 terms5==2 && terms9==5 && terms3==8 ||
	 terms5==3 && terms9==6 && terms3==9 ||
	 terms5==1 && terms9==5 && terms3==9 ||
	 terms5==3 && terms9==5 && terms3==7 || 
	 terms5==8 && terms9==5 && terms3==2 || 
     terms5==7 && terms9==4 && terms3==1 ||
     terms5==3 && terms9==2 && terms3==1 ||
     terms5==6 && terms9==5 && terms3==4 || 
     terms5==9 && terms9==8 && terms3==7 || 
   	 terms5==9 && terms9==6 && terms3==3 ||
	 terms5==9 && terms9==5 && terms3==1 || 
	 terms5==7 && terms9==5 && terms3==3 || 
	 terms5==4 && terms9==7 && terms3==1 || 
	 terms5==5 && terms9==6 && terms3==4 || 
     terms5==8 && terms9==9 && terms3==7 || 
     terms5==2 && terms9==3 && terms3==1 || 
	 terms5==5 && terms9==8 && terms3==2 || 
	 terms5==6 && terms9==9 && terms3==3 || 
	 terms5==5 && terms9==9 && terms3==1 || 
	 terms5==5 && terms9==7 && terms3==3 || 
     terms5==4 && terms9==1 && terms3==7 || 
     terms5==2 && terms9==1 && terms3==3 || 
	 terms5==5 && terms9==4 && terms3==6 || 
	 terms5==8 && terms9==7 && terms3==9 || 
	 terms5==5 && terms9==2 && terms3==8 || 
	 terms5==6 && terms9==3 && terms3==9 || 
	 terms5==5 && terms9==1 && terms3==9 || 
	 terms5==5 && terms9==3 && terms3==7  )
 	{
 	printf("\n\t\t %s Win THE MATCH",firstPlayer);
	 }

  else if(terms5==1 && terms9==4 && terms7==7 ||
	 terms5==1 && terms9==2 && terms7==3 ||
	 terms5==4 && terms9==5 && terms7==6 ||
	 terms5==7 && terms9==8 && terms7==9 || 
	 terms5==2 && terms9==5 && terms7==8 ||
	 terms5==3 && terms9==6 && terms7==9 ||
	 terms5==1 && terms9==5 && terms7==9 ||
	 terms5==3 && terms9==5 && terms7==7 || 
	 terms5==8 && terms9==5 && terms7==2 || 
     terms5==7 && terms9==4 && terms7==1 ||
     terms5==3 && terms9==2 && terms7==1 ||
     terms5==6 && terms9==5 && terms7==4 || 
     terms5==9 && terms9==8 && terms7==7 || 
   	 terms5==9 && terms9==6 && terms7==3 ||
	 terms5==9 && terms9==5 && terms7==1 || 
	 terms5==7 && terms9==5 && terms7==3 || 
	 terms5==4 && terms9==7 && terms7==1 || 
	 terms5==5 && terms9==6 && terms7==4 || 
     terms5==8 && terms9==9 && terms7==7 || 
     terms5==2 && terms9==3 && terms7==1 || 
	 terms5==5 && terms9==8 && terms7==2 || 
	 terms5==6 && terms9==9 && terms7==3 || 
	 terms5==5 && terms9==9 && terms7==1 || 
	 terms5==5 && terms9==7 && terms7==3 || 
     terms5==4 && terms9==1 && terms7==7 || 
     terms5==2 && terms9==1 && terms7==3 || 
	 terms5==5 && terms9==4 && terms7==6 || 
	 terms5==8 && terms9==7 && terms7==9 || 
	 terms5==5 && terms9==2 && terms7==8 || 
	 terms5==6 && terms9==3 && terms7==9 || 
	 terms5==5 && terms9==1 && terms7==9 || 
	 terms5==5 && terms9==3 && terms7==7  )
 	{
 	printf("\n\t\t %s Win THE MATCH",firstPlayer);
	 }

	else{
	printf("\n\t\t %s,%s ITS DROW THE MATCH",firstPlayer,secondPlayer);
	}
   }	 

}
}

	return 0;
}
