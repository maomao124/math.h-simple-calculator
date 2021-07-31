#include"head and macro.h"
#include"Class.h"

void math::mathsin()
{
	//C 库函数 double sin(double x) 返回弧度角 x 的正弦。
	//x -- 浮点值，代表了一个以弧度表示的角度
	//该函数返回 x 的正弦
	double x, ret, val;
	while (1)
	{
		cout << "计算正弦：\n输入963.3退出到主菜单" << endl;
		cout << "请输入角度值：" << endl;
		cin >> x;
		if (x == 963.3)
		{
			break;
			cout << endl << endl;
		}
		val = PI / 180;
		ret = sin(x * val);
		printf("%lf度，%lf弧度 的正弦是 %lf \n\n", x, x * val, ret);
	}
}

void math::mathcos()
{
	//C 库函数 double cos(double x) 返回弧度角 x 的余弦。
	//x -- 浮点值，代表了一个以弧度表示的角度。
	//该函数返回 x 的余弦。
	double x, ret, val;
	while (1)
	{
		cout << "计算余弦：\n输入963.3退出到主菜单" << endl;
		cout << "请输入角度值：" << endl;
		cin >> x;
		if (x == 963.3)
		{
			break;
			cout << endl << endl;
		}
		val = PI / 180.0;
		ret = cos(x * val);
		printf("%lf 度，%lf弧度 的余弦是 %lf \n\n", x, x * val, ret);
	}
}

void math::mathasin()
{
	//C 库函数 double asin(double x) 返回以弧度表示的 x 的反正弦。
	//x -- 介于 [-1,+1] 区间的浮点值
	//该函数返回以弧度表示的 x 的反正弦，弧度区间为 [-pi/2,+pi/2]
	double x, ret, val;
	while (1)
	{
		cout << "计算反正弦：\n输入963.3退出到主菜单" << endl;
		cout << "请输入x的值，区间为[-1,+1]" << endl;
		cin >> x;
		if (x == 963.3)
		{
			break;
			cout << endl << endl;
		}
		val = 180.0 / PI;
		ret = asin(x) * val;
		printf("%lf 的反正弦是 %lf 度，弧度：%lf\n\n", x, ret, asin(x));
	}
}

void math::mathacos()
{
	//C 库函数 double acos(double x) 返回以弧度表示的 x 的反余弦。
	//x -- 介于 [-1,+1] 区间的浮点值。
	//该函数返回以弧度表示的 x 的反余弦，弧度区间为 [0, pi]。
	double x, ret, val;
	while (1)
	{
		cout << "计算反余弦：\n输入963.3退出到主菜单" << endl;
		cout << "请输入x的值，区间[-1,+1]" << endl;
		cin >> x;
		if (x == 963.3)
		{
			break;
			cout << endl << endl;
		}
		val = 180.0 / PI;
		ret = acos(x) * val;
		printf("%lf 的反余弦是 %lf 度，弧度：%lf\n\n", x, ret, acos(x));
	}
}

void math::mathatan()
{
	//C 库函数 double atan(double x) 返回以弧度表示的 x 的反正切。
	//x -- 浮点值。
	//该函数返回以弧度表示的 x 的反正切，弧度区间为 [-pi/2,+pi/2]。
	double x, ret, val;
	while (1)
	{
		cout << "计算反正切：\n输入963.3退出到主菜单" << endl;
		cout << "请输入x的值：" << endl;
		cin >> x;
		if (x == 963.3)
		{
			break;
			cout << endl << endl;
		}
		val = 180.0 / PI;
		ret = atan(x) * val;
		printf("%lf 的反正切是 %lf 度，弧度：%lf\n\n", x, ret, atan(x));
	}
}

void math::mathatan2()
{
	//C 库函数 double atan2(double y, double x) 返回以弧度表示的 y/x 的反正切。y 和 x 的值的符号决定了正确的象限。
	//x -- 代表 x 轴坐标的浮点值。
	//y -- 代表 y 轴坐标的浮点值。
	//该函数返回以弧度表示的 y/x 的反正切，弧度区间为 [-pi,+pi]。
	double x, y, ret, val;
	while (1)
	{
		cout << "计算反正切（输入x轴和y轴坐标）：\n输入963.3退出到主菜单" << endl;
		cout << "请输入坐标轴：" << endl;
		cout << "x轴：";
		cin >> x;
		if (x == 963.3)
		{
			break;
			cout << endl << endl;
		}
		cout << "y轴：";
		cin >> y;
		val = 180.0 / PI;

		ret = atan2(y, x) * val;
		printf("x = %lf, y = %lf 的反正切", x, y);
		printf("是 %lf 度，弧度：%lf\n\n", ret, atan2(y, x));
	}
}

void math::mathsinh()
{
	//sinh(x)=（e^x-e^(-x)）/2
	while (1)
	{
		cout << "计算双曲正弦：\n公式：sinh(x)=（e^x-e^(-x)）/2" << endl;
		double x, ret;
		cout << "输入963.3退出到主菜单" << endl;
		cout << "请输入x的值：" << endl;
		cin >> x;
		if (x == 963.3)
		{
			break;
			cout << endl << endl;
		}
		ret = sinh(x);
		printf("%lf 的双曲正弦是 %lf \n\n", x, ret);
	}
}

void math::mathcosh()
{
	//cosh(x)=（e^x+e^(-x）)/2
	while (1)
	{
		cout << "计算双曲余弦：\n公式：cosh(x)=（e^x+e^(-x）)/2" << endl;
		double x;
		cout << "输入963.3退出到主菜单" << endl;
		cout << "请输入x的值：" << endl;
		cin >> x;
		if (x == 963.3)
		{
			break;
			cout << endl << endl;
		}
		printf("%lf 的双曲余弦是 %lf\n\n", x, cosh(x));
	}
}

void math::mathtanh()
{
	//tanh（x）=（e^x-e^(-x）)/（e^x+e^(-x）)=sinh(x)/cosh(x）
	while (1)
	{
		cout << "计算双曲正切：\n公式：tanh（x）=（e^x-e^(-x）)/（e^x+e^(-x）)=sinh(x)/cosh(x）" << endl;
		double x, ret;
		cout << "输入963.3退出到主菜单" << endl;
		cout << "请输入x的值：" << endl;
		cin >> x;
		if (x == 963.3)
		{
			break;
			cout << endl << endl;
		}
		ret = tanh(x);
		printf("%lf 的双曲正切是 %lf\n \n", x, ret);
	}
}

void math::mathexp()
{
	//C 库函数 double exp(double x) 返回 e 的 x 次幂的值
	while (1)
	{
		cout << "计算e 的 x 次幂：" << endl;
		cout << "输入963.3退出到主菜单" << endl;
		cout << "请输入x的值：" << endl;
		double x;
		cin >> x;
		if (x == 963.3)
		{
			break;
			cout << endl << endl;
		}
		printf("e 的 %lf 次幂是 %lf\n\n", x, exp(x));
	}
}

void math::mathfrexp()
{
	//C 库函数 double frexp(double x, int *exponent) 把浮点数 x 分解成尾数和指数。返回值是尾数，并将指数存入 exponent 中。所得的值是 x = mantissa * 2 ^ exponent。
	//x -- 要被计算的浮点值。
	//exponent -- 指向一个对象的指针，该对象存储了指数的值。
	//该函数返回规格化小数。如果参数 x 不为零，则规格化小数是 x 的二次方，且它的绝对值范围从 1/2（包含）到 1（不包含）。如果 x 为零，则规格化小数是零，且零存储在 exp 中。
	double x, fraction;
	int e;
	while (1)
	{
		cout << "把浮点数 x 分解成尾数和指数：\n输入963.3退出到主菜单" << endl;
		cout << "请输入要分解的浮点数：" << endl;
		cin >> x;
		if (x == 963.3)
		{
			break;
			cout << endl << endl;
		}
		fraction = frexp(x, &e);
		cout << "尾数：" << fraction << endl;
		cout << "  阶：" << e << endl;
		printf("x = %.2lf = %.2lf * 2^%d\n\n", x, fraction, e);
	}
}

void math::mathldexp()
{
	//C 库函数 double ldexp(double x, int exponent) 返回 x 乘以 2 的 exponent 次幂。
	//x -- 代表有效位数的浮点值。
	//exponent -- 指数的值。
	while (1)
	{
		cout << "计算x 乘以 2 的 exponent 次幂：" << endl;
		double x, ret;
		int n;
		cout << "输入963.3退出到主菜单" << endl;
		cout << "请分别输入x的值和exponent的值：" << endl;
		cin >> x;
		if (x == 963.3)
		{
			break;
			cout << endl << endl;
		}
		cin >> n;
		ret = ldexp(x, n);
		cout << "结果：" << x;
		printf(" * 2^%d = %f\n\n", n, ret);
	}
}

void math::mathlog()
{
	//C 库函数 double log(double x) 返回 x 的自然对数（基数为 e 的对数）
	double x, ret;
	while (1)
	{
		cout << "计算x 的自然对数：" << endl;
		cout << "输入963.3退出到主菜单" << endl;
		cout << "请输入x的值：" << endl;
		cin >> x;
		if (x == 963.3)
		{
			break;
			cout << endl << endl;
		}
		ret = log(x);
		printf("log(%lf) = %lf\n\n", x, ret);
	}
}

void math::mathlog10()
{
	//C 库函数 double log10(double x) 返回 x 的常用对数（基数为 10 的对数）
	//该函数返回 x 的常用对数，x 的值大于 0
	double x, ret;
	while (1)
	{
		cout << "计算x 的常用对数 log10(x)：" << endl;
		cout << "输入963.3退出到主菜单" << endl;
		cout << "请输入x的值(不能为负数)：" << endl;
		cin >> x;
		if (x == 963.3)
		{
			break;
			cout << endl << endl;
		}
		ret = log10(x);
		printf("log10(%lf) = %lf\n\n", x, ret);
	}
}

void math::mathmodf()
{
	//C 库函数 double modf(double x, double *integer) 返回值为小数部分（小数点后的部分），并设置 integer 为整数部分
	//x -- 浮点值。
	//integer -- 指向一个对象的指针，该对象存储了整数部分。
	double x, fractpart, intpart;
	while (1)
	{
		cout << "分离一个浮点数的小数部分和整数部分：\n输入963.3退出到主菜单" << endl;
		cout << "请输入一个浮点数" << endl;
		cin >> x;
		if (x == 963.3)
		{
			break;
			cout << endl << endl;
		}
		fractpart = modf(x, &intpart);

		printf("整数部分 = %lf\n", intpart);
		printf("小数部分 = %lf \n\n", fractpart);
	}
}

void math::mathpow()
{
	//C 库函数 double pow(double x, double y) 返回 x 的 y 次幂
	while (1)
	{
		cout << "计算x 的 y 次幂：" << endl;
		double x, y;
		cout << "输入963.3退出到主菜单" << endl;
		cout << "请输入x的值：";
		cin >> x;
		if (x == 963.3)
		{
			break;
			cout << endl << endl;
		}
		cout << "请输入y的值：";
		cin >> y;
		cout << "结果为：" << pow(x, y) << endl << endl;
	}
}

void math::mathsqrt()
{
	//C 库函数 double sqrt(double x) 返回 x 的平方根。
	while (1)
	{
		cout << " 计算x 的平方根：" << endl;
		cout << "输入963.3退出到主菜单" << endl;
		cout << "请输入x的值  (不能为负数)：";
		double x;
		cin >> x;
		if (x == 963.3)
		{
			break;
			cout << endl << endl;
		}
		cout << x << "的平方根为" << sqrt(x) << endl << endl;
	}
}

void math::mathfmod()
{
	//C 库函数 double fmod(double x, double y) 返回 x 除以 y 的余数
	while (1)
	{
		cout << "计算 x 除以 y 的余数(支持浮点数)：" << endl;
		double x, y;
		cout << "输入963.3退出到主菜单" << endl;
		cout << "请输入x的值：";
		cin >> x;
		if (x == 963.3)
		{
			break;
			cout << endl << endl;
		}
		cout << "请输入y的值：";
		cin >> y;
		cout << "结果为：" << fmod(x, y) << endl << endl;
	}
}

void math::mathchange()
{
	double x,a;
	double val;
	val = PI / 180.0;
	while (1)
	{
		cout << "弧度转角度：" << endl;
		cout << "输入963.3退出到主菜单" << endl;
		cout << "请输入弧度值：" ;
		cin >> x;
		if (x == 963.3)
		{
			break;
			cout << endl << endl;
		}
		a = x / val;
		cout << x << "弧度对应的角度是" << a <<"度" << endl << endl;
	}
}

void math::mathchange2()
{
	double x, a;
	double val;
	val = PI / 180.0;
	while (1)
	{
		cout << "角度转弧度：" << endl;
		cout << "输入963.3退出到主菜单" << endl;
		cout << "请输入角度值：";
		cin >> x;
		if (x == 963.3)
		{
			break;
			cout << endl << endl;
		}
		a = x * val;
		cout << x << "度对应的弧度度是" << a  << endl << endl;
	}
}
