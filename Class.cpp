#include"head and macro.h"
#include"Class.h"

void math::mathsin()
{
	//C �⺯�� double sin(double x) ���ػ��Ƚ� x �����ҡ�
	//x -- ����ֵ��������һ���Ի��ȱ�ʾ�ĽǶ�
	//�ú������� x ������
	double x, ret, val;
	while (1)
	{
		cout << "�������ң�\n����963.3�˳������˵�" << endl;
		cout << "������Ƕ�ֵ��" << endl;
		cin >> x;
		if (x == 963.3)
		{
			break;
			cout << endl << endl;
		}
		val = PI / 180;
		ret = sin(x * val);
		printf("%lf�ȣ�%lf���� �������� %lf \n\n", x, x * val, ret);
	}
}

void math::mathcos()
{
	//C �⺯�� double cos(double x) ���ػ��Ƚ� x �����ҡ�
	//x -- ����ֵ��������һ���Ի��ȱ�ʾ�ĽǶȡ�
	//�ú������� x �����ҡ�
	double x, ret, val;
	while (1)
	{
		cout << "�������ң�\n����963.3�˳������˵�" << endl;
		cout << "������Ƕ�ֵ��" << endl;
		cin >> x;
		if (x == 963.3)
		{
			break;
			cout << endl << endl;
		}
		val = PI / 180.0;
		ret = cos(x * val);
		printf("%lf �ȣ�%lf���� �������� %lf \n\n", x, x * val, ret);
	}
}

void math::mathasin()
{
	//C �⺯�� double asin(double x) �����Ի��ȱ�ʾ�� x �ķ����ҡ�
	//x -- ���� [-1,+1] ����ĸ���ֵ
	//�ú��������Ի��ȱ�ʾ�� x �ķ����ң���������Ϊ [-pi/2,+pi/2]
	double x, ret, val;
	while (1)
	{
		cout << "���㷴���ң�\n����963.3�˳������˵�" << endl;
		cout << "������x��ֵ������Ϊ[-1,+1]" << endl;
		cin >> x;
		if (x == 963.3)
		{
			break;
			cout << endl << endl;
		}
		val = 180.0 / PI;
		ret = asin(x) * val;
		printf("%lf �ķ������� %lf �ȣ����ȣ�%lf\n\n", x, ret, asin(x));
	}
}

void math::mathacos()
{
	//C �⺯�� double acos(double x) �����Ի��ȱ�ʾ�� x �ķ����ҡ�
	//x -- ���� [-1,+1] ����ĸ���ֵ��
	//�ú��������Ի��ȱ�ʾ�� x �ķ����ң���������Ϊ [0, pi]��
	double x, ret, val;
	while (1)
	{
		cout << "���㷴���ң�\n����963.3�˳������˵�" << endl;
		cout << "������x��ֵ������[-1,+1]" << endl;
		cin >> x;
		if (x == 963.3)
		{
			break;
			cout << endl << endl;
		}
		val = 180.0 / PI;
		ret = acos(x) * val;
		printf("%lf �ķ������� %lf �ȣ����ȣ�%lf\n\n", x, ret, acos(x));
	}
}

void math::mathatan()
{
	//C �⺯�� double atan(double x) �����Ի��ȱ�ʾ�� x �ķ����С�
	//x -- ����ֵ��
	//�ú��������Ի��ȱ�ʾ�� x �ķ����У���������Ϊ [-pi/2,+pi/2]��
	double x, ret, val;
	while (1)
	{
		cout << "���㷴���У�\n����963.3�˳������˵�" << endl;
		cout << "������x��ֵ��" << endl;
		cin >> x;
		if (x == 963.3)
		{
			break;
			cout << endl << endl;
		}
		val = 180.0 / PI;
		ret = atan(x) * val;
		printf("%lf �ķ������� %lf �ȣ����ȣ�%lf\n\n", x, ret, atan(x));
	}
}

void math::mathatan2()
{
	//C �⺯�� double atan2(double y, double x) �����Ի��ȱ�ʾ�� y/x �ķ����С�y �� x ��ֵ�ķ��ž�������ȷ�����ޡ�
	//x -- ���� x ������ĸ���ֵ��
	//y -- ���� y ������ĸ���ֵ��
	//�ú��������Ի��ȱ�ʾ�� y/x �ķ����У���������Ϊ [-pi,+pi]��
	double x, y, ret, val;
	while (1)
	{
		cout << "���㷴���У�����x���y�����꣩��\n����963.3�˳������˵�" << endl;
		cout << "�����������᣺" << endl;
		cout << "x�᣺";
		cin >> x;
		if (x == 963.3)
		{
			break;
			cout << endl << endl;
		}
		cout << "y�᣺";
		cin >> y;
		val = 180.0 / PI;

		ret = atan2(y, x) * val;
		printf("x = %lf, y = %lf �ķ�����", x, y);
		printf("�� %lf �ȣ����ȣ�%lf\n\n", ret, atan2(y, x));
	}
}

void math::mathsinh()
{
	//sinh(x)=��e^x-e^(-x)��/2
	while (1)
	{
		cout << "����˫�����ң�\n��ʽ��sinh(x)=��e^x-e^(-x)��/2" << endl;
		double x, ret;
		cout << "����963.3�˳������˵�" << endl;
		cout << "������x��ֵ��" << endl;
		cin >> x;
		if (x == 963.3)
		{
			break;
			cout << endl << endl;
		}
		ret = sinh(x);
		printf("%lf ��˫�������� %lf \n\n", x, ret);
	}
}

void math::mathcosh()
{
	//cosh(x)=��e^x+e^(-x��)/2
	while (1)
	{
		cout << "����˫�����ң�\n��ʽ��cosh(x)=��e^x+e^(-x��)/2" << endl;
		double x;
		cout << "����963.3�˳������˵�" << endl;
		cout << "������x��ֵ��" << endl;
		cin >> x;
		if (x == 963.3)
		{
			break;
			cout << endl << endl;
		}
		printf("%lf ��˫�������� %lf\n\n", x, cosh(x));
	}
}

void math::mathtanh()
{
	//tanh��x��=��e^x-e^(-x��)/��e^x+e^(-x��)=sinh(x)/cosh(x��
	while (1)
	{
		cout << "����˫�����У�\n��ʽ��tanh��x��=��e^x-e^(-x��)/��e^x+e^(-x��)=sinh(x)/cosh(x��" << endl;
		double x, ret;
		cout << "����963.3�˳������˵�" << endl;
		cout << "������x��ֵ��" << endl;
		cin >> x;
		if (x == 963.3)
		{
			break;
			cout << endl << endl;
		}
		ret = tanh(x);
		printf("%lf ��˫�������� %lf\n \n", x, ret);
	}
}

void math::mathexp()
{
	//C �⺯�� double exp(double x) ���� e �� x ���ݵ�ֵ
	while (1)
	{
		cout << "����e �� x ���ݣ�" << endl;
		cout << "����963.3�˳������˵�" << endl;
		cout << "������x��ֵ��" << endl;
		double x;
		cin >> x;
		if (x == 963.3)
		{
			break;
			cout << endl << endl;
		}
		printf("e �� %lf ������ %lf\n\n", x, exp(x));
	}
}

void math::mathfrexp()
{
	//C �⺯�� double frexp(double x, int *exponent) �Ѹ����� x �ֽ��β����ָ��������ֵ��β��������ָ������ exponent �С����õ�ֵ�� x = mantissa * 2 ^ exponent��
	//x -- Ҫ������ĸ���ֵ��
	//exponent -- ָ��һ�������ָ�룬�ö���洢��ָ����ֵ��
	//�ú������ع��С����������� x ��Ϊ�㣬����С���� x �Ķ��η��������ľ���ֵ��Χ�� 1/2���������� 1��������������� x Ϊ�㣬����С�����㣬����洢�� exp �С�
	double x, fraction;
	int e;
	while (1)
	{
		cout << "�Ѹ����� x �ֽ��β����ָ����\n����963.3�˳������˵�" << endl;
		cout << "������Ҫ�ֽ�ĸ�������" << endl;
		cin >> x;
		if (x == 963.3)
		{
			break;
			cout << endl << endl;
		}
		fraction = frexp(x, &e);
		cout << "β����" << fraction << endl;
		cout << "  �ף�" << e << endl;
		printf("x = %.2lf = %.2lf * 2^%d\n\n", x, fraction, e);
	}
}

void math::mathldexp()
{
	//C �⺯�� double ldexp(double x, int exponent) ���� x ���� 2 �� exponent ���ݡ�
	//x -- ������Чλ���ĸ���ֵ��
	//exponent -- ָ����ֵ��
	while (1)
	{
		cout << "����x ���� 2 �� exponent ���ݣ�" << endl;
		double x, ret;
		int n;
		cout << "����963.3�˳������˵�" << endl;
		cout << "��ֱ�����x��ֵ��exponent��ֵ��" << endl;
		cin >> x;
		if (x == 963.3)
		{
			break;
			cout << endl << endl;
		}
		cin >> n;
		ret = ldexp(x, n);
		cout << "�����" << x;
		printf(" * 2^%d = %f\n\n", n, ret);
	}
}

void math::mathlog()
{
	//C �⺯�� double log(double x) ���� x ����Ȼ����������Ϊ e �Ķ�����
	double x, ret;
	while (1)
	{
		cout << "����x ����Ȼ������" << endl;
		cout << "����963.3�˳������˵�" << endl;
		cout << "������x��ֵ��" << endl;
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
	//C �⺯�� double log10(double x) ���� x �ĳ��ö���������Ϊ 10 �Ķ�����
	//�ú������� x �ĳ��ö�����x ��ֵ���� 0
	double x, ret;
	while (1)
	{
		cout << "����x �ĳ��ö��� log10(x)��" << endl;
		cout << "����963.3�˳������˵�" << endl;
		cout << "������x��ֵ(����Ϊ����)��" << endl;
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
	//C �⺯�� double modf(double x, double *integer) ����ֵΪС�����֣�С�����Ĳ��֣��������� integer Ϊ��������
	//x -- ����ֵ��
	//integer -- ָ��һ�������ָ�룬�ö���洢���������֡�
	double x, fractpart, intpart;
	while (1)
	{
		cout << "����һ����������С�����ֺ��������֣�\n����963.3�˳������˵�" << endl;
		cout << "������һ��������" << endl;
		cin >> x;
		if (x == 963.3)
		{
			break;
			cout << endl << endl;
		}
		fractpart = modf(x, &intpart);

		printf("�������� = %lf\n", intpart);
		printf("С������ = %lf \n\n", fractpart);
	}
}

void math::mathpow()
{
	//C �⺯�� double pow(double x, double y) ���� x �� y ����
	while (1)
	{
		cout << "����x �� y ���ݣ�" << endl;
		double x, y;
		cout << "����963.3�˳������˵�" << endl;
		cout << "������x��ֵ��";
		cin >> x;
		if (x == 963.3)
		{
			break;
			cout << endl << endl;
		}
		cout << "������y��ֵ��";
		cin >> y;
		cout << "���Ϊ��" << pow(x, y) << endl << endl;
	}
}

void math::mathsqrt()
{
	//C �⺯�� double sqrt(double x) ���� x ��ƽ������
	while (1)
	{
		cout << " ����x ��ƽ������" << endl;
		cout << "����963.3�˳������˵�" << endl;
		cout << "������x��ֵ  (����Ϊ����)��";
		double x;
		cin >> x;
		if (x == 963.3)
		{
			break;
			cout << endl << endl;
		}
		cout << x << "��ƽ����Ϊ" << sqrt(x) << endl << endl;
	}
}

void math::mathfmod()
{
	//C �⺯�� double fmod(double x, double y) ���� x ���� y ������
	while (1)
	{
		cout << "���� x ���� y ������(֧�ָ�����)��" << endl;
		double x, y;
		cout << "����963.3�˳������˵�" << endl;
		cout << "������x��ֵ��";
		cin >> x;
		if (x == 963.3)
		{
			break;
			cout << endl << endl;
		}
		cout << "������y��ֵ��";
		cin >> y;
		cout << "���Ϊ��" << fmod(x, y) << endl << endl;
	}
}

void math::mathchange()
{
	double x,a;
	double val;
	val = PI / 180.0;
	while (1)
	{
		cout << "����ת�Ƕȣ�" << endl;
		cout << "����963.3�˳������˵�" << endl;
		cout << "�����뻡��ֵ��" ;
		cin >> x;
		if (x == 963.3)
		{
			break;
			cout << endl << endl;
		}
		a = x / val;
		cout << x << "���ȶ�Ӧ�ĽǶ���" << a <<"��" << endl << endl;
	}
}

void math::mathchange2()
{
	double x, a;
	double val;
	val = PI / 180.0;
	while (1)
	{
		cout << "�Ƕ�ת���ȣ�" << endl;
		cout << "����963.3�˳������˵�" << endl;
		cout << "������Ƕ�ֵ��";
		cin >> x;
		if (x == 963.3)
		{
			break;
			cout << endl << endl;
		}
		a = x * val;
		cout << x << "�ȶ�Ӧ�Ļ��ȶ���" << a  << endl << endl;
	}
}
