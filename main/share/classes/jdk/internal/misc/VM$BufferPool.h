#ifndef _jdk_internal_misc_VM$BufferPool_h_
#define _jdk_internal_misc_VM$BufferPool_h_
//$ interface jdk.internal.misc.VM$BufferPool
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace jdk {
	namespace internal {
		namespace misc {

class $export VM$BufferPool : public ::java::lang::Object {
	$interface(VM$BufferPool, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual int64_t getCount() {return 0;}
	virtual int64_t getMemoryUsed() {return 0;}
	virtual $String* getName() {return nullptr;}
	virtual int64_t getTotalCapacity() {return 0;}
};

		} // misc
	} // internal
} // jdk

#endif // _jdk_internal_misc_VM$BufferPool_h_