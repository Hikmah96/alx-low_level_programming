#ifndef HEADER_FILE
#define HEADER_FILE
/**
 * struct list_s - a signly linked list
 * @str: string
 * @len: lenght of string
 * @.next: points to the next node available
 *
 * Description: singly linked list
 */
typedef struct list_i
{
	char *str;
	unsigned int len;
	struct list_i *next;
}list_t;
int _putchar(char c);
size_t print_list(const list_t *h);
size_t list_len(const list_t *h);
list_t *add_node(list_t **head, const char *str);
list_t *add_node_end(list_t **head, const char *str);
void free_list(list_t *head);

#endif
