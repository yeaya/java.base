#ifndef _jdk_internal_jimage_decompressor_ResourceDecompressor$StringsProvider_h_
#define _jdk_internal_jimage_decompressor_ResourceDecompressor$StringsProvider_h_
//$ interface jdk.internal.jimage.decompressor.ResourceDecompressor$StringsProvider
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace jdk {
	namespace internal {
		namespace jimage {
			namespace decompressor {

class $import ResourceDecompressor$StringsProvider : public ::java::lang::Object {
	$interface(ResourceDecompressor$StringsProvider, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual $String* getString(int32_t offset) {return nullptr;}
};

			} // decompressor
		} // jimage
	} // internal
} // jdk

#endif // _jdk_internal_jimage_decompressor_ResourceDecompressor$StringsProvider_h_