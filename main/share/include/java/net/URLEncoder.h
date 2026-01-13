#ifndef _java_net_URLEncoder_h_
#define _java_net_URLEncoder_h_
//$ class java.net.URLEncoder
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
	namespace util {
		class BitSet;
	}
}

namespace java {
	namespace net {

class $import URLEncoder : public ::java::lang::Object {
	$class(URLEncoder, 0, ::java::lang::Object)
public:
	URLEncoder();
	void init$();
	static $String* encode($String* s);
	static $String* encode($String* s, $String* enc);
	static $String* encode($String* s, ::java::nio::charset::Charset* charset);
	static ::java::util::BitSet* dontNeedEncoding;
	static const int32_t caseDiff = 32; // ('a' - 'A')
	static $String* dfltEncName;
};

	} // net
} // java

#endif // _java_net_URLEncoder_h_