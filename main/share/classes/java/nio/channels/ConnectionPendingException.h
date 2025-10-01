#ifndef _java_nio_channels_ConnectionPendingException_h_
#define _java_nio_channels_ConnectionPendingException_h_
//$ class java.nio.channels.ConnectionPendingException
//$ extends java.lang.IllegalStateException

#include <java/lang/IllegalStateException.h>

namespace java {
	namespace nio {
		namespace channels {

class $export ConnectionPendingException : public ::java::lang::IllegalStateException {
	$class(ConnectionPendingException, $NO_CLASS_INIT, ::java::lang::IllegalStateException)
public:
	ConnectionPendingException();
	void init$();
	static const int64_t serialVersionUID = (int64_t)0x1BDF3F203B969F6F;
	ConnectionPendingException(const ConnectionPendingException& e);
	ConnectionPendingException wrapper$();
	virtual void throwWrapper$() override;
};

		} // channels
	} // nio
} // java

#endif // _java_nio_channels_ConnectionPendingException_h_