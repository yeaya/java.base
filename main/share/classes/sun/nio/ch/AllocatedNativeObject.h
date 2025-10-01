#ifndef _sun_nio_ch_AllocatedNativeObject_h_
#define _sun_nio_ch_AllocatedNativeObject_h_
//$ class sun.nio.ch.AllocatedNativeObject
//$ extends sun.nio.ch.NativeObject

#include <sun/nio/ch/NativeObject.h>

namespace sun {
	namespace nio {
		namespace ch {

class AllocatedNativeObject : public ::sun::nio::ch::NativeObject {
	$class(AllocatedNativeObject, $NO_CLASS_INIT, ::sun::nio::ch::NativeObject)
public:
	AllocatedNativeObject();
	void init$(int32_t size, bool pageAligned);
	virtual void free();
};

		} // ch
	} // nio
} // sun

#endif // _sun_nio_ch_AllocatedNativeObject_h_