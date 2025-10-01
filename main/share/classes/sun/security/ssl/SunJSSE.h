#ifndef _sun_security_ssl_SunJSSE_h_
#define _sun_security_ssl_SunJSSE_h_
//$ class sun.security.ssl.SunJSSE
//$ extends java.security.Provider

#include <java/security/Provider.h>

namespace java {
	namespace lang {
		class Void;
	}
}
namespace java {
	namespace util {
		class HashMap;
		class List;
	}
}

namespace sun {
	namespace security {
		namespace ssl {

class SunJSSE : public ::java::security::Provider {
	$class(SunJSSE, 0, ::java::security::Provider)
public:
	SunJSSE();
	using ::java::security::Provider::getProperty;
	void init$();
	void doRegister();
	::java::lang::Void* lambda$registerAlgorithms$0();
	using ::java::security::Provider::load;
	void ps($String* type, $String* algo, $String* cn, ::java::util::List* a, ::java::util::HashMap* attrs);
	void registerAlgorithms();
	static const int64_t serialVersionUID = (int64_t)0x2CD9C06322EE4A2D;
	static $String* info;
};

		} // ssl
	} // security
} // sun

#endif // _sun_security_ssl_SunJSSE_h_