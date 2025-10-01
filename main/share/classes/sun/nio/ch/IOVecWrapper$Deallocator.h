#ifndef _sun_nio_ch_IOVecWrapper$Deallocator_h_
#define _sun_nio_ch_IOVecWrapper$Deallocator_h_
//$ class sun.nio.ch.IOVecWrapper$Deallocator
//$ extends java.lang.Runnable

#include <java/lang/Runnable.h>

namespace sun {
	namespace nio {
		namespace ch {
			class AllocatedNativeObject;
		}
	}
}

namespace sun {
	namespace nio {
		namespace ch {

class IOVecWrapper$Deallocator : public ::java::lang::Runnable {
	$class(IOVecWrapper$Deallocator, $NO_CLASS_INIT, ::java::lang::Runnable)
public:
	IOVecWrapper$Deallocator();
	void init$(::sun::nio::ch::AllocatedNativeObject* obj);
	virtual void run() override;
	::sun::nio::ch::AllocatedNativeObject* obj = nullptr;
};

		} // ch
	} // nio
} // sun

#endif // _sun_nio_ch_IOVecWrapper$Deallocator_h_