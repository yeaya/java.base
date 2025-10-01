#ifndef _sun_security_util_ObjectIdentifier$HugeOidNotSupportedByOldJDK_h_
#define _sun_security_util_ObjectIdentifier$HugeOidNotSupportedByOldJDK_h_
//$ class sun.security.util.ObjectIdentifier$HugeOidNotSupportedByOldJDK
//$ extends java.io.Serializable

#include <java/io/Serializable.h>

namespace sun {
	namespace security {
		namespace util {

class $export ObjectIdentifier$HugeOidNotSupportedByOldJDK : public ::java::io::Serializable {
	$class(ObjectIdentifier$HugeOidNotSupportedByOldJDK, 0, ::java::io::Serializable)
public:
	ObjectIdentifier$HugeOidNotSupportedByOldJDK();
	void init$();
	static const int64_t serialVersionUID = (int64_t)1;
	static ::sun::security::util::ObjectIdentifier$HugeOidNotSupportedByOldJDK* theOne;
};

		} // util
	} // security
} // sun

#endif // _sun_security_util_ObjectIdentifier$HugeOidNotSupportedByOldJDK_h_