int flag = 0;
        for(int j = 0; j < a.size(); j++){
            if(str_a[j] != str_b[j]){
                cout << "Impossible" << "\n";
                flag = 1;
                break;
            }
        }

        if(flag == 0) cout << "Possible" << "\n";