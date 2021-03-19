/*
1.main函数中定义一个3*4的二维数组a，调用函数max_array求出其中值最大的那个元素的值，以及其所

在的行号和列号，并利用引用类型参数返回结果，并在main函数中输出结果。（说明：这个程序中的函

数max_array需要返回两个值，一个是行号，一个是列号，这是不可能用return语句返回的，所以应该考

虑用引用的方法返回两个值）
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
		      
    cout << "二维数组中最大的值为：" << m << endl ; 
	cout << "ta 的行号为：" << X << endl ; 
	cout << "ta 的列号为：" << Y << endl ; 
	
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
