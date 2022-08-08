CC =gcc
CFLAGS = -Wall -Werror -Wextra -c
SOURCES = yet_another_decision_module_entry.c decision.c ../data_libs/data_io.c ../data_libs/data_stat.c
OBJECTS = $(SOURCES:.c=.o)
EXECUTABLE = main

$(EXECUTABLE): $(OBJECTS)
	$(CC) $(OBJECTS) -o $(EXECUTABLE)

.o: .c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm $(EXECUTABLE)