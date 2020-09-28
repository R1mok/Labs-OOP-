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

	Line* create_matrix(int&);
	Line* input_in_line(Line*& lines, int i);
	Line* input_element(Line*& lines, int i);
	void output(const char*, Line a[], int);
	Line* erase(Line*&, int);
	void New_matrix(Line*&, int);
}
