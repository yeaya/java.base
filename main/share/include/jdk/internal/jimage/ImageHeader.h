#ifndef _jdk_internal_jimage_ImageHeader_h_
#define _jdk_internal_jimage_ImageHeader_h_
//$ class jdk.internal.jimage.ImageHeader
//$ extends java.lang.Object

#include <java/lang/Object.h>

#pragma push_macro("MAGIC")
#undef MAGIC
#pragma push_macro("MAJOR_VERSION")
#undef MAJOR_VERSION
#pragma push_macro("MINOR_VERSION")
#undef MINOR_VERSION
#pragma push_macro("HEADER_SLOTS")
#undef HEADER_SLOTS

namespace java {
	namespace nio {
		class ByteBuffer;
		class IntBuffer;
	}
}
namespace jdk {
	namespace internal {
		namespace jimage {
			class ImageStream;
		}
	}
}

namespace jdk {
	namespace internal {
		namespace jimage {

class $import ImageHeader : public ::java::lang::Object {
	$class(ImageHeader, $NO_CLASS_INIT, ::java::lang::Object)
public:
	ImageHeader();
	void init$(int32_t resourceCount, int32_t tableCount, int32_t locationsSize, int32_t stringsSize);
	void init$(int32_t magic, int32_t majorVersion, int32_t minorVersion, int32_t flags, int32_t resourceCount, int32_t tableLength, int32_t locationsSize, int32_t stringsSize);
	int32_t getFlags();
	static int32_t getHeaderSize();
	int32_t getIndexSize();
	int32_t getLocationsOffset();
	int32_t getLocationsSize();
	int32_t getMagic();
	int32_t getMajorVersion();
	int32_t getMinorVersion();
	int32_t getOffsetsOffset();
	int32_t getOffsetsSize();
	int32_t getRedirectOffset();
	int32_t getRedirectSize();
	int32_t getResourceCount();
	int32_t getStringsOffset();
	int32_t getStringsSize();
	int32_t getTableLength();
	static ::jdk::internal::jimage::ImageHeader* readFrom(::java::nio::IntBuffer* buffer);
	void writeTo(::jdk::internal::jimage::ImageStream* stream);
	void writeTo(::java::nio::ByteBuffer* buffer);
	static const int32_t MAGIC = 0xCAFEDADA;
	static const int32_t MAJOR_VERSION = 1;
	static const int32_t MINOR_VERSION = 0;
	static const int32_t HEADER_SLOTS = 7;
	int32_t magic = 0;
	int32_t majorVersion = 0;
	int32_t minorVersion = 0;
	int32_t flags = 0;
	int32_t resourceCount = 0;
	int32_t tableLength = 0;
	int32_t locationsSize = 0;
	int32_t stringsSize = 0;
};

		} // jimage
	} // internal
} // jdk

#pragma pop_macro("MAGIC")
#pragma pop_macro("MAJOR_VERSION")
#pragma pop_macro("MINOR_VERSION")
#pragma pop_macro("HEADER_SLOTS")

#endif // _jdk_internal_jimage_ImageHeader_h_