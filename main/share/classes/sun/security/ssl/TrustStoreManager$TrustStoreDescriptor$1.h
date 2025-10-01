#ifndef _sun_security_ssl_TrustStoreManager$TrustStoreDescriptor$1_h_
#define _sun_security_ssl_TrustStoreManager$TrustStoreDescriptor$1_h_
//$ class sun.security.ssl.TrustStoreManager$TrustStoreDescriptor$1
//$ extends java.security.PrivilegedAction

#include <java/security/PrivilegedAction.h>

namespace sun {
	namespace security {
		namespace ssl {

class TrustStoreManager$TrustStoreDescriptor$1 : public ::java::security::PrivilegedAction {
	$class(TrustStoreManager$TrustStoreDescriptor$1, $NO_CLASS_INIT, ::java::security::PrivilegedAction)
public:
	TrustStoreManager$TrustStoreDescriptor$1();
	void init$();
	virtual $Object* run() override;
};

		} // ssl
	} // security
} // sun

#endif // _sun_security_ssl_TrustStoreManager$TrustStoreDescriptor$1_h_