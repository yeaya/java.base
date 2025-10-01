#ifndef _java_nio_charset_spi_CharsetProvider_h_
#define _java_nio_charset_spi_CharsetProvider_h_
//$ class java.nio.charset.spi.CharsetProvider
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace lang {
		class Void;
	}
}
namespace java {
	namespace nio {
		namespace charset {
			class Charset;
		}
	}
}
namespace java {
	namespace util {
		class Iterator;
	}
}

namespace java {
	namespace nio {
		namespace charset {
			namespace spi {

class $import CharsetProvider : public ::java::lang::Object {
	$class(CharsetProvider, $PRELOAD | $NO_CLASS_INIT, ::java::lang::Object)
public:
	CharsetProvider();
	void init$(::java::lang::Void* ignore);
	void init$();
	virtual ::java::nio::charset::Charset* charsetForName($String* charsetName) {return nullptr;}
	virtual ::java::util::Iterator* charsets() {return nullptr;}
	static ::java::lang::Void* checkPermission();
};

			} // spi
		} // charset
	} // nio
} // java

#endif // _java_nio_charset_spi_CharsetProvider_h_