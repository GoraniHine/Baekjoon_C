# B10773_약수  
양수 A가 N의 진짜 약수가 되려면, N이 A의 배수이고, A가 1과 N이 아니어야 한다. 어떤 수 N의 진짜 약수가 모두 주어질 때, N을 구하라.  
나는 1과 A가 아닌 약수들 중 가장 작은 값과, 가장 큰 값을 곱하여 A를 구하였다.  

- 가장 중요했던 코드  
<pre>
for (int i = 0; i < N - 1; i++)  
	{  
		for (int j = 0; j < N - 1 - i; j++)  
		{	  
			if (list[i] != 0 && list[j] != 0 && list[j] > list[j + 1])  
			{  
				int temp = list[j];  
				list[j] = list[j + 1];  
				list[j + 1] = temp;  
			}  
		}  
	}  
</pre>
나는 버블 정렬을 사용하여 list에 list[0]에는 제일 작은 수 list[N - 1]에는 제일 큰 수를 넣었다.  
그리고 list[0] * list[N - 1] 을 통해 답을 구할 수 있었다.  
여기서 버블 정렬은 인접한 두 요소를 비교해가며, 정렬한다.  
이 경우 비교를 for문을 2번 중첩하여 평균 O(n^2)의 시간이 걸린다..   
