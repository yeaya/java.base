#ifndef _sun_nio_cs_ThreadLocalCoders$1_h_
#define _sun_nio_cs_ThreadLocalCoders$1_h_
//$ class sun.nio.cs.ThreadLocalCoders$1
//$ extends sun.nio.cs.ThreadLocalCoders$Cache

#include <sun/nio/cs/ThreadLocalCoders$Cache.h>

namespace sun {
	namespace nio {
		namespace cs {

class ThreadLocalCoders$1 : public ::sun::nio::cs::ThreadLocalCoders$Cache {
	$class(ThreadLocalCoders$1, 0, ::sun::nio::cs::ThreadLocalCoders$Cache)
public:
	ThreadLocalCoders$1();
	void init$(int32_t size);
	virtual $Object* create(Object$* name) override;
	virtual bool hasName(Object$* ob, Object$* name) override;
	static bool $assertionsDisabled;
};

		} // cs
	} // nio
} // sun

#endif // _sun_nio_cs_ThreadLocalCoders$1_h_