#include<iostream>
#include<ctime>
#include<iomanip>

using namespace std;

int main()
{
	srand(time(0));
	// Main
	const int size = 10;
	int arr[size];
	char prg;
	bool end = true, back = true, back1 = true;

	//Fill up
		//Random numbers
		int max, min;

	//Sort or Search
		//Sort
		bool dop;
		int tr, in;
			//Vubir
			int Min = 100, index = -1;
		//Search
		bool sort = false, sea;
		int num;
			//Binar search
			int center, prcenter, search, pr;
			//Line search
			int ip[size];

	for(int i = 0; i < size; i++)
		arr[i] = rand()%10;

	while(end)
	{
		system("cls");
		cout << "..::Masive Programe::.." << endl;
		cout << "Masive(m)" << endl;
		cout << "Fill up(f)" << endl;
		cout << "Sort or Search(s)" << endl;
		cout << "Exit(e)" << endl;
		cout << "Prg: ";
		cin >> prg;
		switch(prg)
		{
		case 'm':
			system("cls");
			cout << "..::Masive::.." << endl;
			for(int i = 0; i < size; i++)
				cout << arr[i] << " ";
			cout << endl;
			system("pause");
			break;
		case 'f':
			back = true;
			while(back)
			{
				system("cls");
				cout << "..::Fill up::.." << endl;
				cout << "Random numbers(r)" << endl;
				cout << "Write numbers(w)" << endl;
				cout << "Go back(b)" << endl;
				cout << "Prg: ";
				cin >> prg;
				switch(prg)
				{
				case 'r':
					system("cls");
					cout << "Max: ";
					cin >> max;
					cout << "Min: ";
					cin >> min;
					system("cls");
					cout << "New random numbers:" << endl;
					for(int i = 0; i < size; i++)
					{
						arr[i] = rand()%(max-min+1)+min;
						cout << arr[i] << " ";
					}
					cout << endl;
					sort = false;
					system("pause");
					break;
				case 'w':
					for(int i = 0; i < size; i++)
					{
						system("cls");
						cout << "Number: ";
						cin >> arr[i];
					}
					sort = false;
					break;
				case 'b':
					back = false;
					break;
				default:
					system("cls");
					cout << "Error" << endl;
					system("pause");
				}
			}
			break;
		case 's':
			back = true;
			while(back)
			{
				system("cls");
				cout << "..::Sort or Search::.." << endl;
				cout << "Sort(s)" << endl;
				cout << "Search(a)" << endl;
				cout << "Go back(b)" << endl;
				cout << "Prg: ";
				cin >> prg;
				switch(prg)
				{
				case 's':
					back1 = true;
					while(back1)
					{
						system("cls");
						cout << "..::Sort::.." << endl;
						cout << "Buble(u)" << endl;
						cout << "Vubir(v)" << endl;
						cout << "Vstavka(t)" << endl;
						cout << "Shaker(s)" << endl;
						cout << "Go back(b)" << endl;
						cout << "Prg: ";
						cin >> prg;
						switch(prg)
						{
						case 'u':
							while(true)
							{
								in = 0;
								system("cls");
								cout << "..::Buble::.." << endl;
								cout << "From down to up(d)" << endl;
								cout << "From up to down(u)" << endl;
								cout << "Go back(b)" << endl;
								cout << "Prg: ";
								cin >> prg;
								if(prg == 'd')
									dop = false;
								else if(prg == 'u')
									dop = true;
								else if(prg == 'b')
									break;
								for(int i = 0; true; i++)
								{
									in++;
									tr = 0;
									for(int j = 1; j < size; j++)
									{
										if(dop)
										{
											if(arr[j-1] < arr[j])
												swap(arr[j-1], arr[j]);
										}
										else
										{
											if(arr[j-1] > arr[j])
												swap(arr[j-1], arr[j]);
										}
									}
									for(int j = 0; j < size; j++)
									{
										if(dop)
										{
											if(arr[j-1] >= arr[j])
												tr++;
										}
										else
										{
											if(arr[j-1] <= arr[j])
												tr++;
										}
									}
									if(tr == size)
										break;
									else if(tr == size-1 && dop == true)
										break;
								}
								system("cls");
								cout << "Sort is ending" << endl;
								cout << "In: " << in << endl;
								sort = true;
								system("pause");
							}
							break;
						case 'v':
							while(true)
							{
								in = 0;
								system("cls");
								cout << "..::Vubir::.." << endl;
								cout << "From down to up(d)" << endl;
								cout << "From up to down(u)" << endl;
								cout << "Go back(b)" << endl;
								cout << "Prg: ";
								cin >> prg;
								if(prg == 'd')
									dop = false;
								else if(prg == 'u')
									dop = true;
								else if(prg == 'b')
									break;
								for (int i = 0; i <size - 1; ++i)
								{
									for (int j = i; j<size; ++j)
									{
										if(dop)
										{
												if (Min< arr[j]) 
											{
												Min = arr[j];
												index = j;
											}
										}
										else
										{
											if (Min> arr[j]) 
											{
												Min = arr[j];
												index = j;
											}
										}
									}
									swap(arr[i], arr[index]);
									in++;
									Min = 100;
								}
								system("cls");
								cout << "Sort is ending" << endl;
								cout << "In: " << in << endl;
								sort = true;
								system("pause");
							}
							break;
						case 't':
							while(true)
							{
								in = 0;
								system("cls");
								cout << "..::Vstavka::.." << endl;
								cout << "From down to up(d)" << endl;
								cout << "From up to down(u)" << endl;
								cout << "Go back(b)" << endl;
								cout << "Prg: ";
								cin >> prg;
								if(prg == 'd')
									dop = false;
								else if(prg == 'u')
									dop = true;
								else if(prg == 'b')
									break;
								for(int i = 0; i < size; i++)
								{
									tr = 0;
									for(int j = i; j< size; j++)
									{
										if(dop)
										{
											if(arr[i] < arr[j])
												swap(arr[i], arr[j]);
										}
										else
										{
											if(arr[i] > arr[j])
												swap(arr[i], arr[j]);
										}
									}
									in++;
								}
								system("cls");
								cout << "Sort is ending" << endl;
								cout << "In: " << in << endl;
								sort = true;
								system("pause");
							}
							break;
						case 's':
							while(true)
							{
								in = 0;
								system("cls");
								cout << "..::Shaker::.." << endl;
								cout << "From down to up(d)" << endl;
								cout << "From up to down(u)" << endl;
								cout << "Go back(b)" << endl;
								cout << "Prg: ";
								cin >> prg;
								if(prg == 'd')
									dop = false;
								else if(prg == 'u')
									dop = true;
								else if(prg == 'b')
									break;
								for(int i = 0; true; i++)
								{
									in++;
									tr = 0;
									for(int j = 1; j < size; j++)
									{
										if(dop)
										{
											if(arr[j-1] < arr[j])
												swap(arr[j-1], arr[j]);
										}
										else
										{
											if(arr[j-1] > arr[j])
												swap(arr[j-1], arr[j]);
										}
									}
									for(int j = size-1; j >= 0; j--)
									{
										if(dop)
										{
											if(arr[j-1] < arr[j])
												swap(arr[j-1], arr[j]);
										}
										else
										{
											if(arr[j-1] > arr[j])
												swap(arr[j-1], arr[j]);
										}
									}
									for(int j = 0; j < size; j++)
									{
										if(dop)
										{
											if(arr[j-1] >= arr[j])
												tr++;
										}
										else
										{
											if(arr[j-1] <= arr[j])
												tr++;
										}
									}
									if(tr == size)
										break;
									else if(tr == size-1 && dop == true)
										break;
								}
								system("cls");
								cout << "Sort is ending" << endl;
								cout << "In: " << in << endl;
								sort = true;
								system("pause");
							}
							break;
						case 'b':
							back1 = false;
							break;
						default:
							system("cls");
							cout << "Error" << endl;
							system("pause");
						}
					}
					break;
				case 'a':
					back1 = true;
					while(back1)
					{
						in = 0;
						sea = false;
						system("cls");
						cout << "..::Search::.." << endl;
						cout << "Binarn search(s)" << endl;
						cout << "Line search(l)" << endl;
						cout << "Go back(b)" << endl;
						cout << "Prg: ";
						cin >> prg;
						switch(prg)
						{
						case 's':
							if(sort)
							{
								cout << "Search: ";
								cin >> num;
								center = size;
								prcenter = 0;
								for(int i = 0; i < size; i++)
								{
									in++;
									if(arr[(center+prcenter)/2] == num)
									{
										search = (center+prcenter)/2;
										sea = true;
										break;
									}
									else if(arr[(center+prcenter)/2] > num)
									{
										center = (center+prcenter)/2;
									}
									else if(arr[(center+prcenter)/2] < num)
									{
										if(center > prcenter)
										{
											pr = center;
											center = (center+prcenter)/2;
											prcenter = pr;
										}
										else if(prcenter > center)
										{
											pr = prcenter;
											prcenter = (center+prcenter)/2;
											center = pr;
										}
									}
								}
								system("cls");
								if(sea)
								{
									cout << "Index: " << search << endl;
									cout << "In: " << in << endl;
								}
								else
									cout << "Nothing" << endl;
								system("pause");
							}
							else
							{
								system("cls");
								cout << "You must sort your masive" << endl;
								system("pause");
							}
							break;
						case 'l':
							system("cls");
							sea = false;
							cout << "Search: ";
							cin >> num;
							pr = 0;
							in = 0;
							for(int i = 0; i < size; i++)
							{
								in++;
								if(arr[i] == num)
								{
									ip[pr] = i;
									pr++;
								}
							}
							if(sea)
							{
								cout << "Index: ";
								for(int i = 0; i < pr; i++)
									cout << setw(2) << arr[i];
								cout << endl;
								cout << "In: " << in << endl;
							}
							else
								cout << "Nothing" << endl;
							system("pause");
							break;
						case 'b':
							back1 = false;
							break;
						default:
							system("cls");
							cout << "Error" << endl;
							system("pause");
						}

					}
					break;
				case 'b':
					back = false;
					break;
				default:
					system("cls");
					cout << "Error" << endl;
					system("pause");
				}
			}
			break;
		case 'e':
			system("cls");
			cout << "Exit" << endl;
			end = false;
			break;
		default:
			system("cls");
			cout << "Error" << endl;
			system("pause");
		}
	}

	system("pause");
}