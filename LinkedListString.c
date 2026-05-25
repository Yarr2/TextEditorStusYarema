#include <stdio.h>
#include <stdlib.h>

struct string {
	char value;
	struct string* pointer;
};
void create(struct string* start) {
	// creates string from user input using scanf

	struct string* pointer = start;
	char character;
	scanf("%c", &character);
	while (character != '\n') {
		struct string* temp_pointer = (struct string*)malloc(sizeof(struct string));
		pointer->value = character;
		pointer->pointer = temp_pointer;
		pointer = temp_pointer;
		scanf("%c", &character);
	}
	pointer->pointer = NULL;
	pointer->value = '\0';
}
void destroy(struct string* start) {
	// deallocates all memory to avoid memory leaks

	struct string* current_pointer = start;
	
	while (current_pointer->pointer != NULL) {
	
		struct string* temp_pointer = current_pointer->pointer;
		free(current_pointer);
		current_pointer = temp_pointer;
	
	}
	free(current_pointer);
}
void print(struct string* start) {
	// prints our string into console without ending line

	struct string* current_node = start;

	while (current_node->value != '\0') {

		printf("%c", current_node->value);
		current_node = current_node->pointer;

	}
}
void push_front(struct string* start, struct string* string) {
	// adds another string to front of ours
}
void insert_at_index(struct string* start, int index, struct string* string) {
	// adds string to given at given index
}

// why all function can be made to return void:
//
//class function(smth) {
//	return class smth1
//}
// is equivalent to
//void function(class*, smth) {
//	class*[0] = smth1;
//}