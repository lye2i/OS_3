#include "types.h"
#include "fcntl.h"
#include "stat.h"
#include "user.h"

int main(void)
{
	printf(1, "Total Number of Active Processes: %d\n",get_num_proc());
	exit();
}
