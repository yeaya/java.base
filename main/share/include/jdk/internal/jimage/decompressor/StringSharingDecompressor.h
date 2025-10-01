#ifndef _jdk_internal_jimage_decompressor_StringSharingDecompressor_h_
#define _jdk_internal_jimage_decompressor_StringSharingDecompressor_h_
//$ class jdk.internal.jimage.decompressor.StringSharingDecompressor
//$ extends jdk.internal.jimage.decompressor.ResourceDecompressor

#include <java/lang/Array.h>
#include <jdk/internal/jimage/decompressor/ResourceDecompressor.h>

#pragma push_macro("SIZES")
#undef SIZES
#pragma push_macro("EXTERNALIZED_STRING")
#undef EXTERNALIZED_STRING
#pragma push_macro("EXTERNALIZED_STRING_DESCRIPTOR")
#undef EXTERNALIZED_STRING_DESCRIPTOR

namespace java {
	namespace io {
		class DataInputStream;
	}
}
namespace java {
	namespace nio {
		class ByteBuffer;
	}
}
namespace java {
	namespace util {
		class Properties;
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

class $import StringSharingDecompressor : public ::jdk::internal::jimage::decompressor::ResourceDecompressor {
	$class(StringSharingDecompressor, 0, ::jdk::internal::jimage::decompressor::ResourceDecompressor)
public:
	StringSharingDecompressor();
	void init$(::java::util::Properties* properties);
	virtual $bytes* decompress(::jdk::internal::jimage::decompressor::ResourceDecompressor$StringsProvider* reader, $bytes* content, int32_t offset, int64_t originalSize) override;
	static $bytes* getEncoded($String* pre);
	virtual $String* getName() override;
	static $ints* getSizes();
	static $bytes* normalize(::jdk::internal::jimage::decompressor::ResourceDecompressor$StringsProvider* provider, $bytes* transformed, int32_t offset);
	static $String* reconstruct(::jdk::internal::jimage::decompressor::ResourceDecompressor$StringsProvider* reader, ::java::io::DataInputStream* cr);
	static ::java::nio::ByteBuffer* safeAdd(::java::nio::ByteBuffer* current, int8_t b);
	static ::java::nio::ByteBuffer* safeAdd(::java::nio::ByteBuffer* current, $bytes* bytes);
	static const int32_t EXTERNALIZED_STRING = 23;
	static const int32_t EXTERNALIZED_STRING_DESCRIPTOR = 25;
	static const int32_t CONSTANT_Utf8 = 1;
	static const int32_t CONSTANT_Integer = 3;
	static const int32_t CONSTANT_Float = 4;
	static const int32_t CONSTANT_Long = 5;
	static const int32_t CONSTANT_Double = 6;
	static const int32_t CONSTANT_Class = 7;
	static const int32_t CONSTANT_String = 8;
	static const int32_t CONSTANT_Fieldref = 9;
	static const int32_t CONSTANT_Methodref = 10;
	static const int32_t CONSTANT_InterfaceMethodref = 11;
	static const int32_t CONSTANT_NameAndType = 12;
	static const int32_t CONSTANT_MethodHandle = 15;
	static const int32_t CONSTANT_MethodType = 16;
	static const int32_t CONSTANT_InvokeDynamic = 18;
	static const int32_t CONSTANT_Module = 19;
	static const int32_t CONSTANT_Package = 20;
	static $ints* SIZES;
};

			} // decompressor
		} // jimage
	} // internal
} // jdk

#pragma pop_macro("SIZES")
#pragma pop_macro("EXTERNALIZED_STRING")
#pragma pop_macro("EXTERNALIZED_STRING_DESCRIPTOR")

#endif // _jdk_internal_jimage_decompressor_StringSharingDecompressor_h_