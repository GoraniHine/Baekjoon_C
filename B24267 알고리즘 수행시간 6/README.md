# B24267_알고리즘 수행 시간 6 문제 풀이
오늘도 서준이는 알고리즘의 수행시간 수업 조교를 하고 있다. 아빠가 수업한 내용을 학생들이 잘 이해했는지 문제를 통해서 확인해보자.

입력의 크기 n이 주어지면 MenOfPassion 알고리즘 수행 시간을 예제 출력과 같은 방식으로 출력해보자.

MenOfPassion 알고리즘은 다음과 같다.

MenOfPassion(A[], n) {
    sum <- 0;
    for i <- 1 to n - 2
        for j <- i + 1 to n - 1
            for k <- j + 1 to n
                sum <- sum + A[i] × A[j] × A[k]; # 코드1
    return sum;
}

- 분명 n이 1 <= n 이라고 했는데..
<pre>
int main(void) 
{
    long long int n = 0;
    long long int result = 0;

    scanf("%lld", &n);

    if (n == 1 || n == 2) {  // n이 1 또는 2일 경우
        printf("0\n4");
    }
    else {  // n이 3 이상일 경우
        result = ((n * (n - 1) * (n - 2)) / 6);
        printf("%lld\n3", result);  // 수행 횟수와 차수 출력
    }

    return 0;
}
</pre>
최고차항의 차수가 result = ((n * (n - 1) * (n - 2)) / 6); 이라는 건 꽤 빨리 깨달았다.
하지만 n이 1부터라는 문제에서 꽤 많이 틀리게 되었다..
n == 1 or n == 2 일 때 따로 값을 달아줬지만 계속해서 틀리게 되었고,
질문 게시판에 들어가서 보아하니 
result = ((n * (n - 1) * (n - 2)) / 6); 이렇게만 써도 정답 처리가 되었다고 했다..
