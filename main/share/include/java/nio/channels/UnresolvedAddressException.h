#ifndef _java_nio_channels_UnresolvedAddressException_h_
#define _java_nio_channels_UnresolvedAddressException_h_
//$ class java.nio.channels.UnresolvedAddressException
//$ extends java.lang.IllegalArgumentException

#include <java/lang/IllegalArgumentException.h>

namespace java {
	namespace nio {
		namespace channels {

class $import UnresolvedAddressException : public ::java::lang::IllegalArgumentException {
	$class(UnresolvedAddressException, $NO_CLASS_INIT, ::java::lang::IllegalArgumentException)
public:
	UnresolvedAddressException();
	void init$();
	static const int64_t serialVersionUID = (int64_t)0x552ADBC7D85EE324;
	UnresolvedAddressException(const UnresolvedAddressException& e);
	UnresolvedAddressException wrapper$();
	virtual void throwWrapper$() override;
};

		} // channels
	} // nio
} // java

#endif // _java_nio_channels_UnresolvedAddressException_h_