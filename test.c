#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//ָ��Ľ���

//1���ַ�ָ��
//2������ָ��
//3��ָ������
//4�����鴫�κ�ָ�봫��
//5������ָ��
//6������ָ������
//7��ָ����ָ�������ָ��
//8���ص�����
//9��ָ�������������Ľ���



//ָ��ĸ��
//1��ָ����Ǹ�������������ŵ�ַ�ģ���ַΨһ��ʶһ���ڴ�ռ�
//2��ָ��Ĵ�С�ǹ̶���4��8���ֽڣ�32λƽ̨��64λƽ̨��
//3��ָ���������͵ģ�ָ������;�����ָ���+-�����Ĳ�����ָ������ò�����ʱ���Ȩ��
//4��ָ�������
 

//void test(int arr[])
//{
//	int sz = sizeof(arr)/sizeof(arr[0]);
//	printf("%d\n", sz);
//}
//int main()
//{
//	int arr[10] = { 0 };
//	test(arr);
//	return 0;
//}

//�ַ�ָ��
 

//int main()
//{
//	char ch = 'w';//����һ���ַ�
//	char* pc = &ch;//ȡ��ch�ĵ�ַ����pc�У���char* ��pc�����ͣ���Ϊ����ָ�룬����������Ҫ��*
//
//	return 0;
// }

//
//int main()
//{
//	char arr[] = "abcdef";
//	char* pc = arr;
//	printf("%s\n", pc);
//	printf("%s\n", arr);
//	return 0;
//}
//�������Ҳ��д�ɣ�
//int main()
//{
//	char* p = "abcdef";//"abcdef"��һ���������ʽ
//	//����д���ǽ��ַ����е���Ԫ�ص�ַ����p
//	printf("%c\n", *p);
//	printf("%s\n", p);
//	return 0;
//}

//int main()
//{
//	char* p = "abcdef";
//	*p = 'w';
//	printf("%s\n", p);
//	return 0;
//}//��δ������������
//��׼ȷ�������ǣ�
//int main()
//{
//	const char* p = "abcdef";//��һ��const
//	printf("%s\n", p);
//	return 0;
//}

//
//int main()
//{
//	char arr1[] = "abcdef";//����һ����Ԫ�ص�ַ
//	char arr2[] = "abcdef";//������һ����Ԫ�ص�ַ
//	char* p1 = "abcdef";
//	char* p2 = "abcdef";
//	if (arr1 == arr2)//arr1��arr2�������������Ԫ�ص�ַ�ǲ�ͬ�ģ���ˣ�arr1��arr2�ǲ�ͬ��
//	{
//		printf("hehe\n");
//	}
//	else
//	{
//		printf("haha\n");
//	}
//
//	return 0;
//}

//
//int main()
//{
//	char arr1[] = "abcdef";
//	char arr2[] = "abcdef";
//	char* p1 = "abcdef";//�����ַ���
//	char* p2 = "abcdef";//�����ַ���
//	//Ϊ�˷����ڴ��еĴ洢����ͬ�Ĵ洢������ֻ�洢һ�ݵģ�����������abcdef
//	//���ڴ�����һ�ݣ�ָ���ָ��ͬһ�ռ����ʼ��ַ������p1�ǵ���p2��
//	if (p1 == p2)
//	{
//		printf("hehe\n");
//	}
//	else
//	{
//		printf("haha\n");
//	}
//	return 0;
//}

////��׼ȷ��д����
//int main()
//{
//	char arr1[] = "abcdef";
//	char arr2[] = "abcdef";
//	const char* p1 = "abcdef";//p1��p2ָ��ĳ����ַ����ǲ����޸ĵģ����������ô���
//	const char* p2 = "abcdef";//�����б�����
//	if (p1 == p2)
//	{
//		printf("hehe\n");
//	}
//	else
//	{
//		printf("haha\n");
//	}
//	return 0;
//}

//ָ������   ������  ���������ָ���

//int main()
//{
//	int arr[10] = { 0 };//��������
//	char ch[5] = { 0 };//�ַ�����
//	int* parr[10];//�������ָ������� -- ָ������
//	char* pch[5];//����ַ�ָ������� -- ָ������
//	return 0;
//}

//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int c = 30;
//	int d = 40;
//	int* arr[4] = { &a,&b,&c,&d };
//	int i = 0;
//	for (i = 0; i < 4; i++)
//	{
//		printf("%d ", *(arr[i]));
//	}
//	return 0;
//}

//
//int main()
//{
//	int arr1[] = { 1,2,3,4,5 };
//	int arr2[] = { 2,3,4,5,6 };
//	int arr3[] = { 3,4,5,6,7 };
//	int* parr[] = { arr1,arr2,arr3 };
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for(j=0;j<5;j++)
//		{
//			printf("%d ", *(parr[i]+j ));
//		}
//		printf("\n");
//	}
//	return 0;
//}



//int arr1[10];//����ָ�������
//char* arr2[4];//һ���ַ�ָ�������
//char** arr3[5];//�����ַ�ָ�������



//����ָ��   ��     ָ��


//int main()
//{
//	//int* p = NULL;//p������ָ�� - ָ�����͵�ָ�� - ���Դ�����͵ĵ�ַ
//	//char* pc = NULL;//pc���ַ�ָ�� - ָ���ַ���ָ�� - ���Դ���ַ��ĵ�ַ
//	//               //����ָ�� - ָ�������ָ�� - �������ĵ�ַ
//	//int arr[10] = { 0 };
//	//arr - ��Ԫ�ص�ַ
//	//&arr[0] - ��Ԫ�ص�ַ
//	//&arr - ����ĵ�ַ   ��������Ԫ�ص�ַ
//
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	//�������ַ������
//	//int* p = &arr;//���ǲ��Ե�
//	//int* p[10] = &arr;//��Ҳ�ǲ��Եģ���Ϊ����[]Ҫ��*�����ȼ�Ҫ�ߣ�
//	int(*p)[10] = &arr;//��Ϳ�����
//	//�����p��������ָ��
//	return 0;
//}


//�����ĸ�����������ָ�룺
//int* p1[10];//p1���ڷ����������飬������10��Ԫ�أ�ÿ��Ԫ����int*�����Ǹ����ָ�������
//int(*p2)[10];//p2�Ⱥ�*��ϣ���ָ�룬ָ��ָ���������10��Ԫ�أ�ÿ��Ԫ����int���͵�
//
//int main()
//{
//	char* arr[5];
//	//pa=&arr;//(�����д���ַ�ָ��)��Ҫ����д��pa������
//	//pa = &arr
//		//������ĵ�ַ�浽����ָ����ȥ
//	char* (*pa)[5] = &arr;
//
//	//(*pa)�е�pa��ָ����������֣�*��˵��pa��ָ��
//	//[5]˵��paָ���������5��Ԫ��
//	//char*˵��paָ��������Ԫ��������char*
//	return 0;
//}


//
//int main()
//{
//	char* arr[5];
//	char* (*pa)[5] = &arr;
//	int arr2[10] = { 0 };
//	int(*pa2)[10] = &arr2;
//	return 0;
//}
//
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int(*pa)[10] = &arr;
//	int i;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", (*pa)[i]);
//	}
//	return 0;
//}//���ֲ�̫����
//���з�����

//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int(*pa)[10] = &arr;
//	int i;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", *(*pa + i));//*pa == arr//arr������Ԫ�ص�ַ��
//	}
//	return 0;
//}

//�����ԣ�
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int* p = arr;
//	int i;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", *(p + i));
//	}
//	return 0;
//}//�򵥵ĸ�ֵ�������������õıȽ϶�


//����ָ���ʹ�ã�����е��ƣ��е��Ѷ�

//����ָ�����ڶ�ά�������ϣ��űȽϷ���һЩ
//��ǰ�ķ������ú�����ʾ�ģ�

//�������������ʽ��
//void print1(int arr[3][5], int x, int y)
//{
//	int i, j;
//	for (i = 0; i < x; i++)
//	{
//		for (j = 0; j < y; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//}
//int main()
//{
//	int arr[3][5] = { {1,2,3,4,5},{2,3,4,5,6},{3,4,5,6,7} };
//	print1(arr, 3, 5);//arr - ������ - ������������Ԫ�ص�ַ
//    //��arr�����һά����
//	return 0;
//}

////������ָ�����ʽ
//void print2(int (*p)[5], int x, int y)
//{
//	int i, j;
//	for (i = 0; i < x; i++)
//	{
//		for (j = 0; j < y; j++)
//		{
//			//printf("%d ", *(*(p+i)+j));
//			printf("%d ", (*(p + i))[j]);//Ҫ�����*(p + i)������
//		}
//		printf("\n");
//	}
//}
//int main()
//{
//	int arr[3][5] = { {1,2,3,4,5},{2,3,4,5,6},{3,4,5,6,7} };
//	print2(arr, 3, 5);
//	return 0;
//}
//
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int i;
//	int* p = arr;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", *(p + i));
//		printf("%d ", p[i]);
//		printf("%d ", *(arr + i));
//		printf("%d ", arr[i]);//arr[i] ==  *(arr+i) == *(p+i) == p[i]
//	}//���������ֶ��ǵȼ۵�
//	return 0;
//}

//void print2(int (*p)[5], int x, int y)
//{
//	int i, j;
//	for (i = 0; i < x; i++)
//	{
//		for (j = 0; j < y; j++)
//		{
//			//printf("%d ", *(*(p+i)+j));//*(p+i) == p[i]
//			//printf("%d ", (*(p + i))[j]);
//			//printf("%d ", p[i][j]);
//			printf("%d ", *(p[i] + j));
//		}//����������ͬ�������������
//		printf("\n");
//	}
//}
//int main()
//{
//	int arr[3][5] = { {1,2,3,4,5},{2,3,4,5,6},{3,4,5,6,7} };
//	print2(arr, 3, 5);
//	return 0;
//}


//����������˼��

//int arr[5]    //arr��һ��5��Ԫ�ص���������
//int* parr1[10]  //parr1��һ�����飬������10��Ԫ�أ�ÿ��Ԫ�ص�������int*,parr1��ָ������
//int (*parr2)[10]  //parr2��һ��ָ�룬��ָ��ָ����һ�����飬������10��Ԫ�أ�ÿ��Ԫ�ص�������int - parr2������ָ��
//int (*parr3[10])[5]  //parr3��һ�����飬��������10��Ԫ�أ�ÿ��Ԫ����һ������ָ�룬������ָ��ָ���������5��Ԫ�أ�ÿ��Ԫ�ص�������int
////���ĸ���������10��Ԫ�أ�ÿ��Ԫ�طֱ��Ӧ��һ��5��Ԫ�ص�����




//������� �� ָ�����

//��д�����ʱ������Ҫ�ѡ����顿���ߡ�ָ�롿���������������Ĳ����������أ�

//һά���鴫��
//
//void test(int arr[])//ok?  //���ǶԵ�
//{}
//void test(int arr[10])//ok?  //���ǶԵ�
//{}
//void test(int* arr)//ok?  //���ǶԵ�
//{}
//void test2(int* arr[20])//ok?  //���ǶԵ�
//{}
//void test2(int** arr[])//ok?  //���ǶԵ�
//{}
//
//int main()
//{
//	int arr[10] = { 0 };
//	int* arr2[20] = { 0 };
//	test(arr);
//	test2(arr2);
//}


//��ά����
//
//void test(int arr[3][5])//����ǶԵ�
//{}
//void test(int arr[3][])//����Ǵ����error
//{}
//void test(int arr[][])//����Ǵ����error
//{}
//void test(int arr[][5])//����ǶԵ�
//{}

//ԭ���Ƕ�ά�������ʡ���У�������ʡ���У����Ҳ�������ͬʱʡ��

//void taet3(int* arr)//���Ǵ����error
//{}//��int [3][5]��int* �ǲ��Ե�
// 
// void taet3(int* arr[5//���Ǵ����error
// 
//void test4(int** arr)//��Ҳ�Ǵ����error
//{}//��  ����������Ԫ�ص�ַ��˵�ǵ�һ�еĵ�ַ��һ������ĵ�ַ������ĵ�ַ����
////��ŵ�����ָ�룬����ָ�����������һ��ָ������ĵ�ַ


//void test5(int(*arr)[5])//���������ȷ��
//{}
//int main()
//{
//	int arr[3][5] = { 0 };
//	//test(arr);//��ά���鴫��
//	//test1(arr);
//	//test2(arr);
//	//test3(arr);
//	//test4(arr);
//	//test5(arr);
//	return 0;
//}


//ָ�봫��

//�Ƚϼ򵥵�

//void print(int* p, int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", *(p + i));
//	}
//}
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9 };
//	int* p = arr;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//һ��ָ��p,��������
//	print(p, sz);
//	return 0;
//}

//void test1(int* p)
//{}
//int main()
//{
//	int a = 10;
//	int* p1 = &a;
//	test1(&a);
//	test1(p1);//������������ȷ��,���Ķ��ǵ�ַ
//	return 0;
//}


//void test2(char* p)
//{}
//int main()
//{
//	char ch = 'w';
//	char* pc = &ch;
//	test2(&ch);
//	test2(pc);////������Ҳ������ȷ��
//	return 0;
//}



//����ָ�봫��

//void test(int** ptr)
//{
//	printf("num = %d\n", **ptr);
//}
//int main()
//{
//	int n = 10;
//	int* p = &n;
//	int** pp = &p;
//	int* arr[10];
//	test(pp);
//	test(&p);
//	test(arr);//ָ������Ҳ���ԣ����������һ��ָ��ĵ�ַ
//	return 0;
//}




//����ָ��

//����ָ�� -- ��ָ�������ָ��
//����ָ�� -- ֵָ������ָ��  ��������ź�����ַ��һ��ָ��

//int Add(int x, int y)
//{
//	int z = 0;
//	z = x + y;
//	return z;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	//int arr[10] = { 0 };
//	////����ָ��
//	//
//	//int(*p)[10] = &arr;
//	//printf("%d\n", Add(a, b));
//	//printf("%p\n", &Add);
//	//printf("%p\n", Add);
//	////&������ �� ������ ���Ǻ����ĵ�ַ
//	
//	//����ָ��
//	int (*pa)(int, int) = Add;
//	printf("%d\n", (*pa)(2, 3));//5
//
//	return 0;
//}

//void Print(char* str)
//{
//	printf("%s\n", str);
//}
//int main()
//{
//	void(*p)(char*) = Print;
//	//*p����p��һ��ָ�룬��Ҫ��������(char*)�е�()��ʾ��һ��������char*��ʾ����������char*
//	//void˵�����Ƿ�������
//	(*p)("hello world");
//	//p�д�ŵ��ǵ�ַ��*p���ҵ���������������δ��ľ��Ǻ�����ַ���
//	return 0;
//}


//void (*)() -- ���Ǻ���ָ������
//(*(void(*)())0)();//���ǰ�0ǿ������ת����void (*)() -- 0����һ�������ĵ�ַ
                    //����0��ַ���ĸú���
                    // ��һ��*�ǽ�����Ľ��н����ò���
//���ģ���ʱ�������Σ�������ǲ����ε�

//����������ԡ�C�����ȱ�ݡ�


////����һ�����룺
//void (*signal(int, void(*)(int)))(int);
////void (*                         )(int);�����ķ�������
//
////signal��һ����������
////signal�����Ĳ�������������һ����int���ڶ����Ǻ���ָ�룬�ú���ָ��ָ��ĺ����Ĳ�����int������������void
////signal�����ķ�������Ҳ��һ������ָ�룺�ú���ָ��ָ��ĺ����Ĳ�����int������������void
//
//
//
////���Էֳ�����������
//typedef void(*pfun_t)(int);
//pfun_t signal(int, pfun_t);



//int Add(int x, int y)
//{
//	int z = 0;
//	z = x + y;
//	return z;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int (*pa)(int, int) = Add;
//
//	printf("%d\n", Add(2, 3));//5
//	printf("%d\n", pa(2, 3));//5
//	printf("%d\n", (*pa)(2, 3));//5
//	printf("%d\n", (**pa)(2, 3));//5
//	printf("%d\n", (***pa)(2, 3));//5
//
//	//����Ӳ���*����һ���ģ���
//	//printf("%d\n", *pa(2, 3));//�����ǲ��е�,���������
//	return 0;
//}






//����ָ������

//������һ�������ͬ�������ݵĴ洢�ռ䣬��Ҫ�Ѻ����ĵ�ַ�浽һ�������У��������ͽк���ָ������

//int Add(int x, int y)
//{
//    return x + y;
//}
//int Sub(int x, int y)
//{
//    return x - y;
//}
//int Mul(int x, int y)
//{
//    return x * y;
//}
//int Div(int x, int y)
//{
//    return x / y;
//}
//int main()
//{
//    //ָ������
//    int* arr[5];
//    //��Ҫһ�����飬���������Դ��4�������ĵ�ַ - ����ָ�������
//    //int (*pa)(int, int) = Add;//Ҳ���Դ��Sub/Mul/Div
//    int(*parr[4])(int, int) = { Add,Sub,Mul,Div };//����ָ�������
//    int i = 0;
//    for (i = 0; i < 4; i++)
//    {
//        printf("%d\n", parr[i](2, 3));//5 -1 6 0
//    }
//    return 0;
//}



//int (*parr1[10])();//������ȷ��//int (*     )()���Ǻ�������
//int* parr2[10]();//���Ǵ��
//int (*)()parr3[10];//��Ҳ�Ǵ��


////дһ��
//char* my_strcpy(char* dest, const char* src);
////1��дһ������ָ��pf���ܹ�ָ��my_strcpy
////2��дһ������ָ������pfArr���ܹ����4��my_strcpy�����ĵ�ַ
//char* (*pf)(char*, const char*);
//char* (*pfArr[4])(char*, const char*);



//����ָ���������;��   ת�Ʊ�
//ʵ��һ��������

//void menu()
//{
//    printf("**************************\n");
//    printf("**  1��Add     2��Sub   **\n");
//    printf("**  3��Mul     4��Div   **\n");
//    printf("***       0��exit       **\n");
//    printf("**************************\n");
//}
//
//int Add(int x, int y)
//{
//    return x + y;
//}
//int Sub(int x, int y)
//{
//    return x - y;
//}
//int Mul(int x, int y)
//{
//    return x * y;
//}
//int Div(int x, int y)
//{
//    return x / y;
//}
//int main()
//{
//    int input = 0;
//    int x = 0;
//    int y = 0;
//    do
//    {
//        menu();
//        printf("��ѡ��");
//        scanf("%d", &input);
//        //printf("������������������");
//        //scanf("%d%d", &x, &y);//������������������0֮�󣬻����������������������
//        //Ҫ��������Ҫ��701��702�ŵ�case 1 2 3 4��
//        switch (input)
//        {
//        case 1:
//            printf("������������������");
//            scanf("%d%d", &x, &y);
//            printf("%d\n",Add(x, y));
//            break;
//        case 2:
//            printf("������������������");
//            scanf("%d%d", &x, &y);
//            printf("%d\n", Sub(x, y));
//            break;
//        case 3:
//            printf("������������������");
//            scanf("%d%d", &x, &y);
//            printf("%d\n", Mul(x, y));
//            break;
//        case 4:
//            printf("������������������");
//            scanf("%d%d", &x, &y);
//            printf("%d\n", Div(x, y));
//            break;
//        case 0:
//            printf("�˳�\n");
//            break;
//        default:
//            printf("ѡ�����");
//            break;
//        }
//    } while (input);
//}
//�߼�ûʲô���⣬����printf��scanf̫�࣬���������ټ�һЩ������ʱ�򣬲�̫����
//��ӵıȽ϶࣬case���涼Ҫ��ӣ�case�ͻ���Խ��Խ��

//����д������ģ�

//void menu()
//{
//    printf("**************************\n");
//    printf("**  1��Add     2��Sub   **\n");
//    printf("**  3��Mul     4��Div   **\n");
//    printf("*** 0��exit    5��Xor   **\n");
//    printf("**************************\n");
//}
//
//int Add(int x, int y)
//{
//    return x + y;
//}
//int Sub(int x, int y)
//{
//    return x - y;
//}
//int Mul(int x, int y)
//{
//    return x * y;
//}
//int Div(int x, int y)
//{
//    return x / y;
//}
//int Xor(int x, int y)
//{
//    return x ^ y;
//}
//int main()
//{
//    int input = 0;
//    int x = 0;
//    int y = 0;
//    //pfArr ��һ������ָ������
//    int(*pfArr[])(int, int) = { 0 ,Add, Sub, Mul, Div ,Xor};
//    do
//    {
//        menu();
//        printf("��ѡ��");
//        scanf("%d", &input);
//        if (input >= 1 && input <=5)//4 )
//        {
//            printf("������������������");
//            scanf("%d%d", &x, &y);
//            int ret = pfArr[input](x, y);
//            printf("%d\n", ret);
//        }
//        else if (input == 0)
//        {
//            printf("�˳�\n");
//        }
//        else
//        {
//            printf("ѡ�����\n");
//        }
//
//    } while (input);
//}



//ָ����ָ�������ָ��

//ָ����ָ�������ָ����һ��   ָ��  ָ��ָ��һ�����飬�����Ԫ�ض��Ǻ���ָ��

//int main()
//{
//    int arr[10] = { 0 };
//    int (*p)[10] = &arr;//ȡ������ĵ�ַ
//
//    int (*pf)(int, int);//����ָ��
//    int (*pfArr[4])(int, int);//pfArr��һ������ - ����ָ������
//
//    //ppfArr��һ��ָ�򡾺���ָ�����顿��ָ��
//    int (*(*ppfArr)[4])(int, int) = &pfArr;
//    //
//    //ppfArr��һ������ָ�룬ָ��ָ���������4��Ԫ��
//    //��ָ�������ÿ��Ԫ�ص�������һ������ָ��  ����Ϊint(*)(int,int)
//    return 0;
//}




//�ص�����

//�ص���������һ��ͨ������ָ����õĺ����������Ѻ�����ָ�루��ַ����Ϊ��������
//����һ�������������ָ�뱻������������ָ��ĺ���ʱ�����Ǿ�˵���Ǹ��ص�������
//�ص����������ɸú�����ʵ�ַ�ֱ�ӵ��ã��������ض����¼�����������ʱ�������һ��
//���õģ����ڶԸ��¼�������������Ӧ��

//void menu()
//{
//    printf("**************************\n");
//    printf("**  1��Add     2��Sub   **\n");
//    printf("**  3��Mul     4��Div   **\n");
//    printf("***       0��exit       **\n");
//    printf("**************************\n");
//}
//
//int Add(int x, int y)
//{
//    return x + y;
//}
//int Sub(int x, int y)
//{
//    return x - y;
//}
//int Mul(int x, int y)
//{
//    return x * y;
//}
//int Div(int x, int y)
//{
//    return x / y;
//}
//
//void Calc(int(*pf)(int, int))
//{
//    int x = 0;
//    int y = 0;
//    printf("������������������");
//    scanf("%d%d", &x, &y);
//    printf("%d\n", pf(x, y));//�ٵ�����ĺ���
//}
//int main()
//{
//    int input = 0;
//
//    do
//    {
//        menu();
//        printf("��ѡ��");
//        scanf("%d", &input);
//        switch (input)
//        {
//        case 1:
//            Calc(Add);//�ȵ�����Calc�ǣ���843��
//            break;
//        case 2:
//            Calc(Sub);
//            break;
//        case 3:
//            Calc(Mul);
//            break;
//        case 4:
//            Calc(Div);
//            break;
//        case 0:
//            printf("�˳�\n");
//            break;
//        default:
//            printf("ѡ�����");
//            break;
//        }
//    } while (input);
//}

void print(char* str)
{
    printf("xixi:%s", str);
}
void test(void (*p)(char*))
{
    printf("test\n");
    p("shannxi");//p���ǻص�����
}
int main()
{
    test(print);
    return 0;
}


//qsort - ���������������͵����ݣ��⺯�������ṩ��һ��������