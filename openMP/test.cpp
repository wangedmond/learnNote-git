#include<omp.h>
#include<iostream>
using namespace std;
int main1()
{
	// #pragma omp parallel num_threads(5)
	#pragma omp parallel 
	{
		cout << omp_get_thread_num() << endl;
		cout <<  " Hello, world!" << endl;

		// cout << "thread is: "<<omp_get_thread_num() << " Hello, world!" << endl;
	}
}

int main2()
{
	omp_set_num_threads(2);
	#pragma omp parallel
	{
		#pragma omp for
		for(int i=0;i<4;i++){
			cout <<  " Hello, world!" << endl;
		 	cout << omp_get_thread_num() << endl;
			cout << "thread is: "<<omp_get_thread_num() << " Hello, world!"<< i << endl;
			 }
	}
}


int main3()
{
	omp_set_num_threads(2);
	#pragma omp parallel for schedule(static)
		for(int i=0;i<8;i++){
			cout << omp_get_thread_num() << endl;
			cout << "thread is: "<<omp_get_thread_num() << " Hello, world!"<< i << endl;
		}
			 
}


int main4()
{
	omp_set_num_threads(3);
	#pragma omp parallel sections
	{
		#pragma omp section
		{
			cout <<omp_get_thread_num()<<endl;
			cout << "thread is: "<<omp_get_thread_num() << " Hello, world!" << endl;
		}
		#pragma omp section
		{
			cout <<omp_get_thread_num()<<endl;
			cout << "thread is: "<<omp_get_thread_num() << " Hello, world!" << endl;
		}
		#pragma omp section
		{
			cout <<omp_get_thread_num()<<endl;
			cout << "thread is: "<<omp_get_thread_num() << " Hello, world!" << endl;
		}
	}
}



int main()
{
	omp_set_num_threads(4);
	#pragma omp parallel
	{
		#pragma omp single
		{
			cout << "single thread=" << omp_get_thread_num()<<endl;
		}
		cout << omp_get_thread_num() << endl;
	}
		
}