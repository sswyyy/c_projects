/* MBTi */ 
#include <stdio.h>

/* 유형별 질문 수

문항 번호가 짝수인지 홀수인지에 따라 각 유형의 질문을 제시해서, 한 가지 유형의 질문의 수가 증가하면
다른 한 쪽도 같이 증가해줘야함 (num_E 11 , num_I 10 가 아닌, num_E 13 num_I 13)  
*/

// 질문 수를 유형별로 정의해서 유연하게 편집이 가능하도록 함

#define num_E 9
#define num_I 9

#define num_S 9
#define num_N 9

#define num_F 9
#define num_T 9

#define num_P 9
#define num_J 9

// 전체 문항 번호
int i = 1;	

// 입력받은 숫자를 각 유형에 저장
int sum_E = 0, sum_I = 0, sum_S = 0, sum_N = 0, sum_F = 0, sum_T = 0, sum_P = 0, sum_J = 0;

// 수치를 입력받는 변수 (1~5)
int inputNum = 0;

/*
int sum_MBTI[8] = { 0 };
int MBTI[8] = { 0 };
*/

// 각 유형의 문항번호
int E_questionNum = 1;
int I_questionNum = 1;
int S_questionNum = 1;
int N_questionNum = 1;
int F_questionNum = 1;
int T_questionNum = 1;
int P_questionNum = 1;
int J_questionNum = 1;



// 각 유형의 질문 리스트
void E_questions(int ques)
{
	if (ques == 1)
	{
		printf("나는 사람들과 함께 있을 때 에너지를 얻는다고 느낍니다 : ");
	}
	if (ques == 2)
	{
		printf("나는 새로운 사람들을 만나는 것을 즐기며, 활발한 사회적 활동에 참여하는 것을 선호합니다 : ");
	}
	if (ques == 3)
	{
		printf("나는 대화를 통해 문제를 해결하는 것을 선호합니다 : ");
	}
	if (ques == 4)
	{
		printf("나는 많은 사람들과 함께 있을 때 더 활기차고 편안함을 느낍니다 : ");
	}
	if (ques == 5)
	{
		printf("나는 자주 사람들과 이야기를 나누는 것을 좋아하며, 새로운 사람을 만나는 것에 대해 열려 있습니다 : ");
	}
	if (ques == 6)
	{
		printf("나는 나의 생각과 아이디어를 다른 사람들과 공유하는 것을 즐깁니다 : ");
	}
	if (ques == 7)
	{
		printf("나는 활동적인 사회 생활을 유지하며, 행사나 모임에 참여하는 것을 좋아합니다 : ");
	}
	if (ques == 8)
	{
		printf("나는 혼자 있기보다는 다른 사람들과 함께 있는 것을 선호합니다 : ");
	}
	if (ques == 9)
	{
		printf("나는 나의 생각과 감정을 다른 사람들과 즉각적으로 공유하는 것을 선호합니다 : ");
	}
}

void I_questions(int ques)
{
	if (ques == 1)
	{
		printf("나는 혼자 있는 시간이 필요하며, 그것이 에너지를 충전하는 데 도움이 됩니다 : ");
	}
	if (ques == 2)
	{
		printf("나는 나의 생각과 아이디어를 정리하는 데 시간이 필요합니다 : ");
	}
	if (ques == 3)
	{
		printf("나는 일대일 대화를 큰 그룹에서의 대화보다 선호합니다 : ");
	}
	if (ques == 4)
	{
		printf("나는 깊이 있는 생각과 자기 성찰을 즐깁니다 : ");
	}
	if (ques == 5)
	{
		printf("나는 사회적인 활동보다는 혼자서 책을 읽거나 음악을 듣는 것을 좋아합니다 : ");
	}
	if (ques == 6)
	{
		printf("나는 소수의 친한 친구들을 가지는 것을 선호합니다 : ");
	}
	if (ques == 7)
	{
		printf("나는 다른 사람들과 상호작용하기 전에 먼저 관찰하는 것을 선호합니다 : ");
	}
	if (ques == 8)
	{
		printf("나는 내면의 세계를 탐색하는 것에 흥미를 느낍니다 : ");
	}
	if (ques == 9)
	{
		printf("나는 사회적 활동보다는 개인적인 취미나 관심사에 시간을 보내는 것을 선호합니다 : ");
	}
}

void S_questions(int ques)
{
	if (ques == 1)
	{
		printf("일상적인 경험과 실용적인 사물에 대해 생각하는 것을 즐깁니다 : ");
	}
	if (ques == 2)
	{
		printf("나는 실제적이고 구체적인 정보를 통해 세상을 이해하는 것을 선호합니다 : ");
	}
	if (ques == 3)
	{
		printf("나는 눈으로 보거나 손으로 만지는 등 구체적인 경험을 통해 배우는 것을 좋아합니다 : ");
	}
	if (ques == 4)
	{
		printf("나는 현재의 사실과 세부사항에 중점을 두는 것을 좋아합니다 : ");
	}
	if (ques == 5)
	{
		printf("나는 참고할 수 있는 과거의 경험을 통해 결정을 내리는 것을 선호합니다 : ");
	}
	if (ques == 6)
	{
		printf("내 주변 환경에서 일어나는 실제적인 사건에 빠르게 반응합니다 : ");
	}
	if (ques == 7)
	{
		printf("나는 계획이나 이론보다는 현실적인 행동을 더 중요하게 생각합니다 : ");
	}
	if (ques == 8)
	{
		printf("내가 경험한 것이나 직접 느낀 것에 더 신뢰를 둡니다 : ");
	}
	if (ques == 9)
	{
		printf("나는 세부사항에 주의를 기울이며, 일이 진행되는 과정을 신중하게 관찰하는 것을 선호합니다 : ");
	}
}

void N_questions(int ques)
{
	if (ques == 1)
	{
		printf("종종 상상력이 풍부하다고 느낍니다 : ");
	}
	if (ques == 2)
	{
		printf("미래에 대한 계획과 가능성을 생각하는 것을 좋아합니다 : ");
	}
	if (ques == 3)
	{
		printf("종종 숨겨진 의미나 가능성을 찾아내는 것에 능숙하다고 느낍니다 : ");
	}
	if (ques == 4)
	{
		printf("나는 종종 '왜?'라는 질문을 하며, 사물들이 왜 그렇게 작동하는지 이해하려고 노력합니다 : ");
	}
	if (ques == 5)
	{
		printf("나는 새로운 아이디어와 관점을 탐색하는 것을 즐깁니다 : ");
	}
	if (ques == 6)
	{
		printf("종종 뚜렷한 현재 상황보다는 '무엇이 될 수 있을까?'라는 생각에 더 많은 시간을 보냅니다 : ");
	}
	if (ques == 7)
	{
		printf("종종 내 머릿속의 이미지나 개념으로 세상을 이해합니다 : ");
	}
	if (ques == 8)
	{
		printf("나는 종종 간접적인 접근법을 통해 문제를 해결합니다 : ");
	}
	if (ques == 9)
	{
		printf("나는 사물이나 사건이 가지고 있는 실제적인 세부 사항보다는 그것들의 가능성에 대해 생각하는 것을 선호합니다 : ");
	}
}

void F_questions(int ques)
{
	if (ques == 1)
	{
		printf("나는 결정을 내릴 때 사람들의 감정과 가치를 우선시합니다 : ");
	}
	if (ques == 2)
	{
		printf("나는 감정과 인간 관계에 중점을 두고 생각하고 행동합니다 : ");
	}
	if (ques == 3)
	{
		printf("나는 논리와 분석보다는 사람들의 감정을 고려하는 것이 중요하다고 생각합니다 : ");
	}
	if (ques == 4)
	{
		printf("나는 다른 사람들의 감정과 관점을 이해하고 공감하는 능력이 강합니다 : ");
	}
	if (ques == 5)
	{
		printf("나는 사람들의 감정을 중시하고 그들의 느낌에 따라 행동하는 경향이 있습니다 : ");
	}
	if (ques == 6)
	{
		printf("나는 감정이 풍부하며 다른 사람의 감정에 민감합니다 : ");
	}
	if (ques == 7)
	{
		printf("나는 문제 해결에 있어서 논리적 분석보다는 개인의 가치와 감정을 고려하는 것이 중요하다고 생각합니다 : ");
	}
	if (ques == 8)
	{
		printf("나는 다른 사람들의 감정에 동조하고 그들의 입장에서 사물을 바라보려 노력합니다 : ");
	}
	if (ques == 9)
	{
		printf("나는 의사결정 과정에서 다른 사람의 감정과 반응을 신중히 고려합니다 : ");
	}
}

void T_questions(int ques)
{
	if (ques == 1)
	{
		printf("나는 문제 해결에 있어서 이성과 논리를 최우선으로 생각합니다 : ");
	}
	if (ques == 2)
	{
		printf("나는 감정보다는 사실과 데이터에 기반한 결정을 선호합니다 : ");
	}
	if (ques == 3)
	{
		printf("나는 객관적인 평가보다는 주관적인 감정을 무시하곤 합니다 : ");
	}
	if (ques == 4)
	{
		printf("나는 이슈를 처리할 때 감정보다는 사실에 의존합니다 : ");
	}
	if (ques == 5)
	{
		printf("나는 주로 논리와 이성을 기반으로 의사결정을 합니다 : ");
	}
	if (ques == 6)
	{
		printf("나는 감정보다 논리적인 접근 방식을 선호합니다 : ");
	}
	if (ques == 7)
	{
		printf("나는 정확하고 체계적인 분석을 통해 문제를 해결하는 것을 좋아합니다 : ");
	}
	if (ques == 8)
	{
		printf("나는 문제를 해결할 때 가능한 한 객관적이고 비평적으로 접근합니다 : ");
	}
	if (ques == 9)
	{
		printf("나는 어떤 상황에서도 개인적 감정이 의사결정 과정에 영향을 미치지 않게 하는 것이 중요하다고 생각합니다 : ");
	}
}

void P_questions(int ques)
{
	if (ques == 1)
	{
		printf("나는 일을 계획하고 구조화하는 것보다 유연하게 대응하는 것을 선호합니다 : ");
	}
	if (ques == 2)
	{
		printf("나는 계획보다는 즉흥적으로 행동하는 경향이 있습니다 : ");
	}
	if (ques == 3)
	{
		printf("나는 일정과 계획에 묶이는 것보다는 자유로운 흐름에 맡기는 것을 좋아합니다 : ");
	}
	if (ques == 4)
	{
		printf("나는 뜻밖의 변화와 새로운 가능성에 개방적입니다 : ");
	}
	if (ques == 5)
	{
		printf("나는 일을 마감 기한 직전에 처리하는 경향이 있습니다 : ");
	}
	if (ques == 6)
	{
		printf("나는 새로운 정보와 옵션이 계속해서 제공되는 상황을 선호합니다 : ");
	}
	if (ques == 7)
	{
		printf("나는 고정된 계획보다는 유연성을 유지하려고 합니다 : ");
	}
	if (ques == 8)
	{
		printf("나는 일을 시작하는 것에 있어서 대략적인 방향만 있으면 충분하다고 느낍니다 : ");
	}
	if (ques == 9)
	{
		printf("나는 새로운 경험과 모험에 개방적입니다 : ");
	}
}

void J_questions(int ques)
{
	if (ques == 1)
	{
		printf("나는 일을 계획에 따라 체계적으로 진행하는 것을 선호합니다 : ");
	}
	if (ques == 2)
	{
		printf("나는 미리 계획된 일정을 따르는 것을 좋아합니다 : ");
	}
	if (ques == 3)
	{
		printf("나는 불확실성을 피하고 결정을 빠르게 내리는 것을 선호합니다 : ");
	}
	if (ques == 4)
	{
		printf("나는 일을 마감기한 이전에 끝내려고 노력합니다 : ");
	}
	if (ques == 5)
	{
		printf("나는 일을 체계적으로 정리하고 구조화하는 것을 선호합니다 : ");
	}
	if (ques == 6)
	{
		printf("나는 미리 일정을 계획하고 그에 따라 행동하는 것을 좋아합니다 : ");
	}
	if (ques == 7)
	{
		printf("나는 계획적이고 조직적인 접근 방식을 선호합니다 : ");
	}
	if (ques == 8)
	{
		printf("나는 결정을 내리는 것을 미루는 것보다, 일을 조속히 처리하는 것을 선호합니다 : ");
	}
	if (ques == 9)
	{
		printf("나는 확실성과 명확성을 추구합니다 : ");
	}
}

void message(void)
{
	printf("ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ \n");
	printf("|     MBTI 성격유형 검사를 시작합니다      | \n");
	printf("|  문항은 총 72문항으로 이루어져 있습니다. | \n");
	printf("|                                          | \n");
	printf("|                                          | \n");
	printf("| 1. 매우 아니다  2. 아니다    3.모르겠다  | \n");
	printf("|                                          | \n");
	printf("|       4. 그렇다       5. 매우 그렇다     | \n");
	printf("|                                          | \n");
	printf("|(m을 누를경우 이 메세지가 다시 출력됩니다)| \n");
	printf("|     (x를 누를경우 입력이 종료됩니다)     | \n");
	printf("ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ \n");
}

// 메인함수
int main()
{
	message();

	printf("\n[ E/I 영역 ]\n\n");
	for (i = 1; i <= num_E + num_I; i++)
	{
		if (i % 2 == 1) // 홀수일 경우 E 질문 출력
		{
			while (1)
			{
				printf("%d. ", i);
				E_questions(E_questionNum);
				if (scanf("%d", &inputNum) == 0) {
					rewind(stdin);
				}
				if (inputNum > 5 || inputNum < 1)
				{
					printf("다시 입력하세요\n");
				}
				else
				{
					sum_E += inputNum;
					E_questionNum += 1;
					break;
				}
				
			}
		}	else  if (i % 2 == 0) // 짝수일 경우 E 질문 출력
		{
			while (1)
			{
				printf("%d. ", i);
				I_questions(I_questionNum);
				if (scanf("%d", &inputNum) == 0) {
					rewind(stdin);
				}
				if (inputNum > 5 || inputNum < 1)
				{
					printf("다시 입력하세요\n");
				}
				else
				{
					sum_I += inputNum;
					I_questionNum += 1;
					break;
				}
			}
		}
		
	}
	
	printf("\n[ S/N 영역 ]\n\n");
	for (i = num_E+num_I + 1; i <= num_E + num_I + num_S + num_N; i++)
	{
		if (i % 2 == 1) // 홀수일 경우 S 질문 출력
		{
			while (1)
			{
				printf("%d. ",i);
				S_questions(S_questionNum);
				scanf("%d", &inputNum);
				if (inputNum > 5 || inputNum < 1)
				{
					printf("다시 입력하세요\n");
				}
				else
				{
					sum_S += inputNum;
					S_questionNum += 1;
					break;
				}
			}

		}
		else  if (i % 2 == 0) // 짝수일 경우 N 질문 출력
		{
			while (1)
			{
				printf("%d. ", i);
				N_questions(N_questionNum);
				scanf("%d", &inputNum);
				if (inputNum > 5 || inputNum < 1)
				{
					printf("다시 입력하세요\n");
				}
				else
				{
					sum_N += inputNum;
					N_questionNum += 1;
					break;
				}
			}
		}
	}

	printf("\n[ F/T 영역 ]\n\n");
	for (i = num_E + num_I + num_S + num_N + 1; i <= num_E + num_I + num_S + num_N + num_T + num_F; i++)
	{
		if (i % 2 == 1) // 홀수일 경우 F 질문 출력
		{
			while (1)
			{
				printf("%d. ", i);
				F_questions(F_questionNum);
				scanf("%d", &inputNum);
				if (inputNum > 5 || inputNum < 1)
				{
					printf("다시 입력하세요\n");
				}
				else
				{
					sum_F += inputNum;
					F_questionNum += 1;
					break;
				}
			}
		}
		else if (i % 2 == 0) // 짝수일 경우 T 질문 출력
		{
			while (1)
			{
				printf("%d. ", i);
				T_questions(T_questionNum);
				scanf("%d", &inputNum);
				if (inputNum > 5 || inputNum < 1)
				{
					printf("다시 입력하세요\n");
				}
				else
				{
					sum_T += inputNum;
					T_questionNum += 1;
					break;
				}
			}
		}
	}

	printf("\n[ P/J 영역 ]\n\n");
	for (i = num_E + num_I + num_S + num_N + num_T + num_F + 1; i <= num_E + num_I + num_S + num_N + num_T + num_F + num_J + num_P; i++)
	{
		if (i % 2 == 1) // 홀수일 경우 P 질문 출력
		{
			while (1)
			{
				printf("%d. ", i);
				P_questions(P_questionNum);
				scanf("%d", &inputNum);
				if (inputNum > 5 || inputNum < 1)
				{
					printf("다시 입력하세요\n");
				}
				else
				{
					sum_P += inputNum;
					P_questionNum += 1;
					break;
				}
			}
		}
		else if (i % 2 == 0) // 짝수일 경우 J 질문 출력
		{
			while (1)
			{
				printf("%d. ", i);
				J_questions(J_questionNum);
				scanf("%d", &inputNum);
				if (inputNum > 5 || inputNum < 1)
				{
					printf("다시 입력하세요\n");
				}
				else
				{
					sum_J += inputNum;
					J_questionNum += 1;
					break;
				}
			}
		}
	}
	printf("\n");

	printf("E:%d S:%d T:%d J:%d \n", sum_E,sum_S,sum_T, sum_J);
	printf("I:%d N:%d F:%d P:%d \n", sum_I,sum_N,sum_F, sum_P);

	char m1,m2,m3,m4;

	if (sum_E>sum_I) 
	{ 
		m1 = 'E';
	} else { 
		m1 = 'I';
	}

	if (sum_S>sum_N) { 
		m2 = 'S';
	} else { 
		m2 = 'N';
	}

	if (sum_F>sum_T) {
		m3 = 'F';
	} else {
		m3 = 'T';
	}

	if (sum_J>sum_P) {
		m4 = 'J';
	} else {
		m4 = 'P';
	}


	sum_E = sum_E - num_E;  
	sum_I = sum_I - num_I;
	sum_S = sum_S - num_S;  
	sum_N = sum_N - num_N;
	sum_T = sum_T - num_T;  
	sum_F = sum_F - num_F;
	sum_J = sum_J - num_J;  
	sum_P = sum_P - num_P;

	printf("\n");

	printf("E %0.1lf%%",(double)(sum_E*100/(sum_E+sum_I)));
	printf("   ");
	printf("I %0.1lf%%",(double)(sum_I*100/(sum_E+sum_I)));
	printf("\n");

	printf("S %0.1lf%%",(double)(sum_S*100/(sum_S+sum_N)));
	printf("   ");
	printf("N %0.1lf%%",(double)(sum_N*100/(sum_S+sum_N)));
	printf("\n");

	printf("F %0.1lf%%",(double)(sum_F*100/(sum_F+sum_T)));
	printf("   ");
	printf("T %0.1lf%%",(double)(sum_T*100/(sum_F+sum_T)));
	printf("\n");

	printf("P %0.1lf%%",(double)(sum_P*100/(sum_P+sum_J)));
	printf("   ");
	printf("J %0.1lf%%",(double)(sum_J*100/(sum_P+sum_J)));
	printf("\n");
	printf("\n");
	
	printf("Your personality test result is %c%c%c%c", m1,m2,m3,m4);
	


	printf("\n\n\n");
	return 0;
}


/*
	printf("%d\n", sum_E);
	printf("%d\n", sum_I);
	
	sum_MBTI[0] = sum_E + 45 - sum_I;
	sum_MBTI[1] = sum_I + 45 - sum_E;

	printf("%d\n", sum_MBTI[0]);
	printf("%d\n", sum_MBTI[1]);
	*/



int algorithm(int)
{
	return 0;
}