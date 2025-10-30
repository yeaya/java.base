#ifndef _java_nio_channels_AcceptPendingException_h_
#define _java_nio_channels_AcceptPendingException_h_
//$ class java.nio.channels.AcceptPendingException
//$ extends java.lang.IllegalStateException

#include <java/lang/IllegalStateException.h>

namespace java {
	namespace nio {
		namespace channels {

class $import AcceptPendingException : public ::java::lang::IllegalStateException {
	$class(AcceptPendingException, $NO_CLASS_INIT, ::java::lang::IllegalStateException)
public:
	AcceptPendingException();
	void init$();
	static const int64_t serialVersionUID = (int64_t)0x25C4244AABB2AFE5;
	AcceptPendingException(const AcceptPendingException& e);
	virtual void throw$() override;
	inline AcceptPendingException* operator ->() {
		return (AcceptPendingException*)throwing$;
	}
};

		} // channels
	} // nio
} // java

#endif // _java_nio_channels_AcceptPendingException_h_