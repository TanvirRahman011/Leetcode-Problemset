class TopVotedCandidate {
public:

    unordered_map<int,int>mp;
    unordered_map<int,int>freq;
    vector<int>times;
    int n;

    TopVotedCandidate(vector<int>& persons, vector<int>& time) {
        n = time.size();
        times = time; 
        int lead = persons[0];
        for(int i = 0;i<persons.size();i++){
            freq[persons[i]]++;
            if(freq[persons[i]]>=freq[lead]){
                lead = persons[i];
            }
            mp[time[i]] = lead;
        }
        
    }
    
    int q(int t) {

        int findable = 0;
        int s = 0;
        int e = n-1;

        while(s<=e){
            
            int mid = (s+e)/2;
            if(times[mid]==t){
                findable = times[mid];
                
                break;
            }
            else if(times[mid]<t){
               
                s = mid + 1;
                findable = times[mid];
            }
            else{
                e = mid - 1;
          
            }
        }
        
        return mp[findable];


    }
};