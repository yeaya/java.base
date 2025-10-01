#ifndef _sun_nio_fs_NativeBuffer$Deallocator_h_
#define _sun_nio_fs_NativeBuffer$Deallocator_h_
//$ class sun.nio.fs.NativeBuffer$Deallocator
//$ extends java.lang.Runnable

#include <java/lang/Runnable.h>

namespace sun {
	namespace nio {
		namespace fs {

class NativeBuffer$Deallocator : public ::java::lang::Runnable {
	$class(NativeBuffer$Deallocator, $NO_CLASS_INIT, ::java::lang::Runnable)
public:
	NativeBuffer$Deallocator();
	void init$(int64_t address);
	virtual void run() override;
	int64_t address = 0;
};

		} // fs
	} // nio
} // sun

#endif // _sun_nio_fs_NativeBuffer$Deallocator_h_