SOURCE_FILES = $(wildcard src/*.c)
OBJECT_FILES = $(SOURCE_FILES:src/%.c=obj/%.o)

CC = cc

COMPILE_FLAGS = -Iinclude

micro_lang: $(OBJECT_FILES)
	$(CC) -o $@ $^

obj/%.o: src/%.c
	mkdir -p obj
	$(CC) -c -o $@ $^ $(COMPILE_FLAGS)

clean:
	rm micro_lang $(OBJECT_FILES)
