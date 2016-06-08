#include <iostream>
#include <string>
#include <vector>


int main()
{




/*//Row-1
std::string s11 = "TTACTCCGTTAACAT";
std::string s12 = "GTCCACCCTGGCGAT";
std::string s21 = "GCCCACCGTTGCGCT";
std::string s22 = "GCCGAGTGATGCGAC";*/




//Row-4
/*std::string s11 = "CCGTTGCGCT";
std::string s12 = "GTGATGCGAC";
std::string s21 = "CTCTGGAGAC";
std::string s22 = "GTCTGGCGAT";*/



/*

//Row-2
std::string s11 = "TACTCCGTTA";
std::string s12 = "TCCACCCTGG";
std::string s21 = "TCCACTCTGG";
std::string s22 = "CAGTGTCTGG";
*/


/*

//Row-3
std::string s11 = "GGCCCACCGTTGCG";
std::string s12 = "TGCCGAGTGATGCG";
std::string s21 = "TGTAGAGCCTTAAC";
std::string s22 = "TTCCGTCCGTGGAC";
*/

//Row-5

std::string s11 = "CCACTCTGGA";
std::string s12 = "AGTGTCTGGC";
std::string s21 = "AGAGCCTTAA";
std::string s22 = "CGTCCGTGGA";



std::vector <unsigned long long > verr;
verr.clear();
int l11=0;
int l12=0;
int l21=0;
int l22=0;
bool flag11 = true;
bool flag12 = true;
bool flag21 = true;
bool flag22 = true;
int continuation = 0;

for (unsigned long long  j = 0 ; j < s11.length();j++ )
{
	if (j ==0)
	{
		verr.push_back(j);
	}
	continuation++;

	if ((s11[j]  == s21[j])	&&	flag11)
		l11++;
	else
		flag11	=	false;

	if ((s11[j] == s22[j])	&&	flag12)
		l12++;
	else
		flag12	=	false;

	if ((s12[j] == s21[j])	&&	flag21)
		l21++;
	else
		flag21	=	false;

	if ((s12[j] == s22[j])	&&	flag22)
		l22++;
	else
		flag22	=	false;
	if (	((flag11 == false)	&&	(flag12 == false)	&&	(flag21 == false)	&&	(flag22 == false))	|| (j == (s11.length() -1) ))
	{
		if (j == (s11.length() -1 ))
		{

			if ( j == verr[verr.size()-1])
			{

			}
			else
			{
			verr.push_back(j);
			}
			break;
		}

		if (continuation ==	1)
		{
			verr.push_back(j+1);
		}
		else
		{
			verr.push_back(j);
		}
		//std::cout<<"j = "<<j<<"\t"<<"continuation = "<<continuation<<std::endl;
		if(continuation >= 2)
		{
			j--;
		}
		continuation = 0;
		flag11 = flag12 = flag21 = flag22=true;
		l11 = l12 =  l21 = l22 = 0;
	}
}
/*std::cout<< verr.size()<<std::endl;
std::cout<< total<<std::endl;*/

for (unsigned long long  i=0; i<verr.size();i++)
	std::cout<<verr[i]<<std::endl;
return 0;
}

