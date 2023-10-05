for(int i = 0; i < n; i++){
        int coin;
        cin >> coin;
        if(coins_visited[coin] == false){
            coins.push_back(coin);
            coins_visited[coin] = true;
        }
    }

    sort(coins.begin(), coins.end());

    for(int i = 0; i < coins.size(); i++){
        for(int j = coins[i]; j <= k; j++){
            dp[i] = min(dp[i], dp[i - coins[j]] + 1);
        }
    }

    cout << dp[k];

    return 0;