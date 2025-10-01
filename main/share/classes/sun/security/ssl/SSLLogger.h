#ifndef _sun_security_ssl_SSLLogger_h_
#define _sun_security_ssl_SSLLogger_h_
//$ class sun.security.ssl.SSLLogger
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace lang {
		class System$Logger;
		class System$Logger$Level;
	}
}

namespace sun {
	namespace security {
		namespace ssl {

class SSLLogger : public ::java::lang::Object {
	$class(SSLLogger, 0, ::java::lang::Object)
public:
	SSLLogger();
	void init$();
	static void fine($String* msg, $ObjectArray* params);
	static void finer($String* msg, $ObjectArray* params);
	static void finest($String* msg, $ObjectArray* params);
	static bool hasOption($String* option);
	static void help();
	static void info($String* msg, $ObjectArray* params);
	static bool isOn($String* checkPoints);
	static void log(::java::lang::System$Logger$Level* level, $String* msg, $ObjectArray* params);
	static void severe($String* msg, $ObjectArray* params);
	using ::java::lang::Object::toString;
	static $String* toString($ObjectArray* params);
	static void warning($String* msg, $ObjectArray* params);
	static ::java::lang::System$Logger* logger;
	static $String* property;
	static bool isOn$;
};

		} // ssl
	} // security
} // sun

#endif // _sun_security_ssl_SSLLogger_h_