#ifndef _sun_nio_cs_ThreadLocalCoders$Cache_h_
#define _sun_nio_cs_ThreadLocalCoders$Cache_h_
//$ class sun.nio.cs.ThreadLocalCoders$Cache
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace lang {
		class ThreadLocal;
	}
}

namespace sun {
	namespace nio {
		namespace cs {

class ThreadLocalCoders$Cache : public ::java::lang::Object {
	$class(ThreadLocalCoders$Cache, $NO_CLASS_INIT, ::java::lang::Object)
public:
	ThreadLocalCoders$Cache();
	void init$(int32_t size);
	virtual $Object* create(Object$* name) {return nullptr;}
	virtual $Object* forName(Object$* name);
	virtual bool hasName(Object$* ob, Object$* name) {return false;}
	void moveToFront($ObjectArray* oa, int32_t i);
	::java::lang::ThreadLocal* cache = nullptr;
	int32_t size = 0;
};

		} // cs
	} // nio
} // sun

#endif // _sun_nio_cs_ThreadLocalCoders$Cache_h_