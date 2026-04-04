#include <apple/security/KeychainStore$CertKeychainItemPair.h>
#include <apple/security/KeychainStore.h>
#include <java/security/cert/Certificate.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Certificate = ::java::security::cert::Certificate;

namespace apple {
	namespace security {

void KeychainStore$CertKeychainItemPair::init$(int64_t inCertRef, $Certificate* cert) {
	this->mCertificateRef = inCertRef;
	$set(this, mCert, cert);
}

KeychainStore$CertKeychainItemPair::KeychainStore$CertKeychainItemPair() {
}

$Class* KeychainStore$CertKeychainItemPair::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"mCertificateRef", "J", nullptr, 0, $field(KeychainStore$CertKeychainItemPair, mCertificateRef)},
		{"mCert", "Ljava/security/cert/Certificate;", nullptr, 0, $field(KeychainStore$CertKeychainItemPair, mCert)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(JLjava/security/cert/Certificate;)V", nullptr, 0, $method(KeychainStore$CertKeychainItemPair, init$, void, int64_t, $Certificate*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"apple.security.KeychainStore$CertKeychainItemPair", "apple.security.KeychainStore", "CertKeychainItemPair", $PRIVATE | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"apple.security.KeychainStore$CertKeychainItemPair",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"apple.security.KeychainStore"
	};
	$loadClass(KeychainStore$CertKeychainItemPair, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(KeychainStore$CertKeychainItemPair);
	});
	return class$;
}

$Class* KeychainStore$CertKeychainItemPair::class$ = nullptr;

	} // security
} // apple