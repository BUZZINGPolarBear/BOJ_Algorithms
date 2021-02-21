#include <iostream>
#include <vector>
#include <string>
using namespace std;

/*종만북 645페이지 코드 20.1입니다. 제 나름의 주석이 더해졌습니다.*/
vector<int> naiveSearch(const string& H, const string& N)
{//H 문자열 사이에서 N문자열을 찾아 index를 반환합니다.
	vector<int> ret;
	for (int begin = 0; begin + N.size() <= H.size(); ++begin)
	{
		bool matched = true; //단어를 찾은 경우 true입니다. 이 변수는 바로 아래 for문에서 고난을 겪습니다.
		for (int i = 0; i < N.size(); ++i)
		{
			if (H[begin + i] != N[i]) 
			{
				matched = false;
				break;
			}
		}
		if (matched) ret.push_back(begin);
	}
	return ret;
}