//#include <stdio.h>
//
//int main()
//{
//	printf("�ȳ��ϼ���\n");
//	printf("�ȳ��ϼ���\n");
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	printf("��� 1��\n");
//}

//#include <stdio.h>
//
//int main()
//{
//	int apple = 1;
//	printf("��� %d��\n", apple);
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	printf("Ű���� 3��\n");
//	printf("���콺 2��\n");
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int keyboard = 3;
//	int mouse = 2;
//	printf("Ű���� %d��\n", keyboard);
//	printf("���콺 %d��\n", mouse);
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
//	printf("���� = %.2f, \n�ѷ� = %.2f", area, round);
//}

//#include <stdio.h>
//
//int main()
//{
//	int below_side = 3;
//	int top_side = 5;
//	int height = 7;
//	int area = (top_side + below_side) * height / 2;
//	printf("���� = %d", &area);
//}

//#include <stdio.h>
//
//int main()
//{
//	int k;
//	printf("���ϴ� ���ڸ� �Է� : ");
//	scanf("%d", &k); //scanf_s
//	printf("�Է��� ���ڴ� : %d\n", k);
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int y, x;
//	printf("���ϰ� ���� �� 2�� �Է� : ");
//	scanf("%d %d", &y, &x);
//	printf("�� ���� ���� %d �Դϴ�.\n", y + x);
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	char a, b, c;
//	printf("���� �ΰ� �Է� : ");
//	scanf("%c%c%c", &a, &b, &c);
//	printf("������� : %c%c%c\n", a, b, c);
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
//	printf("���� = %.2f, �ѷ� = %.2f", area, round);
//}

//#include <stdio.h>
//
//int main()
//{
//	float W1, W2, H;
//	scanf("%f %f %f", &W1, &W2, &H);
//	float area = (W2 + W1) * H / 2;
//	printf("���� = %f", area);
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
//	printf("���� �Է����ּ���.(��)");
//	scanf("%d", &coin);
//
//	int coin10000 = coin / 10000;
//	coin = coin % 10000;
//	int coin5000 = coin / 5000;
//	coin = coin % 5000;
//	int coin1000 = coin / 1000;
//	printf("������ %d��, ", coin10000);
//	printf("��õ���� %d��, ", coin5000);
//	printf("õ���� %d��, ", coin1000);
//	printf("�������� �����Դϴ�.");
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
//	printf("500�� %d��\n", coin500);
//	printf("100�� %d��\n", coin100);
//	printf("50�� %d��\n", coin50);
//	printf("10�� %d��\n", coin10);
//	printf("5�� %d��\n", coin5);
//	printf("1�� %d��\n", coin1);
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
//	printf("ù���� : %d\n", randInt);
//	printf("�������� : %d", nextInt);
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
//	printf("ù���� : %d\n", randInt);// 0 ~ 9
//	printf("�������� : %d", nextInt);// 50 ~ 59
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
//	printf("�� �ָӴϿ� �ִ� ����");
//	int myMoney = (rand() % 10 + 1) * 1000;
//	printf(" %d���̴�.\n", myMoney);
//	int coin500 = rand() % 4 * 500;
//	int coin100 = rand() % 5000;
//	coin100 = coin100 / 100 * 100;
//	printf("�׸��� ������ ������ ");
//	printf("%d���̴�.", coin500 + coin100);
//	printf("\n���� ���ڸ� ��� ������?");
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
//	printf("�� �ָӴϿ� �ִ� ����");
//	int myMoney = (rand() % 10 + 1) * 1000;	// 1000 ~ 10000
//	printf(" %d���̴�.\n", myMoney);
//	int coin500 = rand() % 4 * 500;			// 0 ~ 1500
//	int coin100 = rand() % 5000;			// 0 ~ 4999
//	coin100 = coin100 / 100 * 100;			// 0 ~ 4900
//	printf("�׸��� ������ ������ ");
//	printf("%d���̴�.", coin500 + coin100);
//	printf("\n���� ���ڸ� ��� ������?");
//
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int input;
//	scanf("%d", &input);
//	if (input >= 10 && input <= 99) printf("input�� �� �ڸ� ���� �Դϴ�.");
//	else printf("input�� �� �ڸ� ���ڰ� �ƴմϴ�");
//}

//#include <stdio.h>
//
//int main()
//{
//	int y_age;
//	scanf("%d", &y_age);
//	printf("��ü ������\n");
//	if (y_age >= 12) printf("12�� ������\n");
//	if (y_age >= 15) printf("15�� ������\n");
//}

//#include <stdio.h>
//
//int main()
//{
//	char initial;
//	scanf("%c", &initial);
//	if (initial >= 65 && initial <= 90) printf("�빮��");
//	if (initial >= 97 && initial <= 122) printf("�ҹ���");
//}


//#include <stdio.h>
//
//int main()
//{
//	char direction;
//	scanf("%c", &direction);
//	if (direction == 'w') printf("�� ����Ű�� �Է��ϼ̽��ϴ�.");
//	if (direction == 'a') printf("�� ����Ű�� �Է��ϼ̽��ϴ�.");
//	if (direction == 'd') printf("�� ����Ű�� �Է��ϼ̽��ϴ�.");
//	if (direction == 's') printf("�Ʒ� ����Ű�� �Է��ϼ̽��ϴ�.");
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
//	if (input % 3 == 0) printf("'input�� 3�� ��� �Դϴ�.'");
//	if (input % 6 == 0) printf("'input�� 6�� ��� �Դϴ�.'");
//	if (input % 9 == 0) printf("'input�� 9�� ��� �Դϴ�.'");
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
//	default: printf("����");
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
//	printf("�޴��� �����ϼ���.");
//	printf("1.�� ���� 2. �̾��ϱ� 3. �ɼ�\n");
//	scanf("%d", &input);
//
//	switch (input) {
//	case 1:
//		printf("�� ���� ����\n");
//		break;
//	case 2:
//		printf("���̺� ������ �ε�\n");
//		break;
//	case Option:
//		printf("�ɼ� ����\n");
//		break;
//	default: printf("������ ����� �����ϴ�.\n");
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
//	case 3: case 6: case 9: printf("¦"); break;
//	}
//}

//#include <stdio.h>
//
//int main()
//{
//	char command = 'x';
//	switch (command) {
//	case 'x': printf("���ĺ� x �Է�.\n");
//		break;
//	case 'X': printf("����ǥ �Է�.\n");
////�ߺ��� case���� ����� �� ����.
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
//	case 'w': printf("'�� ����Ű�� �Է��ϼ̽��ϴ�.'");
//	case 'a': printf("'�� ����Ű�� �Է��ϼ̽��ϴ�.'");
//	case 'd': printf("'�� ����Ű�� �Է��ϼ̽��ϴ�.'");
//	case 's': printf("'�Ʒ� ����Ű�� �Է��ϼ̽��ϴ�.'");
//	}
//}

#include <stdio.h>

int main()
{
	int appetizer, mainDish, dessert;
	printf("appetizer 1.ĳ��� 2.������ 3.Ǫ�Ʊ׶�");
	scanf("%d", &appetizer);
	printf("appetizer 1.������ũ 2.�����丮 3.�簥��");
	scanf("%d", &mainDish);
	printf("appetizer 1.�ɟ� 2.���̽�ũ�� 3.���ݸ�����");
	scanf("%d", &dessert);
	switch (appetizer) {
	case 1: printf("ĳ���");
	case 2: printf("������");
	case 3: printf("Ǫ�Ʊ׶�");
	}
}