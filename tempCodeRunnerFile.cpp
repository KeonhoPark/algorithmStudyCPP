cout << *lst.begin() << " " << *lst.end();

    for(auto n : lst) cout << n << " ";

    cout << *it;

    for(int i = 0; i < k; i++){
        it++;
    }

    cout << "<";

    while(!lst.empty()){
        cout << *it << ", ";
        it = lst.erase(it);
        for(int i = 0; i < k; i++){
            if(it == lst.end()) it = lst.begin();
            it++;
        }
    }

    cout << ">";