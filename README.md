# C-Language
C 언어 수강학생들이 핵심 프로그램을 보고 학습하는 페이지 입니다. <br>
핵심 : 변수 - 연산자 - 조건문(if, switch) - 반복문(while, for) - 함수 - 배열 - 포인터
<br>

## 12주차 실습 -  변수범위&배열

### [변수범위&생존기간](https://github.com/baek-study/C-Language/blob/main/source/week12_variable.c)
<ul>
  <li>변수범위:지역변수, 전역변수<br>
    &emsp; - 선언: 지역(블록/함수 안), 전역(함수 외)<br>
    &emsp; - 사용: 지역(해당 블록 내), 전역(프로그램 전체)
  </li>
  <li>변수생존(메모리존재)기간:임시(블록내), 영구(실행동안)<br>
    &emsp; - 변수선언위치: 지역(임시), 전역(영구) <br>
    &emsp; - 저장유형지정자: auto(임시), static(영구)
  </li>
  <li>지역변수: 자동으로 초기화 x, 함수 매개변수도 지역변수 <br>
   &emsp;  void sub() {int local_x; }<br>
  </li>
  <li>전역변수: 자동으로 초기화(0), 같은 이름 시 지역변수가 우선순위 높음  <br>
   &emsp;  int globla_x; void sub() { }<br>  
   &emsp;  int temp=5; void sub() {int temp=3; printf("%d",temp}//3 }<br>  
  </li>
   <li>static(정적)변수: 프로그램 실행 동안 계속 유지  <br>
     &emsp;<b>static</b> int count = 0; 
  </li>

</ul>


### [배열](https://github.com/baek-study/C-Language/blob/main/source/week12_array.c)
<ul>
  <li>배열: 같은 자료형을 여러개 저장, 연속된 공간 
  </li>
  <li>배열선언: int scores[5]; // 대괄호안에 갯수
    &emsp; 인덱스: 각원소 구분하는 일련번호, 0부터 시작
  </li>
  <li>원소접근: scores[3]; //배열이름[인덱스]
  </li>
  <li>값저장: scores[3] = 20; //배열이름[인덱스] = 값
  </li>
  <li>초기화: int scores[5]={10,20,30,40,50};
  </li>
</ul>

### [함수연습](https://github.com/baek-study/C-Language/blob/main/source/week12_functionExam.c)

<br>



## 1주차 실습
### [첫 프로그램! hello, world](https://github.com/baek-study/C-Language/blob/main/source/week1_hello.c)
// C 프로그램 : Hello World <br> 
#include <stdio.h><br>
int main() <br>
{<br>
  &emsp;&emsp;printf("Hello, World");<br>
  &emsp;&emsp;return 0;<br>
}<br>
<br>

## 2주차 실습 - 기본구조 
### [프로그램 기본 구조](https://github.com/baek-study/C-Language/blob/main/source/week2_basic.c)
<ul>
  <li>주석: 한줄(//), 여러줄(/* */)</li>
  <li>전처리기: include 헤더 파일</li>
  <li>함수: 시작합수 main() <br>
  &emsp; &emsp;출력함수 printf()- \n, \t </li>
</ul>

<br>

## 3주차 실습 - 변수
### [변수](https://github.com/baek-study/C-Language/blob/main/source/week3_variable.c)
<ul>
  <li>변수 선언 :  int num;&ensp; char ch;&ensp; double pi;&ensp; <br>
   &emsp;=>  int(정수), char(문자), double(실수) 
  </li>
  <li>변수 값 저장 : num=10;&ensp; ch='a'; &ensp;pi=3.14; </li>
  <li>변수 초기화 : int num=10;&ensp; char ch='a';&ensp; double pi=3.14;</li>
</ul>

### [표준출력함수 printf()](https://github.com/baek-study/C-Language/blob/main/source/week3_printf.c)
<ul>
  <li>형식지정자:  %d(정수), %c(문자), %f(실수)  </li>
  <li> printf("%d, %c, %f \n", num,ch,pi);<br>
  &ensp;=> 형식지정자와 변수 갯수/자료형 일치</li>
  <li>필드폭(자릿수): %10d (10칸차지) </li>
  <li>정밀도: %.3f (소수점 3자리까지) </li>
</ul>

### [표준입력함수 scanf()](https://github.com/baek-study/C-Language/blob/main/source/week3_scanf.c)
<ul>
 <li>형식지정자 :  %d(정수), %c(문자), %lf(double), %f(float) </li>
 <li> scanf("%d %c %lf", &num, &ch &pi) ;<br>
  &ensp; =>변수 앞에 주소연산자 & 필수!!<br>
  &ensp; =>double 변수에 형식지정자는 %lf 사용</li>
</ul>

<br>

## 4주차 실습 - 연산자
### [기호상수- define/const](https://github.com/baek-study/C-Language/blob/main/source/week4_constant.c)
<ul>
  <li>기호상수선언 : #define 전처리기 이용 <br>&ensp; ex) #define MAX 100   </li>
  <li>기호상수선언 :  const 키워드<br> &ensp; ex) const int MAX = 100;  </li>
</ul>

### [연산자-산술/증감/복합](https://github.com/baek-study/C-Language/blob/main/source/week4_operator.c)
<ul>
  <li>산술 연산자 : +, -, *, /, % (나머지) &ensp;<br>
  &ensp; => 정수/정수=정수, &ensp; 5/3 = 1 </li>
  <li>증감 연산자: x++, ++x( x 값 1 증가) <br>
  &ensp; x--, --x (x값 1 감소)</li>
  <li>복합 대입 연산자: +=, -=, *=, /=, %= 등 <br>
 &emsp;=>   x += 3;   // x = x+3; 를 축약한 표현
  </li>
</ul>

<br>

## 5주차 실습 - 조건문 1
### [연산자-관계/논리](https://github.com/baek-study/C-Language/blob/main/source/week5_operator2.c)
<ul>
  <li>관계연산자 : ==, !=, >=, <=, >, <  </li>
  <li>논리연산자 : &&(and), ||(or), !(not) </li>
</ul>

### [조건문-if/if~else](https://github.com/baek-study/C-Language/blob/main/source/week5_if.c)
<ul>
  <li>단순 if : <b>if</b>(조건) { &emsp;  } </li>
  <li>if~else : <b>if</b>(조건) { &emsp;  } <br>
   &emsp; &emsp; &emsp;  <b>else</b> {&emsp;   } </li>
</ul>

<br>

## 6주차 실습 - 조건문 2
### [조건문-다중if](https://github.com/baek-study/C-Language/blob/main/source/week6_multiIf.c)
<ul>
  <li>중첩 if : if 안에 if <br>
   &emsp; &emsp; <b>if</b>(조건) {  if(조건) { } else { }  } <br>
    &emsp; &emsp; <b>else</b> {  if(조건) { } else { }  } 
  </li>
  <li>연속 if : if ~ else if ~ else <br>
   &emsp; &emsp; <b>if</b>(조건) { &emsp;  } <br>
   &emsp; &emsp; <b>else if</b>(조건) { &emsp;  } <br>
   &emsp; &emsp; <b> else</b> { &emsp;  } 
  </li>
</ul>

<br>

## 7주차 실습 - 조건문 & 반복문 
### [조건문-switch](https://github.com/baek-study/C-Language/blob/main/source/week7_switch.c)
<ul>
  <li>switch~case 문 : 여러 조건에서 선택 <br>
   &emsp; &emsp; <b>switch</b>(변수) { <br>
   &emsp; &emsp; &emsp; <b>case 0 :</b>문장들; break; <br>
   &emsp; &emsp; &emsp; <b>default:</b>문장들; break;  } 
  </li>
</ul>

### [조건연산자&형변환](https://github.com/baek-study/C-Language/blob/main/source/week7_condOperator.c)
<ul>
  <li>조건연산자 : 조건?참문자:거짓문장<br>
   ex) absValue = a>0 ? a : -a ; </li>
   <li>형변환 : 캐스트 연산자 (int), (float) <br>
   ex) int i = (int)1.12;  </li>

</ul>

### [반복문-while](https://github.com/baek-study/C-Language/blob/main/source/week7_while.c)
<ul>
  <li>while : 조건반복(ex. 비밀번호맞을때까지) <br>
   &emsp; &emsp;- 초기값, 반복조건(끝), 증감 <br>
   &emsp; &emsp; int i=0; <b>while</b>(i<5) {  문장들; i++;  } <br>
  </li>
</ul>

<br>

## 9주차 실습 - 반복문 
### [반복문-for](https://github.com/baek-study/C-Language/blob/main/source/week9_for.c)
<ul>
  <li>for 문 : 횟수반복(ex.10번) <br>
   &emsp; &emsp;- 초기값, 반복조건(끝), 증감 <br>
   &emsp; &emsp; <b>for</b>(i=0 ; i<5 ; i++) {  문장들; } <br>
  </li>
</ul>

<ul>
  <li>중첩 for 문 : for 안에 for 문 <br>
   &emsp; &emsp; <b>for</b>(i=2 ; i<9 ; i++) {  <br>
   &emsp; &emsp; &emsp; &emsp;  <b>for</b>(j=1 ; j<10 ; j++) {  문장들; } } <br>
  </li>
</ul>

<br>

## 10주차 실습 -  함수 

### [반복문-do~while](https://github.com/baek-study/C-Language/blob/main/source/week10_dowhile.c)
<ul>
  <li>do~while : 명령문 무조건 한번 실행 <br>
   &emsp;  <b>do</b> { 문장들; }<b>while(조건);</b>  <br>    
  </li>
</ul>

### [보조제어문](https://github.com/baek-study/C-Language/blob/main/source/week10_subControl.c)
<ul>
  <li>무한루프 & 보조 제어문 <br>
   &emsp;  <b>while</b>(1) { // 무한루프  <br>
   &emsp; &emsp;  if(조건) break; // 제어를 벗어나기 위해 사용  <br>
   &emsp; &emsp;  if(조건) continue; //  현재 반복을 중간하고 다음 반복을 시작 }  <br>
  </li>

</ul>

### [함수](https://github.com/baek-study/C-Language/blob/main/source/week10_function.c)
<ul>
  <li>함수 정의  <br>
   &emsp;  <b>int max(int x, int y)</b> {   <br>
   &emsp; &emsp;  if(x>y) return x;  <br>
   &emsp; &emsp;  else return y; }  <br>  
  </li>
  <li>함수 호출 <br>
    int value = max(10, 20); </li>
</ul>

<br>

## 11주차 실습 -  함수2 

### [매개변수&인수](https://github.com/baek-study/C-Language/blob/main/source/week11_function_parameter.c)
<ul>
  <li>매개변수:함수에서 값을 전달받는 변수 <br>
    &emsp; (함수정의) max(<b>int x, int y</b>)  
  </li>
  <li>인수:함수에 실제로 전달되는 값   <br>
    &emsp; (함수호출)  max(<b>10, 20</b>)
  </li>
  <li>매개변수와 인수 개수 일치/타입일치 <br>
   &emsp;  int max(int x, int y) - max(10, 20)<br>
   &emsp;  double get_area(int radius) - get_area(10)<br>
   &emsp;  print print_ch(char ch) - print_ch('a')
  </li>
</ul>


### [반환값&결과대입](https://github.com/baek-study/C-Language/blob/main/source/week11_function_return.c)
<ul>
  <li>반환값:함수 수행 결과로 돌려주는 값  <br>
   &emsp;  (함수정의) return x 
  </li>
  <li>결과대입변수:함수 호출후 결과 대입   <br>
    &emsp;  (함수호출)  <b>value</b> = max(10, 20)
  </li>
  <li>반환 자료형, 반환값, 결과대입변수가 일치 <br> 
    &emsp;<b>int</b> max() { <b>int</b> result; 문장들; return <b>result</b>;} - <b>int</b> value1 = max();<br>
    &emsp;<b>double</b> get_area() { <b>double</b> result; 문장들; return <b>result</b>;} - <b>double</b> value3 = get_area(); <br>
    &emsp;<b>char</b> get_ch() { <b>char</b> result; 문장들; return <b>result</b>;} - <b>char</b> value2 = get_ch();<br>
  </li>
</ul>

### [함수정의&호출연습=매개변수&인수+반환값&결과대입](https://github.com/baek-study/C-Language/blob/main/source/week11_function_all.c)
&emsp;-[함수정의(헤더)연습](https://github.com/baek-study/C-Language/blob/main/source/week11_function_parameterExam.c)<br>
&emsp;-[함수호출연습](https://github.com/baek-study/C-Language/blob/main/source/week11_function_callExam.c)<br>

### [함수원형](https://github.com/baek-study/C-Language/blob/main/source/week11_function_prototyping.c)
<ul>
  <li>컴파일러에게 함수를 미리 알리는 것
  </li>
  <li>함수헤더 + 세미콜론 <br>
   &emsp; int max(int x, int y);
  </li>
</ul>

### [라이브러리](https://github.com/baek-study/C-Language/blob/main/source/week11_library.c)
<ul>
  <li> 컴파일러에서 제공하는 함수<br>
 &emsp; 표준입출력(stdio.h), 표준유틸리티(stdlib.h), 수학(math.h), 시간(time.h), 문자열(string.h)등</li> 
  <li>난수발생: rand(), srand(time(NULL))<br>
   &emsp; - rand() : 난수 생성, rand()%6 + 1<br>
   &emsp; - srand(정수) : 기준점변경, srand(100) <br>   
   &emsp; - tme(NULL) : 현재시간 초 단위 반환(90/1/1 이후)<br>  
   &emsp; - (unsigned)tme(NULL) : 시간은 0 이상<br> 
  </li>

  <li>수학함수:math.h를 사용 </li>
  &emsp; - floor(실수)/ceil(실수) : 내림/올림 함수 <br>
  &emsp; - sqrt(실수)/pow(실수, 실수 : 제곱근/지수승 함수 <br>
  &emsp; - sin(실수) : 사인 함수 - 라디안 값이 입력 <br>
  </li>
</ul>

<br>

## 12주차 실습 -  변수범위&배열

### [변수범위&생존기간](https://github.com/baek-study/C-Language/blob/main/source/week12_variable.c)
<ul>
  <li>변수범위:지역변수, 전역변수   <br>
    &emsp; -선언: 지역(블록/함수 안), 전역(함수 외)<br>
    &emsp; -사용: 지역(해당 블록 내), 전역(프로그램 전체)
  </li>
  <li>지역변수: 자동으로 초기화 되지 않음   <br>
   &emsp;  void sub() {int local_x; }<br>
   &emsp; - 함수 매개변수도 지역변수  
  </li>
  <li>전역변수: 자동으로 0으로 초기화  <br>
   &emsp;  int globla_x; void sub() { }<br>  
   &emsp; - 우선순위: 전역 변수 < 지역변수  <br>
  </li>
   <li>생존기간:임시(블록내), 영구(실행동안계속) <br>
     &emsp;-static(정적)변수: 영구생존, 지역/전역 가능
     &emsp;&emsp;<b>static</b> int count = 0; 
  </li>
</ul>


### [배열](https://github.com/baek-study/C-Language/blob/main/source/week12_array.c)
<ul>
  <li>배열: 같은 자료형을 여러개 저장, 연속된 공간 
  </li>
  <li>배열선언: int scores[5]; // 대괄호안에 갯수
    &emsp; 인덱스: 각원소 구분하는 일련번호, 0부터 시작
  </li>
  <li>원소접근: scores[3]; //배열이름[인덱스]
  </li>
  <li>값저장: scores[3] = 20; //배열이름[인덱스] = 값
  </li>
  <li>초기화: int scores[5]={10,20,30,40,50};
  </li>
</ul>

### [함수연습](https://github.com/baek-study/C-Language/blob/main/source/week12_functionExam.c)

<br>








