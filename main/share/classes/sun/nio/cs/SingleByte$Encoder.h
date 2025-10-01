#ifndef _sun_nio_cs_SingleByte$Encoder_h_
#define _sun_nio_cs_SingleByte$Encoder_h_
//$ class sun.nio.cs.SingleByte$Encoder
//$ extends java.nio.charset.CharsetEncoder
//$ implements sun.nio.cs.ArrayEncoder

#include <java/lang/Array.h>
#include <java/nio/charset/CharsetEncoder.h>
#include <sun/nio/cs/ArrayEncoder.h>

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

class $export SingleByte$Encoder : public ::java::nio::charset::CharsetEncoder, public ::sun::nio::cs::ArrayEncoder {
	$class(SingleByte$Encoder, $NO_CLASS_INIT, ::java::nio::charset::CharsetEncoder, ::sun::nio::cs::ArrayEncoder)
public:
	SingleByte$Encoder();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	using ::java::nio::charset::CharsetEncoder::encode;
	using ::java::nio::charset::CharsetEncoder::canEncode;
	virtual $Object* clone() override;
	virtual bool equals(Object$* obj) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(::java::nio::charset::Charset* cs, $chars* c2b, $chars* c2bIndex, bool isASCIICompatible);
	virtual bool canEncode(char16_t c) override;
	int32_t encode(char16_t ch);
	virtual int32_t encode($chars* src, int32_t sp, int32_t len, $bytes* dst) override;
	::java::nio::charset::CoderResult* encodeArrayLoop(::java::nio::CharBuffer* src, ::java::nio::ByteBuffer* dst);
	::java::nio::charset::CoderResult* encodeBufferLoop(::java::nio::CharBuffer* src, ::java::nio::ByteBuffer* dst);
	virtual int32_t encodeFromLatin1($bytes* src, int32_t sp, int32_t len, $bytes* dst) override;
	virtual int32_t encodeFromUTF16($bytes* src, int32_t sp, int32_t len, $bytes* dst) override;
	virtual ::java::nio::charset::CoderResult* encodeLoop(::java::nio::CharBuffer* src, ::java::nio::ByteBuffer* dst) override;
	virtual void implReplaceWith($bytes* newReplacement) override;
	virtual bool isASCIICompatible() override;
	virtual bool isLegalReplacement($bytes* repl) override;
	virtual $String* toString() override;
	::sun::nio::cs::Surrogate$Parser* sgp = nullptr;
	$chars* c2b = nullptr;
	$chars* c2bIndex = nullptr;
	bool isASCIICompatible$ = false;
	int8_t repl = 0;
};

		} // cs
	} // nio
} // sun

#endif // _sun_nio_cs_SingleByte$Encoder_h_