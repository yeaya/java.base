#ifndef _javax_crypto_CryptoAllPermission_h_
#define _javax_crypto_CryptoAllPermission_h_
//$ class javax.crypto.CryptoAllPermission
//$ extends javax.crypto.CryptoPermission

#include <javax/crypto/CryptoPermission.h>

#pragma push_macro("ALG_NAME")
#undef ALG_NAME
#pragma push_macro("INSTANCE")
#undef INSTANCE

namespace java {
	namespace security {
		class Permission;
		class PermissionCollection;
	}
}

namespace javax {
	namespace crypto {

class CryptoAllPermission : public ::javax::crypto::CryptoPermission {
	$class(CryptoAllPermission, 0, ::javax::crypto::CryptoPermission)
public:
	CryptoAllPermission();
	void init$();
	virtual bool equals(Object$* obj) override;
	virtual int32_t hashCode() override;
	virtual bool implies(::java::security::Permission* p) override;
	virtual ::java::security::PermissionCollection* newPermissionCollection() override;
	static const int64_t serialVersionUID = (int64_t)0xB9B020B17247EA50;
	static $String* ALG_NAME;
	static ::javax::crypto::CryptoAllPermission* INSTANCE;
};

	} // crypto
} // javax

#pragma pop_macro("ALG_NAME")
#pragma pop_macro("INSTANCE")

#endif // _javax_crypto_CryptoAllPermission_h_