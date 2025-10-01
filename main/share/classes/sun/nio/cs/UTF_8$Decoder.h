#ifndef _sun_nio_cs_UTF_8$Decoder_h_
#define _sun_nio_cs_UTF_8$Decoder_h_
//$ class sun.nio.cs.UTF_8$Decoder
//$ extends java.nio.charset.CharsetDecoder

#include <java/nio/charset/CharsetDecoder.h>

#pragma push_macro("JLA")
#undef JLA

namespace java {
	namespace nio {
		class Buffer;
		class ByteBuffer;
		class CharBuffer;
	}
}
namespace java {
	namespace nio {
		namespace charset {
			class Charset;
			class CoderResult;
		}
	}
}
namespace jdk {
	namespace internal {
		namespace access {
			class JavaLangAccess;
		}
	}
}

namespace sun {
	namespace nio {
		namespace cs {

class UTF_8$Decoder : public ::java::nio::charset::CharsetDecoder {
	$class(UTF_8$Decoder, 0, ::java::nio::charset::CharsetDecoder)
public:
	UTF_8$Decoder();
	void init$(::java::nio::charset::Charset* cs);
	::java::nio::charset::CoderResult* decodeArrayLoop(::java::nio::ByteBuffer* src, ::java::nio::CharBuffer* dst);
	::java::nio::charset::CoderResult* decodeBufferLoop(::java::nio::ByteBuffer* src, ::java::nio::CharBuffer* dst);
	virtual ::java::nio::charset::CoderResult* decodeLoop(::java::nio::ByteBuffer* src, ::java::nio::CharBuffer* dst) override;
	static bool isMalformed3(int32_t b1, int32_t b2, int32_t b3);
	static bool isMalformed3_2(int32_t b1, int32_t b2);
	static bool isMalformed4(int32_t b2, int32_t b3, int32_t b4);
	static bool isMalformed4_2(int32_t b1, int32_t b2);
	static bool isMalformed4_3(int32_t b3);
	static bool isNotContinuation(int32_t b);
	static ::java::nio::charset::CoderResult* malformed(::java::nio::ByteBuffer* src, int32_t sp, ::java::nio::CharBuffer* dst, int32_t dp, int32_t nb);
	static ::java::nio::charset::CoderResult* malformed(::java::nio::ByteBuffer* src, int32_t mark, int32_t nb);
	static ::java::nio::charset::CoderResult* malformedForLength(::java::nio::ByteBuffer* src, int32_t sp, ::java::nio::CharBuffer* dst, int32_t dp, int32_t malformedNB);
	static ::java::nio::charset::CoderResult* malformedForLength(::java::nio::ByteBuffer* src, int32_t mark, int32_t malformedNB);
	static ::java::nio::charset::CoderResult* malformedN(::java::nio::ByteBuffer* src, int32_t nb);
	static ::java::nio::charset::CoderResult* xflow(::java::nio::Buffer* src, int32_t sp, int32_t sl, ::java::nio::Buffer* dst, int32_t dp, int32_t nb);
	static ::java::nio::charset::CoderResult* xflow(::java::nio::Buffer* src, int32_t mark, int32_t nb);
	static bool $assertionsDisabled;
	static ::jdk::internal::access::JavaLangAccess* JLA;
};

		} // cs
	} // nio
} // sun

#pragma pop_macro("JLA")

#endif // _sun_nio_cs_UTF_8$Decoder_h_