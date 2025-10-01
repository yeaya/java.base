#ifndef _javax_crypto_CryptoPermissionCollection_h_
#define _javax_crypto_CryptoPermissionCollection_h_
//$ class javax.crypto.CryptoPermissionCollection
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
		class Vector;
	}
}

namespace javax {
	namespace crypto {

class CryptoPermissionCollection : public ::java::security::PermissionCollection {
	$class(CryptoPermissionCollection, $NO_CLASS_INIT, ::java::security::PermissionCollection)
public:
	CryptoPermissionCollection();
	void init$();
	virtual void add(::java::security::Permission* permission) override;
	virtual ::java::util::Enumeration* elements() override;
	virtual bool implies(::java::security::Permission* permission) override;
	static const int64_t serialVersionUID = (int64_t)0xF8E7CC2912FF7DB5;
	::java::util::Vector* permissions = nullptr;
};

	} // crypto
} // javax

#endif // _javax_crypto_CryptoPermissionCollection_h_