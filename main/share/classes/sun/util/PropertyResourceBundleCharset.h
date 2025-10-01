#ifndef _sun_util_PropertyResourceBundleCharset_h_
#define _sun_util_PropertyResourceBundleCharset_h_
//$ class sun.util.PropertyResourceBundleCharset
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
	namespace util {

class PropertyResourceBundleCharset : public ::java::nio::charset::Charset {
	$class(PropertyResourceBundleCharset, $NO_CLASS_INIT, ::java::nio::charset::Charset)
public:
	PropertyResourceBundleCharset();
	void init$(bool strictUTF8);
	void init$($String* canonicalName, $StringArray* aliases);
	virtual bool contains(::java::nio::charset::Charset* cs) override;
	virtual ::java::nio::charset::CharsetDecoder* newDecoder() override;
	virtual ::java::nio::charset::CharsetEncoder* newEncoder() override;
	bool strictUTF8 = false;
};

	} // util
} // sun

#endif // _sun_util_PropertyResourceBundleCharset_h_