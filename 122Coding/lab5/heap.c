/**
 * @file heap.c
 * @brief Implements a max heap sort of sorts
 * @details takes in a string of ints from a newline seperated file
 * and prints out the list in ascending order, utilizing a max heap
 * to create the sorted list
 *
 * @date April 5, 2016
 * @author Matthew Olsen
 * @bugs none
 * @todo nothing
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <assert.h>

#define LEN 4096


struct heap_t {
        int last;               /* index of last heap element in data array */
        int size;               /* number of elements in array */
        int max;                /* allocated size of array */
        int *data;              /* the data array */

};

enum {INIT = 1, GROW = 2};

void heapify(struct heap_t *heap);
void check_children(struct heap_t *heap, int parent, int max_child);
void swap(int *x, int *y);
void sink_nodes(struct heap_t *heap);

int main(int argc, char **argv) 
{

        char buf[LEN];
        FILE *fp = NULL;
        int i = 0;              

        if (argc != 2) {
                printf("error in input\n");
                printf("usage: ./heap [FILE]\n");
                printf("[FILE] is a list of integers one per line\n");
                exit(EXIT_FAILURE);
        }
        else {
                fp = fopen(argv[1], "r");
                assert(fp);
        }

        struct heap_t *heap = malloc(sizeof(struct heap_t));
        heap->last = 0;
        heap->size = INIT;
        heap->max = INIT;
        heap->data = NULL;

        while (fgets(buf, LEN, fp)) {

                /* read in data from file */
                /* assign to heap->data */

                /* grow the array as necessary */
                if (heap->size > heap->max) {
                        heap->data = realloc(heap->data, GROW * heap->max *sizeof(int));
                        assert(heap->data);
                        heap->max = GROW * heap->max;
                }
                else if (heap->data == NULL) {
                        heap->data = malloc(INIT * sizeof(int));
                        assert(heap->data);
                }
                *(heap->data + i) = atoi(buf); 
                heap->size++;
                i++;
        }       
                       

        /* size is off by one */
        heap->size--;


        /* todo - sort data with a heap sort */
        /* build heap */
        heapify(heap);
        /* sort is in-place -- delete root and place at end of array */
        sink_nodes(heap);

        /* send data to stdin -- if you correctly built a heapsort
         * this will print the data in ascending order */
        for (i = 0; i < heap->size; i++) {
                printf("%d\n", *(heap->data + i));      
        }


        /* cleanup */
        free(heap->data);
        free(heap);
        fclose(fp);

        return 0;
}

/** 
 * Builds a max heap from a given heap_t structure
 * @param heap the heat_t to be heapified
 */
void heapify(struct heap_t *heap)
{
        /* formula calculates parent from 0 based indexed list */
        int parent, i;

        for (i = heap->size ; i > 0; i--) {
                parent = (i + (i % 2)) / 2 - 1;
                check_children(heap, parent, heap->size - 1);
        }
}

/**
 * Recursively checks if the children of a given node obey the rules of
 * a max heap
 * @param heap the heap with the data array to be checked
 * @param parent the parent node whose children need to be checked
 * @param max_child the index of the last child node to be checked
 */
void check_children(struct heap_t *heap, int parent, int max_child)
{
        /* default to comparing left child */
        int child = 2 * parent + 1; 

        /* ensures checks do not exceed array bounds */
        if (child > max_child) {
                return;
        /* if left child in bounds but right is not */
        } else if (child + 1 > max_child) {
                if (heap->data[parent] < heap->data[child]) {
                        swap(&heap->data[parent], &heap->data[child]);
                }
                return;
        }

        /* finds index of greater child */
        if (heap->data[child] < heap->data[child + 1]) {
                child = child + 1;
        }

        /* if true, swap and then check all related children recursively */
        if (heap->data[parent] < heap->data[child]) {
                swap(&heap->data[parent], &heap->data[child]);
                check_children(heap, child, max_child);
        }
}

/**
 * Standard bitwise swap
 * @param x the first int to be swapped
 * @param y the second int to be swapped
 */
void swap(int *x, int *y)
{
        if (*x == *y) {
                return;
        }

        *x = *x ^ *y;
        *y = *y ^ *x;
        *x = *x ^ *y;
}

/**
 * Orders list that is in max heap order to ascending order
 * @param heap the structure containing the heaped data
 */
void sink_nodes(struct heap_t *heap)
{
        int i;

        for (i = heap->size - 1 ; i > 0;) {                

                swap(&heap->data[0], &heap->data[i]);
                i--;
                check_children(heap, 0, i);                
        }

}
