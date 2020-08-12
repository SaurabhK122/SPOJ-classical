class Solution {
public:

    int myAtoi(string str) {
        #define MAX 2147483647
        int i =0;
        int n = str.size();
        if (n==0){
            return 0;
        }
        while(str.at(i) == ' ' ){
            i++;
            if (i==n){
                return 0;
            }
        }
 
        string str1 = str.substr(i);
        int n_new = str1.size();
        if ((str1[0] < '0' || str1[0] > '9') && (str1[0] != '-') &&(str1[0] != '+'))
            return 0;
        int j=1;
        while(str1[j] >= '0' && str1[j] <= '9' && j<n){
            j++;
        }
        if(j!=n){
            str1.erase(str1.begin()+j, str1.end());
        }
        int n_final = str1.size();
        cout<< str1[0];
        long long int result = 0 ;
        if (str1[0] >='0' && str1[0] <= '9'){  
            for(int i =0; i< n_final;i++){
                if (result*10 + str1[i]-'0' > MAX){
                    return MAX;
                }
                result = result*10 + str1[i]-'0';
                cout<<result<<endl;
            }
        }
        else if (str1[0] == '+'){
            for(int i =1;i< n_final;i++){
                if (result*10 + str1[i]-'0' > MAX){
                    return MAX;
                }
                result = result*10 + str1[i]-'0';
            }
        }
        else if (str1[0] == '-'){
            for(int i =1; i< n_final;i++){
                if (result*10 + str1[i]-'0' > MAX){
                    result = INT_MIN;
                    return result;
                }        
                result = result*10 + str1[i]-'0';
            } 
            result = result*(-1);
        }
        return result;
        
    }
};
