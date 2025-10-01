#ifndef _javax_crypto_CryptoPermissions_h_
#define _javax_crypto_CryptoPermissions_h_
//$ class javax.crypto.CryptoPermissions
//$ extends java.security.PermissionCollection

#include <java/lang/Array.h>
#include <java/security/PermissionCollection.h>

namespace java {
	namespace io {
		class InputStream;
		class ObjectInputStream;
		class ObjectOutputStream;
		class ObjectStreamField;
	}
}
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
namespace java {
	namespace util {
		namespace concurrent {
			class ConcurrentHashMap;
		}
	}
}
namespace javax {
	namespace crypto {
		class CryptoPermission;
	}
}

namespace javax {
	namespace crypto {

class CryptoPermissions : public ::java::security::PermissionCollection {
	$class(CryptoPermissions, 0, ::java::security::PermissionCollection)
public:
	CryptoPermissions();
	void init$();
	virtual void add(::java::security::Permission* permission) override;
	virtual ::java::util::Enumeration* elements() override;
	::javax::crypto::CryptoPermissions* getMinimum(::javax::crypto::CryptoPermissions* other);
	$Array<::javax::crypto::CryptoPermission>* getMinimum(::java::security::PermissionCollection* thisPc, ::java::security::PermissionCollection* thatPc);
	$Array<::javax::crypto::CryptoPermission>* getMinimum(int32_t maxKeySize, ::java::security::PermissionCollection* pc);
	::java::security::PermissionCollection* getPermissionCollection($String* alg);
	::java::security::PermissionCollection* getPermissionCollection(::javax::crypto::CryptoPermission* cryptoPerm);
	virtual bool implies(::java::security::Permission* permission) override;
	bool isEmpty();
	void load(::java::io::InputStream* in);
	void readObject(::java::io::ObjectInputStream* s);
	void writeObject(::java::io::ObjectOutputStream* s);
	static const int64_t serialVersionUID = (int64_t)0x44A5AA7102EBC8A7;
	static $Array<::java::io::ObjectStreamField>* serialPersistentFields;
	::java::util::concurrent::ConcurrentHashMap* perms = nullptr;
};

	} // crypto
} // javax

#endif // _javax_crypto_CryptoPermissions_h_