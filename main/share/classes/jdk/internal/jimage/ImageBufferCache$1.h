#ifndef _jdk_internal_jimage_ImageBufferCache$1_h_
#define _jdk_internal_jimage_ImageBufferCache$1_h_
//$ class jdk.internal.jimage.ImageBufferCache$1
//$ extends java.lang.ThreadLocal

#include <java/lang/ThreadLocal.h>

namespace jdk {
	namespace internal {
		namespace jimage {

class ImageBufferCache$1 : public ::java::lang::ThreadLocal {
	$class(ImageBufferCache$1, $NO_CLASS_INIT, ::java::lang::ThreadLocal)
public:
	ImageBufferCache$1();
	void init$();
	virtual $Object* initialValue() override;
};

		} // jimage
	} // internal
} // jdk

#endif // _jdk_internal_jimage_ImageBufferCache$1_h_