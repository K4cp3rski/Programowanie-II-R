/*enum Znaki {Option0 = 0, Option1 = 1, Option2 = 2, Option3 = 3, Option4 = NULL};

Znaki wybierz(std::string d)
{
	if (d=="+") return Option0;
	if (d=="-") return Option1;
	if (d=="*") return Option2;
	if (d=="/") return Option3;
	else return Option4;
}*/

float calc(float a, float b, char c)
{
	
	switch (c)
	{
		case '+': return a + b; break;
		case '-': return a - b; break;
		case '*': return a * b; break;
		case '/': return a / b; break;
		default: return -1;
	}
}