/*
1.main�����ж���һ��3*4�Ķ�ά����a�����ú���max_array�������ֵ�����Ǹ�Ԫ�ص�ֵ���Լ�����

�ڵ��кź��кţ��������������Ͳ������ؽ��������main����������������˵������������еĺ�

��max_array��Ҫ��������ֵ��һ�����кţ�һ�����кţ����ǲ�������return��䷵�صģ�����Ӧ�ÿ�

�������õķ�����������ֵ��
*/
# include <iostream>
using namespace std ; 
int max_array(int b[3][4], int &x, int &y) ;

int main(void)
{
	int X=0, Y=0, m ; 
	int a[3][4] = {
					{1,2,3,4},
					{5,6,7,8},
					{9,10,11,12}
		          } ; 
	m = max_array(a, X, Y) ;  
		      
    cout << "��ά����������ֵΪ��" << m << endl ; 
	cout << "ta ���к�Ϊ��" << X << endl ; 
	cout << "ta ���к�Ϊ��" << Y << endl ; 
	
	system("pause") ; 
	return 0 ;
}

int max_array(int b[3][4], int &x, int &y) 
{
	int max ;
	max =b[0][0] ; 
	for (int i=0; i<3; i++)
	{
		for (int j=0; j<4; j++)
		{
			if(b[i][j] > max)
			{
				max = b[i][j] ; 
				x = i+1 ;
				y = j+1 ;
			}
		}
	}
	
	return max ; 
}
