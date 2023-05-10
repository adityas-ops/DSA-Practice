#include <bits/stdc++.h>
using namespace std;
/*
You are given an integer array cards where cards[i] represents the value of the ith card. A pair of cards are matching if the cards have the same value.
Return the minimum number of consecutive cards you have to pick up to have a pair of matching cards among the picked cards. If it is impossible to have matching cards, return -1.
Example 1:
Input: cards = [3,4,2,3,4,7]
Output: 4
Explanation: We can pick up the cards [3,4,2,3] which contain a matching pair of cards with value 3. No

Input: cards = [1,0,5,3]
Output: -1
Explanation: There is no way to pick up a set of consecutive cards that contain a pair of matching cards.
*/

 int minimumCardPickup(vector<int>& cards) {
    // use map to store the number of each card
    map<int, int> m;
    for(int i = 0; i < cards.size(); i++){
        m[cards[i]]++;
    }
    // use vector to store the number of each card
    vector<int> v;
    for(auto it = m.begin(); it != m.end(); it++){
        v.push_back(it->second);
    }
    // sort the vector
    sort(v.begin(), v.end());
    // if the number of each card is 1, return -1
    if(v[v.size()-1] == 1){
        return -1;
    }
    else{
        return v[v.size()-1]-1;
    }

}

int main() {
    vector<int>cards = {3,4,2,3,4,7};
    cout << minimumCardPickup(cards) << endl;

    return 0;
}