#include"head and macro.h"
#include"Class.h"

int main()
{
	/*   *************************************                                             //全屏图形窗口模板
	int rw, rh;
	rw = GetSystemMetrics(SM_CXSCREEN);                                          // 屏幕宽度 像素
	rh = GetSystemMetrics(SM_CYSCREEN);                                          // 屏幕高度 像素
	HWND hwnd = initgraph(rw, rh);                                                    // 初始化绘图窗口并获取窗口句柄
	setbkcolor(GREEN);
	cleardevice();
	LONG l_WinStyle = GetWindowLong(hwnd, GWL_STYLE);               // 获取窗口信息
																										 // 设置窗口信息 最大化 取消标题栏及边框
	SetWindowLong(hwnd, GWL_STYLE, (l_WinStyle | WS_POPUP | WS_MAXIMIZE) & ~WS_CAPTION & ~WS_THICKFRAME & ~WS_BORDER);           // 修改窗口样式
	SetWindowPos(hwnd, HWND_TOP, 0, 0, rw, rh, 0);
	*/   //***********************************
	/*      ***********************************
	initgraph(1600, 900);
	setbkcolor(WHITE);
	cleardevice();
	*/  //***********************************
	/*    ***********************************                                             //后台方式运行，Unicode字符集改成多字节字符集
	HWND hwnd; if (hwnd = ::FindWindow("ConsoleWindowClass", NULL)) //找到控制台句柄
	{
		::ShowWindow(hwnd, SW_HIDE); //隐藏控制台窗口
	}
                                                                                                    //unicode字符集下：
	const char* sss = "ConsoleWindowClass";
	WCHAR wszName[200];
	memset(wszName, 0, sizeof(wszName));
	MultiByteToWideChar(CP_ACP, 0, sss, strlen(sss) + 1, wszName,
		sizeof(wszName) / sizeof(wszName[0]));
	HWND hwnd; if (hwnd = ::FindWindow(wszName, NULL)) //找到控制台句柄
	{
		::ShowWindow(hwnd, SW_HIDE); //隐藏控制台窗口
	}
	*/  //**********************************

	//****************从这里开始写主函数代码**********************
	//*************************************************************************



	//*************************************************************************
	runstart();
	//*************************计时开始***************************************

	cout << "                            欢迎使用                  " << endl;
	cout << "                输入其它任意的序号退出菜单循环" << endl;
	math m;
	int n=20;
	int a = 0;
	while (1)
	{
		cout << endl;
		cout << "******************************菜单*******************************" << endl;
		cout <<std::left<<setw(n)<<" " << "1.计算正弦" << endl;
		cout << setw(n) <<" " << "2.计算余弦" << endl;
		cout<< setw(n) << " " << "3.计算反正弦" << endl;
		cout << setw(n) << " " << "4.计算反余弦" << endl;
		cout << setw(n) << " " << "5.计算反正切" << endl;
		cout << setw(n) << " " << "6.计算反正切（输入x轴和y轴坐标）" << endl;
		cout << setw(n) << " " << "7.计算双曲正弦" << endl;
		cout << setw(n) << " " << "8.计算双曲余弦" << endl;
		cout << setw(n) << " " << "9.计算双曲正切" << endl;
		cout << setw(static_cast<std::streamsize>(n)-1) << " " << "10.计算e 的 x 次幂" << endl;
		cout << setw(static_cast<std::streamsize>(n)-1) << " " << "11.把浮点数 x 分解成尾数和指数" << endl;
		cout << setw(static_cast<std::streamsize>(n)-1) << " " << "12.计算x 乘以 2 的 exponent 次幂" << endl;
		cout << setw(static_cast<std::streamsize>(n)-1) << " " << "13.计算x 的自然对数" << endl;
		cout << setw(static_cast<std::streamsize>(n)-1) << " " << "14.计算x 的常用对数(log10(x))" << endl;
		cout << setw(static_cast<std::streamsize>(n)-1) << " " << "15.分离一个浮点数的小数部分和整数部分" << endl;
		cout << setw(static_cast<std::streamsize>(n)-1) << " " << "16.计算x 的 y 次幂" << endl;
		cout << setw(static_cast<std::streamsize>(n)-1) << " " << "17.计算x 的平方根" << endl;
		cout << setw(static_cast<std::streamsize>(n)-1) << " " << "18.计算x 除以 y 的余数(支持浮点数)" << endl;
		cout << setw(static_cast<std::streamsize>(n) - 1) << " " << "19.弧度转角度" << endl;
		cout << setw(static_cast<std::streamsize>(n) - 1) << " " << "20.角度转弧度" << endl;
		cout << "*****************************************************************" << endl;
		cout <<setw(static_cast<std::streamsize>(n) - 3) << " " << "请输入序号：";
		cin >> a;
		if (a == 1)
		{
			m.mathsin();
		}
		else if (a == 2)
		{
			m.mathacos();
		}
		else if (a == 3)
		{
			m.mathasin();
		}
		else if (a == 4)
		{
			m.mathacos();
		}
		else if (a == 5)
		{
			m.mathatan();
		}
		else if (a == 6)
		{
			m.mathatan2();
		}
		else if (a == 7)
		{
			m.mathsinh();
		}
		else if (a == 8)
		{
			m.mathcosh();
		}
		else if (a == 9)
		{
			m.mathtanh();
		}
		else if (a == 10)
		{
			m.mathexp();
		}
		else if (a == 11)
		{
			m.mathfrexp();
		}
		else if (a == 12)
		{
			m.mathldexp();
		}
		else if (a == 13)
		{
			m.mathlog();
		}
		else if (a == 14)
		{
			m.mathlog10();
		}
		else if (a == 15)
		{
			m.mathmodf();
		}
		else if (a == 16)
		{
			m.mathpow();
		}
		else if (a == 17)
		{
			m.mathsqrt();
		}
		else if (a == 18)
		{
			m.mathfmod();
		}
		else if (a == 19)
		{
			m.mathchange();
		}
		else if (a == 20)
		{
			m.mathchange2();
		}
		else
		{
			cout << "再见" << endl;
			break;
		}
	}

	//*************************计时结束***************************************
	runend();



	//***************************结束********************************
	/*   *************************************
	constexpr int MIN = 1;                            //随机数
	constexpr int MAX = 100;
	constexpr int numm = 10;
	 random_device rd;
	default_random_engine eng(rd());
	uniform_int_distribution<int> distr(MIN, MAX);

	for (int n = 0; n < numm; ++n)
	{
		cout << distr(eng) << ",";
	}
	*/   //***********************************
	/*  //************************************
	SYSTEMTIME sys;                                    //获取系统时间
	GetLocalTime(&sys);
	cout << sys.wYear << "/" << sys.wMonth << "/" << sys.wDay << "      ";
	cout<< setfill('0') << setw(2) << sys.wHour << ":" << setfill('0') << setw(2) << sys.wMinute << ":" << setfill('0') << setw(2) << sys.wSecond << endl;
	*/   //***********************************
	/*   ************************************                            //微软TTS语音模板
	ISpVoice* pVoice = NULL;                                            //创建一个ISpVoice的空指针
	if (FAILED(::CoInitialize(NULL)))                                     //初始化COM编程环境
	{
		cout << "初始化COM环境失败！" << endl;
		return 0;
	}
	                                                                                   //获取ISpVoice接口对象：
	HRESULT hr = CoCreateInstance(CLSID_SpVoice, NULL, CLSCTX_ALL, IID_ISpVoice, (void**)&pVoice);
	if (SUCCEEDED(hr))                                                      //如果获取接口对象成功
	{
		char* szStr = (char*)malloc(200);
		sprintf(szStr, "你好，世界。");
		WCHAR wszClassName[200];
		memset(wszClassName, 0, sizeof(wszClassName));
		MultiByteToWideChar(CP_ACP, 0, szStr, strlen(szStr) + 1, wszClassName,
			sizeof(wszClassName) / sizeof(wszClassName[0]));
		hr = pVoice->Speak(wszClassName, 0, NULL);         //朗读
		
		pVoice->Release();                                                 //释放分配资源
		pVoice = NULL;                                                     //防止野指针
	}
	::CoUninitialize();                                                       //退出COM编程环境
	*/  //*********************************
	/*   **********************************                          //多线程模板
	void task()
    {
	//多线程代码
    }
	thread t(task);
	t.detach();
	*/   //*******************************
	rundisplay();                                                                   //计时结果显示
	_getch();
	//closegraph();
	// system("pause");
	//Sleep(10000);
	return 0;
}
