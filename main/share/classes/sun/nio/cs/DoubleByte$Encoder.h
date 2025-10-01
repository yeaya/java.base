#ifndef _sun_nio_cs_DoubleByte$Encoder_h_
#define _sun_nio_cs_DoubleByte$Encoder_h_
//$ class sun.nio.cs.DoubleByte$Encoder
//$ extends java.nio.charset.CharsetEncoder
//$ implements sun.nio.cs.ArrayEncoder

#include <java/lang/Array.h>
#include <java/nio/charset/CharsetEncoder.h>
#include <sun/nio/cs/ArrayEncoder.h>

#pragma push_macro("MAX_SINGLEBYTE")
#undef MAX_SINGLEBYTE

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
namespace sun {
	namespace nio {
		namespace cs {
			class Surrogate$Parser;
		}
	}
}

namespace sun {
	namespace nio {
		namespace cs {

class $export DoubleByte$Encoder : public ::java::nio::charset::CharsetEncoder, public ::sun::nio::cs::ArrayEncoder {
	$class(DoubleByte$Encoder, $NO_CLASS_INIT, ::java::nio::charset::CharsetEncoder, ::sun::nio::cs::ArrayEncoder)
public:
	DoubleByte$Encoder();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	using ::java::nio::charset::CharsetEncoder::encode;
	using ::java::nio::charset::CharsetEncoder::canEncode;
	virtual $Object* clone() override;
	virtual bool equals(Object$* obj) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(::java::nio::charset::Charset* cs, $chars* c2b, $chars* c2bIndex);
	void init$(::java::nio::charset::Charset* cs, $chars* c2b, $chars* c2bIndex, bool isASCIICompatible);
	void init$(::java::nio::charset::Charset* cs, float avg, float max, $bytes* repl, $chars* c2b, $chars* c2bIndex, bool isASCIICompatible);
	virtual bool canEncode(char16_t c) override;
	virtual int32_t encode($chars* src, int32_t sp, int32_t len, $bytes* dst) override;
	virtual ::java::nio::charset::CoderResult* encodeArrayLoop(::java::nio::CharBuffer* src, ::java::nio::ByteBuffer* dst);
	virtual ::java::nio::charset::CoderResult* encodeBufferLoop(::java::nio::CharBuffer* src, ::java::nio::ByteBuffer* dst);
	virtual int32_t encodeChar(char16_t ch);
	virtual int32_t encodeFromLatin1($bytes* src, int32_t sp, int32_t len, $bytes* dst) override;
	virtual int32_t encodeFromUTF16($bytes* src, int32_t sp, int32_t len, $bytes* dst) override;
	virtual ::java::nio::charset::CoderResult* encodeLoop(::java::nio::CharBuffer* src, ::java::nio::ByteBuffer* dst) override;
	virtual void implReplaceWith($bytes* newReplacement) override;
	static void initC2B($StringArray* b2c, $String* b2cSB, $String* b2cNR, $String* c2bNR, int32_t b2Min, int32_t b2Max, $chars* c2b, $chars* c2bIndex);
	virtual bool isASCIICompatible() override;
	virtual ::sun::nio::cs::Surrogate$Parser* sgp();
	virtual $String* toString() override;
	static const int32_t MAX_SINGLEBYTE = 255;
	$chars* c2b = nullptr;
	$chars* c2bIndex = nullptr;
	::sun::nio::cs::Surrogate$Parser* sgp$ = nullptr;
	bool isASCIICompatible$ = false;
	$bytes* repl = nullptr;
};

		} // cs
	} // nio
} // sun

#pragma pop_macro("MAX_SINGLEBYTE")

#endif // _sun_nio_cs_DoubleByte$Encoder_h_