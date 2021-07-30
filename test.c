#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//指针的进阶

//1、字符指针
//2、数组指针
//3、指针数组
//4、数组传参和指针传参
//5、函数指针
//6、函数指针数组
//7、指向函数指针数组的指针
//8、回调函数
//9、指针和数组面试题的解析



//指针的概念：
//1、指针就是个变量，用来存放地址的，地址唯一标识一块内存空间
//2、指针的大小是固定的4或8个字节（32位平台或64位平台）
//3、指针是有类型的，指针的类型决定了指针的+-整数的步长，指针解引用操作的时候的权限
//4、指针的运算
 

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

//字符指针
 

//int main()
//{
//	char ch = 'w';//这是一个字符
//	char* pc = &ch;//取出ch的地址放入pc中，而char* 是pc的类型，因为这是指针，所以类型上要加*
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
//上面代码也可写成：
//int main()
//{
//	char* p = "abcdef";//"abcdef"是一个常量表达式
//	//这种写法是将字符串中的首元素地址赋予p
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
//}//这段代码是有问题的
//最准确的做法是：
//int main()
//{
//	const char* p = "abcdef";//加一个const
//	printf("%s\n", p);
//	return 0;
//}

//
//int main()
//{
//	char arr1[] = "abcdef";//这是一个首元素地址
//	char arr2[] = "abcdef";//这是另一个首元素地址
//	char* p1 = "abcdef";
//	char* p2 = "abcdef";
//	if (arr1 == arr2)//arr1和arr2这两个数组的首元素地址是不同的，因此，arr1和arr2是不同的
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
//	char* p1 = "abcdef";//常量字符串
//	char* p2 = "abcdef";//常量字符串
//	//为了方便内存中的存储，相同的存储内容是只存储一份的，所以这两份abcdef
//	//在内存中是一份，指针就指向同一空间的起始地址，所以p1是等于p2的
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

////最准确的写法：
//int main()
//{
//	char arr1[] = "abcdef";
//	char arr2[] = "abcdef";
//	const char* p1 = "abcdef";//p1和p2指向的常量字符串是不可修改的，这样加上让代码
//	const char* p2 = "abcdef";//更具有保护性
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

//指针数组   是数组  是用来存放指针的

//int main()
//{
//	int arr[10] = { 0 };//整型数组
//	char ch[5] = { 0 };//字符数组
//	int* parr[10];//存放整型指针的数组 -- 指针数组
//	char* pch[5];//存放字符指针的数组 -- 指针数组
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



//int arr1[10];//整型指针的数组
//char* arr2[4];//一级字符指针的数组
//char** arr3[5];//二级字符指针的数组



//数组指针   是     指针


//int main()
//{
//	//int* p = NULL;//p是整型指针 - 指向整型的指针 - 可以存放整型的地址
//	//char* pc = NULL;//pc是字符指针 - 指向字符的指针 - 可以存放字符的地址
//	//               //数组指针 - 指向数组的指针 - 存放数组的地址
//	//int arr[10] = { 0 };
//	//arr - 首元素地址
//	//&arr[0] - 首元素地址
//	//&arr - 数组的地址   而不是首元素地址
//
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	//将数组地址存起来
//	//int* p = &arr;//这是不对的
//	//int* p[10] = &arr;//这也是不对的，因为方框[]要比*的优先级要高；
//	int(*p)[10] = &arr;//这就可以了
//	//上面的p就是数组指针
//	return 0;
//}


//下面哪个代码是数组指针：
//int* p1[10];//p1先于方块结合是数组，数组有10个元素，每个元素是int*，这是个存放指针的数组
//int(*p2)[10];//p2先和*结合，是指针，指针指向的数组是10个元素，每个元素是int类型的
//
//int main()
//{
//	char* arr[5];
//	//pa=&arr;//(将这个写成字符指针)主要还是写出pa的类型
//	//pa = &arr
//		//将数组的地址存到数组指针中去
//	char* (*pa)[5] = &arr;
//
//	//(*pa)中的pa是指针变量的名字，*是说明pa是指针
//	//[5]说明pa指向的数组是5个元素
//	//char*说明pa指向的数组的元素类型是char*
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
//}//这种不太常用
//还有方法：

//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int(*pa)[10] = &arr;
//	int i;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", *(*pa + i));//*pa == arr//arr就是首元素地址嘛
//	}
//	return 0;
//}

//还可以：
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
//}//简单的赋值，还是这样子用的比较多


//数组指针的使用：这个有点绕，有点难度

//数组指针用于二维数组以上，才比较方便一些
//以前的方法：用函数表示的：

//参数是数组的形式：
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
//	print1(arr, 3, 5);//arr - 数组名 - 数组名就是首元素地址
//    //把arr想象成一维数组
//	return 0;
//}

////参数是指针的形式
//void print2(int (*p)[5], int x, int y)
//{
//	int i, j;
//	for (i = 0; i < x; i++)
//	{
//		for (j = 0; j < y; j++)
//		{
//			//printf("%d ", *(*(p+i)+j));
//			printf("%d ", (*(p + i))[j]);//要把这个*(p + i)括起来
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
//	}//上面这四种都是等价的
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
//		}//上面这四种同理上面的那四种
//		printf("\n");
//	}
//}
//int main()
//{
//	int arr[3][5] = { {1,2,3,4,5},{2,3,4,5,6},{3,4,5,6,7} };
//	print2(arr, 3, 5);
//	return 0;
//}


//下面代码的意思：

//int arr[5]    //arr是一个5个元素的整型数组
//int* parr1[10]  //parr1是一个数组，数组有10个元素，每个元素的类型是int*,parr1是指针数组
//int (*parr2)[10]  //parr2是一个指针，该指针指向了一个数组，数组有10个元素，每个元素的类型是int - parr2是数组指针
//int (*parr3[10])[5]  //parr3是一个数组，该数组有10个元素，每个元素是一个数组指针，该数组指针指向的数组有5个元素，每个元素的类型是int
////第四个就是先有10个元素，每个元素分别对应的一组5个元素的数组




//数组参数 、 指针参数

//在写代码的时候难免要把【数组】或者【指针】传给函数，函数的参数如何设计呢？

//一维数组传参
//
//void test(int arr[])//ok?  //这是对的
//{}
//void test(int arr[10])//ok?  //这是对的
//{}
//void test(int* arr)//ok?  //这是对的
//{}
//void test2(int* arr[20])//ok?  //这是对的
//{}
//void test2(int** arr[])//ok?  //这是对的
//{}
//
//int main()
//{
//	int arr[10] = { 0 };
//	int* arr2[20] = { 0 };
//	test(arr);
//	test2(arr2);
//}


//二维数组
//
//void test(int arr[3][5])//这个是对的
//{}
//void test(int arr[3][])//这个是错误的error
//{}
//void test(int arr[][])//这个是错误的error
//{}
//void test(int arr[][5])//这个是对的
//{}

//原因是二维数组可以省略行，但不能省略列，并且不能两个同时省略

//void taet3(int* arr)//这是错误的error
//{}//错到int [3][5]到int* 是不对的
// 
// void taet3(int* arr[5//这是错误的error
// 
//void test4(int** arr)//这也是错误的error
//{}//错到  数组名是首元素地址，说是第一行的地址是一个数组的地址，数组的地址不能
////存放到二级指针，二级指针是用来存放一级指针变量的地址


//void test5(int(*arr)[5])//这个就是正确的
//{}
//int main()
//{
//	int arr[3][5] = { 0 };
//	//test(arr);//二维数组传参
//	//test1(arr);
//	//test2(arr);
//	//test3(arr);
//	//test4(arr);
//	//test5(arr);
//	return 0;
//}


//指针传参

//比较简单的

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
//	//一级指针p,传给函数
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
//	test1(p1);//这两个都是正确的,传的都是地址
//	return 0;
//}


//void test2(char* p)
//{}
//int main()
//{
//	char ch = 'w';
//	char* pc = &ch;
//	test2(&ch);
//	test2(pc);////这两个也都是正确的
//	return 0;
//}



//二级指针传参

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
//	test(arr);//指针数组也可以，这个传的是一级指针的地址
//	return 0;
//}




//函数指针

//数组指针 -- 是指向数组的指针
//函数指针 -- 值指向函数的指针  是用来存放函数地址的一个指针

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
//	////数组指针
//	//
//	//int(*p)[10] = &arr;
//	//printf("%d\n", Add(a, b));
//	//printf("%p\n", &Add);
//	//printf("%p\n", Add);
//	////&函数名 和 函数名 都是函数的地址
//	
//	//函数指针
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
//	//*p表明p是一个指针，需要括起来，(char*)中的()表示是一个函数，char*表示函数类型是char*
//	//void说明的是返回类型
//	(*p)("hello world");
//	//p中存放的是地址，*p就找到了这个函数，传参传的就是后面的字符串
//	return 0;
//}


//void (*)() -- 这是函数指针类型
//(*(void(*)())0)();//这是把0强制类型转换成void (*)() -- 0就是一个函数的地址
                    //调用0地址处的该函数
                    // 第一个*是将后面的进行解引用操作
//最后的（）时函数传参，而这个是不传参的

//这个代码来自《C陷阱和缺陷》


////这有一个代码：
//void (*signal(int, void(*)(int)))(int);
////void (*                         )(int);是它的返回类型
//
////signal是一个函数声明
////signal函数的参数有两个，第一个是int。第二个是函数指针，该函数指针指向的函数的参数是int，返回类型是void
////signal函数的返回类型也是一个函数指针：该函数指针指向的函数的参数是int，返回类型是void
//
//
//
////可以分成下面两个：
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
//	//这里加不加*都是一样的，但
//	//printf("%d\n", *pa(2, 3));//这样是不行的,必须加括号
//	return 0;
//}






//函数指针数组

//数组是一个存放相同类型数据的存储空间，那要把函数的地址存到一个数组中，这个数组就叫函数指针数组

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
//    //指针数组
//    int* arr[5];
//    //需要一个数组，这个数组可以存放4个函数的地址 - 函数指针的数组
//    //int (*pa)(int, int) = Add;//也可以存放Sub/Mul/Div
//    int(*parr[4])(int, int) = { Add,Sub,Mul,Div };//函数指针的数组
//    int i = 0;
//    for (i = 0; i < 4; i++)
//    {
//        printf("%d\n", parr[i](2, 3));//5 -1 6 0
//    }
//    return 0;
//}



//int (*parr1[10])();//这是正确的//int (*     )()这是函数类型
//int* parr2[10]();//这是错的
//int (*)()parr3[10];//这也是错的


////写一个
//char* my_strcpy(char* dest, const char* src);
////1、写一个函数指针pf，能够指向my_strcpy
////2、写一个函数指针数组pfArr，能够存放4个my_strcpy函数的地址
//char* (*pf)(char*, const char*);
//char* (*pfArr[4])(char*, const char*);



//函数指针数组的用途：   转移表
//实现一个计算器

//void menu()
//{
//    printf("**************************\n");
//    printf("**  1、Add     2、Sub   **\n");
//    printf("**  3、Mul     4、Div   **\n");
//    printf("***       0、exit       **\n");
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
//        printf("请选择：");
//        scanf("%d", &input);
//        //printf("请输入两个操作数：");
//        //scanf("%d%d", &x, &y);//这样的问题在于输入0之后，还会出现输入两个操作数‘
//        //要改正，就要将701和702放到case 1 2 3 4中
//        switch (input)
//        {
//        case 1:
//            printf("请输入两个操作数：");
//            scanf("%d%d", &x, &y);
//            printf("%d\n",Add(x, y));
//            break;
//        case 2:
//            printf("请输入两个操作数：");
//            scanf("%d%d", &x, &y);
//            printf("%d\n", Sub(x, y));
//            break;
//        case 3:
//            printf("请输入两个操作数：");
//            scanf("%d%d", &x, &y);
//            printf("%d\n", Mul(x, y));
//            break;
//        case 4:
//            printf("请输入两个操作数：");
//            scanf("%d%d", &x, &y);
//            printf("%d\n", Div(x, y));
//            break;
//        case 0:
//            printf("退出\n");
//            break;
//        default:
//            printf("选择错误");
//            break;
//        }
//    } while (input);
//}
//逻辑没什么问题，就是printf和scanf太多，而且往上再加一些操作的时候，不太方便
//添加的比较多，case下面都要添加，case就会变得越来越长

//可以写成下面的：

//void menu()
//{
//    printf("**************************\n");
//    printf("**  1、Add     2、Sub   **\n");
//    printf("**  3、Mul     4、Div   **\n");
//    printf("*** 0、exit    5、Xor   **\n");
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
//    //pfArr 是一个函数指针数组
//    int(*pfArr[])(int, int) = { 0 ,Add, Sub, Mul, Div ,Xor};
//    do
//    {
//        menu();
//        printf("请选择：");
//        scanf("%d", &input);
//        if (input >= 1 && input <=5)//4 )
//        {
//            printf("请输入两个操作数：");
//            scanf("%d%d", &x, &y);
//            int ret = pfArr[input](x, y);
//            printf("%d\n", ret);
//        }
//        else if (input == 0)
//        {
//            printf("退出\n");
//        }
//        else
//        {
//            printf("选择错误\n");
//        }
//
//    } while (input);
//}



//指向函数指针数组的指针

//指向函数指针数组的指针是一个   指针  指针指向一个数组，数组的元素都是函数指针

//int main()
//{
//    int arr[10] = { 0 };
//    int (*p)[10] = &arr;//取出数组的地址
//
//    int (*pf)(int, int);//函数指针
//    int (*pfArr[4])(int, int);//pfArr是一个数组 - 函数指针数组
//
//    //ppfArr是一个指向【函数指针数组】的指针
//    int (*(*ppfArr)[4])(int, int) = &pfArr;
//    //
//    //ppfArr是一个数组指针，指针指向的数组由4个元素
//    //所指向数组的每个元素的类型是一个函数指针  类型为int(*)(int,int)
//    return 0;
//}




//回调函数

//回调函数就是一个通过函数指针调用的函数。如果你把函数的指针（地址）作为参数传递
//给另一个函数，当这个指针被用来调用其所指向的函数时，我们就说这是个回调函数。
//回调函数不是由该函数的实现方直接调用，而是在特定的事件或条件发生时由另外的一方
//调用的，用于对该事件或条件进行相应。

//void menu()
//{
//    printf("**************************\n");
//    printf("**  1、Add     2、Sub   **\n");
//    printf("**  3、Mul     4、Div   **\n");
//    printf("***       0、exit       **\n");
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
//    printf("请输入两个操作数：");
//    scanf("%d%d", &x, &y);
//    printf("%d\n", pf(x, y));//再调上面的函数
//}
//int main()
//{
//    int input = 0;
//
//    do
//    {
//        menu();
//        printf("请选择：");
//        scanf("%d", &input);
//        switch (input)
//        {
//        case 1:
//            Calc(Add);//先到函数Calc那，到843行
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
//            printf("退出\n");
//            break;
//        default:
//            printf("选择错误");
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
    p("shannxi");//p就是回调函数
}
int main()
{
    test(print);
    return 0;
}


//qsort - 可以排序任意类型的数据（库函数中所提供的一个函数）