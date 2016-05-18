﻿# TableVerbs
Курсовая работа по ТРПО "Неправильные глаголы"

## Перед использование
* Создать папку obj/ ($mkdir obj/)
* $make
* `g++ -o tableverbs /src/read.cpp /src/main.cpp`

#Использование
* ./tableverbs
* `Запустить tableverbs.exe`

#Работа с функционалом
* `Меню`
* 0. Выход
* 1. Вывод все глаголов из data файла
* 2. Ввод одного глагола, проверка на правильность, вывод
* 3. Вывод конкретной формы глагола
* 4. Режим проверки знаний
* 5. Определение формы введенного глагола

#Задание 1
* `Вывод все глаголов из data файла`

#Задание 2
* `Ввод одного глагола, проверка на правильность, вывод`
* Ввод, реализация поиска по структуре
* Вывод всех форм в случае нахождения
* Если нет, то глагол относится к правильным или введен неверно

#Задание 3
* `Вывод конкретной формы глагола`
* Поиск элемента по первому столбцу структуры

#Задание 4
* `Режим проверки знаний`
* Вывод инфинитива
* Считывание данных, сравнение со структурой
* Вывод результата проверки
* Расчет процента выполненой работы

#Задание 5
* `Определение формы введенного глагола`
* Считывание данных
* Поиск по структуре
* Вывод формы глагола по номеру столбца массива