## define

``` #define TEXT "Welcome to C++ Programming!!" ```

## 네임스페이스 정의 

``` 
using namespace std; // std라는 네임스페이스에 속한 정의들은 네임스페이스 이름을 붙이지 않아도 사용할 수 있음. 

#include <iostream>

#define TEXT "Welcome to C++ Programming!!"

using namespace std;

 

int main()

{

    cout << TEXT;

    return 0;

}

std::cout  이렇게 안써도 된다는 뜻



```


cout 객체

cout 객체는 다양한 데이터를 출력하는 데 사용되는 C++에서 미리 정의된 출력 스트림을 나타내는 객체입니다.

삽입 연산자(<<)는 오른쪽에 위치한 출력할 데이터를 출력 스트림에 삽입합니다.

이렇게 출력 스트림에 삽입된 데이터는 스트림을 통해 출력 장치로 전달되어 출력됩니다.

```cpp
std::count<<"welcome c++";
```

cin 객체

cin 객체는 다양한 데이터를 입력받는 데 사용되는 C++에서 미리 정의된 입력 스트림을 나타내는 객체입니다.

```cpp 
std::cin>>저장할 변수 


하지만 상수가 변수와 다른 점은 프로그램이 실행되는 동안 메모리에 저장된 데이터를 변경할 수 없다는 점입니다.



리터럴 상수(literal constant)는 변수와는 달리 데이터가 저장된 메모리 공간을 가리키는 이름을 가지고 있지 않습니다.

C++에서 정수형 리터럴 상수는 다음과 같은 경우를 제외하면 모두 int형으로 저장됩니다.

C++에서 실수형 리터럴 상수는 모두 부동 소수점 방식으로 저장됩니다.
이러한 실수형 리터럴 상수는 모두 double형으로 저장되며, 접미사를 추가하여 저장되는 타입을 직접 명시할 수도 있습니다.
널 포인터(null pointer)란 아무것도 가리키고 있지 않은 포인터를 의미합니다.


C++14부터는 0B 또는 0b의 접두사와 0과 1의 시퀀스를 가지고 이진 리터럴 상수를 표현할 수 있습니다.




심볼릭 상수(symbolic constant)
심볼릭 상수는 변수와 마찬가지로 이름을 가지고 있는 상수입니다.

심볼릭 상수는 선언과 동시에 반드시 초기화해야 합니다. 값이 변할 수 없으므로..

이러한 심볼릭 상수는 매크로를 이용하거나, const 키워드를 사용하여 선언할 수 있습니다.

하지만 매크로를 이용한 선언은 C언어의 문법이므로, C++에서는 가급적 const 키워드를 사용하여 선언하도록 합니다.


const int ages = 30;



```

## 이름없은 이름공간

잠깐 짚고 넘어가자면, C++ 에서는 재미있게도 이름 공간에 굳이 이름을 설정하지 않아도 됩니다.

이 경우 해당 이름 공간에 정의된 것들은 해당 파일 안에서만 접근할 수 있게 됩니다. 이 경우 마치 static 키워드를 사용한 것과 같은 효과를 냅니다.

```cpp

#include <iostream>

namespace {
// 이 함수는 이 파일 안에서만 사용할 수 있습니다.
// 이는 마치 static int OnlyInThisFile() 과 동일합니다.
int OnlyInThisFile() {}

// 이 변수 역시 static int x 와 동일합니다.
int only_in_this_file = 0;
}  // namespace

int main() {
  OnlyInThisFile();
  only_in_this_file = 3;
}


참조자 
  int a = 3;
  int& another_a = a;

  another_a = 5;


#include <iostream>

int main() {
  int arr[3] = {1, 2, 3};
  int(&ref)[3] = arr;

  ref[0] = 2;
  ref[1] = 3;
  ref[2] = 1;

  std::cout << arr[0] << arr[1] << arr[2] << std::endl;
  return 0;
}
//231


```