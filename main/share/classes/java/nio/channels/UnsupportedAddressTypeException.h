#ifndef _java_nio_channels_UnsupportedAddressTypeException_h_
#define _java_nio_channels_UnsupportedAddressTypeException_h_
//$ class java.nio.channels.UnsupportedAddressTypeException
//$ extends java.lang.IllegalArgumentException

#include <java/lang/IllegalArgumentException.h>

namespace java {
	namespace nio {
		namespace channels {

class $export UnsupportedAddressTypeException : public ::java::lang::IllegalArgumentException {
	$class(UnsupportedAddressTypeException, $NO_CLASS_INIT, ::java::lang::IllegalArgumentException)
public:
	UnsupportedAddressTypeException();
	void init$();
	static const int64_t serialVersionUID = (int64_t)0xd6dc9b2bacea3273;
	UnsupportedAddressTypeException(const UnsupportedAddressTypeException& e);
	virtual void throw$() override;
	inline UnsupportedAddressTypeException* operator ->() const {
		return (UnsupportedAddressTypeException*)throwing$;
	}
	inline operator UnsupportedAddressTypeException*() const {
		return (UnsupportedAddressTypeException*)throwing$;
	}
};

		} // channels
	} // nio
} // java

#endif // _java_nio_channels_UnsupportedAddressTypeException_h_