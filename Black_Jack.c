#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <Windows.h>
#include <time.h>
#include <string.h>

int main()
{
    int i;                         
    int X;                           
	float money = 10000;					
	int pay;						  
	int temp;                      
	char back[10];                      
    char num1[50], num2[50];         
    char plus[6];                      
    char suit1[10], suit2[10];       
    int card3[9];
	int random1;
	int card1;
	int random2;             
	int card2; 
    char suit3[9][10];                                    
    char num3[9][50];                                   
    char x[9];
    char y[9];
    char yn[1];

    SetConsoleTitle("Black-Jack");             
    while(1)                              
    {
start:
    i=0;
    temp=0;
    int card3[9] = { 0, 0, 0, 0, 0, 0, 0, 0, 0};          
    suit3[9][10];                                     
    num3[9][50];                                    
    x[9];
    y[9];
    yn[1];
        printf("블랙잭\n");
        printf("1. 블랙잭 시작\n");
        printf("2. 블랙잭 규칙\n");
        printf("3. 블랙잭 종료\n");
        printf("블랙잭 : ");
        scanf("%d", &X);
        switch(X){
        case(1) :
            system("cls");
            break;                          

        case(2) :
case2:                                                            
            system("cls");
            printf("1. 처음에 배팅을 할 돈을....\n");              
            printf("돌아가실려면 back를 입력해주세요 : ");
            scanf("%s", back);
            if((strcmp(back,"back")==0)){                         
                system("cls");
                continue;
            }
            else {
                printf("알 수 없는 명령어 입니다");                    
                Sleep(1000);
                system("cls");
                goto case2;                                       

            }
        case(3) :
            system("cls");                                   
            return 1;
        default :
            printf("알 수 없는 명령어 입니다.");           
            system("cls");
            return 1;
        }
        break;
    }
	while(1)				
	{
		printf("보유 머니 : %d\n", money);
		printf("참가비용(최소 1000) : ");
		scanf("%d", &pay);

		if (money < pay)	
		{
			printf("가지고 있는 돈이 적습니다");
            Sleep(1000);
			system("cls");			
			continue;				
		}
		else if (pay < 1000)
		{
			printf("최소금액보다 참기비용이 적습니다");
			Sleep(1000);;
			system("cls");
			continue;
		}
		else{
            money -= pay;               
            break;			
		}

	}

	printf("성공하였습니다");
	Sleep(1000);
	system("cls");

	random1 = 0;
	card1 = 0;

	srand(time(NULL));           
	random1 = rand()%4+1;
	card1 = rand()%13+1;       
	printf("첫 번째 카드 : ");

	switch(random1){               
        case (1) :
            sprintf(suit1, "Spade");
            if(card1==1) sprintf(num1, "A");
            else if(card1==11) sprintf(num1, "J");
            else if(card1==12) sprintf(num1, "Q");
            else if(card1==13) sprintf(num1, "K");
            else sprintf(num1, "%d", card1);
            break;

        case (2) :
            sprintf(suit1, "Heart");
            if(card1==1) sprintf(num1, "A");
            else if(card1==11) sprintf(num1, "J");
            else if(card1==12) sprintf(num1, "Q");
            else if(card1==13) sprintf(num1, "K");
            else sprintf(num1, "%d", card1);
            break;

        case (3) :
            sprintf(suit1, "Diamond");
            if(card1==1) sprintf(num1, "A");
            else if(card1==11) sprintf(num1, "J");
            else if(card1==12) sprintf(num1, "Q");
            else if(card1==13) sprintf(num1, "K");
            else sprintf(num1, "%d", card1);
            break;

        case (4) :
            sprintf(suit1, "Club");
            if(card1==1) sprintf(num1, "A");
            else if(card1==11) sprintf(num1, "J");
            else if(card1==12) sprintf(num1, "Q");
            else if(card1==13) sprintf(num1, "K");
            else sprintf(num1, "%d", card1);
            break;
	}

	random2 = 0;             
	card2 = 0;

	random2 = rand()%4+1;        
	card2 = rand()%13+1;         
	printf("두 번째 카드 : ");     

    switch(random2){
    case (1) :
        sprintf(suit2, "Spade");
        if(card2==1) sprintf(num2, "A");
        else if(card2==11) sprintf(num2, "J");
        else if(card2==12) sprintf(num2, "Q");
        else if(card2==13) sprintf(num2, "K");
        else sprintf(num2, "%d", card2);
        break;

    case (2) :
        sprintf(suit2, "Heart");
        if(card2==1) sprintf(num2, "A");
        else if(card2==11) sprintf(num2, "J");
        else if(card2==12) sprintf(num2, "Q");
        else if(card2==13) sprintf(num2, "K");
        else sprintf(num2, "%d", card2);
        break;

    case (3) :
        sprintf(suit2, "Diamond");
        if(card2==1) sprintf(num2, "A");
        else if(card2==11) sprintf(num2, "J");
        else if(card2==12) sprintf(num2, "Q");
        else if(card2==13) sprintf(num2, "K");
        else sprintf(num2, "%d", card2);
        break;

    case (4) :
        sprintf(suit2, "Club");
        if(card2==1) sprintf(num2, "A");
        else if(card2==11) sprintf(num2, "J");
        else if(card2==12) sprintf(num2, "Q");
        else if(card2==13) sprintf(num2, "K");
        else sprintf(num2, "%d", card2);
        break;
    }
    while(1)
    {
    if(suit1 == suit2 && num1 == num2)        
    {
        int random2 = 0;
        int card2 = 0;
        random2 = rand()%4+1;        
        card2 = rand()%13+1;
        continue;
    }
    else break;
	}


    switch(card1){                
    case(1) :
        card1 = 11;
    case(11) :
        card1 = 10;
    case(12) :
        card1 = 10;
    case(13) :
        card1 = 10;
    }

    switch(card2){                 
    case(1) :
        if(card1<=11) card2 = 1;
        else card2 = 11;
    case(11) :
        card2 = 10;
    case(12) :
        card2 = 10;
    case(13) :
        card2 = 10;
    }

    system("cls");
    temp = card1+card2;
    while(1)
    {
        printf("보유 머니 : %d\n", money);
        printf("총 점수 : %d\n\n", temp);
        printf("첫 번째 카드 : %s %s\n", suit1, num1);
        printf("두 번째 카드 : %s %s\n", suit2, num2);
        switch(i) {
        case(1):
            printf("세 번째 카드 : %s %s\n", suit3[1], num3[1]);
            break;
        case(2):
            printf("세 번째 카드 : %s %s\n", suit3[1], num3[1]);
            printf("네 번째 카드 : %s %s\n", suit3[2], num3[2]);
            break;
        case(3):
            printf("세 번째 카드 : %s %s\n", suit3[1], num3[1]);
            printf("네 번째 카드 : %s %s\n", suit3[2], num3[2]);
            printf("다섯 번째 카드 : %s %s\n", suit3[3], num3[3]);
            break;
        case(4):
            printf("세 번째 카드 : %s %s\n", suit3[1], num3[1]);
            printf("네 번째 카드 : %s %s\n", suit3[2], num3[2]);
            printf("다섯 번째 카드 : %s %s\n", suit3[3], num3[3]);
            printf("여섯 번째 카드 : %s %s\n", suit3[4], num3[4]);
            break;
        }
        if(temp==21){
            printf("성공하셨습니다.");
            money += pay*1.7;
            printf("보유머니 : %d\n", money);
            printf("다시하시겠습니까?(y/n): ");
            scanf("%s", &yn);
            if(strcmp(yn,"y")==0){
                system("cls");
                goto start;

            }
            else if(strcmp(yn,"n")==0) return 1;
            else{
                printf("알수없는 명령어입니다");
                return 1;
            }
        }
        if(temp>=22){
            system("cls");
            printf("패배하셨습니다.\n점수:%d\n", temp);
            money += pay*0.3;
            printf("다시하시겠습니까?(y/n): ");
            scanf("%s", &yn);
            if(strcmp(yn,"y")==0){
                system("cls");
                goto start;

            }
            else if(strcmp(yn,"n")==0) return 1;
            else{
                printf("알수없는 명령어입니다");
                return 1;
            }
        }
        Sleep(1000);
        printf("1. 한장 더 뽑으실려면 hit\n");
        printf("2. 멈추실려면 stand\n");
        printf("3.같은 숫자를 나누실려면 double를 입력해주세요\n");
        printf("입력해주세요 : ");
        scanf("%s", plus);
        if(strcmp(plus,"hit")==0){
            printf("hit!!\n");
            i++;
            random1 = rand()%4+1;
            card3[i] = rand()%13+1;
            switch(random1){             
            case (1) :
                sprintf(suit3[i], "Spade");
                if(card3[i]==1) sprintf(num3[i], "A");
                else if(card3[i]==11) sprintf(num3[i], "J");
                else if(card3[i]==12) sprintf(num3[i], "Q");
                else if(card3[i]==13) sprintf(num3[i], "K");
                else sprintf(num3[i], "%d", card3[i]);
                break;

            case (2) :
                sprintf(suit3[i], "Heart");
                if(card3[i]==1) sprintf(num3[i], "A");
                else if(card3[i]==11) sprintf(num3[i], "J");
                else if(card3[i]==12) sprintf(num3[i], "Q");
                else if(card3[i]==13) sprintf(num3[i], "K");
                else sprintf(num3[i], "%d", card3[i]);
                break;

            case (3) :
                sprintf(suit3[i], "Diamond");
                if(card3[i]==1) sprintf(num3[i], "A");
                else if(card3[i]==11) sprintf(num3[i], "J");
                else if(card3[i]==12) sprintf(num3[i], "Q");
                else if(card3[i]==13) sprintf(num3[i], "K");
                else sprintf(num3[i], "%d", card3[i]);
                break;

            case (4) :
                sprintf(suit3[i], "Club");
                if(card3[i]==1) sprintf(num3[i], "A");
                else if(card3[i]==11) sprintf(num3[i], "J");
                else if(card3[i]==12) sprintf(num3[i], "Q");
                else if(card3[i]==13) sprintf(num3[i], "K");
                else sprintf(num3[i], "%d", card3[i]);
                break;
            }
            switch(card3[i]){                
            case(1) :
                if(card3[i]+temp>21) card3[i] = 1;
                else card3[i] = 11;
            case(11) :
                card3[i] = 10;
            case(12) :
                card3[i] = 10;
            case(13) :
                card3[i] = 10;
            }
            temp += card3[i];
            Sleep(1000);
            system("cls");
            continue;
        }
        if(strcmp(plus,"stand")==0){
            printf("멈추셨습니다.\n");
            Sleep(1000);
            break;
        }
        if(strcmp(plus,"double")==0){
            printf("double\n");
            Sleep(1000);
            break;
        }
        else{
            printf("실패했습니다.");
            Sleep(1000);
            system("cls");
            continue;
        }

    }
    system("cls");
    printf("보유 머니 : %d\n", money);
    if(strcmp(plus,"stand")==0){
            printf("21점까지 %d남았습니다.\n", 21-temp);
        }

}
