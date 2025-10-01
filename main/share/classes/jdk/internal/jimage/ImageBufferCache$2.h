#ifndef _jdk_internal_jimage_ImageBufferCache$2_h_
#define _jdk_internal_jimage_ImageBufferCache$2_h_
//$ class jdk.internal.jimage.ImageBufferCache$2
//$ extends java.util.Comparator

#include <java/util/Comparator.h>

namespace java {
	namespace util {
		class Map$Entry;
	}
}

namespace jdk {
	namespace internal {
		namespace jimage {

class ImageBufferCache$2 : public ::java::util::Comparator {
	$class(ImageBufferCache$2, $NO_CLASS_INIT, ::java::util::Comparator)
public:
	ImageBufferCache$2();
	void init$();
	virtual int32_t compare(::java::util::Map$Entry* br1, ::java::util::Map$Entry* br2);
	virtual int32_t compare(Object$* br1, Object$* br2) override;
};

		} // jimage
	} // internal
} // jdk

#endif // _jdk_internal_jimage_ImageBufferCache$2_h_