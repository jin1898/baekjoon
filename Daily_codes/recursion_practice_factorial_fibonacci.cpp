#include <iostream>


int fibo(int num)
{//�Ǻ���ġ���� ����Լ�
	std::cout << "fibo :" << num << std::endl;
	if (num == 1 || num == 0)
		return(num);
	return(fibo(num - 1) + fibo(num - 2));
	//�Ǻ���ġ ��ȭ�� : �Ǻ���ġ f(n) = f(n-1) + f(n-2)
}

//���丮�� ���/ �ݺ���

void pectorial(int num)
{ //���丮���� �ݺ������� ǥ������
	int result = 1;
	for (int i = 1; i <= num; i++)
		result *= i;
	std::cout << result << std::endl;
	//���丮�� ��ȭ�� : f(n) = f(n-1) * f(n);    
	//���丮�� ǥ����� : n!
}

int recursion_pector(int num)
{//���丮�� ����Լ�.
	if (num == 0) return 1;
	return(num * recursion_pector(num - 1));
}

int main(void)
{
	//fibo(5);
	pectorial(4);
	std::cout << recursion_pector(4);
}