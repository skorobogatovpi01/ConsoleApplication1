#include <iostream>
using namespace std;

class user // для измерения количества посещений (вложенный)
{
	int enter_counta; // число входов админа
	int enter_countu; // число входов юзера
	int enter_all; // общее число входов
	function addadm()
	{
		this.enter_counta += 1; // добавляем один вход админа
		int.enter_all += 1; // добавляем один вход в общее число входов
	}
	function addusr()
	{
		this.enter_countu += 1; // добавляем один вход юзера
		this.enter_all += 1; // добавляем один вход в общее число входов
	}
};

class enter // для измерения количества посещений (основной)
{
	user add_admin; // добавляем поле вход админа 
	user add_user; // добавляем поле вход юзера
	function constructor (user add_admin, user add_user)
	{
		this.add_admin = add_admin;
		this.add_user = add_user;;
	}
	function addadm() // добавляем "выстрел" по аналогии с приведенным вами кодом из хабра
	{
		this.add_admin.addadm()
	}
	function addusr() // так же поступаем с юзерами
	{
		this.add_user.addusr()
	}

};

class game
{
public:
	float lenght;
	int price;
	string name;
};

class programm
{
public:
	int price;
	string name;
	string sysreq;
};

class movie
{
public:
	int price;
	string name;
	int age;
	string genre;
};

class toymerch
{
public:
	int price;
	int lenght;
	string name;
};

class music
{
public:
	int price;
	string author;
	string album;
};

int main()
{
	setlocale(LC_ALL, "ru");
	int n;
	int pass;

	enter a[10];//вот тут начинается непонятное
	enter u[10];//не понимаю как теперь в качестве массива записывать и выводить количество входов

	game game1 = {150, 1500, "Witcher"};
	game game2 = {75, 2000, "Minecraft"};
	game game3 = {50, 800, "Forza"};
	programm programm1 = { 250, "LiveWallpaper", "Win10" };
	programm programm2 = { 4999, "Office", "Win7" };
	programm programm3 = { 100, "DriverUpdate", "Win10" };
	movie movie1 = {1000, "Driver", 18, "Shooter"};
	movie movie2 = {1000, "Shrek", 16, "Cartoon"};
	movie movie3 = {1000, "Home", 18, "Scary movie"};
	toymerch toy1 = {2500, 45, "Potato from TOYSTORIE"};
	toymerch toy2 = {1500, 45, "Geralt"};
	music mus1 = {5000, "Chordettes", "Mr Sandman"};
	music mus2 = {5000, "Ice Cube", "Predator"};
	music mus3 = {5000, "The Prodigy", "The Fat Of The Land"};

	cout << "Авторизация: \n";
	cin >> pass;

	switch (pass)
	{
	case 1111:
		a[0]++; // записываем вход
		cout << "Здравствуй, admin";
		break;
	case 0000:
		u[0]++; // записываем вход
		cout << "Приветствуем вас в нашем магазине!\n";
		cout << "Ассортиммент:\n 1.Игры\n 2.Софт\n 3.Фильмы\n 4.Игровой мерч\n 5.Музыкальные альбомы на виниле\n";
		cout << "Выберите категорию: ";
		cin >> n;
		if (n == 1)
		{
			cout << "Доступные игры: ";
			cout << game1.name << "\t" << game2.name << "\t" << game3.name << "\n";
			cout << "Выберите интересующий вас товар\n";
			int n1;
			cin >> n1;
			if (n1 == 1)
			{
				cout << "Длинна сюжета (часов) " << game1.lenght << "\t" << "Название " << game1.name << "\t" << "Цена " << game1.price << "\n";
			}
			if (n1 == 2)
			{
				cout << "Длинна сюжета (часов) " << game2.lenght << "\t" << "Название " << game2.name << "\t" << "Цена " << game2.price << "\n";
			}
			if (n1 == 3)
			{
				cout << "Длинна сюжета (часов) " << game3.lenght << "\t" << "Название " << game3.name << "\t" << "Цена " << game3.price << "\n";
			}
		}
		if (n == 2)
		{
			cout << "Доступные программы: ";
			cout << programm1.name << "\t" << programm2.name << "\t" << programm3.name << "\n";
			cout << "Выберите интересующий вас товар\n";
			int n1;
			cin >> n1;
			if (n1 == 1)
			{
				cout << "Цена: " << programm1.price << "\t" << "Название: " << programm1.name << "\t" << "Доступные ОС: " << programm1.price << "\n";
			}
			if (n1 == 2)
			{
				cout << "Цена: " << programm2.price << "\t" << "Название: " << programm2.name << "\t" << "Доступные ОС: " << programm2.price << "\n";
			}
			if (n1 == 3)
			{
				cout << "Цена: " << programm3.price << "\t" << "Название: " << programm3.name << "\t" << "Доступные ОС: " << programm3.price << "\n";
			}
		}
		if (n == 3)
		{
			cout << "Доступные фильмы: ";
			cout << movie1.name << "\t" << movie2.name << "\t" << movie3.name << "\n";
			cout << "Выберите интересующий вас товар\n";
			int n1;
			cin >> n1;
			if (n1 == 1)
			{
				cout << "Цена: " << movie1.price << "\t" << "Название: " << movie1.name << "\t" << "Возрастной ценз: " << movie1.age << "\t" << "Жанр: " << movie1.genre << "\n";
			}
			if (n1 == 2)
			{
				cout << "Цена: " << movie2.price << "\t" << "Название: " << movie2.name << "\t" << "Возрастной ценз: " << movie2.age << "\t" << "Жанр: " << movie2.genre << "\n";
			}
			if (n1 == 3)
			{
				cout << "Цена: " << movie3.price << "\t" << "Название: " << movie3.name << "\t" << "Возрастной ценз: " << movie3.age << "\t" << "Жанр: " << movie3.genre << "\n";
			}
		}
		if (n == 4)
		{
			cout << "Доступные фигурки: ";
			cout << toy1.name << "\t" << toy2.name << "\t" << "\n";
			cout << "Выберите интересующий вас товар\n";
			int n1;
			cin >> n1;
			if (n1 == 1)
			{
				cout << "Высота (см): " << toy1.lenght << "\t" << "Название: " << toy1.name << "\t" << "Цена: " << toy1.price << "\n";
			}
			if (n1 == 2)
			{
				cout << "Высота (см): " << toy2.lenght << "\t" << "Название: " << toy2.name << "\t" << "Цена: " << toy2.price << "\n";
			}
		}
		if (n == 5)
		{
			cout << "Доступные альбомы: ";
			cout << mus1.album << "\t" << mus2.album << "\t" << mus3.album << "\n";
			cout << "Выберите интересующий вас товар\n";
			int n1;
			cin >> n1;
			if (n1 == 1)
			{
				cout << "Цена: " << mus1.price << " " << "Название: " << mus1.album << " " << "Автор: " << mus1.author << "\n";
			}
			if (n1 == 2)
			{
				cout << "Цена: " << mus2.price << "\t" << "Название: " << mus2.album << "\t" << "Автор: " << mus2.author << "\n";
			}
			if (n1 == 3)
			{
				cout << "Цена: " << mus3.price << "\t" << "Название: " << mus3.album << "\t" << "Автор: " << mus3.author << "\n";
			}
		}
		break;
	}
}
