#define N 30
int r_int()
{
	std::random_device rd;
	std::default_random_engine engine(rd());//silnik
	// std::uniform_real_distribution<double> distribution(-1,1);//rozklad
	std::uniform_int_distribution<> distribution(0,10);//rozkład liczb całkowitych
	return distribution(engine);
	
}

int r_int_normal()
{
	std::random_device rd;
  std::default_random_engine engine(rd());
	std::normal_distribution<double> distribution(5,1.66666666);
	return distribution(engine);
}

void print_tab(int t[], int a)
{
	cout << "Tablica to: ";
	for (int i=0;i<a;i++) cout << t[i] << " "; cout << endl;
}

void print_tab_last(int t[], int a, int r=0)
{
	cout << "Ostatnie " << r << " elementów to: ";
	for (int i=a-1;i>=a-r;i--) cout << t[i] << " "; cout << endl;
}

int Max(int t[], int a)
{
	int max = 0;
	for (int i=0;i<a;i++)
	{
		if (t[i]>max) max = t[i];
	}
	return max;
}

int Min(int t[], int a)
{
	int max = 10;
	for (int i=0;i<a;i++)
	{
		if (t[i]<max) max = t[i];
	}
	return max;
}

void hist(int t[], int a)
{
	int B1=0, B2=0, B3=0, B4=0, B5=0;
	// Tu jest implementacja zgodna z treścią polecenia, ale bardziej jest to funkcjonalne jak biny są stałe, od 0 do 10.
	// int min = Min(t, N);
	// int max = Max(t, N);
	int min = 0;
	int max = 10;
	int dist = max - min;
	int b1=min, b2=min + 0.2*dist, b3=min+0.4*dist, b4=min+0.6*dist, b5=0.8*dist, b6=max;
	// cout << b1 << b2 << b3;
	for (int i=0;i<a;i++)
	{
		if (t[i]>=b1 && t[i] < b2) B1 += 1;
		if (t[i]>=b2 && t[i] < b3) B2 += 1;
		if (t[i]>=b3 && t[i] < b4) B3 += 1;
		if (t[i]>=b4 && t[i] < b5) B4 += 1;
		if (t[i]>=b5 && t[i] < b6) B5 += 1;
	}
	cout << b1 << " <= i < " << b2 << " : ";
	for (int i=0; i<B1;i++) cout << "X";
	cout << endl;
	cout << b2 << " <= i < " << b3 << " : ";
	for (int i=0; i<B2;i++) cout << "X";
	cout << endl;
	cout << b3 << " <= i < " << b4 << " : ";
	for (int i=0; i<B3;i++) cout << "X";
	cout << endl;
	cout << b4 << " <= i < " << b5 << " : ";
	for (int i=0; i<B4;i++) cout << "X";
	cout << endl;
	cout << b5 << " <= i < " << b6 << " : ";
	for (int i=0; i<B5;i++) cout << "X";
	cout << endl;
}

void tabs()
{
	cout << "Wypełniamy zgodnie z rozkładem płaskim" << endl;
	int tab[N];
	for (int i=0; i<N;i++)
	{
		tab[i] = r_int();
	}
	print_tab(tab, N);
	print_tab_last(tab, N, 10);
	cout << "Największa liczba w tablicy to: " << Max(tab, N) << endl;
	cout << "Najmniejsza liczba w tablicy to: " << Min(tab, N) << endl;
	hist(tab, N);
	cout << "Wypełniamy zgodnie z rozkładem normalnym" << endl;
	for (int i=0; i<N;i++)
	{
		tab[i] = r_int_normal();
	}
	print_tab(tab, N);
	print_tab_last(tab, N, 10);
	cout << "Największa liczba w tablicy to: " << Max(tab, N) << endl;
	cout << "Najmniejsza liczba w tablicy to: " << Min(tab, N) << endl;
	hist(tab, N);
}