#ifndef _sun_nio_cs_GB18030_h_
#define _sun_nio_cs_GB18030_h_
//$ class sun.nio.cs.GB18030
//$ extends java.nio.charset.Charset

#include <java/lang/Array.h>
#include <java/nio/charset/Charset.h>

namespace java {
	namespace nio {
		namespace charset {
			class CharsetDecoder;
			class CharsetEncoder;
		}
	}
}

namespace sun {
	namespace nio {
		namespace cs {

class $import GB18030 : public ::java::nio::charset::Charset {
	$class(GB18030, 0, ::java::nio::charset::Charset)
public:
	GB18030();
	void init$();
	virtual bool contains(::java::nio::charset::Charset* cs) override;
	virtual ::java::nio::charset::CharsetDecoder* newDecoder() override;
	virtual ::java::nio::charset::CharsetEncoder* newEncoder() override;
	static const int32_t GB18030_SINGLE_BYTE = 1;
	static const int32_t GB18030_DOUBLE_BYTE = 2;
	static const int32_t GB18030_FOUR_BYTE = 3;
	static $String* innerDecoderIndex0;
	static $String* innerDecoderIndex1;
	static $String* innerDecoderIndex2;
	static $String* innerDecoderIndex3;
	static $String* innerDecoderIndex4;
	static $String* innerDecoderIndex5;
	static $shorts* decoderIndex1;
	static $StringArray* decoderIndex2;
	static $String* innerIndex0;
	static $String* innerIndex1;
	static $String* innerIndex2;
	static $String* innerIndex3;
	static $String* innerIndex4;
	static $String* innerIndex5;
	static $String* innerIndex6;
	static $String* innerIndex7;
	static $shorts* index1;
	static $StringArray* index2;
	static $String* innerEncoderIndex0;
	static $String* innerEncoderIndex1;
	static $String* innerEncoderIndex2;
	static $String* innerEncoderIndex3;
	static $String* innerEncoderIndex4;
	static $String* innerEncoderIndex5;
	static $String* innerEncoderIndex6;
	static $String* innerEncoderIndex7;
	static $String* innerEncoderIndex8;
	static $String* innerEncoderIndex9;
	static $String* innerEncoderIndex10;
	static $String* innerEncoderIndex11;
	static $String* innerEncoderIndex12;
	static $shorts* encoderIndex1;
	static $StringArray* encoderIndex2;
};

		} // cs
	} // nio
} // sun

#endif // _sun_nio_cs_GB18030_h_