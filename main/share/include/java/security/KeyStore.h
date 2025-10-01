#ifndef _java_security_KeyStore_h_
#define _java_security_KeyStore_h_
//$ class java.security.KeyStore
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("KEYSTORE_TYPE")
#undef KEYSTORE_TYPE

namespace java {
	namespace io {
		class File;
		class InputStream;
		class OutputStream;
	}
}
namespace java {
	namespace security {
		class Key;
		class KeyStore$Entry;
		class KeyStore$LoadStoreParameter;
		class KeyStore$ProtectionParameter;
		class KeyStoreSpi;
		class Provider;
	}
}
namespace java {
	namespace security {
		namespace cert {
			class Certificate;
		}
	}
}
namespace java {
	namespace util {
		class Date;
		class Enumeration;
	}
}
namespace sun {
	namespace security {
		namespace util {
			class Debug;
		}
	}
}

namespace java {
	namespace security {

class $import KeyStore : public ::java::lang::Object {
	$class(KeyStore, 0, ::java::lang::Object)
public:
	KeyStore();
	void init$(::java::security::KeyStoreSpi* keyStoreSpi, ::java::security::Provider* provider, $String* type);
	::java::util::Enumeration* aliases();
	bool containsAlias($String* alias);
	void deleteEntry($String* alias);
	bool entryInstanceOf($String* alias, $Class* entryClass);
	::java::security::cert::Certificate* getCertificate($String* alias);
	$String* getCertificateAlias(::java::security::cert::Certificate* cert);
	$Array<::java::security::cert::Certificate>* getCertificateChain($String* alias);
	::java::util::Date* getCreationDate($String* alias);
	static $String* getDefaultType();
	::java::security::KeyStore$Entry* getEntry($String* alias, ::java::security::KeyStore$ProtectionParameter* protParam);
	static ::java::security::KeyStore* getInstance($String* type);
	static ::java::security::KeyStore* getInstance($String* type, $String* provider);
	static ::java::security::KeyStore* getInstance($String* type, ::java::security::Provider* provider);
	static ::java::security::KeyStore* getInstance(::java::io::File* file, $chars* password);
	static ::java::security::KeyStore* getInstance(::java::io::File* file, ::java::security::KeyStore$LoadStoreParameter* param);
	static ::java::security::KeyStore* getInstance(::java::io::File* file, $chars* password, ::java::security::KeyStore$LoadStoreParameter* param, bool hasPassword);
	::java::security::Key* getKey($String* alias, $chars* password);
	::java::security::Provider* getProvider();
	$String* getProviderName();
	$String* getType();
	bool isCertificateEntry($String* alias);
	bool isKeyEntry($String* alias);
	void load(::java::io::InputStream* stream, $chars* password);
	void load(::java::security::KeyStore$LoadStoreParameter* param);
	void setCertificateEntry($String* alias, ::java::security::cert::Certificate* cert);
	void setEntry($String* alias, ::java::security::KeyStore$Entry* entry, ::java::security::KeyStore$ProtectionParameter* protParam);
	void setKeyEntry($String* alias, ::java::security::Key* key, $chars* password, $Array<::java::security::cert::Certificate>* chain);
	void setKeyEntry($String* alias, $bytes* key, $Array<::java::security::cert::Certificate>* chain);
	int32_t size();
	void store(::java::io::OutputStream* stream, $chars* password);
	void store(::java::security::KeyStore$LoadStoreParameter* param);
	static ::sun::security::util::Debug* kdebug;
	static ::sun::security::util::Debug* pdebug;
	static bool skipDebug;
	static $String* KEYSTORE_TYPE;
	$String* type = nullptr;
	::java::security::Provider* provider = nullptr;
	::java::security::KeyStoreSpi* keyStoreSpi = nullptr;
	bool initialized = false;
};

	} // security
} // java

#pragma pop_macro("KEYSTORE_TYPE")

#endif // _java_security_KeyStore_h_