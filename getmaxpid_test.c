#include "types.h"
#include "stat.h"
#include "fcntl.h"
#include "user.h"

int main(void)
{
	printf(1, "Maximun PID: %d\n",get_max_pid());
	exit();
}
