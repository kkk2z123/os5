#ifndef _SHELL_INIT_H_
#define _SHELL_INIT_H_

#define SHELL_GDT_IDX	4
#define SHELL_ID	1

void shell_context_switch(void);
void shell_init(void);

#endif /* _SHELL_INIT_H_ */
