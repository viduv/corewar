.name "zork"
.comment "sadf"

l2:	
		sti r1, %:live, %1
		and r1, %0, r1

live:	live %1
		lfork %2000000
