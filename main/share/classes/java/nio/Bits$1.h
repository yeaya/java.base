#ifndef _java_nio_Bits$1_h_
#define _java_nio_Bits$1_h_
//$ class java.nio.Bits$1
//$ extends jdk.internal.misc.VM$BufferPool

#include <jdk/internal/misc/VM$BufferPool.h>

namespace java {
	namespace nio {

class Bits$1 : public ::jdk::internal::misc::VM$BufferPool {
	$class(Bits$1, $NO_CLASS_INIT, ::jdk::internal::misc::VM$BufferPool)
public:
	Bits$1();
	void init$();
	virtual int64_t getCount() override;
	virtual int64_t getMemoryUsed() override;
	virtual $String* getName() override;
	virtual int64_t getTotalCapacity() override;
};

	} // nio
} // java

#endif // _java_nio_Bits$1_h_