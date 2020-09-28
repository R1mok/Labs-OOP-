namespace Prog1
{
	struct element
	{
		double val; // ��������
		int j; // ����� �������� � ������
		struct element* next; // ��������� �� ��������� ������� � ������
	};
	struct Line
	{
		int n; // ���������� ��������� � ������
		element* el; // ��������� �� �������
	};

	template <class T>
	int getNum(T& a)
	{
		std::cin >> a;
		if (!std::cin.good())
			return -1;
		return 1;
	}

	Line* input(int&);
	void output(const char*, Line a[], int);
	Line* erase(Line*&, int);
	void New_matrix(Line*&, int);
}
