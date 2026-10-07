#include <iostream> // Используем заголовочный файл потока ввода/вывода
#include <cmath> // Используем заголовочный файл математических функций

#include "Переменные.cpp"
#include "Консоль.cpp"

//using namespace std; // Используем стандартную библиотеку
//
//
//    Групповое занятие: совместными усилиями реализовать доп. функции калькулятора
//
//    1) Назначьте руководителя проекта
//    Руководитель проекта должен создать репозиторий проекта калькулятора и добавить туда своих напарников.
//    Затем распределите подзадачи на каждого участника.
//
//    2) Каждый участник проекта должен запуллить проект из репозитория себе и создать ветку,
//    назвать её своим ФИО латиницей, выполнить свою подзадачу в ней, после чего создать
//    запрос на слияние ветвей (merge request)
//
//    3) Команда просматривает каждую ветку, оставляет свои комментарии по доработке, если необходимо, затем
//    руководитель проекта производит слияние в мастер-ветку. Итоговый проект должен корректно проводить вычисления
//
//    ПОДЗАДАЧИ:
//
//    1. Доработать int main()
//        1.1 Вывести в консоль указания пользователю для работы с программой
//        1.2 Реализовать ввод трех значений с консоли и хранение этих переменных для других методов
//    2. Описать метод рассчёта площади круга
//    3. Описать метод рассчёта площади прямоугольника
//    4. Описать метод рассчёта площади треугольника по формуле Герона
//    5. Описать метод рассчёта площади треугольника через основание и высоту
//
//    В конце прошу округлять вычисления до двух знаков после запятой, используя
//    double rounded = round(value * 100.0) / 100.0 - вернёт число с двумя знаками после запятой
//    Помимо вычислений, каждый метод должен делать аккуратный вывод результата в консоль
//    
//
//class Calculator
//{
//public:
//
//    /// <summary>
//    /// Вычисляет сумму двух чисел с плавающей запятой
//    /// </summary>
//    /// <param name="a">Первое значение</param>
//    /// <param name="b">Второе значение</param>
//    /// <returns>Итоговая сумма</returns>
//    static double Sum(double a, double b)
//    {
//        // Вычисляем
//        double sum = a + b;
//        // Округляем
//        double result = round(sum * 100.0) / 100.0;
//        // Выводим в консоль рассчёты
//        cout << "Сумма: " << sum << endl;
//
//        return sum;
//    }
//
//    // Подзадача 2
//    static double CircleArea(double radius)
//    {
//        return 0;
//    }
//
//    // Подзадача 3
//    static double RectangleArea(double first, double second)
//    {
//        return 0;
//    }
//
//    // Подзадача 4
//    static double TriangleArea(double first, double second, double third)
//    {
//        return 0;
//    }
//
//    // Подзадача 5
//    static double TriangleArea(double base, double height)
//    {
//        return 0;
//    }
//};
//
//int main()
//{
//    Console::SetRussianOnWindows();
//    // Подзадача 1
//
//    // Для проверки задания: снять комментарии, заполнить методы переменными, 
//    // запустить и посмотреть консольный вывод
//    Calculator::Sum(3., 5.);
//    // Calculator::CircleArea();
//    // Calculator::RectangleArea();
//    // Calculator::TriangleArea();
//    // Calculator::TriangleArea();
//}
//
//
//
//
//
//
//#include <iostream>
//#include <cmath>

class Calculator {
public:
	// Кейс 1: Сумма первых двух чисел
	static double Case1(double a, double b) {
		//Cумма первых двух чисел
		double sum12;
		sum12 = a + b;
		return sum12;
	}

	// Кейс 2: Площадь круга
	static float Case2(double a) {
		float S, pi{};
		pi = 3.14;
		S = pi * a * a;
		return S;
	}

	//Кейс 3: Площадь прямоугольника
	static double Case3(double a, double b) {
		double umn12 = a * b;
		return umn12;
	}

	//Кейс 4: Формуда Герона
	static double Case4(double a, double b, double c) {
		double P, p, GER;
		P = a + b + c;
		p = P / 2;
		GER = p * (p - a) * (p - b) * (p - c);
		GER = std::sqrt(GER);
		GER = std::round(GER * 100.0) / 100.0;
		return GER;
	}

	//Кейс 5: Площадь треугольника через основание и высоту
	static double Case5(double a, double b) {
		double OCN = (a * b) / 2;
		return OCN;
	}

	//Кейс 6: Подсчет факториала
	static int Case6(int a) {
		int fact;
		fact = 1;
		for (int i = 1; i <= a; ++i) {
			fact *= i;
		}
		return fact;


	}
};








int main() {
	std::setlocale(LC_ALL, "Russian");
	int choice = -1;

	while (choice != 0) {
		double a, b, c;
		std::cout << "ГЕОМЕТРИЧЕСКИЙ КАЛЬКУЛЯТОР\n";
		std::cout << "ВВЕДИТЕ ТРИ ЗНАЧЕНИЯ\n";

		std::cout << "Первое значение может использоваться как:\n";
		std::cout << "- радиус круга;\n";
		std::cout << "- первая сторона прямоугольника;\n";
		std::cout << "- первая сторона треугольника;\n";
		std::cout << "- основание треугольника.\n";
		std::cout << "- вычисление факториала.\n";

		std::cout << "Второе значение может использоваться как:\n";
		std::cout << "- вторая сторона прямоугольника;\n";
		std::cout << "- вторая сторона треугольника;\n";
		std::cout << "- высота треугольника.\n";

		std::cout << "Третье значение используется как третья сторона треугольника для формулы Герона.\n";



		std::cout << "Введите первое значение:  ";
		std::cin >> a;
		std::cout << "Введите второе значение: ";
		std::cin >> b;
		std::cout << "Введите третье значение:  ";
		std::cin >> c;
		if (a <= 0 || b <= 0 || c <= 0) {
			std::cout << "Вы ввели отриц число или 0 \n";
		}
		if (a > b + c || b > a + c || c > a + b) {
			std::cout << "Из за этих сторон треугольник по формуле герона не существует \n\n";
		}
		else {
			int choice;
			std::cout << "Выберите действие (номер формулы):\n";
			std::cout << "1. Сумма первых двух чисел\n";
			std::cout << "2. Площадь круга\n";
			std::cout << "3. Площадь прямоугольника\n";
			std::cout << "4. Площадь треугольника по формуле Герона\n";
			std::cout << "5. Площадь треугольника через основание\n";
			std::cout << "6. Вычисление факториала\n";
			std::cout << "0. Для выхода из программы\n";

			std::cout << "Ваш выбор: ";
			std::cin >> choice;



			if (choice == 0) {
				std::cout << "Выход.\n";
				break;

			}
			switch (choice) {
			case 1: {
				std::cout << "Сумма первых двух чисел = " << Calculator::Case1(a, b) << std::endl << std::endl; break;
			}
			case 2: {
				std::cout << "Площадь круга = " << Calculator::Case2(a) << std::endl << std::endl; break;
			}
			case 3: {
				std::cout << "Площадь прямоугольника = " << Calculator::Case3(a, b) << std::endl << std::endl; break;
			}
			case 4: {
				std::cout << "Площадь треугольника по формуле Герона = " << Calculator::Case4(a, b, c) << std::endl << std::endl; break;
			}
			case 5: {
				std::cout << "Площадь треугольника через основание и высоту = " << Calculator::Case5(a, b) << std::endl << std::endl; break;
			}
			case 6:
				std::cout << "Факториал =  " << Calculator::Case6(a) << std::endl << std::endl; break;




			}
		}
	}
	return 0;



}