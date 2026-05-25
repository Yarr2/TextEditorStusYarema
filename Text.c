#include <stdio.h>
#include <stdlib.h>
#include "LinkedListString.c"
struct line {
	struct string* value;
	struct line* pointer;
};

void add_line(struct line* text_start, struct string* start) {
	struct line* node = text_start;
	
	while (node->pointer != NULL) {
		node = node->pointer;
	}
	
	struct line* new_line = (struct line*)malloc(sizeof(struct line));

	node->pointer = new_line;
	new_line->pointer = NULL;
	new_line->value = start;
}
void print_text(struct line* start) {
	struct line* node = start;
	while (node->pointer != NULL) {
		node = node->pointer;
		print(node->value);
		printf("\n");
	}
}
void destroy_text(struct line* start) {
	struct line* current_pointer = start;

	while (current_pointer->pointer != NULL) {

		struct line* temp_pointer = current_pointer->pointer;
		free(current_pointer);
		current_pointer = temp_pointer;

	}
	free(current_pointer);
}