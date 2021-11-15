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


## *ex) programmers 방금 그곡 中*


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


<hr>


## *ex) programmers 오픈채팅방 中*

  - C++의 Stringstream 
     
      :sstream에는 std::istringstream이 정의되어 있는데 이는 마치 문자열을 하나의 스트림이라
      생각하게 해주는 가상화 장치라고 보면 된다.
      
      ```std::istringstream ss("123");```
      
      : "이름 날짜 내용" 과 같은 문자열로 한 줄의 데이터로 들어오면 각각 이름, 날짜, 내용등으로 파싱해서
     사용하기 위해 많이 활용됩니다.
   
    1) 문자열을 나누는 stringstream
      
      : stringstream에서 공백과 '\n'을 제외하고 문자열에서 맞는 자료형의 정보를 빼냅니다.
      
      : ```#include<sstream>``` 전처리 헤더를 필수로 포함해야 합니다.
      
      : ```stream.str(string str)``` 은 현재 stream의 값을 문자열 str로 바꿉니다.
      
      ```int num;
      	 string str="123 456";
	 stringstream stream;
	 stream.str(str);
	 while(stream1>>num) cout<<num<<endl;
	 //스트림에서 num의 자료형에 맞는 정보가 없을 때까지 자료를 추출/복사 하는 것임.
	 stream.str("");//초기화
      ```
