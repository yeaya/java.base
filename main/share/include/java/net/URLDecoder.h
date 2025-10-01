#ifndef _java_net_URLDecoder_h_
#define _java_net_URLDecoder_h_
//$ class java.net.URLDecoder
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace nio {
		namespace charset {
			class Charset;
		}
	}
}

namespace java {
	namespace net {

class $import URLDecoder : public ::java::lang::Object {
	$class(URLDecoder, 0, ::java::lang::Object)
public:
	URLDecoder();
	void init$();
	static $String* decode($String* s);
	static $String* decode($String* s, $String* enc);
	static $String* decode($String* s, ::java::nio::charset::Charset* charset);
	static $String* dfltEncName;
};

	} // net
} // java

#endif // _java_net_URLDecoder_h_