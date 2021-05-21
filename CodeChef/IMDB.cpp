#include<iostream>
using namespace std;

int main(){
    int T;
    cin>>T;                                 //Inputting number of test cases
    while(T--){
        int n,x;
        int max=-1, maxind = -1;
        cin>>n>>x;                          //Input - number of movies and maximum size in harddisk      
        int spr, rating;
        for(int i=0;i<n;i++){
            cin>>spr>>rating;               //Inputting the space required by the movie and its imdb rating
            if(spr <= x && rating > max)    // Checking if the movie fits in the harddisk 
                                            // and if the rating of the current movie is more than the maximum as of yet
                max = rating;               //If you found a movie that fits in, store its rating in max, for future comparision.
        }
        cout<<max<<endl;
    }
    return 0;
}