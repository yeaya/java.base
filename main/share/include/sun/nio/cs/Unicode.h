#ifndef _sun_nio_cs_Unicode_h_
#define _sun_nio_cs_Unicode_h_
//$ class sun.nio.cs.Unicode
//$ extends java.nio.charset.Charset
//$ implements sun.nio.cs.HistoricallyNamedCharset

#include <java/lang/Array.h>
#include <java/nio/charset/Charset.h>
#include <sun/nio/cs/HistoricallyNamedCharset.h>

namespace sun {
	namespace nio {
		namespace cs {

class $import Unicode : public ::java::nio::charset::Charset, public ::sun::nio::cs::HistoricallyNamedCharset {
	$class(Unicode, $PRELOAD | $NO_CLASS_INIT, ::java::nio::charset::Charset, ::sun::nio::cs::HistoricallyNamedCharset)
public:
	Unicode();
	virtual $Object* clone() override;
	virtual bool equals(Object$* ob) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$($String* name, $StringArray* aliases);
	virtual bool contains(::java::nio::charset::Charset* cs) override;
	virtual $String* toString() override;
};

		} // cs
	} // nio
} // sun

#endif // _sun_nio_cs_Unicode_h_