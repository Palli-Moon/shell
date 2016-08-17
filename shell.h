#ifndef SHELL_H_
#define SHELL_H_

int sh_num_builtins();
int sh_cd(char **args);
int sh_help(char **args);
int sh_exit(char **args);

void sh_loop(void);
char *sh_read_line(void);
char **sh_split_line(char *line);
int sh_launch(char **args);
int sh_execute(char **args);

#endif // SHELL_H_
