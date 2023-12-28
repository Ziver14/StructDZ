#include<iostream>
#include<string>

struct Movie {
	std::string title = "noname";
	int age = 0;
	std::string genre = "noname";
	unsigned int duration = 0;
	unsigned int price = 0;
};


void print_movie(const Movie& M) {
	std::cout << "Название -> " << M.title << std::endl;
	std::cout << "Год выпуска -> " << M.age << std::endl;
	std::cout << "Жанр -> " << M.genre << std::endl;
	std::cout << "Продолжительность (в минутах) -> " << M.duration << std::endl;
	std::cout << "Цена (в USD) -> " << M.price << std::endl;
}

void expensive(const Movie& M, const Movie& M1) {
	if (M.price > M1.price)
		std::cout << "Самая высокая цена ->" << M.price;
	else
		std::cout << "Самая высокая цена ->" << M1.price;

}

void update_info(Movie& M,int num) {

	std::cout << "Какой пункт изменить? -> ";
	std::cin >> num;
	std::cin.ignore();
	switch (num) {
	
	case 1: std::cout << "Измените имя -> ";
		std::getline(std::cin, M.title); break;
	case 2: std::cout << "Измените дату выхода -> ";
		std::cin >> M.age; break;
	case 3: std::cout << "Измените жанр -> ";
		std::getline(std::cin, M.genre); break;
	case 4: std::cout << "Измените время -> ";
		std::cin >> M.duration; break;
	case 5: std::cout << "Измените цену -> ";
		std::cin >> M.price;

	}
	std::cout << "Изменения сохранены!\n";

}


int main() {
	setlocale(LC_ALL, "ru");
	int n = 0;


	Movie M {
		"Iron man",
		2008,
		"action",
		128,
		11
	};
	
	Movie M1{
		"Iron man 2",
		2010,
		"action",
		119,
		12
	};

	//Задача 1
	print_movie(M);
	std::cout << "\n\n";
	print_movie(M1);
	std::cout << "\n\n";

	//Задача 2
	expensive(M, M1);
	std::cout<<"\n\n" <<std::endl;

	//Задача 3.
	update_info(M,n);
	std::cout << "Новая информация ->\n\n ";
	print_movie(M);

	return 0;
}