#ifndef _java_security_KeyStoreSpi_h_
#define _java_security_KeyStoreSpi_h_
//$ class java.security.KeyStoreSpi
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace io {
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

namespace java {
	namespace security {

class $export KeyStoreSpi : public ::java::lang::Object {
	$class(KeyStoreSpi, $NO_CLASS_INIT, ::java::lang::Object)
public:
	KeyStoreSpi();
	void init$();
	virtual ::java::util::Enumeration* engineAliases() {return nullptr;}
	virtual bool engineContainsAlias($String* alias) {return false;}
	virtual void engineDeleteEntry($String* alias) {}
	virtual bool engineEntryInstanceOf($String* alias, $Class* entryClass);
	virtual ::java::security::cert::Certificate* engineGetCertificate($String* alias) {return nullptr;}
	virtual $String* engineGetCertificateAlias(::java::security::cert::Certificate* cert) {return nullptr;}
	virtual $Array<::java::security::cert::Certificate>* engineGetCertificateChain($String* alias) {return nullptr;}
	virtual ::java::util::Date* engineGetCreationDate($String* alias) {return nullptr;}
	virtual ::java::security::KeyStore$Entry* engineGetEntry($String* alias, ::java::security::KeyStore$ProtectionParameter* protParam);
	virtual ::java::security::Key* engineGetKey($String* alias, $chars* password) {return nullptr;}
	virtual bool engineIsCertificateEntry($String* alias) {return false;}
	virtual bool engineIsKeyEntry($String* alias) {return false;}
	virtual void engineLoad(::java::io::InputStream* stream, $chars* password) {}
	virtual void engineLoad(::java::security::KeyStore$LoadStoreParameter* param);
	virtual void engineLoad(::java::io::InputStream* stream, ::java::security::KeyStore$LoadStoreParameter* param);
	virtual bool engineProbe(::java::io::InputStream* stream);
	virtual void engineSetCertificateEntry($String* alias, ::java::security::cert::Certificate* cert) {}
	virtual void engineSetEntry($String* alias, ::java::security::KeyStore$Entry* entry, ::java::security::KeyStore$ProtectionParameter* protParam);
	virtual void engineSetKeyEntry($String* alias, ::java::security::Key* key, $chars* password, $Array<::java::security::cert::Certificate>* chain) {}
	virtual void engineSetKeyEntry($String* alias, $bytes* key, $Array<::java::security::cert::Certificate>* chain) {}
	virtual int32_t engineSize() {return 0;}
	virtual void engineStore(::java::io::OutputStream* stream, $chars* password) {}
	virtual void engineStore(::java::security::KeyStore$LoadStoreParameter* param);
};

	} // security
} // java

#endif // _java_security_KeyStoreSpi_h_