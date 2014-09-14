#include<iostream>
#include<algorithm>
#include<vector>


using namespace std;
void adj(vector<int>&vec,int k)
{
	vec[vec.size()-1]=k;
	push_heap(vec.begin(),vec.end());
}
void find_min_k(vector<int>&vec,int k)
{
	int max=0;
	vector<int>temp(vec.begin(),vec.begin()+k);//�����洢k��Ԫ�ص�vector
	make_heap(temp.begin(),temp.end());//�����ѡ�
	pop_heap(temp.begin(),temp.end());
	
	for (auto iter = vec.begin()+k; iter != vec.end();iter++)
	{
		max=temp[temp.size()-1];
		if (*iter < max)
		{
			adj(temp,*iter);
			pop_heap(temp.begin(),temp.end());
		}

	}
	cout<<"NСԪ��Ϊ:\n";
	for (auto x: temp)
	{
		cout << x <<"\t";
	}
	cout << endl;
	
}
int main()
{
	
	vector<int>vec(100);
	for (int i = 0 ; i < 100; i++)
	{
		vec[i]=rand()%100;
	}
	find_min_k(vec,4);
	sort(vec.begin(),vec.end());
	cout<<"vec �����Ϊ��\n";
	for (auto x:vec)
	{
		cout << x <<"\t";
	}
	getchar();
	return 0;

}