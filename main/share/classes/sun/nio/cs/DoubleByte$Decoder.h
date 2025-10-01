#ifndef _sun_nio_cs_DoubleByte$Decoder_h_
#define _sun_nio_cs_DoubleByte$Decoder_h_
//$ class sun.nio.cs.DoubleByte$Decoder
//$ extends java.nio.charset.CharsetDecoder
//$ implements sun.nio.cs.DelegatableDecoder,sun.nio.cs.ArrayDecoder

#include <java/lang/Array.h>
#include <java/nio/charset/CharsetDecoder.h>
#include <sun/nio/cs/ArrayDecoder.h>
#include <sun/nio/cs/DelegatableDecoder.h>

#pragma push_macro("JLA")
#undef JLA

namespace java {
	namespace nio {
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

class $export DoubleByte$Decoder : public ::java::nio::charset::CharsetDecoder, public ::sun::nio::cs::DelegatableDecoder, public ::sun::nio::cs::ArrayDecoder {
	$class(DoubleByte$Decoder, 0, ::java::nio::charset::CharsetDecoder, ::sun::nio::cs::DelegatableDecoder, ::sun::nio::cs::ArrayDecoder)
public:
	DoubleByte$Decoder();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	using ::java::nio::charset::CharsetDecoder::decode;
	virtual $Object* clone() override;
	virtual bool equals(Object$* obj) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(::java::nio::charset::Charset* cs, float avgcpb, float maxcpb, $Array<char16_t, 2>* b2c, $chars* b2cSB, int32_t b2Min, int32_t b2Max, bool isASCIICompatible);
	void init$(::java::nio::charset::Charset* cs, $Array<char16_t, 2>* b2c, $chars* b2cSB, int32_t b2Min, int32_t b2Max, bool isASCIICompatible);
	void init$(::java::nio::charset::Charset* cs, $Array<char16_t, 2>* b2c, $chars* b2cSB, int32_t b2Min, int32_t b2Max);
	virtual ::java::nio::charset::CoderResult* crMalformedOrUnderFlow(int32_t b);
	virtual ::java::nio::charset::CoderResult* crMalformedOrUnmappable(int32_t b1, int32_t b2);
	virtual int32_t decode($bytes* src, int32_t sp, int32_t len, $chars* dst) override;
	virtual ::java::nio::charset::CoderResult* decodeArrayLoop(::java::nio::ByteBuffer* src, ::java::nio::CharBuffer* dst);
	virtual ::java::nio::charset::CoderResult* decodeBufferLoop(::java::nio::ByteBuffer* src, ::java::nio::CharBuffer* dst);
	virtual char16_t decodeDouble(int32_t b1, int32_t b2);
	virtual ::java::nio::charset::CoderResult* decodeLoop(::java::nio::ByteBuffer* src, ::java::nio::CharBuffer* dst) override;
	virtual char16_t decodeSingle(int32_t b);
	virtual ::java::nio::charset::CoderResult* implFlush(::java::nio::CharBuffer* out) override;
	virtual void implReset() override;
	virtual bool isASCIICompatible() override;
	virtual $String* toString() override;
	static ::jdk::internal::access::JavaLangAccess* JLA;
	$Array<char16_t, 2>* b2c = nullptr;
	$chars* b2cSB = nullptr;
	int32_t b2Min = 0;
	int32_t b2Max = 0;
	bool isASCIICompatible$ = false;
};

		} // cs
	} // nio
} // sun

#pragma pop_macro("JLA")

#endif // _sun_nio_cs_DoubleByte$Decoder_h_