#ifndef _sun_security_internal_interfaces_TlsMasterSecret_h_
#define _sun_security_internal_interfaces_TlsMasterSecret_h_
//$ interface sun.security.internal.interfaces.TlsMasterSecret
//$ extends javax.crypto.SecretKey

#include <javax/crypto/SecretKey.h>

namespace sun {
	namespace security {
		namespace internal {
			namespace interfaces {

class $import TlsMasterSecret : public ::javax::crypto::SecretKey {
	$interface(TlsMasterSecret, $NO_CLASS_INIT, ::javax::crypto::SecretKey)
public:
	virtual int32_t getMajorVersion() {return 0;}
	virtual int32_t getMinorVersion() {return 0;}
	static const int64_t serialVersionUID = (int64_t)0xF9978A8B51751C73;
};

			} // interfaces
		} // internal
	} // security
} // sun

#endif // _sun_security_internal_interfaces_TlsMasterSecret_h_