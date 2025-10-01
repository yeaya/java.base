#ifndef _java_nio_DirectByteBuffer$Deallocator_h_
#define _java_nio_DirectByteBuffer$Deallocator_h_
//$ class java.nio.DirectByteBuffer$Deallocator
//$ extends java.lang.Runnable

#include <java/lang/Runnable.h>

namespace java {
	namespace nio {

class DirectByteBuffer$Deallocator : public ::java::lang::Runnable {
	$class(DirectByteBuffer$Deallocator, 0, ::java::lang::Runnable)
public:
	DirectByteBuffer$Deallocator();
	void init$(int64_t address, int64_t size, int32_t capacity);
	virtual void run() override;
	static bool $assertionsDisabled;
	int64_t address = 0;
	int64_t size = 0;
	int32_t capacity = 0;
};

	} // nio
} // java

#endif // _java_nio_DirectByteBuffer$Deallocator_h_