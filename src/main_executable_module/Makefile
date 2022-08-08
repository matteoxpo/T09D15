CC =gcc
CFLAGS = -Wall -Werror -Wextra -c
SOURCES = main_executable_module.c sort.c ../yet_another_decision_module/decision.c ../data_module/data_process.c ../data_libs/data_io.c ../data_libs/data_stat.c
OBJECTS = $(SOURCES:.c=.o)
EXECUTABLE = main

all: $(OBJECTS) $(LIBS_OBJ)
	$(CC) $(OBJECTS) -o $(EXECUTABLE)
	
$(EXECUTABLE): $(OBJECTS) $(LIBS_OBJ)
	$(CC) $(OBJECTS) -o $(EXECUTABLE)

rebuild: all

.o: .c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm $(OBJECTS)
	rm $(EXECUTABLE)