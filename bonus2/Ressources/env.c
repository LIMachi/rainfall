#include <stdlib.h>
#include <stdio.h>
#include <string.h>

//scp -P 4242 env.c bonus2@192.168.56.105:/tmp
//579bd19263eb8655e4cf7b742d75edf8c38226925d78db8163506f5191825245
//gcc /tmp/env.c -o /tmp/env

int main(int argc, char **argv) {
	if (argc > 2)
	{
		if (!strcmp("get", argv[1]))
		{
			char *env = getenv(argv[2]);
			printf("\"%s\"\n%p", env, env);
			int i;
			for (i = 3; i < argc; ++i)
				printf(" %p", &env[atoi(argv[i])]);
			printf("\n");
		} else if (!strcmp("set", argv[1]) && argc > 3) {
			setenv(argv[2], argv[3], 1);
			printf("set %s to %s (%s)", argv[2], argv[3], getenv(argv[2]));
		}
	}
}