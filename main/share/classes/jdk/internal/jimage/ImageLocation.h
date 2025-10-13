#ifndef _jdk_internal_jimage_ImageLocation_h_
#define _jdk_internal_jimage_ImageLocation_h_
//$ class jdk.internal.jimage.ImageLocation
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("ATTRIBUTE_BASE")
#undef ATTRIBUTE_BASE
#pragma push_macro("ATTRIBUTE_COMPRESSED")
#undef ATTRIBUTE_COMPRESSED
#pragma push_macro("ATTRIBUTE_COUNT")
#undef ATTRIBUTE_COUNT
#pragma push_macro("ATTRIBUTE_END")
#undef ATTRIBUTE_END
#pragma push_macro("ATTRIBUTE_EXTENSION")
#undef ATTRIBUTE_EXTENSION
#pragma push_macro("ATTRIBUTE_MODULE")
#undef ATTRIBUTE_MODULE
#pragma push_macro("ATTRIBUTE_OFFSET")
#undef ATTRIBUTE_OFFSET
#pragma push_macro("ATTRIBUTE_PARENT")
#undef ATTRIBUTE_PARENT
#pragma push_macro("ATTRIBUTE_UNCOMPRESSED")
#undef ATTRIBUTE_UNCOMPRESSED

namespace java {
	namespace nio {
		class ByteBuffer;
	}
}
namespace jdk {
	namespace internal {
		namespace jimage {
			class BasicImageReader;
			class ImageStrings;
		}
	}
}

namespace jdk {
	namespace internal {
		namespace jimage {

class $export ImageLocation : public ::java::lang::Object {
	$class(ImageLocation, $NO_CLASS_INIT, ::java::lang::Object)
public:
	ImageLocation();
	void init$($longs* attributes, ::jdk::internal::jimage::ImageStrings* strings);
	virtual $String* buildName(bool includeModule, bool includeParent, bool includeName);
	static $bytes* compress($longs* attributes);
	static $longs* decompress(::java::nio::ByteBuffer* bytes, int32_t offset);
	virtual int64_t getAttribute(int32_t kind);
	virtual $String* getAttributeString(int32_t kind);
	virtual $String* getBase();
	virtual int32_t getBaseOffset();
	virtual int64_t getCompressedSize();
	virtual int64_t getContentOffset();
	virtual $String* getExtension();
	virtual int32_t getExtensionOffset();
	virtual $String* getFullName();
	virtual $String* getFullName(bool modulesPrefix);
	virtual $String* getModule();
	virtual int32_t getModuleOffset();
	virtual $String* getParent();
	virtual int32_t getParentOffset();
	virtual ::jdk::internal::jimage::ImageStrings* getStrings();
	virtual int64_t getUncompressedSize();
	static ::jdk::internal::jimage::ImageLocation* readFrom(::jdk::internal::jimage::BasicImageReader* reader, int32_t offset);
	static int64_t readValue(int32_t length, ::java::nio::ByteBuffer* buffer, int32_t offset, int32_t limit);
	virtual bool verify($String* name);
	static bool verify($String* name, $longs* attributes, ::jdk::internal::jimage::ImageStrings* strings);
	static bool verify($String* module, $String* name, ::java::nio::ByteBuffer* locations, int32_t locationOffset, ::jdk::internal::jimage::ImageStrings* strings);
	static bool verify($String* module, $String* name, $longs* attributes, ::jdk::internal::jimage::ImageStrings* strings);
	static bool verifyName($String* module, $String* name, int32_t index, int32_t length, int32_t moduleOffset, int32_t parentOffset, int32_t baseOffset, int32_t extOffset, ::jdk::internal::jimage::ImageStrings* strings);
	static const int32_t ATTRIBUTE_END = 0;
	static const int32_t ATTRIBUTE_MODULE = 1;
	static const int32_t ATTRIBUTE_PARENT = 2;
	static const int32_t ATTRIBUTE_BASE = 3;
	static const int32_t ATTRIBUTE_EXTENSION = 4;
	static const int32_t ATTRIBUTE_OFFSET = 5;
	static const int32_t ATTRIBUTE_COMPRESSED = 6;
	static const int32_t ATTRIBUTE_UNCOMPRESSED = 7;
	static const int32_t ATTRIBUTE_COUNT = 8;
	$longs* attributes = nullptr;
	::jdk::internal::jimage::ImageStrings* strings = nullptr;
};

		} // jimage
	} // internal
} // jdk

#pragma pop_macro("ATTRIBUTE_BASE")
#pragma pop_macro("ATTRIBUTE_COMPRESSED")
#pragma pop_macro("ATTRIBUTE_COUNT")
#pragma pop_macro("ATTRIBUTE_END")
#pragma pop_macro("ATTRIBUTE_EXTENSION")
#pragma pop_macro("ATTRIBUTE_MODULE")
#pragma pop_macro("ATTRIBUTE_OFFSET")
#pragma pop_macro("ATTRIBUTE_PARENT")
#pragma pop_macro("ATTRIBUTE_UNCOMPRESSED")

#endif // _jdk_internal_jimage_ImageLocation_h_