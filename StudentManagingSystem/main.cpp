#include <iostream>
using namespace std;

// 필수 기능
// 1. 5개의 숫자를 배열에 입력 -> 원하는 만큼의 숫자 입력 가능하도록
// 2. 함수 : 합계와 평균을 계산하는 기능
// 3. 함수는 main 함수 외에 별도로 작성할 것

// 도전 기능
// 1. 함수 : 숫자 1 입력시 오름차순 정렬 동작
// 2. 함수 : 숫자 2 입력시 내림차순 정렬 동작
// 3. algorithm 헤더의 sort 함수를 사용하지 말 것


void sumavgNum(int arr[], int size) // 필수기능 2,3. 합계와 평균 계산
{
	int sum = 0;
	for (int i = 0; i < size; i++)
	{
		sum = sum + arr[i];
	}
	cout << endl << "합계 : " << sum << " / " << "평균 : " << (sum * 1.0) / size;
}

void asorting(int arr[], int size) // 도전 기능 1. 오름차순 정렬
{
	int i, j, temp;
	temp = 0;

	for (i = 0; i < size - 1; i++)
	{
		for (j = i + 1; j < size; j++)
		{

			if (arr[i] > arr[j])
			{
				temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}

		}
	}

	cout << endl << "오름차순 정렬 : ";
	for (i = 0; i < size; i++)
	{
		cout << arr[i] << " ";
	}
}
void dsorting(int arr[], int size) // 도전 기능 2. 내림차순 정렬
{
	int i, j, temp;
	temp = 0;

	for (i = 0; i < size - 1; i++)
	{
		for (j = i + 1; j < size; j++)
		{

			if (arr[i] < arr[j])
			{
				temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}

		}
	}

	cout << endl << "내림차순 정렬 : ";
	for (i = 0; i < size; i++)
	{
		cout << arr[i] << " ";
	}
}

int main()
{

	int Numbers[100];	// 그냥 처음부터 크게 선언.. 동적 메모리 할당 등의 방법을 쓰면 된다고 하는데.. 어렵기도 하고 배운 것보다 너무 나간 것 같아서 이 방법으로함
	int size = 0;
	int sort = 0;

	cout << "입력할 데이터의 수를 설정하세요. (양수)" << endl;	// 필수 기능 1. 원하는 만큼의 수 지정
	cin >> size;

	cout << "임의의 정수 " << size << "개를 입력해주세요." << endl;
	for (int i = 0; i < size; i++)
	{
		cin >> Numbers[i];
	}

	cout << "입력된 정수 : ";
	for (int i = 0; i < size; i++)
	{
		cout << Numbers[i] << " ";
	}

	sumavgNum(Numbers, size);

	cout << endl << "출력 완료." << endl << "데이터의 정렬을 원하시면 1(오름차순) 혹은 2(내림차순) 을 입력하세요." << endl;

	cin >> sort;					// 도전 기능의 작동 여부를 묻는 곳
	if (sort == 1)
		asorting(Numbers, size);
	else if (sort == 2)
		dsorting(Numbers, size);

	return 0;
}