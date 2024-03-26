#include <unistd.h>
int	main(void) {
	while (1) {
		write(1, "[Demo_Server] : Hello! It\'s our Demo Server for Krampoline!\n", 65);
		sleep(5);
	}
				return 0;
}
