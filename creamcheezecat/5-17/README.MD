### 문제풀이

기본적인 dfs 로 푸는 문제 였다.

```c
if (0<= nx && nx < arr.size() && 0<= ny  && ny < arr[0].size() && arr[nx][ny] == 1 && !checker[nx][ny]){
    checker[nx][ny] = true;
    size += dfs(arr,checker,nx,ny);
}
```

이 부분 if 문이 길다보니 제대로 중괄호를 감싸지 않아서 틀렸었다.

***
### 동료의 피드백

```c
if (0<= nx && nx < arr.size() &&
0<= ny  && ny < arr[0].size() &&
arr[nx][ny] == 1 &&
!checker[nx][ny])
```

제생각엔 이런식으로 코드를 작성하면 안됩니다
```c

if (0<= nx && nx < arr.size() &&
0<= ny && ny < arr[0].size() &&
arr[nx][ny] == 1 &&
!checker[nx][ny]){

    checker[nx][ny] = true;

}
```
이런식으로 적용하는 습관을 들이는게 맞는것 같습니다.
