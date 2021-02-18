// подключение библиотек (заголовочных файлов)
#include <cstdio>     // printf
#include <iostream>   // cout

#include <string>     // класс С++ строки
#include <bitset>     // (decimal to binary conversion)

// пространства имен используются для борьбы с проблемой
// конфликта имен (функций, классов и пр.)
// Java: проведите аналогию с пакетами (import java.lang.* => using namespace java.lang)
using namespace std;  // испольуем пространство имен std

// функция без входных параметров, которая ничего не возвращает (void).
/* возвращаемое значение */ void /* название функции */ print_void(/* параметры */) {
    // тело функции
    cout << "Exec print_void()" << endl;
}

// функция с 1 входным параметром, которая ничего не возвращает (void)
void print_int(int var) {
    cout << "Exec print_int(" << var << ")" << endl;
}

// функция с 1 входным параметром и возвращаемым значением (bool)
bool print_int_return_bool(int var) {
    cout << "Exec print_int_return_bool(" << var << ")" << endl;

    // возвращаем значение в зависимости от полученных параметров
    if (var > 0) {
        return true;  // return - оператор возврата
    }

    return false;
}

/**
 * Конвертирование числа в строку в двоичном формате.
 *
 * @param bin_variable - переменная целочисленного типа
 * @return строка, представляющее число в двоичном формате
 *
 * Заметьте, что мы лишь объявили функцию (создали её прототип),
 * определения ей мы не давали (нет блока с телом функции).
 *
 * Название входному параметру в прототипе функции давать не обязательно.
 */
string convert_to_bin_str_fmt(int /* bin_variable */);


// функция main - входная точка программы
int main(/* здесь могли быть ваши параметры */) {

    // 1. Вывод в стандартный поток stdout
    cout << "Launching the program. Fasten your seat belts..." << endl;

    // Explanation:
    // cout - это объект стандартного потока вывода
    // << - это оператор вывода (мы будто направляем данные в поток вывода)
    // endl - добавляет символ конца строки '\n'
    // в коде выше мы подаем строковый литерал на вход потоку вывода

    printf("Printing a string '%s', integer %d, double %.2f, and char '%c'\n", "string literal", 3, 4.5212122, 'S');

    // Explanation:
    // printf - это функция форматированного вывода (Java: System.out.printf, Python: str.format)
    // первый аргумент - формат, остальные аргументы - выводимые значения

    // 2. Встроенные типы данных
    bool boolean_var = false;
    char char_var = 'S';
    int integer_var = 100500;
    float float_var = 2.81f;
    double double_var = 3.12645234;

    // Explanation:
    // объявляем и инициализируем переменные

    cout << "\nBuilt-in types:" << endl;

    cout << boolalpha << "Boolean value: " << boolean_var << ", size = " << sizeof(boolean_var) << " bytes" << endl;
    printf("Char value: %c, size = %d bytes\n", char_var, sizeof(char_var));
    printf("Integer value: %d, size = %d bytes\n", integer_var, sizeof(integer_var));
    printf("Float value: %f, size = %d bytes\n", float_var, sizeof(float_var));
    printf("Double value: %f, size = %d bytes\n", double_var, sizeof(double));

    // Explanation:
    // sizeof - оператор, который возвращает размер переменной или типа (см. printf с double)

    // 3. Операторы: арифмитические, сравнения (отношения), логические, приведедения типа
    int counter = 5;

    cout << "\nArithmetical operations:" << endl;

    printf("counter (%d) + 2 = %d\n", counter, counter + 2);
    printf("counter (%d) - 3 = %d\n", counter, counter - 3);
    printf("counter (%d) * 4 = %d\n", counter, counter * 4);
    printf("counter (%d) / 2 = %d\n", counter, counter / 2); // целочисленное деление
    printf("counter (%d) / 2.0 = %.1f\n", counter, counter / 2.0);

    cout << "\nRelational operations:" << endl;

    printf("counter (%d) > 2? => %d\n", counter, counter > 2);
    printf("counter (%d) <= 5? => %d\n", counter, counter <= 5);
    printf("counter (%d) == 6? => %d\n", counter, counter == 6);
    printf("counter (%d) != 6? => %d\n", counter, counter != 6);

    cout << "\nLogical operations:" << endl;

    printf("false && false = %d\n", false && false);
    printf("true && false = %d\n", true && false);
    printf("true && true = %d\n", true && true);

    printf("false || false = %d\n", false || false);
    printf("false || true = %d\n", false || true);

    int bin_var = 0b1010001;  // двоичный целочисленный литерал (префикс 0b)
    int hex_var = 0xFF0F; // шестнадцетиричный целочисленный литерал (префикс 0x)

    printf("\nHex variable = %X", hex_var);
    printf("\nBinary variable = %s\n", convert_to_bin_str_fmt(bin_var).c_str());

    // Explanation:
    // вывод значений чисел в двоичном формате довольно трудоемкий, нет простого решения
    // здесь мы используем свою функцию, в качестве аргумента которой передаем число

    cout << "\nBitwise operations:" << endl;

    // отрицание (~)
    cout << "~ " << convert_to_bin_str_fmt(bin_var) << " = " << convert_to_bin_str_fmt(~bin_var) << endl;

    // И (&)
    cout << convert_to_bin_str_fmt(1) << " & " << convert_to_bin_str_fmt(bin_var)
         << " = " << convert_to_bin_str_fmt(1 & bin_var) << endl;

    // ИЛИ (|)
    cout << convert_to_bin_str_fmt(2) << " | " << convert_to_bin_str_fmt(bin_var)
         << " = " << convert_to_bin_str_fmt(2 | bin_var) << endl;

    // исключающее ИЛИ (^)
    cout << convert_to_bin_str_fmt(17) << " ^ " << convert_to_bin_str_fmt(bin_var)
         << " = " << convert_to_bin_str_fmt(17 ^ bin_var) << endl;

    // побитовый сдвиг (<<)
    cout << convert_to_bin_str_fmt(bin_var) << " << " << 1
         << " = " << convert_to_bin_str_fmt(bin_var << 1) << endl;

    // префиксный и постфиксный операторы ++ и --
    counter = 0;

    cout << "\nPrefix and postfix ++:" << endl;

    printf("counter = %d\n", counter);
    printf("counter (prefix++) = %d\n", counter++);

    printf("counter = %d\n", counter);
    printf("counter (++postfix) = %d\n", ++counter);

    // операторы +=, -=, *=, /=, %= и пр.

    cout << "\nOperators +=, -=, etc.:" << endl;

    counter += 2;
    printf("counter += 2 => %d\n", counter);

    counter -= 5;
    printf("counter -= 5 => %d\n", counter);

    counter *= 3;
    printf("counter *= 3 => %d\n", counter);

    counter /= -1;
    printf("counter /= -1 => %d\n", counter);

    counter %= 2;
    printf("counter mod 2 => %d\n", counter);

    // Explanation:
    // также существуют побитовые операторы ^=, ~=, |=, &=, <<=, >>=

    // тернарный оператор
    bool logical_expr = (counter % 2 == 0 || counter > 10);
    int ternary_op = /* логическое выражение */ logical_expr ? /* ветка true */ 5 : /* ветка false */ -2;
    printf("\nTernary op value: %d\n", ternary_op);

    // приведение примитивных типов
    double expr1 = integer_var / 11;
    double expr2 = static_cast<double>(integer_var) / 11;

    cout << "\nType casting:" << endl;
    cout << "int / int = " << expr1 << endl;
    cout << "static_cast<double>(int) / int = " << expr2 << endl;

    // Explanation:
    // оператор static_cast в () скобках принимает переменную, тип которой необходимо
    // привести к типу, указанному в <> скобках

    // 4. Операторы ветвления if-else, switch-case.
    // Операторы break и continue

    cout << "\nif-else statement:" << endl;

    if (/* условие 1 */ counter <= 0 || counter % 2 == 1) {
        // блок кода при выполнении условия 1
        cout << "Executing protocol #1 ..." << endl;

    } else if (/* условие 2 */ counter == 10) {
        // блок кода при выполнении условия 2
        cout << "Executing protocol #2 ..." << endl;

    } else { // крайний случай, когда условия 1 и 2 не выполнились
        cout << "Executing order 66 ..." << endl;
    }

    // switch-case
    char ch = 'S';

    cout << "\nswitch-case:" << endl;

    // выбрать действие (участок кода) для выполнения в зависимости от значения переменной
    switch (ch) {
        case 'A': // go left
            cout << "Direction: LEFT" << endl;
            break;
        case 'D': // go right
            cout << "Direction: RIGHT" << endl;
            break;
        case 'W': // go forward
            cout << "Direction: FORWARD" << endl;
            break;
        case 'S': // go backward
            cout << "Direction: BACKWARD" << endl;
            break;
        default:
            // incorrect character
            cout << "Direction: UNDEFINED BEHAVIOUR" << endl;
    }

    // Explanation:
    // каждая ветка case должна заканчиваться вызовом оператора break
    // если этого не делать, то будет происходить так называемый fall-through (падение внутрь)
    // в результате чего будут выполняться блоки кода в ветках case ниже.

    // 5. Циклы for и while. Операторы break и continue

    for (/* выражение 1 */; /* выражение 2 */; /* выражение 3 */) {

        // выражение 1 - выполняется один раз перед началом выполнения <блока кода в цикле>
        // выражение 2 - устанавливает условие для выполнения цикла
        // выражение 3 - выполняется после окончания каждой итерации

        // <блок кода в цикле>

        break;  // прерывание работы цикла (выход из цикла)
    }

    cout << "\nFor loop ascending:" << endl;

    for (int i = 0; i < 10; i++) {
        cout << i << endl;
    }

    cout << "\nFor loop descending:" << endl;

    for (int i = 9; i >= 0; i--) {
        cout << i << endl;
    }

    cout << "\nFor loop with break/continue statements:" << endl;

    for (int i = 0; i < 10; i++) {

        if (i == 7) {
            // прерываем работу цикла
            break;
        }

        if (i % 2 == 0) {
            // прерываем вполнение только текущей итерации цикла
            continue;

            // код далее не будет выполняться
            // начнется следующая итерация цикла
        }

        cout << i << endl;
    }

    int i = 100;

    cout << "\nwhile loop:" << endl;

    while (/* условие */ i > 0) {

        /* блок кода, который может и быть не вополнен в зависимости от условия */
        i -= 20;
        cout << i << endl;
    }

    cout << "\ndo-while loop:" << endl;

    do {

        /* блок кода, который выополнится как минимум 1 раз */
        i += 20;
        cout << i << endl;

    } while (/* условие */ i <= 100);

    // 6. Функции

    cout << "\nFunction calls: " << endl;

    print_void();  // функция ничего не возвращает и не принимает аргументы

    print_int(counter); // функция ничего не возвращает и принимает 1 аргумент

    bool ret_value = print_int_return_bool(counter);

    cout << "Function returned value: " << ret_value << endl;

    return 0; // возвращаем статус завершение программы (0 - ОК)
}

// а здесь мы определяем функцию, которую мы объявили выше
string convert_to_bin_str_fmt(int bin_variable) {
    return bitset<8>(bin_variable).to_string();
}