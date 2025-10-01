#ifndef _sun_nio_cs_CESU_8$Decoder_h_
#define _sun_nio_cs_CESU_8$Decoder_h_
//$ class sun.nio.cs.CESU_8$Decoder
//$ extends java.nio.charset.CharsetDecoder
//$ implements sun.nio.cs.ArrayDecoder

#include <java/lang/Array.h>
#include <java/nio/charset/CharsetDecoder.h>
#include <sun/nio/cs/ArrayDecoder.h>

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

class CESU_8$Decoder : public ::java::nio::charset::CharsetDecoder, public ::sun::nio::cs::ArrayDecoder {
	$class(CESU_8$Decoder, 0, ::java::nio::charset::CharsetDecoder, ::sun::nio::cs::ArrayDecoder)
public:
	CESU_8$Decoder();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	using ::java::nio::charset::CharsetDecoder::decode;
	virtual $Object* clone() override;
	virtual bool equals(Object$* obj) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(::java::nio::charset::Charset* cs);
	virtual int32_t decode($bytes* sa, int32_t sp, int32_t len, $chars* da) override;
	::java::nio::charset::CoderResult* decodeArrayLoop(::java::nio::ByteBuffer* src, ::java::nio::CharBuffer* dst);
	::java::nio::charset::CoderResult* decodeBufferLoop(::java::nio::ByteBuffer* src, ::java::nio::CharBuffer* dst);
	virtual ::java::nio::charset::CoderResult* decodeLoop(::java::nio::ByteBuffer* src, ::java::nio::CharBuffer* dst) override;
	static ::java::nio::ByteBuffer* getByteBuffer(::java::nio::ByteBuffer* bb, $bytes* ba, int32_t sp);
	static bool isMalformed3(int32_t b1, int32_t b2, int32_t b3);
	static bool isMalformed3_2(int32_t b1, int32_t b2);
	static bool isNotContinuation(int32_t b);
	static ::java::nio::charset::CoderResult* malformed(::java::nio::ByteBuffer* src, int32_t sp, ::java::nio::CharBuffer* dst, int32_t dp, int32_t nb);
	static ::java::nio::charset::CoderResult* malformed(::java::nio::ByteBuffer* src, int32_t mark, int32_t nb);
	static ::java::nio::charset::CoderResult* malformedForLength(::java::nio::ByteBuffer* src, int32_t sp, ::java::nio::CharBuffer* dst, int32_t dp, int32_t malformedNB);
	static ::java::nio::charset::CoderResult* malformedForLength(::java::nio::ByteBuffer* src, int32_t mark, int32_t malformedNB);
	static ::java::nio::charset::CoderResult* malformedN(::java::nio::ByteBuffer* src, int32_t nb);
	virtual $String* toString() override;
	static ::java::nio::charset::CoderResult* xflow(::java::nio::Buffer* src, int32_t sp, int32_t sl, ::java::nio::Buffer* dst, int32_t dp, int32_t nb);
	static ::java::nio::charset::CoderResult* xflow(::java::nio::Buffer* src, int32_t mark, int32_t nb);
	static bool $assertionsDisabled;
	static ::jdk::internal::access::JavaLangAccess* JLA;
};

		} // cs
	} // nio
} // sun

#pragma pop_macro("JLA")

#endif // _sun_nio_cs_CESU_8$Decoder_h_