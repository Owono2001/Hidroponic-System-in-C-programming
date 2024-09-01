#include <stdio.h>
#include<string.h>



void infopH();
void lighting();
void humidity();
void temperature();
void Nutritional_Needs();
char menu();

int main()
{
	char option;
	do{
		option=menu();
		switch(option){
		case '1': infopH(); break;
		case '2': lighting(); break;
		case '3': humidity(); break;
		case '4': temperature(); break;
		case '5': Nutritional_Needs(); break;
		default: printf("\nInvalid choice");
		}
	}while(option != '5');
	return 0;
}

char menu(){
	char choice;
	printf("Menu principal\n");
	printf("\n               WELCOME TO MY HYDROPONIC SYSTEM\n");
	printf("-------------------------------------");
	printf("\n1).Enter information of pH level");
	printf("\n2).Enter information of Lighting cicle level");
	printf("\n3).Enter information of Humidity");
	printf("\n4).Enter information of Temperature");
	printf("\n5).Enter Nutritional Needs");
	printf("\nEnter an option:  ");
	scanf("%c[^\n]",  &choice);
	return choice;
}
	
	
void infopH(){
	
	float pHlevel1, pHlevel2;
	FILE * fp;
	fp=fopen("data.txt", "a+");
	if (fp==NULL){
		printf("File could not be opened");
	}
	else
		fseek(fp, 0, SEEK_END);
		printf("\nEnter the first pH Level 1(==5.5): ");
		scanf("%f", &pHlevel1);
		printf("\nEnter the second pH Level 2(==6.5): ");
		scanf("%f", &pHlevel2);
		
		while(1){
		
    	float pHlevel1;
    	float pHlevel2;  
    	
    	printf("\nEnter the first pH Level 1(==5.5): ");
		scanf("%f", &pHlevel1);
		printf("\nEnter the second pH Level 2(==6.5): ");
		scanf("%f", &pHlevel2);
		
	
		if(pHlevel1 == 5.5){
			printf("\nYou have gotten the correct values for pH.");
		    	break;
		
		}
		else if(pHlevel2 == 6.5){
			printf("\nCorrect value");
		    	break;
			
		}
		else{
			printf("\nPlease enter again sir, Issues in pH level");
		    	continue;
		}
		printf("%f", &pHlevel1);
		printf("%f", &pHlevel2);
	}
	fprintf(fp,"%f %f", pHlevel1, pHlevel2);
	printf("\n=pH=SUCCESSFUL==");
	fclose(fp);
		    	
}

void lighting(){

	int lightSun;//VCC PIN
	int darkness;//GND PIN
	
	FILE *fp;
	fp=fopen("data.txt", "a+");
	if (fp==NULL){
		printf("File could not be opened");
	}
	else{
		fseek(fp, 0, SEEK_END);
		printf("Enter the Sun light(16-18 hours): ");
		scanf("%d", &lightSun);
		printf("Enter the darkness period(8 hours): ");
		scanf("%d", &darkness);
		}
		while(1){
			int lightSun, darkness;
			
			printf("Enter the Sun light(16-18 hours): ");
			scanf("%d", &lightSun);
			printf("Enter the darkness period(8 hours): ");
			scanf("%d", &darkness);
			if(lightSun > 17 && lightSun < 19){
				printf("\nthe plant is getting the best lighting");
					break;
			}
			else if(darkness == 8){
				printf("\nSuitable darkness for respiration");
				 break;
			}
			else{
				printf("\nInvalid please enter again");
					continue;
			}
			printf("%d", &lightSun);
			printf("%d", &darkness);	
		}
		fprintf(fp, "%d %d", lightSun, darkness);
		printf("====lighting===SUCCESSFUL========");
		fclose(fp);
		
		
	}
	
	


void humidity(){

	struct info_humidity
	{
		char night_humidity[30];//ADC7 PORT
		char day_humidity[30];//AVCC PORT
	};
	struct info_humidity IF;
	strcpy(IF.night_humidity, "65-75");
	strcpy(IF.day_humidity, "80-90");
	FILE *fp;
	fp=fopen("data.txt", "a+");
	fprintf(fp,"%s %s",IF.night_humidity,IF.day_humidity);
	printf("=====humidity=added=SUCCESSFULLY========");
	printf("\nrefer to the file");
	fclose(fp);
	
	printf("\n Here is the humidity night humidity: %s", IF.night_humidity);
	printf("\n Here is the humidity day humidity: %s", IF.day_humidity);
}


void temperature(){
	
	int tempDay;//AREF PORT
	int tempNight;
	
	FILE *fp;
	fp=fopen("data.txt", "a+");
	if(fp==NULL){
		printf("File's not found");
	}
	else{
		fseek(fp, 0, SEEK_END);
		printf("Enter the temperature day (21-26): ");
		//fgets(TP.temperature, 30, stdin);
		scanf("%d", &tempDay);
		printf("Enter the temperature night (13-18): ");
		scanf("%d", &tempNight);
		
		while(1){
			int tempDay, tempNight;
			
			printf("Enter the temperature day (21-26): ");
			scanf("%d", &tempDay);
			printf("Enter the temperature night (13-18): ");
			scanf("%d", &tempNight);
			
			if (tempDay > 20 && tempDay < 27){
				printf("\nSuitable temp range for the system.");
		    		break;
			
			}
			else if(tempNight > 12 && tempNight < 19){
				printf("\nCorrect value for night temp");
		    		break;
			}
			else{
				printf("\nInvalid temperature please enter again");
					continue;
				
			}
			printf("%d", &tempDay);
			printf("%d", &tempNight);
			
		}
		fprintf(fp,"%d %d ",tempDay, tempNight);
		printf("====Temperature===SUCCESSFUL======");
		fclose(fp);
	}
	
}


void Nutritional_Needs(){
	
	struct nutrition
	{
		char Nutritional_Needs[30]; //"NPK
	};
	struct nutrition ND;

	strcpy(ND.Nutritional_Needs, "NPK");
	FILE *fp;
	fp=fopen("data.txt", "a+");
	fprintf(fp,"%s ", ND.Nutritional_Needs);
	printf("=====Nutritional==SUCCESSFUL========");
	printf("Please check the file");
	fclose(fp);
	
	printf("\nNitrogen(N), Phosporons(P), potassium(K)...");
}



