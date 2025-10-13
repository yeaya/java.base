#ifndef _sun_security_tools_keytool_Main_h_
#define _sun_security_tools_keytool_Main_h_
//$ class sun.security.tools.keytool.Main
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("CRLF")
#undef CRLF
#pragma push_macro("DISABLED_CHECK")
#undef DISABLED_CHECK
#pragma push_macro("LEGACY_CHECK")
#undef LEGACY_CHECK
#pragma push_macro("NONE")
#undef NONE
#pragma push_macro("P11KEYSTORE")
#undef P11KEYSTORE
#pragma push_macro("P12KEYSTORE")
#undef P12KEYSTORE
#pragma push_macro("SIG_PRIMITIVE_SET")
#undef SIG_PRIMITIVE_SET

namespace java {
	namespace io {
		class BufferedReader;
		class File;
		class InputStream;
		class PrintStream;
	}
}
namespace java {
	namespace lang {
		class Boolean;
	}
}
namespace java {
	namespace security {
		class Key;
		class KeyStore;
		class PrivateKey;
		class PublicKey;
	}
}
namespace java {
	namespace security {
		namespace cert {
			class CRL;
			class Certificate;
			class X509Certificate;
		}
	}
}
namespace java {
	namespace text {
		class Collator;
	}
}
namespace java {
	namespace util {
		class Collection;
		class Date;
		class Hashtable;
		class List;
		class ResourceBundle;
		class Set;
		class Vector;
	}
}
namespace java {
	namespace util {
		namespace function {
			class BiFunction;
		}
	}
}
namespace sun {
	namespace security {
		namespace pkcs10 {
			class PKCS10;
		}
	}
}
namespace sun {
	namespace security {
		namespace tools {
			namespace keytool {
				class Main$Command;
				class Pair;
			}
		}
	}
}
namespace sun {
	namespace security {
		namespace util {
			class DisabledAlgorithmConstraints;
			class KnownOIDs;
			class ObjectIdentifier;
		}
	}
}
namespace sun {
	namespace security {
		namespace x509 {
			class CertificateExtensions;
			class Extension;
			class GeneralName;
			class KeyIdentifier;
			class X500Name;
		}
	}
}

namespace sun {
	namespace security {
		namespace tools {
			namespace keytool {

class $export Main : public ::java::lang::Object {
	$class(Main, 0, ::java::lang::Object)
public:
	Main();
	void init$();
	bool addTrustedCert($String* alias, ::java::io::InputStream* in);
	bool buildChain(::sun::security::tools::keytool::Pair* certToVerify, ::java::util::Vector* chain, ::java::util::Hashtable* certs);
	void checkWeak($String* label, $String* sigAlg, ::java::security::Key* key);
	void checkWeak($String* label, $Array<::java::security::cert::Certificate>* certs);
	void checkWeak($String* label, ::java::security::cert::Certificate* cert);
	void checkWeak($String* label, ::sun::security::pkcs10::PKCS10* p10);
	void checkWeak($String* label, ::java::security::cert::CRL* crl, ::java::security::Key* key);
	::sun::security::x509::GeneralName* createGeneralName($String* t, $String* v, int32_t exttype);
	::sun::security::x509::CertificateExtensions* createV3Extensions(::sun::security::x509::CertificateExtensions* requestedEx, ::sun::security::x509::CertificateExtensions* existingEx, ::java::util::List* extstrs, ::java::security::PublicKey* pkey, ::sun::security::x509::KeyIdentifier* aSubjectKeyId);
	void doCertReq($String* alias, $String* sigAlgName, ::java::io::PrintStream* out);
	void doChangeKeyPasswd($String* alias);
	void doChangeStorePasswd();
	void doCloneEntry($String* orig, $String* dest, bool changePassword);
	void doCommands(::java::io::PrintStream* out);
	void doDeleteEntry($String* alias);
	void doExportCert($String* alias, ::java::io::PrintStream* out);
	void doGenCRL(::java::io::PrintStream* out);
	void doGenCert($String* alias, $String* sigAlgName, ::java::io::InputStream* in, ::java::io::PrintStream* out);
	void doGenKeyPair($String* alias, $String* dname, $String* keyAlgName, int32_t keysize, $String* groupName, $String* sigAlgName, $String* signerAlias);
	void doGenSecretKey($String* alias, $String* keyAlgName, int32_t keysize);
	void doImportIdentityDatabase(::java::io::InputStream* in);
	void doImportKeyStore(::java::security::KeyStore* srcKS);
	void doImportKeyStoreAll(::java::security::KeyStore* srckeystore);
	int32_t doImportKeyStoreSingle(::java::security::KeyStore* srckeystore, $String* alias);
	void doPrintCRL($String* src, ::java::io::PrintStream* out);
	void doPrintCert(::java::io::PrintStream* out);
	void doPrintCertReq(::java::io::InputStream* in, ::java::io::PrintStream* out);
	void doPrintEntries(::java::io::PrintStream* out);
	void doPrintEntry($String* label, $String* alias, ::java::io::PrintStream* out);
	void doSelfCert($String* alias, $String* dname, $String* sigAlgName);
	void doShowInfo();
	void dumpCert(::java::security::cert::Certificate* cert, ::java::io::PrintStream* out);
	$String* ecGroupNameForSize(int32_t size);
	void errorNeedArgument($String* flag);
	$Array<::java::security::cert::Certificate>* establishCertChain(::java::security::cert::Certificate* userCert, ::java::security::cert::Certificate* certToVerify);
	::sun::security::util::ObjectIdentifier* findOidForExtName($String* type);
	$String* fullDisplayAlgName(::java::security::Key* key);
	::java::security::cert::Certificate* generateCertificate(::java::io::InputStream* in);
	::java::util::Collection* generateCertificates(::java::io::InputStream* in);
	$String* getAlias($String* prompt);
	$String* getCertFingerPrint($String* mdAlg, ::java::security::cert::Certificate* cert);
	static $String* getCompatibleSigAlgName(::java::security::PrivateKey* key);
	$chars* getKeyPasswd($String* alias, $String* otherAlias, $chars* otherKeyPass);
	$chars* getNewPasswd($String* prompt, $chars* oldPasswd);
	$chars* getPass($String* modifier, $String* arg);
	static ::sun::security::tools::keytool::Pair* getSigner(::java::security::cert::Certificate* cert, ::java::security::KeyStore* ks);
	static ::java::util::Date* getStartDate($String* s);
	::sun::security::x509::X500Name* getX500Name();
	$String* getYesNoReply($String* prompt);
	bool inplaceImportCheck();
	$String* inputString(::java::io::BufferedReader* in, $String* prompt, $String* defaultValue);
	$String* inputStringFromStdin($String* prompt);
	bool installReply($String* alias, ::java::io::InputStream* in);
	bool isKeyStoreRelated(::sun::security::tools::keytool::Main$Command* cmd);
	bool isTrustedCert(::java::security::cert::Certificate* cert);
	void keystorecerts2Hashtable(::java::security::KeyStore* ks, ::java::util::Hashtable* hash);
	static ::java::lang::Boolean* lambda$oneOf$1($String* a, $String* b);
	static ::java::lang::Boolean* lambda$oneOf$2($String* a, $String* b);
	static ::java::lang::Boolean* lambda$oneOf$3($String* a, $String* b);
	static bool lambda$parseArgs$0($String* x);
	static ::java::util::Collection* loadCRLs($String* src);
	::java::security::KeyStore* loadSourceKeyStore();
	static void main($StringArray* args);
	static $String* oneInMany($String* label, int32_t i, int32_t num);
	static int32_t oneOf($String* s, $Array<::sun::security::util::KnownOIDs>* list);
	static int32_t oneOf($String* s, $StringArray* list);
	static int32_t oneOfMatch(::java::util::function::BiFunction* matcher, $String* s, $StringArray* list);
	$StringArray* parseArgs($StringArray* args);
	void printCRL(::java::security::cert::CRL* crl, ::java::io::PrintStream* out);
	void printCertFromStream(::java::io::InputStream* in, ::java::io::PrintStream* out);
	static void printExtensions($String* title, ::sun::security::x509::CertificateExtensions* exts, ::java::io::PrintStream* out);
	void printNoIntegrityWarning();
	void printWeakWarnings(bool newLine);
	void printX509Cert(::java::security::cert::X509Certificate* cert, ::java::io::PrintStream* out);
	$chars* promptForCredential();
	$chars* promptForKeyPass($String* alias, $String* orig, $chars* origPass);
	static ::java::util::List* readCRLsFromCert(::java::security::cert::X509Certificate* cert);
	::sun::security::tools::keytool::Pair* recoverEntry(::java::security::KeyStore* ks, $String* alias, $chars* pstore, $chars* pkey);
	::sun::security::tools::keytool::Pair* recoverKey($String* alias, $chars* storePass, $chars* keyPass);
	void run($StringArray* args, ::java::io::PrintStream* out);
	static void setExt(::sun::security::x509::CertificateExtensions* result, ::sun::security::x509::Extension* ex);
	void tinyHelp();
	void usage();
	$Array<::java::security::cert::Certificate>* validateReply($String* alias, ::java::security::cert::Certificate* userCert, $Array<::java::security::cert::Certificate>* replyCerts);
	static $String* verifyCRL(::java::security::KeyStore* ks, ::java::security::cert::CRL* crl);
	$String* withWeak($String* alg);
	$String* withWeak(::java::security::Key* key);
	static $bytes* CRLF;
	bool debug = false;
	::sun::security::tools::keytool::Main$Command* command = nullptr;
	$String* sigAlgName = nullptr;
	$String* keyAlgName = nullptr;
	bool verbose = false;
	int32_t keysize = 0;
	$String* groupName = nullptr;
	bool rfc = false;
	int64_t validity = 0;
	$String* alias = nullptr;
	$String* dname = nullptr;
	$String* dest = nullptr;
	$String* filename = nullptr;
	$String* infilename = nullptr;
	$String* outfilename = nullptr;
	$String* srcksfname = nullptr;
	::java::util::Set* providers = nullptr;
	::java::util::Set* providerClasses = nullptr;
	$String* storetype = nullptr;
	$String* srcProviderName = nullptr;
	$String* providerName = nullptr;
	$String* pathlist = nullptr;
	$chars* storePass = nullptr;
	$chars* storePassNew = nullptr;
	$chars* keyPass = nullptr;
	$chars* keyPassNew = nullptr;
	$chars* newPass = nullptr;
	$chars* destKeyPass = nullptr;
	$chars* srckeyPass = nullptr;
	$String* ksfname = nullptr;
	::java::io::File* ksfile = nullptr;
	::java::io::InputStream* ksStream = nullptr;
	$String* sslserver = nullptr;
	$String* jarfile = nullptr;
	::java::security::KeyStore* keyStore = nullptr;
	bool token = false;
	bool nullStream = false;
	bool kssave = false;
	bool noprompt = false;
	bool trustcacerts = false;
	bool protectedPath = false;
	bool srcprotectedPath = false;
	bool cacerts = false;
	bool nowarn = false;
	::java::security::KeyStore* caks = nullptr;
	$chars* srcstorePass = nullptr;
	$String* srcstoretype = nullptr;
	::java::util::Set* passwords = nullptr;
	$String* startDate = nullptr;
	$String* signerAlias = nullptr;
	$chars* signerKeyPass = nullptr;
	bool tlsInfo = false;
	::java::util::List* ids = nullptr;
	::java::util::List* v3ext = nullptr;
	bool inplaceImport = false;
	$String* inplaceBackupName = nullptr;
	::java::util::List* weakWarnings = nullptr;
	static ::sun::security::util::DisabledAlgorithmConstraints* DISABLED_CHECK;
	static ::sun::security::util::DisabledAlgorithmConstraints* LEGACY_CHECK;
	static ::java::util::Set* SIG_PRIMITIVE_SET;
	bool isPasswordlessKeyStore = false;
	static $String* NONE;
	static $String* P11KEYSTORE;
	static $String* P12KEYSTORE;
	static $String* keyAlias;
	static ::java::util::ResourceBundle* rb;
	static ::java::text::Collator* collator;
	static $StringArray* extSupported;
};

			} // keytool
		} // tools
	} // security
} // sun

#pragma pop_macro("CRLF")
#pragma pop_macro("DISABLED_CHECK")
#pragma pop_macro("LEGACY_CHECK")
#pragma pop_macro("NONE")
#pragma pop_macro("P11KEYSTORE")
#pragma pop_macro("P12KEYSTORE")
#pragma pop_macro("SIG_PRIMITIVE_SET")

#endif // _sun_security_tools_keytool_Main_h_