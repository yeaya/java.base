#ifndef _com_sun_crypto_provider_JceKeyStore_h_
#define _com_sun_crypto_provider_JceKeyStore_h_
//$ class com.sun.crypto.provider.JceKeyStore
//$ extends java.security.KeyStoreSpi

#include <java/lang/Array.h>
#include <java/security/KeyStoreSpi.h>

#pragma push_macro("VERSION_2")
#undef VERSION_2
#pragma push_macro("VERSION_1")
#undef VERSION_1
#pragma push_macro("JCEKS_MAGIC")
#undef JCEKS_MAGIC
#pragma push_macro("JKS_MAGIC")
#undef JKS_MAGIC

namespace java {
	namespace io {
		class InputStream;
		class ObjectInputStream;
		class OutputStream;
	}
}
namespace java {
	namespace lang {
		class Void;
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

namespace com {
	namespace sun {
		namespace crypto {
			namespace provider {

class $export JceKeyStore : public ::java::security::KeyStoreSpi {
	$class(JceKeyStore, 0, ::java::security::KeyStoreSpi)
public:
	JceKeyStore();
	using ::java::security::KeyStoreSpi::engineStore;
	using ::java::security::KeyStoreSpi::engineLoad;
	void init$();
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
	virtual bool engineProbe(::java::io::InputStream* stream) override;
	virtual void engineSetCertificateEntry($String* alias, ::java::security::cert::Certificate* cert) override;
	virtual void engineSetKeyEntry($String* alias, ::java::security::Key* key, $chars* password, $Array<::java::security::cert::Certificate>* chain) override;
	virtual void engineSetKeyEntry($String* alias, $bytes* key, $Array<::java::security::cert::Certificate>* chain) override;
	virtual int32_t engineSize() override;
	virtual void engineStore(::java::io::OutputStream* stream, $chars* password) override;
	::java::security::MessageDigest* getPreKeyedHash($chars* password);
	static ::java::lang::Void* lambda$engineLoad$0(::java::io::ObjectInputStream* ois2, int32_t fullLength);
	static ::sun::security::util::Debug* debug;
	static const int32_t JCEKS_MAGIC = 0xCECECECE;
	static const int32_t JKS_MAGIC = 0xFEEDFEED;
	static const int32_t VERSION_1 = 1;
	static const int32_t VERSION_2 = 2;
	::java::util::Hashtable* entries = nullptr;
};

			} // provider
		} // crypto
	} // sun
} // com

#pragma pop_macro("VERSION_2")
#pragma pop_macro("VERSION_1")
#pragma pop_macro("JCEKS_MAGIC")
#pragma pop_macro("JKS_MAGIC")

#endif // _com_sun_crypto_provider_JceKeyStore_h_