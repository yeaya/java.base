#ifndef _sun_nio_cs_EUC_JP$Decoder_h_
#define _sun_nio_cs_EUC_JP$Decoder_h_
//$ class sun.nio.cs.EUC_JP$Decoder
//$ extends java.nio.charset.CharsetDecoder
//$ implements sun.nio.cs.DelegatableDecoder

#include <java/nio/charset/CharsetDecoder.h>
#include <sun/nio/cs/DelegatableDecoder.h>

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
			class DoubleByte$Decoder;
			class SingleByte$Decoder;
		}
	}
}

namespace sun {
	namespace nio {
		namespace cs {

class $export EUC_JP$Decoder : public ::java::nio::charset::CharsetDecoder, public ::sun::nio::cs::DelegatableDecoder {
	$class(EUC_JP$Decoder, 0, ::java::nio::charset::CharsetDecoder, ::sun::nio::cs::DelegatableDecoder)
public:
	EUC_JP$Decoder();
	virtual $Object* clone() override;
	virtual bool equals(Object$* obj) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(::java::nio::charset::Charset* cs);
	void init$(::java::nio::charset::Charset* cs, float avgCpb, float maxCpb, ::sun::nio::cs::SingleByte$Decoder* dec0201, ::sun::nio::cs::DoubleByte$Decoder* dec0208, ::sun::nio::cs::DoubleByte$Decoder* dec0212);
	::java::nio::charset::CoderResult* decodeArrayLoop(::java::nio::ByteBuffer* src, ::java::nio::CharBuffer* dst);
	::java::nio::charset::CoderResult* decodeBufferLoop(::java::nio::ByteBuffer* src, ::java::nio::CharBuffer* dst);
	virtual char16_t decodeDouble(int32_t byte1, int32_t byte2);
	virtual ::java::nio::charset::CoderResult* decodeLoop(::java::nio::ByteBuffer* src, ::java::nio::CharBuffer* dst) override;
	virtual ::java::nio::charset::CoderResult* implFlush(::java::nio::CharBuffer* out) override;
	virtual void implReset() override;
	virtual $String* toString() override;
	static ::sun::nio::cs::SingleByte$Decoder* DEC0201;
	static ::sun::nio::cs::DoubleByte$Decoder* DEC0208;
	static ::sun::nio::cs::DoubleByte$Decoder* DEC0212;
	::sun::nio::cs::SingleByte$Decoder* dec0201 = nullptr;
	::sun::nio::cs::DoubleByte$Decoder* dec0208 = nullptr;
	::sun::nio::cs::DoubleByte$Decoder* dec0212 = nullptr;
};

		} // cs
	} // nio
} // sun

#endif // _sun_nio_cs_EUC_JP$Decoder_h_