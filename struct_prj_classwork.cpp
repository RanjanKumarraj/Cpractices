#include<stdio.h>
#include<string.h>
int main(){
	struct players{
		char name[20];
		char country[20];
		float bating_ratio;
	
	};
	struct players P[50];
	int size;
	int i;
	float ratio;
	char count[20];
	
	printf("Enter how many store the players Data-");
	scanf("%d",&size);
	
	for(i=0;i<size;i++){
		printf("Enter %d players Name-",i+1);
		scanf("%s",P[i].name);
		//gets(P[i].name);
		printf("Enter %s  Country name(in small latter)-",P[i].name);
		scanf("%s",P[i].country);
		printf("Enter %s batting_ratio-",P[i].name);
		scanf("%f",&P[i].bating_ratio);
		printf("\n");
	 //	strlwr(P[i].country);
//	     for (int j = 0; P[i].country[j]; j++) {
//            P[i].country[j] = strlwr(P[i].country[j]);
//        }
//    }
	}
 	
	
	printf("Enter Players Country Name_*Plz name In small latter-");
	scanf("%s",count);
	int found = 0;
	int founds = 0;
	
	for(i=0;i<size;i++){
		if(strcmp(P[i].country,count) ==0){
			found=1;
			printf("Name-%s\n Country_Name-%s\nBatting_ratio-%f\n",P[i].name,P[i].country,P[i].bating_ratio);
		}
		}
	     printf("\n What You Want given Ratio-");
		 scanf("%f",&ratio);
		for(i=0;i<size;i++){
			founds=1;
			
			 if(P[i].bating_ratio>ratio){
			 	printf("\nName-%s\n Country_Name-%s\nBatting_ratio-%f\n",P[i].name,P[i].country,P[i].bating_ratio);
			 }
			
			
		}


		 if (!found) {
        printf("Country name not found.\n");
    }
	 if (!founds) {
        printf("Ratio Are not Found.\n");
    }    
	return 0;
}
