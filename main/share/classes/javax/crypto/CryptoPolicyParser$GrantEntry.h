#ifndef _javax_crypto_CryptoPolicyParser$GrantEntry_h_
#define _javax_crypto_CryptoPolicyParser$GrantEntry_h_
//$ class javax.crypto.CryptoPolicyParser$GrantEntry
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace util {
		class Enumeration;
		class Vector;
	}
}
namespace javax {
	namespace crypto {
		class CryptoPolicyParser$CryptoPermissionEntry;
	}
}

namespace javax {
	namespace crypto {

class CryptoPolicyParser$GrantEntry : public ::java::lang::Object {
	$class(CryptoPolicyParser$GrantEntry, $NO_CLASS_INIT, ::java::lang::Object)
public:
	CryptoPolicyParser$GrantEntry();
	void init$();
	virtual void add(::javax::crypto::CryptoPolicyParser$CryptoPermissionEntry* pe);
	virtual bool contains(::javax::crypto::CryptoPolicyParser$CryptoPermissionEntry* pe);
	virtual ::java::util::Enumeration* permissionElements();
	virtual bool remove(::javax::crypto::CryptoPolicyParser$CryptoPermissionEntry* pe);
	::java::util::Vector* permissionEntries = nullptr;
};

	} // crypto
} // javax

#endif // _javax_crypto_CryptoPolicyParser$GrantEntry_h_