#ifndef _java_util_ServiceConfigurationError_h_
#define _java_util_ServiceConfigurationError_h_
//$ class java.util.ServiceConfigurationError
//$ extends java.lang.Error

#include <java/lang/Error.h>

namespace java {
	namespace lang {
		class Throwable;
	}
}

namespace java {
	namespace util {

class $import ServiceConfigurationError : public ::java::lang::Error {
	$class(ServiceConfigurationError, $NO_CLASS_INIT, ::java::lang::Error)
public:
	ServiceConfigurationError();
	void init$($String* msg);
	void init$($String* msg, $Throwable* cause);
	static const int64_t serialVersionUID = (int64_t)0x0000436C61726121;
	ServiceConfigurationError(const ServiceConfigurationError& e);
	virtual void throw$() override;
	inline ServiceConfigurationError* operator ->() {
		return (ServiceConfigurationError*)throwing$;
	}
};

	} // util
} // java

#endif // _java_util_ServiceConfigurationError_h_