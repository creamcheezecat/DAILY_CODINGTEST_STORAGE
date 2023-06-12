### 문제풀이

```c

int section = n / 3;

for (int k = 0; k < 3; k++){
    for (int l = 0; l < 3; l++){
        vector<vector<int>> subpaper(section, vector<int>(section));

        for (int j = 0; j < section; j++){
            for (int i = 0; i < section; i++){
                subpaper[j][i] = arr[k * section + j][l * section + i];
            }
        }

        dfs(subpaper, section, o, z, m);
    }
}

```

이 부분 구현이 시간이 없어서 제대로 구현을 못했다. 시간 안에 빠르게 구현해야겠다.


***
### 동료의 피드백

***