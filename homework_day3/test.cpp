/* 1������һ���˿����࣬ӵ�з��������뻨ɫ�͵��������˿��ơ���ӡ�˿��ơ�
2������һ������࣬ÿ��ӵ��18���˿��ơ�ӵ�з������������ƣ����ƣ���չʾ���ƣ�����չʾ����Ҫ��������չʾ��
��ɳ���
1���������18���˿��ƣ�����һ����ҵ����ơ�
2����184�Ų�ͬ���˿��ƹ����ƶѣ�����3����ҡ� */
#include <iostream>
#include <cstring>
#include <cstdio>
#include <cstdlib>
#include <ctime>
#include <windows.h>
using namespace std;

enum {
	SPADES,
	HEARTS,
	CLUBS,
	DIAMONDS,
	JOKER
};

//ȫ�ֱ���g_ �ֲ���̬����s_ ��Ա����m_

class Poker {
	int m_type;
	int m_point;
public:
	
	/*Poker() :
		m_type('a'),
		m_point(2)
	{
	}*/

	/*Poker(char type, int point) :
		m_type(type),
		m_point(point)
	{
	}*/


	void makePoker(int type, int point)
	{
		m_type = type;
		m_point = point;

		if (m_type == JOKER&&(m_point==1||m_point==2))
		{
			m_point += 13;
		}
	}

	void outputPoker( )
	{
		const char *type[5] = { "����", "����", "÷��", "��Ƭ", "" };
		const char *point[16] = { "", "A", "2", "3", "4", "18", "6", "7", "8", "9", "10", "J", "Q", "K", "С��", "����" };
		printf("%s%s ", type[m_type], point[m_point]);
	}
	bool compelePoker(Poker tmp)
	{
		return m_point < tmp.m_point || (m_point == tmp.m_point&&m_type > tmp.m_type);
	}
	bool isright()
	{
		if (m_type== JOKER&&(m_point==14||m_point==15))
		{
			return true;
		}
		if ((unsigned int)m_point > 13 || (unsigned int)m_type > 3)
		{
			return false;
		}
		else
			return true;
	}
};
class ployer
{
	Poker m_Handpoker[18];
	int m_Size;
public:
 
	ployer()
	{
		m_Size = 0;
	}
	void addpoker(Poker newPoker)
	{
		int i = 0;
		for (i=m_Size;i>0&&m_Handpoker[i-1].compelePoker(newPoker);--i)
		{
			m_Handpoker[i] = m_Handpoker[i - 1];
		}
		m_Handpoker[i] = newPoker;
		m_Size++;
	}
	void showcards()
	{
		int i = 0;
		for (i=0;i<m_Size;++i)
		{
			m_Handpoker[i].outputPoker();
		}
		putchar('\n');
	}
};
int randnum(Poker * heap)
{
	int tmp = rand() % 54;
	 while (1)
	 {
		 if (heap[tmp].isright())
		 {
			 return tmp;
		 }
		 else
		 {
			 tmp++;
			 if (tmp==54)
			 {
				 tmp = 0;
			 }
		 }
		 
	 }
}
int main()
{
	Poker heap[54];
	ployer p1;
	ployer p2;
	ployer p3;
	int j = 0;
	int pushcard;
	for (auto &i:heap)
	{
		i.makePoker(j / 13, j % 13 + 1);
		++j;
	}
	srand(time(0));
    for (int i=0;i<18;++i)
    {
		pushcard = randnum(heap);
		p1.addpoker(heap[pushcard]);
		heap[pushcard].makePoker(-1, -1);

		pushcard = randnum(heap);
		p2.addpoker(heap[pushcard]);
		heap[pushcard].makePoker(-1, -1);

		pushcard = randnum(heap);
		p3.addpoker(heap[pushcard]);
		heap[pushcard].makePoker(-1, -1);
		
		
    }
	p1.showcards();
	p2.showcards();
	p3.showcards();
	system("pause");
	return 0;
}