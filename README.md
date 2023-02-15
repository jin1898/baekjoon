# baekjoon

[python]----------------------     
vim [파일이름].py    --->(python파일 생성법)           
python3 [파일이름].py           --->       (python파일 컴파일방법)             
https://twpower.github.io/203-debug-python-code-using-pdb (pdb(파이썬 디버거) 사용법)

[python]----------------------      
[DFS/BFS]----------------------             
https://www.acmicpc.net/problem/1260 ->[백준1260번] DFS와 BFS          
https://www.acmicpc.net/problem/11724 -> [백준11724번] 연결 요소의 개수      


https://yoongrammer.tistory.com/68 (자료구조 트리) 개념공부           
https://gmlwjd9405.github.io/2018/08/15/algorithm-bfs.html  (BFS, 너비우선탐색, 그래프 탐색)개념공부    
https://jin1ib.tistory.com/entry/BFS-DFS-1 (너비우선탐색(BFS) 개념, 깊이우선탐색(DFS) 개념,큐사용) 개념공부


>https://ji-gwang.tistory.com/291 (백준 1260 파이썬 문제풀이)
>해당 문제는 DFS와 BFS의 기본개념을 이해하기 좋은문제이다. DFS는 재귀로 구현하는게 보통이고 BFS는 queue로 구현하는게 보통이다. 또한 입력받은 노드의 개수만큼 이차원 리스트로(이차원 리스트의 인덱스:각 노드, 해당인덱스의 값들: 노드들과 연결 여부) False로 초기화한다음 만약 연결되어 있다면 True로 바꿔주는 형식으로 구현해도 되고 혹은 정점만 입력 받아서 그 정점만 찾아나가는 방식으로 구현해도 된다. 단, 정점만 찾아나가는 방식으로 구현할 경우 낮은 숫자부터 탐색하라고 되어있으니 오름차순 정렬이 필요하다. queue는 리스트를 사용해도 되고 deque을 사용해도 되지만 popleft가 구현되어 있는 시간복잡도가 더 낮은 deque을 사용하는 것이 좋다.        
>          
> ->DFS와 BFS가 일반적으로 어떤식으로 구현이 되고 탐색을 주로 어떻게 하는지 적혀있다.       

***
[1. deque? collections?]        
https://excelsior-cjh.tistory.com/entry/collections-%EB%AA%A8%EB%93%88-deque [collections 모듈 - deque]              
collections.deque 와 list 의 차이       
***
[DFS/BFS]----------------------         
