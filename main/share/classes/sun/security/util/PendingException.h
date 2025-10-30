#ifndef _sun_security_util_PendingException_h_
#define _sun_security_util_PendingException_h_
//$ class sun.security.util.PendingException
//$ extends java.lang.RuntimeException

#include <java/lang/RuntimeException.h>

namespace sun {
	namespace security {
		namespace util {

class $export PendingException : public ::java::lang::RuntimeException {
	$class(PendingException, $NO_CLASS_INIT, ::java::lang::RuntimeException)
public:
	PendingException();
	void init$();
	void init$($String* msg);
	static const int64_t serialVersionUID = (int64_t)0xB7CF5C9561CF1960;
	PendingException(const PendingException& e);
	virtual void throw$() override;
	inline PendingException* operator ->() {
		return (PendingException*)throwing$;
	}
};

		} // util
	} // security
} // sun

#endif // _sun_security_util_PendingException_h_