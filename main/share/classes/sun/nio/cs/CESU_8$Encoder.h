#ifndef _sun_nio_cs_CESU_8$Encoder_h_
#define _sun_nio_cs_CESU_8$Encoder_h_
//$ class sun.nio.cs.CESU_8$Encoder
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

class CESU_8$Encoder : public ::java::nio::charset::CharsetEncoder, public ::sun::nio::cs::ArrayEncoder {
	$class(CESU_8$Encoder, $NO_CLASS_INIT, ::java::nio::charset::CharsetEncoder, ::sun::nio::cs::ArrayEncoder)
public:
	CESU_8$Encoder();
	using ::java::nio::charset::CharsetEncoder::encode;
	using ::java::nio::charset::CharsetEncoder::canEncode;
	virtual $Object* clone() override;
	virtual bool equals(Object$* obj) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(::java::nio::charset::Charset* cs);
	virtual bool canEncode(char16_t c) override;
	virtual int32_t encode($chars* sa, int32_t sp, int32_t len, $bytes* da) override;
	::java::nio::charset::CoderResult* encodeArrayLoop(::java::nio::CharBuffer* src, ::java::nio::ByteBuffer* dst);
	::java::nio::charset::CoderResult* encodeBufferLoop(::java::nio::CharBuffer* src, ::java::nio::ByteBuffer* dst);
	virtual ::java::nio::charset::CoderResult* encodeLoop(::java::nio::CharBuffer* src, ::java::nio::ByteBuffer* dst) override;
	virtual bool isLegalReplacement($bytes* repl) override;
	static ::java::nio::charset::CoderResult* overflow(::java::nio::CharBuffer* src, int32_t sp, ::java::nio::ByteBuffer* dst, int32_t dp);
	static ::java::nio::charset::CoderResult* overflow(::java::nio::CharBuffer* src, int32_t mark);
	static void to3Bytes($bytes* da, int32_t dp, char16_t c);
	static void to3Bytes(::java::nio::ByteBuffer* dst, char16_t c);
	virtual $String* toString() override;
	::sun::nio::cs::Surrogate$Parser* sgp = nullptr;
	$chars* c2 = nullptr;
};

		} // cs
	} // nio
} // sun

#endif // _sun_nio_cs_CESU_8$Encoder_h_