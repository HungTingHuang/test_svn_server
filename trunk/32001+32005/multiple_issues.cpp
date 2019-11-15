static void functionA()
{
	// do something for issue 32001
	// conflict by 32005
}

static void functionB()
{
	// do something for issue 32005
	// do more for 32005
}

int main()
{
	functionA();
	functionB();
	return 0;
}