#ifndef _sun_nio_cs_ISO_8859_1_h_
#define _sun_nio_cs_ISO_8859_1_h_
//$ class sun.nio.cs.ISO_8859_1
//$ extends java.nio.charset.Charset
//$ implements sun.nio.cs.HistoricallyNamedCharset

#include <java/nio/charset/Charset.h>
#include <sun/nio/cs/HistoricallyNamedCharset.h>

#pragma push_macro("INSTANCE")
#undef INSTANCE

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

class $export ISO_8859_1 : public ::java::nio::charset::Charset, public ::sun::nio::cs::HistoricallyNamedCharset {
	$class(ISO_8859_1, 0, ::java::nio::charset::Charset, ::sun::nio::cs::HistoricallyNamedCharset)
public:
	ISO_8859_1();
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
	static ::sun::nio::cs::ISO_8859_1* INSTANCE;
};

		} // cs
	} // nio
} // sun

#pragma pop_macro("INSTANCE")

#endif // _sun_nio_cs_ISO_8859_1_h_