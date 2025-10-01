#ifndef _sun_security_util_PropertyExpander$ExpandException_h_
#define _sun_security_util_PropertyExpander$ExpandException_h_
//$ class sun.security.util.PropertyExpander$ExpandException
//$ extends java.security.GeneralSecurityException

#include <java/security/GeneralSecurityException.h>

namespace sun {
	namespace security {
		namespace util {

class $import PropertyExpander$ExpandException : public ::java::security::GeneralSecurityException {
	$class(PropertyExpander$ExpandException, $NO_CLASS_INIT, ::java::security::GeneralSecurityException)
public:
	PropertyExpander$ExpandException();
	void init$($String* msg);
	static const int64_t serialVersionUID = (int64_t)0x91C887D7ECDE44DA;
	PropertyExpander$ExpandException(const PropertyExpander$ExpandException& e);
	PropertyExpander$ExpandException wrapper$();
	virtual void throwWrapper$() override;
};

		} // util
	} // security
} // sun

#endif // _sun_security_util_PropertyExpander$ExpandException_h_