#ifndef _jdk_internal_jimage_ImageStringsReader_h_
#define _jdk_internal_jimage_ImageStringsReader_h_
//$ class jdk.internal.jimage.ImageStringsReader
//$ extends jdk.internal.jimage.ImageStrings

#include <java/lang/Array.h>
#include <jdk/internal/jimage/ImageStrings.h>

#pragma push_macro("HASH_MULTIPLIER")
#undef HASH_MULTIPLIER
#pragma push_macro("POSITIVE_MASK")
#undef POSITIVE_MASK

namespace java {
	namespace nio {
		class ByteBuffer;
	}
}
namespace jdk {
	namespace internal {
		namespace jimage {
			class BasicImageReader;
		}
	}
}

namespace jdk {
	namespace internal {
		namespace jimage {

class $import ImageStringsReader : public ::jdk::internal::jimage::ImageStrings {
	$class(ImageStringsReader, $NO_CLASS_INIT, ::jdk::internal::jimage::ImageStrings)
public:
	ImageStringsReader();
	using ::jdk::internal::jimage::ImageStrings::hashCode;
	void init$(::jdk::internal::jimage::BasicImageReader* reader);
	virtual int32_t add($String* string) override;
	static void charsFromByteBuffer($chars* chars, ::java::nio::ByteBuffer* buffer, int32_t offset);
	static int32_t charsFromByteBufferLength(::java::nio::ByteBuffer* buffer, int32_t offset);
	static void charsFromMUTF8($chars* chars, $bytes* bytes, int32_t offset, int32_t count);
	static int32_t charsFromMUTF8Length($bytes* bytes, int32_t offset, int32_t count);
	virtual $String* get(int32_t offset) override;
	static int32_t hashCode($String* s);
	static int32_t hashCode($String* s, int32_t seed);
	static int32_t hashCode($String* module, $String* name);
	static int32_t hashCode($String* module, $String* name, int32_t seed);
	virtual int32_t match(int32_t offset, $String* string, int32_t stringOffset) override;
	static void mutf8FromString($bytes* bytes, int32_t offset, $String* s);
	static $bytes* mutf8FromString($String* string);
	static int32_t mutf8FromStringLength($String* s);
	static $String* stringFromByteBuffer(::java::nio::ByteBuffer* buffer);
	static $String* stringFromByteBuffer(::java::nio::ByteBuffer* buffer, int32_t offset);
	static int32_t stringFromByteBufferMatches(::java::nio::ByteBuffer* buffer, int32_t offset, $String* string, int32_t stringOffset);
	static $String* stringFromMUTF8($bytes* bytes, int32_t offset, int32_t count);
	static $String* stringFromMUTF8($bytes* bytes);
	static int32_t unmaskedHashCode($String* s, int32_t seed);
	static const int32_t HASH_MULTIPLIER = 0x01000193;
	static const int32_t POSITIVE_MASK = 0x7FFFFFFF;
	::jdk::internal::jimage::BasicImageReader* reader = nullptr;
};

		} // jimage
	} // internal
} // jdk

#pragma pop_macro("HASH_MULTIPLIER")
#pragma pop_macro("POSITIVE_MASK")

#endif // _jdk_internal_jimage_ImageStringsReader_h_