#include <stdio.h>
#include <stdlib.h>
#define MAX_HEIGHT 41

struct box
{
	/**
	* Define three fields of type int: length, width and height
	*/
	int length,width,height;
};

typedef struct box box;

int get_volume(box b) {
	/**
	* Return the volume of the box
	*/
	int volume;
	volume = b.length * b.width * b.height;
}

int is_lower_than_max_height(box b) {
	/**
	* Return 1 if the box's height is lower than MAX_HEIGHT and 0 otherwise
	*/
	if(b.height < MAX_HEIGHT)
	  return 1;
	else
	  return 0;	
    return 0;
}
int main()
{
	int n,i;
	scanf("%d", &n);
	box *boxes;
	boxes= (struct box*)malloc(n * sizeof(box));
	for ( i = 0; i < n; i++) {
		scanf("%d%d%d", &boxes[i].length, &boxes[i].width, &boxes[i].height);
	}
	for ( i = 0; i < n; i++) {
		if (is_lower_than_max_height(boxes[i])) {
			printf("%d\n", get_volume(boxes[i]));
		}
	}
	return 0;
}