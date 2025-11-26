#ifndef _sun_nio_cs_EUC_TW_h_
#define _sun_nio_cs_EUC_TW_h_
//$ class sun.nio.cs.EUC_TW
//$ extends java.nio.charset.Charset
//$ implements sun.nio.cs.HistoricallyNamedCharset

#include <java/nio/charset/Charset.h>
#include <sun/nio/cs/HistoricallyNamedCharset.h>

#pragma push_macro("EUC_TW")
#undef EUC_TW
#pragma push_macro("SS2")
#undef SS2

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

class $import EUC_TW : public ::java::nio::charset::Charset, public ::sun::nio::cs::HistoricallyNamedCharset {
	$class(EUC_TW, $NO_CLASS_INIT, ::java::nio::charset::Charset, ::sun::nio::cs::HistoricallyNamedCharset)
public:
	EUC_TW();
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
	static const int32_t SS2 = 142;
};

		} // cs
	} // nio
} // sun

#pragma pop_macro("EUC_TW")
#pragma pop_macro("SS2")

#endif // _sun_nio_cs_EUC_TW_h_