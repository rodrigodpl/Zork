#include "Entity.h"

void entity::getitem(entity* old_container, string& itemname){

		uint i;

		for (i = 0; i < old_container->content->num_elem; i++){

			if (itemname.str_cmp_S(old_container->content->buffer[i]->name->str)){ 
				content->pushback(old_container->content->buffer[i]);
				old_container->content->erase(i);
				return;

			}
		}

		printf("\nThere's no such thing!");

	}

entity* entity::searchitem(string& itemname){

		uint i;

		for (i = 0; i < content->num_elem; i++){

			if (itemname.str_cmp_S(content->buffer[i]->name->str)){
				return(content->buffer[i]);
			}
		}

			return(NULL);

	}