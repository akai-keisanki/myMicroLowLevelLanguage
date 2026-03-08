SOURCE_FILES = $(wildcard src/*.c)
OBJECT_FILES = $(SOURCE_FILES:src/%.c=obj/%.o)

CC = cc

micro_lang: $(OBJECT_FILES)
	$(CC) -o $@ $^

obj/%.o: src/%.c
	mkdir obj
	$(CC) -c -o $@ @^

clean:
	rm micro_lang $(OBJECT_FILES)
