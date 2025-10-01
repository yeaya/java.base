#ifndef _sun_net_www_http_Hurryable_h_
#define _sun_net_www_http_Hurryable_h_
//$ interface sun.net.www.http.Hurryable
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace sun {
	namespace net {
		namespace www {
			namespace http {

class Hurryable : public ::java::lang::Object {
	$interface(Hurryable, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual bool hurry() {return false;}
};

			} // http
		} // www
	} // net
} // sun

#endif // _sun_net_www_http_Hurryable_h_