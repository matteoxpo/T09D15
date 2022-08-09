CC =gcc
CFLAGS = -Wall -Werror -Wextra -c
SOURCES = decision.c yet_another_decision_module_entry.c ../data_libs/data_io.c ../data_libs/data_stat.c 
OBJECTS = $(SOURCES:.c=.o)
EXECUTABLE = main

all: $(OBJECTS)
	$(CC) $(OBJECTS) -o $(EXECUTABLE)
	
$(EXECUTABLE): $(OBJECTS)
	$(CC) $(OBJECTS) -o $(EXECUTABLE)

rebuild: all

.o: .c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm $(OBJECTS)