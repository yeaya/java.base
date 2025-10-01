#ifndef _sun_security_x509_AttributeNameEnumeration_h_
#define _sun_security_x509_AttributeNameEnumeration_h_
//$ class sun.security.x509.AttributeNameEnumeration
//$ extends java.util.Vector

#include <java/util/Vector.h>

namespace sun {
	namespace security {
		namespace x509 {

class $export AttributeNameEnumeration : public ::java::util::Vector {
	$class(AttributeNameEnumeration, $NO_CLASS_INIT, ::java::util::Vector)
public:
	AttributeNameEnumeration();
	void init$();
	using ::java::util::Vector::toArray;
	static const int64_t serialVersionUID = (int64_t)0xABCC1F3F69C33582;
};

		} // x509
	} // security
} // sun

#endif // _sun_security_x509_AttributeNameEnumeration_h_