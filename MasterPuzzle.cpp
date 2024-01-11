#include<stdio.h>
int main(){
	int userNo[10][10];
	int puzzle[10][10];
	int userl2[10][10];
	int userl3[10][10];
	int levans1,levans2;
	int lev2ans1,lev2ans2;
	int lev3ans1,lev3ans2;	
	int i,j;
	
	printf("  \n\n\t\t\t\t\t @~WELCOME TO MASTER PUZZLE~@\n\n  @~Hey' I Am Ranjan Raj~@\n\n");
	printf("  @~There Are Some Rules~@\n\n");
	printf("  @~There Are '3'~ Levles In Puzzle~@\n\n  @~ Complete Level One By One~@\n\n");
	printf("  @~IF You Complete 3~Levels You Got Some Prize Of 50rs ~@\n\n");
	printf("  @~ Call The No.'9334513814' And Take A prize~@\n\n");
	
	//show Input To user
	printf("  \n\t\t\t @~Your Puzzle Layout Same Like This~@\n\n\n\n");
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("\t\t%d%d\t",i,j);
		}
		printf("\n\n");
	}
	
	// Take Element to user
	printf("  \n\t\t~~~~~ @~Enetr Number Same Like Layout @~~~~~\n\n");
	printf("  \n\t\t~~~~~ @~Repetition Number  Are Not Allowed @~~~~~\n\n\n");
	
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("\t\t@~Elemnt Number On Index %d%d ~",i,j);
			scanf("%d",&userNo[i][j]);
			printf("\n");
		}
	
	}
	printf("\t\t\t\t-------------------------");
	printf("\n\t\t\t\t @~WELCOME TO LEVEL_1 ~~@\n");
	printf("\t\t\t\t-------------------------\n\n");
	
	printf("\tYour Element.\n");
	printf("\t------------\n\n\n");
	
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("\t%d\t",userNo[i][j]);
		}
		printf("\n\n");
	}
	
    //opration
   
   	printf("\tSolve This Puzzle.\n");
	printf("\t-----------------\n\n\n"); 
	
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			puzzle[i][j]=userNo[i][j]+userNo[1][1];
		}
		
	}
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			if(puzzle[i][j]==puzzle[1][0] || puzzle[i][j]==puzzle[2][1] ){
			printf("\t_\t");	
				
			}
			else
			printf("\t%d\t",puzzle[i][j]);
		}
		printf("\n\n");
	}
	
    printf("\t @~Enter The Correct Number On Index 10 ~");
    scanf("%d",&levans1);
    printf("\n");
    printf("\t @~Enter The Correct Number On Index 21 ~");
    scanf("%d",&levans2); 
	printf("\n\n");   

    if(userNo[1][0]+userNo[1][1]==levans1 && userNo[2][1]+userNo[1][1]==levans2 ){
    	
    		printf("\t\t\t @~Congratulation You Are Completed Level~'1'\n\n");
    		
	printf("\t\t\t\t-------------------------");
	printf("\n\t\t\t\t @~WELCOME TO LEVEL_2 ~~@\n");
	printf("\t\t\t\t-------------------------\n\n");
	
	    		
    for(i=0;i<3;i++){
    	for(j=0;j<3;j++){
    		if(i==0 && j==0){
					
    		userl2[i][j]=(userNo[1][1]*userNo[2][2]) + (userNo[1][2]*userNo[2][1]);
    	}
    	else if(i==0 && j==1){
					
    		userl2[i][j]=(userNo[1][0]*userNo[2][2]) + (userNo[1][2]*userNo[2][0]);
    	}    	
    	else if(i==0 && j==2){
					
    		userl2[i][j]=(userNo[1][0]*userNo[2][1]) + (userNo[1][1]*userNo[2][0]);
    	}
    	else if(i==1 && j==0){
					
    		userl2[i][j]=(userNo[0][1]*userNo[2][2]) + (userNo[0][2]*userNo[2][1]);
    	}
    	else if(i==1 && j==1){
					
    		userl2[i][j]=(userNo[0][0]*userNo[2][2]) + (userNo[0][2]*userNo[2][0]);
    	}
    	else if(i==1 && j==2){
					
    		userl2[i][j]=(userNo[0][0]*userNo[2][1]) + (userNo[0][1]*userNo[2][0]);
    	}
    	else if(i==2 && j==0){
					
    		userl2[i][j]=(userNo[0][1]*userNo[1][2]) + (userNo[0][2]*userNo[1][1]);
    	}
    	else if(i==2 && j==1){
					
    		userl2[i][j]=(userNo[0][0]*userNo[1][2]) + (userNo[0][2]*userNo[1][0]);
    	}
    	else if(i==2 && j==2){
					
    		userl2[i][j]=(userNo[0][0]*userNo[1][1]) + (userNo[0][1]*userNo[1][0]);
    	}												 
		   	
		}
	}
	  
	printf("\tYour Element.\n");
	printf("\t------------\n\n\n");
	
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("\t%d\t",userNo[i][j]);
		}
		printf("\n\n");
	}
	
    //opration
   
   	printf("\tSolve This Puzzle.\n");
	printf("\t-----------------\n\n\n");   
	  
		for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			if(userl2[i][j]==userl2[1][2] || userl2[i][j]==userl2[2][0] ){
			printf("\t_\t");	
				
			}
			else
			printf("\t%d\t",userl2[i][j]);
		}
		printf("\n\n");
	}
    printf("\t @~Enter The Correct Number On Index 12 ~");
    scanf("%d",&lev2ans1);
    printf("\n");
    printf("\t @~Enter The Correct Number On Index 20 ~");
    scanf("%d",&lev2ans2); 
	printf("\n\n");
	
    if((userNo[0][0]*userNo[2][1]) + (userNo[0][1]*userNo[2][0])==lev2ans1 && (userNo[0][1] * userNo[1][2]+userNo[0][2] * userNo[1][1])==lev2ans2 ){
    	
    		printf("\t\t\t @~Congratulation You Are Completed Level~'2'\n\n");
    		
	printf("\t\t\t\t-------------------------");
	printf("\n\t\t\t\t @~WELCOME TO LEVEL_3 ~~@\n");
	printf("\t\t\t\t-------------------------\n\n");
	
	
	for(i=0;i<3;i++){
    	for(j=0;j<3;j++){
    		if(i==0 && j==0){
					
    		userl3[i][j]=(userNo[0][0]+userNo[0][1]) + (userNo[0][2]+userNo[1][1]);
    	}
    	else if(i==0 && j==1){
					
    		userl3[i][j]=(userNo[0][1]+userNo[0][2]) + (userNo[1][1]);
    	}    	
    	else if(i==0 && j==2){
					
    		userl3[i][j]=(userNo[0][2]+userNo[1][1]);
    	}
    	else if(i==1 && j==0){
					
    		userl3[i][j]=(userNo[1][0]+userNo[1][1]) + (userNo[1][2]+userNo[1][1]);
    	}
    	else if(i==1 && j==1){
					
    		userl3[i][j]=(userNo[1][1]+userNo[1][2]) + (userNo[1][1]);
    	}
    	else if(i==1 && j==2){
					
    		userl3[i][j]=(userNo[1][2]+userNo[1][1]);
    	}
    	else if(i==2 && j==0){
					
    		userl3[i][j]=(userNo[2][0]+userNo[2][1]) + (userNo[2][2]+userNo[1][1]);
    	}
    	else if(i==2 && j==1){
					
    		userl3[i][j]=(userNo[2][1]+userNo[2][2]) + (userNo[1][1]);
    	}
    	else if(i==2 && j==2){
					
    		userl3[i][j]=(userNo[2][2]+userNo[1][1]);
    	}												 
		   	
		}
	}
	printf("\tYour Element.\n");
	printf("\t------------\n\n\n");
	
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("\t%d\t",userNo[i][j]);
		}
		printf("\n\n");
	}
	
    //opration
   
   	printf("\tSolve This Puzzle.\n");
	printf("\t-----------------\n\n\n");   
	  
		for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			if(userl3[i][j]==userl3[1][1] || userl3[i][j]==userl3[2][2] ){
			printf("\t_\t");	
				
				
			}
			else
			printf("\t%d\t",userl3[i][j]);
		}
		printf("\n\n");
	}
    printf("\t @~Enter The Correct Number On Index 11 ~");
    scanf("%d",&lev3ans1);
    printf("\n");
    printf("\t @~Enter The Correct Number On Index 22 ~");
    scanf("%d",&lev3ans2); 
	printf("\n\n");
	
    if((userNo[1][1]+userNo[1][2]) + (userNo[1][1])==lev3ans1 && (userNo[2][2]+userNo[1][1])==lev3ans2 ){
    	
    		printf("\t\t\t @~Congratulation You Are Completed Level~'3'\n\n");
    		
	printf("\t\t\t\t-------------------------");
	printf("\n\t\t\t\t Call '9334513814' And Take Price ~~@\n");
	printf("\t\t\t\t-------------------------\n\n");	
	
	
	
					
   }
   	else{
		printf("\n\n\t\t\t@~Your Ans Are Wrong Sorry~@\n\n\t\t\t @~Beter~Luck~Nest~Time~@");
	}
}
   
	else{
		printf("\n\n\t\t\t@~Your Ans Are Wrong Sorry~@\n\n\t\t\t @~Beter~Luck~Nest~Time~@");
	}

    		
    		
    		
}
	else{
		printf("\n\n\t\t\t@~Your Answer are Wrong Sorry~@\n\n\t\t\t @~Beter~Luck~Nest~Time~@");
	}

return 0;
}
    
    
