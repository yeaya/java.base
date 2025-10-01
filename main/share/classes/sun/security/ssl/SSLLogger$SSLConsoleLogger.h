#ifndef _sun_security_ssl_SSLLogger$SSLConsoleLogger_h_
#define _sun_security_ssl_SSLLogger$SSLConsoleLogger_h_
//$ class sun.security.ssl.SSLLogger$SSLConsoleLogger
//$ extends java.lang.System$Logger

#include <java/lang/Array.h>
#include <java/lang/System$Logger.h>

namespace java {
	namespace lang {
		class System$Logger$Level;
		class Throwable;
	}
}
namespace java {
	namespace util {
		class ResourceBundle;
	}
}

namespace sun {
	namespace security {
		namespace ssl {

class SSLLogger$SSLConsoleLogger : public ::java::lang::System$Logger {
	$class(SSLLogger$SSLConsoleLogger, $NO_CLASS_INIT, ::java::lang::System$Logger)
public:
	SSLLogger$SSLConsoleLogger();
	void init$($String* loggerName, $String* options);
	virtual $String* getName() override;
	virtual bool isLoggable(::java::lang::System$Logger$Level* level) override;
	using ::java::lang::System$Logger::log;
	virtual void log(::java::lang::System$Logger$Level* level, ::java::util::ResourceBundle* rb, $String* message, $Throwable* thrwbl) override;
	virtual void log(::java::lang::System$Logger$Level* level, ::java::util::ResourceBundle* rb, $String* message, $ObjectArray* params) override;
	$String* loggerName = nullptr;
	bool useCompactFormat = false;
};

		} // ssl
	} // security
} // sun

#endif // _sun_security_ssl_SSLLogger$SSLConsoleLogger_h_