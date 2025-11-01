#ifndef _sun_nio_cs_US_ASCII_h_
#define _sun_nio_cs_US_ASCII_h_
//$ class sun.nio.cs.US_ASCII
//$ extends java.nio.charset.Charset
//$ implements sun.nio.cs.HistoricallyNamedCharset

#include <java/nio/charset/Charset.h>
#include <sun/nio/cs/HistoricallyNamedCharset.h>

#pragma push_macro("INSTANCE")
#undef INSTANCE
#pragma push_macro("US_ASCII")
#undef US_ASCII

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

class $import US_ASCII : public ::java::nio::charset::Charset, public ::sun::nio::cs::HistoricallyNamedCharset {
	$class(US_ASCII, 0, ::java::nio::charset::Charset, ::sun::nio::cs::HistoricallyNamedCharset)
public:
	US_ASCII();
	virtual $Object* clone() override;
	virtual bool equals(Object$* ob) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$();
	virtual bool contains(::java::nio::charset::Charset* cs) override;
	virtual $String* historicalName() override;
	virtual ::java::nio::charset::CharsetDecoder* newDecoder() override;
	virtual ::java::nio::charset::CharsetEncoder* newEncoder() override;
	virtual $String* toString() override;
	static ::sun::nio::cs::US_ASCII* INSTANCE;
};

		} // cs
	} // nio
} // sun

#pragma pop_macro("INSTANCE")
#pragma pop_macro("US_ASCII")

#endif // _sun_nio_cs_US_ASCII_h_