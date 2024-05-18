//#include <stdio.h>
//
//int main()
//{
//	printf("안녕하세요\n");
//	printf("안녕하세요\n");
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	printf("사과 1개\n");
//}

//#include <stdio.h>
//
//int main()
//{
//	int apple = 1;
//	printf("사과 %d개\n", apple);
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	printf("키보드 3개\n");
//	printf("마우스 2개\n");
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int keyboard = 3;
//	int mouse = 2;
//	printf("키보드 %d개\n", keyboard);
//	printf("마우스 %d개\n", mouse);
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int coin1 = 500;
//	int coin2 = 1000;
//	printf("%d + %d = %d\n",
//		coin1, coin2, coin1 + coin2);
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	char A;
//	A = 'A';
//	printf("A = %c\n", A);
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	double pi;
//	pi = 3.14;
//	float e = 2.718;
//	printf("pi = %.2lf, e = %.3f..\n", pi, e);
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	float r = 5;
//	float pi = 3.14;
//	float area = r * r * pi;
//	float round = 2 * r * pi;
//	printf("넓이 = %.2f, \n둘레 = %.2f", area, round);
//}

//#include <stdio.h>
//
//int main()
//{
//	int below_side = 3;
//	int top_side = 5;
//	int height = 7;
//	int area = (top_side + below_side) * height / 2;
//	printf("넓이 = %d", &area);
//}

//#include <stdio.h>
//
//int main()
//{
//	int k;
//	printf("원하는 숫자를 입력 : ");
//	scanf("%d", &k); //scanf_s
//	printf("입력한 숫자는 : %d\n", k);
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int y, x;
//	printf("더하고 싶은 값 2개 입력 : ");
//	scanf("%d %d", &y, &x);
//	printf("두 값의 합은 %d 입니다.\n", y + x);
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	char a, b, c;
//	printf("문자 두개 입력 : ");
//	scanf("%c%c%c", &a, &b, &c);
//	printf("문자출력 : %c%c%c\n", a, b, c);
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int r;
//	float pi = 3.14;
//	scanf("%d", &r);
//	float area = r * r * pi;
//	float round = 2 * r * pi;
//	printf("넓이 = %.2f, 둘레 = %.2f", area, round);
//}

//#include <stdio.h>
//
//int main()
//{
//	float W1, W2, H;
//	scanf("%f %f %f", &W1, &W2, &H);
//	float area = (W2 + W1) * H / 2;
//	printf("넒이 = %f", area);
//}

//#include <stdio.h>
//
//int main()
//{
//	int a = 15;
//	int b = 3;
//	printf("%d + %d = %d\n", a, b, a + b);
//	printf("%d - %d = %d\n", a, b, a - b);
//	printf("%d * %d = %d\n", a, b, a * b);
//	printf("%d / %d = %d\n", a, b, a / b);
//	printf("%d %% %d = %d\n", a, b, a % b);
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int number = 1;
//	number = number + 3; printf("%2d\n", number);
//	number -= 2; printf("%2d\n", number);
//	number--; printf("%2d\n", number);
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int a = 0;
//	printf("%d\n", a++);
//	printf("%d\n", a);
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int a = 0;
//	printf("%d\n", ++a);
//	printf("%d\n", a);
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int a, b;
//	scanf("%d %d", &a, &b);
//	printf("a + b = %d\n", a + b);
//	printf("a - b = %d\n", a - b);
//	printf("a * b = %d\n", a * b);
//	printf("a / b = %d\n", a / b);
//	printf("a %% b = %d\n", a % b);
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int first = 1 % 4;
//	printf("%d = 1 %% 4\n", first);
//	int second = 5 % 3;
//	printf("%d = 5 %% 3\n", second);
//	int third = 4 % 2;
//	printf("%d = 4 %% 2\n", third);
//
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int number1, number2;
//	scanf("%d %d", &number1, &number2);
//	printf("%d=", number1 % number2);
//	printf("%d %% %d\n", number1, number2);
//}

//#include <stdio.h>
//
//int main()
//{
//	int first = 1 % 3;
//	printf("%d = 1 %% 3\n", first);
//	int second = 2 % 3;
//	printf("%d = 2 %% 3\n", second);
//	int third = 3 % 3;
//	printf("%d = 3 %% 3\n", third);
//	int fourth = 4 % 3;
//	printf("%d = 4 %% 3\n", fourth);
//	int fifth = 5 % 3;
//	printf("%d = 5 %% 3\n", fifth);
//	int sixth = 6 % 3;
//	printf("%d = 6 %% 3\n", sixth);
//
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int a;
//	scanf("%d", &a);
//	int b = a % 50;
//	printf("%d", b);
//}

//#include <stdio.h>
//
//int main()
//{
//	int data1 = 6 / 2;
//	printf("%d = 6 / 2\n", data1);
//	int data2 = 6 / 3;
//	printf("%d = 6 / 3\n", data2);
//	int data3 = 6 / 4;
//	printf("%d = 6 / 4\n", data3);
//
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int number1, number2;
//	scanf("%d %d", &number1, &number2);
//	printf("%d = ", number1 / number2);
//	printf("%d / %d\n", number1, number2);
//
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int coin;
//	printf("돈을 입력해주세요.(원)");
//	scanf("%d", &coin);
//
//	int coin10000 = coin / 10000;
//	coin = coin % 10000;
//	int coin5000 = coin / 5000;
//	coin = coin % 5000;
//	int coin1000 = coin / 1000;
//	printf("만원권 %d개, ", coin10000);
//	printf("오천원권 %d개, ", coin5000);
//	printf("천원권 %d개, ", coin1000);
//	printf("나머지는 동전입니다.");
//
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int jelly_cost;
//	scanf("%d", &jelly_cost);
//	int coin = 1000 - jelly_cost;
//	int coin500 = coin / 500;
//	coin = coin % 500;
//	int coin100 = coin / 100;
//	coin = coin % 100;
//	int coin50 = coin / 50;
//	coin = coin % 50;
//	int coin10 = coin / 10;
//	coin = coin % 10;
//	int coin5 = coin / 5;
//	coin = coin % 5;
//	int coin1 = coin;
//	printf("500원 %d개\n", coin500);
//	printf("100원 %d개\n", coin100);
//	printf("50원 %d개\n", coin50);
//	printf("10원 %d개\n", coin10);
//	printf("5원 %d개\n", coin5);
//	printf("1원 %d개\n", coin1);
//
//	return 0;
//}

//#include <stdio.h>
//#include <stdlib.h>
//
//int main()
//{
//	int randInt = rand() % 10;
//	int nextInt = rand() % 10;
//	printf("첫숫자 : %d\n", randInt);
//	printf("다음숫자 : %d", nextInt);
//
//	return 0;
//}

//#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>
//
//int main()
//{
//	srand((unsigned int)time(NULL));
//	int randInt = rand() % 10;
//	int nextInt = rand() % 10+50;
//	printf("첫숫자 : %d\n", randInt);// 0 ~ 9
//	printf("다음숫자 : %d", nextInt);// 50 ~ 59
//
//	return 0;
//}

//#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>
//
//int main()
//{
//	srand((unsigned int)time(NULL));
//	printf("내 주머니에 있는 돈은");
//	int myMoney = (rand() % 10 + 1) * 1000;
//	printf(" %d원이다.\n", myMoney);
//	int coin500 = rand() % 4 * 500;
//	int coin100 = rand() % 5000;
//	coin100 = coin100 / 100 * 100;
//	printf("그리고 과자의 가격은 ");
//	printf("%d원이다.", coin500 + coin100);
//	printf("\n나는 과자를 살수 있을까?");
//
//	return 0;
//}

//#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>
//
//int main()
//{
//	srand((unsigned int)time(NULL));
//	printf("내 주머니에 있는 돈은");
//	int myMoney = (rand() % 10 + 1) * 1000;	// 1000 ~ 10000
//	printf(" %d원이다.\n", myMoney);
//	int coin500 = rand() % 4 * 500;			// 0 ~ 1500
//	int coin100 = rand() % 5000;			// 0 ~ 4999
//	coin100 = coin100 / 100 * 100;			// 0 ~ 4900
//	printf("그리고 과자의 가격은 ");
//	printf("%d원이다.", coin500 + coin100);
//	printf("\n나는 과자를 살수 있을까?");
//
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int input;
//	scanf("%d", &input);
//	if (input >= 10 && input <= 99) printf("input은 두 자리 숫자 입니다.");
//	else printf("input은 두 자리 숫자가 아닙니다");
//}

//#include <stdio.h>
//
//int main()
//{
//	int y_age;
//	scanf("%d", &y_age);
//	printf("전체 관람가\n");
//	if (y_age >= 12) printf("12세 관람가\n");
//	if (y_age >= 15) printf("15세 관람가\n");
//}

//#include <stdio.h>
//
//int main()
//{
//	char initial;
//	scanf("%c", &initial);
//	if (initial >= 65 && initial <= 90) printf("대문자");
//	if (initial >= 97 && initial <= 122) printf("소문자");
//}


//#include <stdio.h>
//
//int main()
//{
//	char direction;
//	scanf("%c", &direction);
//	if (direction == 'w') printf("위 방향키를 입력하셨습니다.");
//	if (direction == 'a') printf("좌 방향키를 입력하셨습니다.");
//	if (direction == 'd') printf("우 방향키를 입력하셨습니다.");
//	if (direction == 's') printf("아래 방향키를 입력하셨습니다.");
//}

//#include <stdio.h>
//
//int main()
//{
//	int gauge;
//	scanf("%d", &gauge);
//	if (gauge >= 45 && gauge <= 55) printf("'perfect'");
//	else if (gauge >= 35 && gauge <= 65) printf("'Excellent'");
//	else printf("'good'");
//}

//#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>
//
//int main()
//{
//	srand((unsigned int)time(NULL));
//	int input = rand() % 100;
//	printf("%d", input);
//	if (input % 3 == 0) printf("'input은 3의 배수 입니다.'");
//	if (input % 6 == 0) printf("'input은 6의 배수 입니다.'");
//	if (input % 9 == 0) printf("'input은 9의 배수 입니다.'");
//}

//#include <stdio.h>
//
//int main()
//{
//	int input1, input2;
//	char oper;
//	scanf("%d", &input1);
//	scanf("%d", &input2);
//	scanf(" %c", &oper);
//	switch (oper) {
//	case '+': printf("%d + %d = %d\n", input1, input2, input1 + input2); break;
//	case '-': printf("%d - %d = %d\n", input1, input2, input1 - input2); break;
//	case '*': printf("%d * %d = %d\n", input1, input2, input1 * input2); break;
//	case '/': printf("%d / %d = %d\n", input1, input2, input1 / input2); break;
//	case '%': printf("%d %% %d = %d\n", input1, input2, input1 % input2); break;
//	default: printf("오류");
//	}
//}

//#include <stdio.h>
//
//int main()
//{
//	int month = 1;
//	scanf("%d", &month);
//	switch (month) {
//	case 1: printf("January"); break;
//	case 2: printf("February"); break;
//	case 3: printf("March"); break;
//	case 4: printf("April"); break;
//	case 5: printf("May"); break;
//	case 6: printf("June"); break;
//	case 7: printf("July"); break;
//	case 8: printf("August"); break;
//	case 9: printf("September"); break;
//	case 10: printf("October"); break;
//	case 11: printf("November"); break;
//	case 12: printf("December"); break;
//	}
//}

//#include <stdio.h>
//
//int main()
//{
//	int input;
//	const int Option = 3;
//	printf("메뉴를 선택하세요.");
//	printf("1.새 게임 2. 이어하기 3. 옵션\n");
//	scanf("%d", &input);
//
//	switch (input) {
//	case 1:
//		printf("새 게임 시작\n");
//		break;
//	case 2:
//		printf("세이브 데이터 로드\n");
//		break;
//	case Option:
//		printf("옵션 세팅\n");
//		break;
//	default: printf("지정된 기능이 없습니다.\n");
//	}
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int number;
//	scanf("%d", &number);
//	switch (number) {
//	case 3: case 6: case 9: printf("짝"); break;
//	}
//}

//#include <stdio.h>
//
//int main()
//{
//	char command = 'x';
//	switch (command) {
//	case 'x': printf("알파벳 x 입력.\n");
//		break;
//	case 'X': printf("엑스표 입력.\n");
////중복된 case값을 사용할 수 없다.
//		break;
//	}
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	char drect;
//	scanf("%c", &drect);
//	switch (drect) {
//	case 'w': printf("'위 방향키를 입력하셨습니다.'");
//	case 'a': printf("'좌 방향키를 입력하셨습니다.'");
//	case 'd': printf("'우 방향키를 입력하셨습니다.'");
//	case 's': printf("'아래 방향키를 입력하셨습니다.'");
//	}
//}

#include <stdio.h>

int main()
{
	int appetizer, mainDish, dessert;
	printf("appetizer 1.캐비어 2.샐러드 3.푸아그라");
	scanf("%d", &appetizer);
	printf("appetizer 1.스테이크 2.생선요리 3.양갈비");
	scanf("%d", &mainDish);
	printf("appetizer 1.케잌 2.아이스크림 3.초콜릿무스");
	scanf("%d", &dessert);
	switch (appetizer) {
	case 1: printf("캐비어");
	case 2: printf("샐러드");
	case 3: printf("푸아그라");
	}
}