#ifndef _sun_nio_ch_UnixDomainSocketsUtil_h_
#define _sun_nio_ch_UnixDomainSocketsUtil_h_
//$ class sun.nio.ch.UnixDomainSocketsUtil
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace nio {
		namespace charset {
			class Charset;
		}
	}
}

namespace sun {
	namespace nio {
		namespace ch {

class UnixDomainSocketsUtil : public ::java::lang::Object {
	$class(UnixDomainSocketsUtil, $NO_CLASS_INIT, ::java::lang::Object)
public:
	UnixDomainSocketsUtil();
	void init$();
	static ::java::nio::charset::Charset* getCharset();
	static $String* getTempDir();
	static $String* lambda$getTempDir$0();
};

		} // ch
	} // nio
} // sun

#endif // _sun_nio_ch_UnixDomainSocketsUtil_h_