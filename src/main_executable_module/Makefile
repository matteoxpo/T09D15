CC =gcc
CFLAGS = -Wall -Werror -Wextra -c
SOURCES = main_executable_module.c sort.c ../yet_another_decision_module/decision.c ../data_module/data_process.c ../data_libs/data_io.c
STAT_C = ../data_libs/data_stat.c 
STAT_O = ../data_libs/data_stat.o
STAT_O1 = data_stat.o
STAT_SO = data_stat.so
STAT_A = data_stat.a

PROCESS_C = ../data_module/data_process.c
PROCESS_SO = data_process.so
PROCESS_O = data_process.o
OBJECTS = $(SOURCES:.c=.o)
EXECUTABLE = main
QUEST3 = ../../build/Quest_3
QUEST5 = ../../build/Quest_5
QUEST6 = ../../build/Quest_6

all: $(OBJECTS) $(STAT_O)
	$(CC) $(OBJECTS) $(STAT_O) -o $(EXECUTABLE)
	
$(EXECUTABLE): $(OBJECTS) $(STAT_O)
	$(CC) $(OBJECTS) $(STAT_O) -o $(EXECUTABLE)

$(QUEST3): $(OBJECTS) $(STAT_O)
	$(CC) $(OBJECTS) $(STAT_O) -o $(QUEST3)

$(QUEST5): $(STAT_A) $(OBJECTS)
	$(CC) $(OBJECTS) $(STAT_A) -o $(QUEST5)

$(QUEST6): data_process.so $(OBJECTS)
	$(CC) $(OBJECTS) $(STAT_A) -o $(QUEST6)

build_with_static: $(STAT_A) $(OBJECTS)
	$(CC) $(OBJECTS) $(STAT_A) -o $(EXECUTABLE)

build_with_dynamic: data_process.so $(OBJECTS)
	rm $(PROCESS_C) $(STAT_C)
	$(CC) $(OBJECTS) $(PROCESS_SO) -o $(EXECUTABLE)


$(STAT_A): $(STAT_O)
	ar r data_stat.a $(STAT_O)

data_process.so:
	$(CC) $(CFLAGS) -c -fPIC $(PROCESS_C) $(STAT_C)
	$(CC) -shared -o $(PROCESS_SO) $(PROCESS_O) $(STAT_O1)

rebuild: all

.o: .c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	-rm $(OBJECTS)
	-rm $(EXECUTABLE)