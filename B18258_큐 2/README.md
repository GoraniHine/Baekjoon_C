# B18258_큐 2 문제풀이
정수를 저장하는 큐를 구현한 다음, 입력으로 주어지는 명령을 처리하는 프로그램을 작성하시오.
1. push X: 정수 X를 큐에 넣는 연산이다.
2. pop: 큐에서 가장 앞에 있는 정수를 빼고, 그 수를 출력한다. 만약 큐에 들어있는 정수가 없는 경우에는 -1을 출력한다.
3. size: 큐에 들어있는 정수의 개수를 출력한다.
4. empty: 큐가 비어있으면 1, 아니면 0을 출력한다.
5. front: 큐의 가장 앞에 있는 정수를 출력한다. 만약 큐에 들어있는 정수가 없는 경우에는 -1을 출력한다.
6. back: 큐의 가장 뒤에 있는 정수를 출력한다. 만약 큐에 들어있는 정수가 없는 경우에는 -1을 출력한다.

- 가장 중요했던 코드  
<pre>
scanf("%s", keyword, 10);  
  
if (strcmp(keyword, "push") == 0) {//code}  
else if (strcmp(keyword, "pop") == 0) {//code}  
else if (strcmp(keyword, "size") == 0) {//code}  
else if (strcmp(keyword, "empty") == 0) {//code}  
else if (strcmp(keyword, "front") == 0) {//code}  
else if (strcmp(keyword, "back") == 0) {//code}  
</pre>
string.h의 strcmp로 keyword에 저장한 문자열을 통해 push, pop, size, empty, front, back인지 확인하는 구문이다.  
정수와 달리 문자열을 비교할때는 strcmp를 사용하는게 편하다.  
두 문자열이 같다면 0을 출력하고, 첫번째 문자열이 두번째 문자열보다 사전 순으로 앞서면 음수, 뒤라면 양수가 반환된다.  

- malloc과 free
문제의 조건에서 2,000,000개의 명령이 주어진다.  
push만 한다면 최대 2,000,000개의 데이터를 저장해야한다.  
이렇게 큰 크기의 배열을 스택에 할당하려고 하면 스택 메모리 용량을 초과하여 오류가 발생할 수 있고, 
메모리를 미리 할당하지 않고, 실제 필요한 만큼만 메모리를 할당할 수 있기 때문에 메모리 낭비를 줄일 수 있다.  
**free를 사용하지 않으면 메모리 누수가 발생할 수 있어서 조심해야 한다.**  
