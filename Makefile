#Выбираем компилятором g++
CC = g++
#Определяем флаги компиляции, для работы с дебагером gdb добавить флаг -g
CFLAGS = -std=c++17 -Wall -Wextra -g
#CXXFLAGS: Extra flags to give to the C++ compiler
#CPPFLAGS: Extra flags to give to the C preprosessor
#-g -g3 уровни отладки, оптимизация O0, O1, O2, Og, Os
# -Wno-deprecated-declarations //добавить к флагам если есть сообщения deprecated, т.е. об устаревании
#-DNDEBUG //отключить все дебажные макросы
#-std=c++20 //стандарт C++ 2020 // варианты -std=c++17  -std=c++14  -std=c++11  -std=c++98 -std=c++2a  -std=c++2b (2023?)
#-std=c++17 дает 15 версию стандарта, более новые не работают (на 32 битном mingw)
#Дополнительные флаги передаваемые компилятору когда он привлекает линкер
#LDFLAGS = -LH:\MinGW\lib -lm

# $@ название цели сборки
# $^ список зависимостей с пробелами между ними(то что после двоеточия, которое после цели сборки)
# $< имя .cpp файла... первый аргумент команды? (имя первой зависимости)
# $? имена всех зависимостей, которые новее цели, с пробелами между ними]

#подключаем дополнительные иклюд файлы
#OPTINCLUDE = -IH:\boost_1_83_0

#Подключаем библиотеки (только динамические) имя без расширения
#OPTLIB = -LH:\lib -l2.a -l1.a
# -lm (подключение libm.a математической библиотеки с заголовочным файлом math.h) 
#Подключаю другой GDB, с поддрежкой TUI (tui enable после запуска отладки по r иначе вылетает)
GDB = H:\mingw64\bin\gdb.exe

#make -n all показывает выполняемые по make all команды, без их выполнения


EXECUTABLES := $(patsubst %.cpp,%,$(wildcard *.cpp))

#Цель собрать все
all: $(EXECUTABLES)


#Цель сборки итогового файла myprogram.exe из объектных файлов 1.o и 2.o
%.exe: %.cxx
	$(CC) -o $@ $^
		
#Удаляем результирующий файл myprogram.exe и все объектные файлы
clean:
	rm -f *.s *.o *.exe
	

