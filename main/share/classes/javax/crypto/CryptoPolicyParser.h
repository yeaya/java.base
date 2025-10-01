#ifndef _javax_crypto_CryptoPolicyParser_h_
#define _javax_crypto_CryptoPolicyParser_h_
//$ class javax.crypto.CryptoPolicyParser
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace io {
		class Reader;
		class StreamTokenizer;
	}
}
namespace java {
	namespace lang {
		class Integer;
	}
}
namespace java {
	namespace security {
		namespace spec {
			class AlgorithmParameterSpec;
		}
	}
}
namespace java {
	namespace util {
		class Hashtable;
		class Vector;
	}
}
namespace javax {
	namespace crypto {
		class CryptoPermission;
		class CryptoPolicyParser$CryptoPermissionEntry;
		class CryptoPolicyParser$GrantEntry;
	}
}

namespace javax {
	namespace crypto {

class CryptoPolicyParser : public ::java::lang::Object {
	$class(CryptoPolicyParser, $NO_CLASS_INIT, ::java::lang::Object)
public:
	CryptoPolicyParser();
	void init$();
	static ::java::security::spec::AlgorithmParameterSpec* getInstance($String* type, $Array<::java::lang::Integer>* params);
	$Array<::javax::crypto::CryptoPermission>* getPermissions();
	bool isConsistent($String* alg, $String* exemptionMechanism, ::java::util::Hashtable* processedPermissions);
	int32_t match();
	$String* match($String* expect);
	::javax::crypto::CryptoPolicyParser$GrantEntry* parseGrantEntry(::java::util::Hashtable* processedPermissions);
	::javax::crypto::CryptoPolicyParser$CryptoPermissionEntry* parsePermissionEntry(::java::util::Hashtable* processedPermissions);
	bool peek($String* expect);
	bool peekAndMatch($String* expect);
	void read(::java::io::Reader* policy);
	::java::util::Vector* grantEntries = nullptr;
	::java::io::StreamTokenizer* st = nullptr;
	int32_t lookahead = 0;
};

	} // crypto
} // javax

#endif // _javax_crypto_CryptoPolicyParser_h_