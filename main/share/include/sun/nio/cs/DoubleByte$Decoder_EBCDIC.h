#ifndef _sun_nio_cs_DoubleByte$Decoder_EBCDIC_h_
#define _sun_nio_cs_DoubleByte$Decoder_EBCDIC_h_
//$ class sun.nio.cs.DoubleByte$Decoder_EBCDIC
//$ extends sun.nio.cs.DoubleByte$Decoder

#include <java/lang/Array.h>
#include <sun/nio/cs/DoubleByte$Decoder.h>

#pragma push_macro("DBCS")
#undef DBCS
#pragma push_macro("SBCS")
#undef SBCS
#pragma push_macro("SI")
#undef SI
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

class $import DoubleByte$Decoder_EBCDIC : public ::sun::nio::cs::DoubleByte$Decoder {
	$class(DoubleByte$Decoder_EBCDIC, $NO_CLASS_INIT, ::sun::nio::cs::DoubleByte$Decoder)
public:
	DoubleByte$Decoder_EBCDIC();
	using ::sun::nio::cs::DoubleByte$Decoder::decode;
	void init$(::java::nio::charset::Charset* cs, $Array<char16_t, 2>* b2c, $chars* b2cSB, int32_t b2Min, int32_t b2Max, bool isASCIICompatible);
	void init$(::java::nio::charset::Charset* cs, $Array<char16_t, 2>* b2c, $chars* b2cSB, int32_t b2Min, int32_t b2Max);
	virtual int32_t decode($bytes* src, int32_t sp, int32_t len, $chars* dst) override;
	virtual ::java::nio::charset::CoderResult* decodeArrayLoop(::java::nio::ByteBuffer* src, ::java::nio::CharBuffer* dst) override;
	virtual ::java::nio::charset::CoderResult* decodeBufferLoop(::java::nio::ByteBuffer* src, ::java::nio::CharBuffer* dst) override;
	virtual void implReset() override;
	static bool isDoubleByte(int32_t b1, int32_t b2);
	static const int32_t SBCS = 0;
	static const int32_t DBCS = 1;
	static const int32_t SO = 14;
	static const int32_t SI = 15;
	int32_t currentState = 0;
};

		} // cs
	} // nio
} // sun

#pragma pop_macro("DBCS")
#pragma pop_macro("SBCS")
#pragma pop_macro("SI")
#pragma pop_macro("SO")

#endif // _sun_nio_cs_DoubleByte$Decoder_EBCDIC_h_