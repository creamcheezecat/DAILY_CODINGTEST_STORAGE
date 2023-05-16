### 문제풀이

처음 문제 접했을때 어떤 알고리즘인지도 모르고 그냥 풀었다가 틀렸다를 보고

아무리 생각해도 안 떠오르길래 알고리즘 분류를 보았더니 이분탐색 이었다

하지만 이분 탐색으로 풀었는데 divisionbyzero 런타임 에러 가 발생해서 조금 고생했다.

***
### 동료의 피드백


```
 sort(snack.begin(),snack.end());

    int left = 0, right = snack[N-1];
```
이분탐색으로 접근하겠다는 생각은 꽤나 좋은 접근방법 입니다.



```
 for(int i = 0 ; i < N ; i++){
        cin >> snack[i];
    }
sort(snack.begin(),snack.end());
```

sort 가 꼭 필요할까요?

