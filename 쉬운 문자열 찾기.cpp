#include <iostream>
#include <vector>
#include <string>
using namespace std;

/*������ 645������ �ڵ� 20.1�Դϴ�. �� ������ �ּ��� ���������ϴ�.*/
vector<int> naiveSearch(const string& H, const string& N)
{//H ���ڿ� ���̿��� N���ڿ��� ã�� index�� ��ȯ�մϴ�.
	vector<int> ret;
	for (int begin = 0; begin + N.size() <= H.size(); ++begin)
	{
		bool matched = true; //�ܾ ã�� ��� true�Դϴ�. �� ������ �ٷ� �Ʒ� for������ ���� �޽��ϴ�.
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