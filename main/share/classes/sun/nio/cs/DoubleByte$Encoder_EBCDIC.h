#ifndef _sun_nio_cs_DoubleByte$Encoder_EBCDIC_h_
#define _sun_nio_cs_DoubleByte$Encoder_EBCDIC_h_
//$ class sun.nio.cs.DoubleByte$Encoder_EBCDIC
//$ extends sun.nio.cs.DoubleByte$Encoder

#include <java/lang/Array.h>
#include <sun/nio/cs/DoubleByte$Encoder.h>

#pragma push_macro("DBCS")
#undef DBCS
#pragma push_macro("SI")
#undef SI
#pragma push_macro("SBCS")
#undef SBCS
#pragma push_macro("SO")
#undef SO

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

class $export DoubleByte$Encoder_EBCDIC : public ::sun::nio::cs::DoubleByte$Encoder {
	$class(DoubleByte$Encoder_EBCDIC, $NO_CLASS_INIT, ::sun::nio::cs::DoubleByte$Encoder)
public:
	DoubleByte$Encoder_EBCDIC();
	using ::sun::nio::cs::DoubleByte$Encoder::canEncode;
	using ::sun::nio::cs::DoubleByte$Encoder::encode;
	void init$(::java::nio::charset::Charset* cs, $chars* c2b, $chars* c2bIndex, bool isASCIICompatible);
	virtual int32_t encode($chars* src, int32_t sp, int32_t len, $bytes* dst) override;
	virtual ::java::nio::charset::CoderResult* encodeArrayLoop(::java::nio::CharBuffer* src, ::java::nio::ByteBuffer* dst) override;
	virtual ::java::nio::charset::CoderResult* encodeBufferLoop(::java::nio::CharBuffer* src, ::java::nio::ByteBuffer* dst) override;
	virtual int32_t encodeFromLatin1($bytes* src, int32_t sp, int32_t len, $bytes* dst) override;
	virtual int32_t encodeFromUTF16($bytes* src, int32_t sp, int32_t len, $bytes* dst) override;
	virtual ::java::nio::charset::CoderResult* implFlush(::java::nio::ByteBuffer* out) override;
	virtual void implReset() override;
	static const int32_t SBCS = 0;
	static const int32_t DBCS = 1;
	static const int8_t SO = 14;
	static const int8_t SI = 15;
	int32_t currentState = 0;
};

		} // cs
	} // nio
} // sun

#pragma pop_macro("DBCS")
#pragma pop_macro("SI")
#pragma pop_macro("SBCS")
#pragma pop_macro("SO")

#endif // _sun_nio_cs_DoubleByte$Encoder_EBCDIC_h_