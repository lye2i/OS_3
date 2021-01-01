#include "types.h"
#include "user.h"
#include "stat.h"
#include "fcntl.h"
#include "processInfo.h"

int main(void)
{
	int maxpid = get_max_pid();
	printf(1, "PID	PPID	SIZE	Number of Context Switch\n");
	
	for(int i=0; i<=maxpid; i++){
		struct processInfo process_info;

		if(get_proc_info(i, &process_info)!=-1)
			printf(1, "%d	%d	%d	%d\n", i, process_info.ppid, process_info.psize, process_info.numberContextSwitches);
	}
		
	exit();
}
