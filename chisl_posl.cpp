#include "conio.h"
#include "math.h"
#include "stdio.h"


bool check(bool mas[10]){
	if (mas[0] == true && mas[1] == true && mas[2] == true && mas[3] == true && mas[4] == true && mas[5] == true && mas[6] == true && mas[7] == true && mas[8] == true && mas[9] == true)
		return true;
	else return false;
}
long long int fanc(long long int N){
	int j = 0; long long cN;
	int num = 0;
	int digit;
	bool mas[10] = { false, false, false, false, false, false, false, false, false, false };
	while (check(mas) == false){
		j++;
		cN = N*j;
		num = 0;
		int i = 1;
		while (cN != 0){
			digit = cN % 10;
			cN = cN / 10;
			if (mas[digit] == false)
				mas[digit] = true;
		}

	}
	return N*j;

}
void testing(long long N){
	if (N == 0)
		printf("FAIL\n");
	else printf("%lld\n", fanc(N));

}

int main()
{
	testing(0);
	testing(1234567890);
	testing(2546);
	testing(1);
	_getch();

	return 0;
}

