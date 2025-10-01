#ifndef _jdk_internal_jimage_ImageStrings_h_
#define _jdk_internal_jimage_ImageStrings_h_
//$ interface jdk.internal.jimage.ImageStrings
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace jdk {
	namespace internal {
		namespace jimage {

class $export ImageStrings : public ::java::lang::Object {
	$interface(ImageStrings, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual int32_t add($String* string) {return 0;}
	virtual $String* get(int32_t offset) {return nullptr;}
	virtual int32_t match(int32_t offset, $String* string, int32_t stringOffset);
};

		} // jimage
	} // internal
} // jdk

#endif // _jdk_internal_jimage_ImageStrings_h_