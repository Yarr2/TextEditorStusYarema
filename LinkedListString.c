#include <stdio.h>
#include <stdlib.h>

struct string {
	char value;
	struct string* pointer;
};
void create(struct string* start) {
	// creates string from user input using scanf
}
void destroy(struct string* start) {
	// deallocates all memory to avoid memory leaks
}
void print(struct string* start) {
	// prints our string into console without ending line
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