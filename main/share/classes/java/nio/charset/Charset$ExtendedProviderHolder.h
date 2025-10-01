#ifndef _java_nio_charset_Charset$ExtendedProviderHolder_h_
#define _java_nio_charset_Charset$ExtendedProviderHolder_h_
//$ class java.nio.charset.Charset$ExtendedProviderHolder
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace nio {
		namespace charset {
			namespace spi {
				class CharsetProvider;
			}
		}
	}
}

namespace java {
	namespace nio {
		namespace charset {

class Charset$ExtendedProviderHolder : public ::java::lang::Object {
	$class(Charset$ExtendedProviderHolder, 0, ::java::lang::Object)
public:
	Charset$ExtendedProviderHolder();
	void init$();
	static $Array<::java::nio::charset::spi::CharsetProvider>* extendedProviders();
	static $Array<::java::nio::charset::spi::CharsetProvider>* extendedProviders$;
};

		} // charset
	} // nio
} // java

#endif // _java_nio_charset_Charset$ExtendedProviderHolder_h_