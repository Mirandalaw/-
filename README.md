## *1. string sort*

<hr>

  ```#include<string> 
     #include<algorithm> 
     using namespace std;
     int main(){
      string str1="10";
      string str2="6";
      cout<<(str1<str2); //1반환 
      // 사전 순으로 10이 6보다 앞서 있기 때문에.
      string str3 = str1+str2;  // "106"
      string str4 = str2+str1;  // "610"
      cout<<(str3<str4);        //1반환
      //같은 자릿수로 받아진 정수 형태의 문자열 비교는 단순히 int형처럼 비교해도 무관
    }
```
    
## *ex) programmers 가장 큰수 中*
 
 ```
      #include<string>
      #include<algorithm>
      using namespace std;
      
      bool cmp(string a,string){
        return a+b > b+a;
      }  //6, 10 이 있을 때 610, 106 중 더 큰 수 비교
     
      vector<string> tmp;
      sort(tmp.begin(),tmp.end(),cmp);
 ```

## *2. string parse*

<hr>

*ex) programmers 방금 그곡 中*

```
     string str1 = "12:00,12:14,HELLO,CDEFGAB"; 
     vector<string> str;
     int pos = 0;
     string delimiter = ",";
     while ((pos = str1.find(',')) != string::npos) {
     	string a;
	a = str1.substr(0, pos);
	str.push_back(a);
	str1.erase(0, pos + delimiter.length());
     }
```
 
  
