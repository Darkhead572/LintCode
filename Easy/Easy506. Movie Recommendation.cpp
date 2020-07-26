/*

requirements

506. Movie Recommendation
Give a user a list of movies he has seen and recommend other movies he may like for each user. Here we specify a simple recommendation algorithm that you need to implement in Map Reduce.
For a user, join the movies A, B, C that he has seen, then we can see which movie collections these people have seen among the people who have seen the movies A, B or C. For these movies, the first five movies with the highest frequency are recommended to the user. The recommended movies need to be sorted according to the degree of correlation

Example
Example 1:

Input：[[1,2],[1,3,5],[2,5]]
Output：[[5,3],[2],[1,3]]
Explanation：
Analysis of recommended movies for User 1:
- He has seen movies 1 and 2.
- Users who have seen movies 1 or 2 also have users 2 and 3.
- Of the movies that users 2 and 3 have seen, 5 appear twice and 3 once.
- So the movies recommended to user 1 are [5,3], and 5 is in the front, because the correlation is higher.
Example 2:

Input：[[1],[2],[3]]
Output：[[],[],[]]
Explanation：All users watch different movies.
*/

class Solution {
typedef pair<int,pair<int,int> > Node;
    struct less{
        bool operator()(const Node &a, const Node &b){
            if (a.second.first==b.second.first)
                if (a.second.second==b.second.second)
                    return a.first<b.first;
                else return a.second.second>b.second.second;
            return a.second.first>b.second.first;
        }
    };
public:
    vector<vector<int>> minMalwareSpread(vector<vector<int>> &graph) {
        int n = graph.size();
        vector<vector<int> > recommends(n);
        for(int u=0; u<n; ++u){
            unordered_map<int,pair<int,int> > movies;   // movie, freq, weight
            for(int v=0; v<n; ++v){
                if (u==v) continue;
                vector<int> common;
                set_intersection(graph[u].begin(), graph[u].end(),
                    graph[v].begin(), graph[v].end(), back_inserter(common));
                if (common.size()==0) continue;
                vector<int> diff;
                set_difference(graph[v].begin(), graph[v].end(), 
                    common.begin(), common.end(), back_inserter(diff));
                for(const auto &m:diff)
                    movies[m]={movies[m].first+1, movies[m].second+common.size()};
            }
            priority_queue<Node, vector<Node>, less> freqs, cors;
            for(const auto &m:movies){
                freqs.push(m);
                if (freqs.size()>5) freqs.pop();
            }
            for(; freqs.size(); freqs.pop())  // movie, weight, freq
                cors.push({freqs.top().first, {freqs.top().second.second, freqs.top().second.first}});
            for(; cors.size(); cors.pop())
                recommends[u].push_back(cors.top().first);
            reverse(recommends[u].begin(), recommends[u].end());
        }
        return recommends;
    }
};