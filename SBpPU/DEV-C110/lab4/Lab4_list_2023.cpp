/*************************************************************
	Практическое занятие №4 курс С110. Рекурсивные функции.
	Использование структур для реализации односвязного списка

*************************************************************/
#include <iostream>
#include <cstdio>
#define stop __asm nop


#include "list.h"
#include "functions.h"




void main()
{

#if 0
//Задание 1:	
//Рекурсивные функции.
	//1.1.Написать рекурсивную функцию вычисления суммы первых N натуральных чисел. 
	int x = 3;
	std::cout << "1.1 - Sum: " << sumOfnumber(x) << std::endl;

	//1.2.Написать рекурсивную функцию вычисления количества цифр 10-чного натурального числа 
	int y = 1000;
	std::cout << "1.2 - Count digits: " << countDigits(y) << std::endl;

	//1.3.Написать рекурсивную функцию для вывода на экран строки в обратном порядке. 
	const char* str = "Time to work!";
	std::cout << "1.3 - Reverse str: ";
	reverseStr(str);
	std::cout << std::endl;

	//1.4.Написать рекурсивную функцию для вывода на экран строки в прямом (!) порядке.
	std::cout << "1.4 - Forward str: ";
	forwardStr(str);
	std::cout << std::endl;

//Замечание:
	// Прототипы функций поместите в заголовочный файл functions.h, а реализации - в файл functions.cpp
#endif
//----------------------------------------------------------------------------------------------------------
//Задание 2:	
#if 1
	//ПОДСКАЗКИ: в файле "Односвязный список (процедурный подход, подсказки)_2022.pdf" 
	
	//Односвязный список будет содержать данные целого типа.
	// 
	//2.1. В заголовочном файле list.h объявите структуру Node, описывающую узел односвязного списка. 
	//  
	//2.2. Разработайте следующие функции:
	//1) Добавление данных в список (в начало)
	//При добавлении элемента в начало списка будет изменяться значение указателя на голову.
	// Подумайте, как в вызывающий код вернуть это измененное значение


	Node* pHead = nullptr;

	pHead = addNode(1, pHead);
	pHead = addNode(5, pHead);
	pHead = addNode(7, pHead);
	pHead = addNode(33, pHead);
	pHead = addNode(45, pHead);


	printList(pHead);

	std::cout << std::endl;

	reversePrintList(pHead);

	std::cout << std::endl;

	
	int x = 45;

	printf("\nDelete value = %d\n", x);
	deleteNode(x, pHead);

	printList(pHead);
	x = 7;

	printList(pHead);

//TODO: delete

	clearList(pHead);

#endif
	//2) Удаление из списка одного элемента, данные которого совпадают с заданным значением
	// (первого, который встретился)
	//Подсказка:
	//при удалении элемента возможны следующие ситуации:
	// - удаляемый элемент является "головой"
	// - удаляемый элемент не является "головой"
	// - элемент в списке не найден 
	//В том случае, когда удаляемый элемент является "головой", значение указателя на голову изменяется.
	//Кроме измененного значения указателя на начало списка хотелось бы получать признак  выполнено удаление
	// или нет. Подумайте, как это осуществить.
	// 
	//3) Печать списка, начиная с "головы" 
	//   (порядок следования элементов будет обратным порядку заполнения). 

	//4) Печать списка, начиная с конца (рекурсивная функция). 
	//   (порядок следования элементов будет соответствовать порядку, 
	//	в котором заполнялся список.
	
	//Замечание:
	// Прототипы функций поместите в заголовочный файл list.h, а реализации - в файл list.cpp
//----------------------------------------------------------------------------------------------------------
//Задание 3:	
	//3.1. "Создайте" пустой односвязный список, задав указатель на его "голову"
	

	//3.2. Заполните список значениями
	
	//3.3. Выведите список на консоль 
	
	//3.4. Выведите список на консоль в порядке заполнения (рекурсивная функция)
	
	//3.5. Удалите из списка заданное значение. Предусмотрите проверку, когда: 
	// - удаляемый элемент является "головой"
	// - удаляемый элемент не является "головой"
	// - элемент в списке не найден 
	//
	//3.6. Выведите список на консоль 
	//  
	//3.7. Не забудьте освободить динамическую память.

}