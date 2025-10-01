#ifndef _javax_crypto_CryptoAllPermissionCollection_h_
#define _javax_crypto_CryptoAllPermissionCollection_h_
//$ class javax.crypto.CryptoAllPermissionCollection
//$ extends java.security.PermissionCollection

#include <java/security/PermissionCollection.h>

namespace java {
	namespace security {
		class Permission;
	}
}
namespace java {
	namespace util {
		class Enumeration;
	}
}

namespace javax {
	namespace crypto {

class CryptoAllPermissionCollection : public ::java::security::PermissionCollection {
	$class(CryptoAllPermissionCollection, $NO_CLASS_INIT, ::java::security::PermissionCollection)
public:
	CryptoAllPermissionCollection();
	void init$();
	virtual void add(::java::security::Permission* permission) override;
	virtual ::java::util::Enumeration* elements() override;
	virtual bool implies(::java::security::Permission* permission) override;
	static const int64_t serialVersionUID = (int64_t)0x6763FD70892731C8;
	bool all_allowed = false;
};

	} // crypto
} // javax

#endif // _javax_crypto_CryptoAllPermissionCollection_h_