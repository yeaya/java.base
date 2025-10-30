#ifndef _java_nio_channels_UnsupportedAddressTypeException_h_
#define _java_nio_channels_UnsupportedAddressTypeException_h_
//$ class java.nio.channels.UnsupportedAddressTypeException
//$ extends java.lang.IllegalArgumentException

#include <java/lang/IllegalArgumentException.h>

namespace java {
	namespace nio {
		namespace channels {

class $import UnsupportedAddressTypeException : public ::java::lang::IllegalArgumentException {
	$class(UnsupportedAddressTypeException, $NO_CLASS_INIT, ::java::lang::IllegalArgumentException)
public:
	UnsupportedAddressTypeException();
	void init$();
	static const int64_t serialVersionUID = (int64_t)0xD6DC9B2BACEA3273;
	UnsupportedAddressTypeException(const UnsupportedAddressTypeException& e);
	virtual void throw$() override;
	inline UnsupportedAddressTypeException* operator ->() {
		return (UnsupportedAddressTypeException*)throwing$;
	}
};

		} // channels
	} // nio
} // java

#endif // _java_nio_channels_UnsupportedAddressTypeException_h_