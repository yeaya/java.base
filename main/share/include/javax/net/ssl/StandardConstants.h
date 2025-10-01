#ifndef _javax_net_ssl_StandardConstants_h_
#define _javax_net_ssl_StandardConstants_h_
//$ class javax.net.ssl.StandardConstants
//$ extends java.lang.Object

#include <java/lang/Object.h>

#pragma push_macro("SNI_HOST_NAME")
#undef SNI_HOST_NAME

namespace javax {
	namespace net {
		namespace ssl {

class $import StandardConstants : public ::java::lang::Object {
	$class(StandardConstants, $NO_CLASS_INIT, ::java::lang::Object)
public:
	StandardConstants();
	void init$();
	static const int32_t SNI_HOST_NAME = 0;
};

		} // ssl
	} // net
} // javax

#pragma pop_macro("SNI_HOST_NAME")

#endif // _javax_net_ssl_StandardConstants_h_