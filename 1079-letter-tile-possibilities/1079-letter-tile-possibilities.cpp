class Solution {
public:
    unordered_set<string>st;
void func(string tiles,string s, int i){
    if(i==tiles.size())return;
    s+=tiles[i];
    do {
        st.insert(s); // Insert each permutation into the set
    } while (next_permutation(s.begin(), s.end()));
    func(tiles,s,i+1);
    s.pop_back();
    func(tiles,s,i+1);
}
    int numTilePossibilities(string tiles) {
        sort(tiles.begin(),tiles.end());
        string s = "";
        func(tiles,s,0);
        return st.size();
    }
};