#ifndef _jdk_internal_jimage_decompressor_CompressedResourceHeader_h_
#define _jdk_internal_jimage_decompressor_CompressedResourceHeader_h_
//$ class jdk.internal.jimage.decompressor.CompressedResourceHeader
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("MAGIC")
#undef MAGIC
#pragma push_macro("SIZE")
#undef SIZE

namespace java {
	namespace nio {
		class ByteOrder;
	}
}
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

class $import CompressedResourceHeader : public ::java::lang::Object {
	$class(CompressedResourceHeader, $NO_CLASS_INIT, ::java::lang::Object)
public:
	CompressedResourceHeader();
	void init$(int64_t compressedSize, int64_t uncompressedSize, int32_t decompressorNameOffset, int32_t contentOffset, bool isTerminal);
	$bytes* getBytes(::java::nio::ByteOrder* order);
	int32_t getContentOffset();
	int32_t getDecompressorNameOffset();
	int64_t getResourceSize();
	static int32_t getSize();
	$String* getStoredContent(::jdk::internal::jimage::decompressor::ResourceDecompressor$StringsProvider* provider);
	int64_t getUncompressedSize();
	bool isTerminal();
	static ::jdk::internal::jimage::decompressor::CompressedResourceHeader* readFromResource(::java::nio::ByteOrder* order, $bytes* resource);
	static const int32_t SIZE = 29;
	static const int32_t MAGIC = 0xCAFEFAFA;
	int64_t uncompressedSize = 0;
	int64_t compressedSize = 0;
	int32_t decompressorNameOffset = 0;
	int32_t contentOffset = 0;
	bool isTerminal$ = false;
};

			} // decompressor
		} // jimage
	} // internal
} // jdk

#pragma pop_macro("MAGIC")
#pragma pop_macro("SIZE")

#endif // _jdk_internal_jimage_decompressor_CompressedResourceHeader_h_