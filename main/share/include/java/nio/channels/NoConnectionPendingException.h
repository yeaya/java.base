#ifndef _java_nio_channels_NoConnectionPendingException_h_
#define _java_nio_channels_NoConnectionPendingException_h_
//$ class java.nio.channels.NoConnectionPendingException
//$ extends java.lang.IllegalStateException

#include <java/lang/IllegalStateException.h>

namespace java {
	namespace nio {
		namespace channels {

class $import NoConnectionPendingException : public ::java::lang::IllegalStateException {
	$class(NoConnectionPendingException, $NO_CLASS_INIT, ::java::lang::IllegalStateException)
public:
	NoConnectionPendingException();
	void init$();
	static const int64_t serialVersionUID = (int64_t)0x8CDCB18F8040AB69;
	NoConnectionPendingException(const NoConnectionPendingException& e);
	NoConnectionPendingException wrapper$();
	virtual void throwWrapper$() override;
};

		} // channels
	} // nio
} // java

#endif // _java_nio_channels_NoConnectionPendingException_h_