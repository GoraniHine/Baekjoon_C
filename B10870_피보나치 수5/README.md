# B10870 피보나치 수 5
피보나치 수는 0과 1로 시작한다. 0번째 피보나치 수는 0이고, 1번째 피보나치 수는 1이다.
그 다음 2번째 부터는 바로 앞 두 피보나치 수의 합이 된다.

- 가장 중요했던 코드  
<pre>
int pibonacchi(n)
{
	int temp = 0;
	temp = x;
	x += a;
	a = temp;

	if (n == 1)
	{
		printf("%d", x);
		
		return 0;
	}

	return pibonacchi(n - 1);
}
</pre>
함수 pibonacchi()는 n이 1씩 줄어들면서 반복하는 재귀함수이다.
n이 0, 1, 2일 경우를 제외하고 반복하게 되는데,
n이 1이 될 경우의 값을 출력한다.
0, 1, 2를 제외하고 반복하기에 pibonacchi(n - 2)를 메인함수에서 실행시켰다.  