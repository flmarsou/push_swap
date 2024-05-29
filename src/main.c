#include "../includes/push_swap.h"

int	main(int argc, char const *argv[])
{
	if (argc <= 1)
		error_message(1);
	else if (argc == 2)
		single_arg((char *)argv[1]);
	else
		multiple_args((char **)argv);
	return (0);
}
