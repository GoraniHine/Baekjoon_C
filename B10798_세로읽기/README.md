# B10798 세로읽기
A A B C D D
a f z z 
0 9 1 2 1
a 8 E W g 6
P 5 h 3 k x

세로로 읽은 순서대로 글자들을 공백 없이 출력하면 다음과 같다:
Aa0aPAf985Bz1EhCz2W3D1gkD6x

총 다섯줄의 입력이 주어진다. 각 줄에는 최소 1개, 최대 15개의 글자들이 빈칸 없이 연속으로 주어진다. 주어지는 글자는 영어 대문자 ‘A’부터 ‘Z’, 영어 소문자 ‘a’부터 ‘z’, 숫자 ‘0’부터 ‘9’ 중 하나이다. 각 줄의 시작과 마지막에 빈칸은 없다.

- 가장 중요했던 코드  
<pre>
for (int i = 0; i < 5; i++)
	{
		scanf("%15s", x);
		strcpy(list[i], x);
	}

	for (int i = 0; i < 15; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			if (list[j][i] == '\0')
			{
				continue;
			}
			printf("%c", list[j][i]);
		}
	}
</pre>
문자열을 입력받아서 string[5][16]에다가 입력을 받았다.
널 문자까지 생각해서 인덱스를 16씩 주었다.
string 헤더파일을 통해서 strcpy로 문자열을 string[i]에다가 5개의 문자열을 삽입했고,
printf 로 string[j][i]를 출력하여 세로읽기를 하였다.

- strcmp와 strcpy  
strcmp는 문자열 비교이고, strcpy는 문자열을 삽입한다.
cmp는 'compare' 로 비교하다이고,
cpy는 'copy'로 복사하다이다.