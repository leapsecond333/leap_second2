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

//#include <stdio.h>
//
//int main()
//{
//	int appetizer, mainDish, dessert;
//	printf("appetizer 1.캐비어 2.샐러드 3.푸아그라\n");
//	scanf("%d", &appetizer);
//	printf("appetizer 1.스테이크 2.생선요리 3.양갈비\n");
//	scanf("%d", &mainDish);
//	printf("appetizer 1.케잌 2.아이스크림 3.초콜릿무스\n");
//	scanf("%d", &dessert);
//	printf("주문한 음식은 ");
//	switch (appetizer) {
//	case 1: printf("캐비어, ");	break;
//	case 2: printf("샐러드, ");	break;
//	case 3: printf("푸아그라, ");	break;
//	}
//	switch (mainDish) {
//	case 1: printf("스테이크, ");	break;
//	case 2: printf("생선요리, ");	break;
//	case 3:	printf("양갈비, ");	break;
//	}
//	switch (dessert) {
//	case 1: printf("케잌");	break;
//	case 2: printf("아이스크림");	break;
//	case 3: printf("초콜릿무스");	break;
//	}
//	printf("입니다");
//}

//#include <stdio.h>
//
//int main()
//{
//	int i = 0;
//	while (i < 6)
//	{
//		printf("C");
//		i++;
//	}
//}

//#include <stdio.h>
//
//int main()
//{
//	int i = -10;
//	while (i <= 0)
//	{
//		printf("%d ", i);
//		i++;
//	}
//}

//#include <stdio.h>
//
//int main()
//{
//	int i = 0;
//	while (i <= 100) {
//		if (i % 5 == 0) printf("%d ", i);
//		i++;
//	}
//}

//#include <stdio.h>
//
//int main()
//{
//	int number = 1, multi = 1;
//	while (1) {
//		multi *= number;
//		if (multi >= 50000) break;
//		number++;
//	}
//	printf("%d", number);
//}

//#include <stdio.h>

//int main()
//{
//	char ch = 'A';
//	while (ch <= 'Z')
//	{
//		if (ch != 'F') 
//			printf("%c ", ch);
//		ch++;
//	}
//}

//#include <stdio.h>
//
//int main()
//{
//	int input = 0, b = 0, number = 0, order = 0;
//	while (1)
//	{
//		printf("%c : ", 'A' + order);
//		//order = ++order % 2;
//		scanf("%d", &input);
//		if (input< 1 || input  >3)
//		{
//			printf("다시 입력해주세요.\n");
//			continue;
//		}
//		number += input;
//		printf("%d\n", number);
//		if (number >= 31)
//		{
//			break;
//		}
//		order = !order;
//	}
//	printf("%c 패배", 'A' + order);
//}

//#include <stdio.h>
//
//int main()
//{
//	int select = 0;
//	do {
//		printf("1. 로그인\n2. 회원가입\n3. 옵션\n4. 만든 사람들\n");
//		scanf("%d", &select);
//	} while (select >= 1 && select <= 4);
//}

//#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>>
//
//int main()
//{
//	srand((unsigned int)time(NULL));
//	int command;
//	int game_play;
//	int day = 0;
//	int study = 0;
//	int minecraft_info = 0;
//	int exercise = 0;
//	do {
//		printf("\n%d번째 날!\n", ++day);
//		printf("오늘은 뭘 할까요?\n");
//		printf("1.코딩 공부한다.\n");
//		printf("2.마인크래프트를 한다.\n");
//		printf("3.공원으로 운동하러간다.\n");
//		printf("4.잔다.\n");
//		printf("그외. 면접 준비하기.\n");
//		scanf("%d", &command);
//		if (command < 1 && command > 4) break;
//		if (command == 1)
//		{
//			int randInt = rand() % 5 + 1;
//			switch (randInt) {
//			case 1:
//				printf("기분이 좋네요.\n");
//			case 3:
//				printf("도서관에서 ");
//				break;
//			case 2:
//				printf("기분이 나빠요.\n");
//			case 4:
//				printf("카페에서 ");
//				break;
//			case 5:	printf("학원에서 ");
//			}
//			printf("코딩 공부합니다\n");
//			study++;
//		}
//		else if (command == 2)
//		{
//			printf("마인크래프트를 어떻게 하실겁니까?\n");
//			printf("1.마인크래프트에 대한 정보를 알아보며 즐긴다.\n");
//			printf("2.그냥 마인크래프트를 즐긴다.\n");
//			scanf("%d", &game_play);
//			switch (game_play) {
//			case 1:
//				printf("마인크래프트에 대한 전문지식이 늘었습니다.\n");
//				minecraft_info++;
//				break;
//			case 2:
//				printf("마인크래프트를 즐겼습니다.\n");
//				break;
//			}
//		}
//		else if (command == 3)
//		{
//			printf("공원에서 운동을 열심히 하였습니다.\n");
//			exercise++;
//		}
//		else if (command == 4)
//		{
//			printf("잠을 잤습니다.\n");
//		}
//	} while (command >= 1 && command <= 4);
//
//
//	if (day <= 3) {
//		printf("이룬게 없습니다...\n");
//		return 0;
//	}
//
//	int ending = 0;
//	printf("어떤 직업을 준비할 것 입니까?\n");
//	printf("1.프로그래머로 면접 준비하기.\n");
//	printf("2.마이크로소프트에 마인크래프트 관련된 면접 준비하기.\n");
//	printf("3.운동선수가 되기위해 준비하기.\n");
//	printf("4.백수가 될래...\n");
//	scanf("%d", &ending);
//
//	if (ending == 1)
//	{
//		int level = study / 4;
//		switch (level)
//		{
//		case 0:
//			printf("코딩새싹이므로 면접을 통과하기 못했습니다!\n");
//			break;
//		case 1:
//			printf("프로그래머가 되었습니다!\n");
//			break;
//		case 2:
//			printf("FrontEnd 개발자가 되었습니다!\n");
//			break;
//		case 3:
//			printf("BackEnd 개발자가 되었습니다!\n");
//			break;
//		default:
//			printf("풀스택 개발자가 되었습니다!\n");
//			break;
//		}
//	}
//	else if (ending == 2)
//	{
//		int level = study / 8 + minecraft_info / 8;
//		switch (level)
//		{
//		case 0:
//			printf("면접에서 떨어졌습니다!\n");
//			printf("백수가 되었습니다!\n");
//			break;
//		default:
//			printf("마인크래프트와 관련된 마이크로소프트에 취직했습니다!\n");
//			break;
//		}
//	}
//	else if (ending == 3)
//	{
//		int level = exercise / 8;
//		switch (level)
//		{
//		case 0:
//			printf("그 어떤 종목의 운동선수가 되어지지 못했습니다!\n");
//			printf("백수가 되었습니다!\n");
//			break;
//		case 1:
//			printf("되기 어려운 종목의 운동선수가 되었습니다!\n");
//			break;
//		default:
//			printf("어떤 종목의 국가 대표 운동선수가 되었습니다!\n");
//			break;
//		}
//	}
//	else if (ending == 4)
//	{
//		printf("백수가 되었습니다!\n");
//	}
//
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int sheep;
//	for (sheep = 1; sheep <= 50; sheep++) {
//		if (sheep % 10 == 0) {
//			printf("졸았다!\n");
//			continue;
//		}
//		printf("양 %d마리\n", sheep);
//		if (sheep == 45) {
//			break;
//		}
//	}
//	printf("잠들었다!\n");
//	return 0;
//}

//#include <stdio.h>

//int main()
//{
//	int count;
//	for (count = 10; count <= 99; count++)
//		printf("%d ", count);
//}

//#include <stdio.h>
//
//int main()
//{
//	int count, number = 1;
//	for (count = 3; count <= 8; count++)
//	{
//		number *= count;
//	}
//	printf("%d", number);
//}

#include <stdio.h>

int main()
{
	int count;
	for (count = 1; count <= 50; count++)
	{
		int num1 = count % 10;
		int num10 = count / 10;

		if((num1 && num1%3==0) || (num10 && num10 % 3 == 0))
			printf("%d ", count);
		//if (count % 10 == 3 || count % 10 == 6 || count % 10 == 9 || count / 10 == 3)
	}
}