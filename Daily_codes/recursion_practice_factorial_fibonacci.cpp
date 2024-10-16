#include <iostream>


int fibo(int num)
{//피보나치수열 재귀함수
	std::cout << "fibo :" << num << std::endl;
	if (num == 1 || num == 0)
		return(num);
	return(fibo(num - 1) + fibo(num - 2));
	//피보나치 점화식 : 피보나치 f(n) = f(n-1) + f(n-2)
}

//팩토리얼 재귀/ 반복문

void pectorial(int num)
{ //팩토리얼은 반복문으로 표현가능
	int result = 1;
	for (int i = 1; i <= num; i++)
		result *= i;
	std::cout << result << std::endl;
	//팩토리얼 점화식 : f(n) = f(n-1) * f(n);    
	//팩토리얼 표현방법 : n!
}

int recursion_pector(int num)
{//팩토리얼 재귀함수.
	if (num == 0) return 1;
	return(num * recursion_pector(num - 1));
}

int main(void)
{
	//fibo(5);
	pectorial(4);
	std::cout << recursion_pector(4);
}