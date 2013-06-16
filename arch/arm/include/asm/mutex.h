/*
 * arch/arm/include/asm/mutex.h
 *
 * ARM optimized mutex locking primitives
 *
 * Please look into asm-generic/mutex-xchg.h for a formal definition.
 */
#ifndef _ASM_MUTEX_H
#define _ASM_MUTEX_H

<<<<<<< HEAD
/*
 * On pre-ARMv6 hardware this results in a swp-based implementation,
 * which is the most efficient. For ARMv6+, we emit a pair of exclusive
 * accesses instead.
 */
=======
>>>>>>> parent of 548aff8... revert linux 3.4.20
#include <asm-generic/mutex-xchg.h>
#endif
