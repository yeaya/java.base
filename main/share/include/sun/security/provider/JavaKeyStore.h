#ifndef _sun_security_provider_JavaKeyStore_h_
#define _sun_security_provider_JavaKeyStore_h_
//$ class sun.security.provider.JavaKeyStore
//$ extends java.security.KeyStoreSpi

#include <java/lang/Array.h>
#include <java/security/KeyStoreSpi.h>

#pragma push_macro("VERSION_2")
#undef VERSION_2
#pragma push_macro("VERSION_1")
#undef VERSION_1
#pragma push_macro("MAGIC")
#undef MAGIC

namespace java {
	namespace io {
		class InputStream;
		class OutputStream;
	}
}
namespace java {
	namespace security {
		class Key;
		class MessageDigest;
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
		class Hashtable;
	}
}
namespace sun {
	namespace security {
		namespace util {
			class Debug;
		}
	}
}

namespace sun {
	namespace security {
		namespace provider {

class $import JavaKeyStore : public ::java::security::KeyStoreSpi {
	$class(JavaKeyStore, 0, ::java::security::KeyStoreSpi)
public:
	JavaKeyStore();
	using ::java::security::KeyStoreSpi::engineStore;
	using ::java::security::KeyStoreSpi::engineLoad;
	void init$();
	virtual $String* convertAlias($String* alias) {return nullptr;}
	$bytes* convertToBytes($chars* password);
	virtual ::java::util::Enumeration* engineAliases() override;
	virtual bool engineContainsAlias($String* alias) override;
	virtual void engineDeleteEntry($String* alias) override;
	virtual ::java::security::cert::Certificate* engineGetCertificate($String* alias) override;
	virtual $String* engineGetCertificateAlias(::java::security::cert::Certificate* cert) override;
	virtual $Array<::java::security::cert::Certificate>* engineGetCertificateChain($String* alias) override;
	virtual ::java::util::Date* engineGetCreationDate($String* alias) override;
	virtual ::java::security::Key* engineGetKey($String* alias, $chars* password) override;
	virtual bool engineIsCertificateEntry($String* alias) override;
	virtual bool engineIsKeyEntry($String* alias) override;
	virtual void engineLoad(::java::io::InputStream* stream, $chars* password) override;
	virtual void engineSetCertificateEntry($String* alias, ::java::security::cert::Certificate* cert) override;
	virtual void engineSetKeyEntry($String* alias, ::java::security::Key* key, $chars* password, $Array<::java::security::cert::Certificate>* chain) override;
	virtual void engineSetKeyEntry($String* alias, $bytes* key, $Array<::java::security::cert::Certificate>* chain) override;
	virtual int32_t engineSize() override;
	virtual void engineStore(::java::io::OutputStream* stream, $chars* password) override;
	::java::security::MessageDigest* getPreKeyedHash($chars* password);
	static ::sun::security::util::Debug* debug;
	static const int32_t MAGIC = 0xFEEDFEED;
	static const int32_t VERSION_1 = 1;
	static const int32_t VERSION_2 = 2;
	::java::util::Hashtable* entries = nullptr;
};

		} // provider
	} // security
} // sun

#pragma pop_macro("VERSION_2")
#pragma pop_macro("VERSION_1")
#pragma pop_macro("MAGIC")

#endif // _sun_security_provider_JavaKeyStore_h_