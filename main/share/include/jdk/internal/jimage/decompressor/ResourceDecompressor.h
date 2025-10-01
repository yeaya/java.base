#ifndef _jdk_internal_jimage_decompressor_ResourceDecompressor_h_
#define _jdk_internal_jimage_decompressor_ResourceDecompressor_h_
//$ interface jdk.internal.jimage.decompressor.ResourceDecompressor
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace jdk {
	namespace internal {
		namespace jimage {
			namespace decompressor {
				class ResourceDecompressor$StringsProvider;
			}
		}
	}
}

namespace jdk {
	namespace internal {
		namespace jimage {
			namespace decompressor {

class $import ResourceDecompressor : public ::java::lang::Object {
	$interface(ResourceDecompressor, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual $bytes* decompress(::jdk::internal::jimage::decompressor::ResourceDecompressor$StringsProvider* strings, $bytes* content, int32_t offset, int64_t originalSize) {return nullptr;}
	virtual $String* getName() {return nullptr;}
};

			} // decompressor
		} // jimage
	} // internal
} // jdk

#endif // _jdk_internal_jimage_decompressor_ResourceDecompressor_h_