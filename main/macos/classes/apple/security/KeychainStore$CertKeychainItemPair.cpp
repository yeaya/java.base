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

$FieldInfo _KeychainStore$CertKeychainItemPair_FieldInfo_[] = {
	{"mCertificateRef", "J", nullptr, 0, $field(KeychainStore$CertKeychainItemPair, mCertificateRef)},
	{"mCert", "Ljava/security/cert/Certificate;", nullptr, 0, $field(KeychainStore$CertKeychainItemPair, mCert)},
	{}
};

$MethodInfo _KeychainStore$CertKeychainItemPair_MethodInfo_[] = {
	{"<init>", "(JLjava/security/cert/Certificate;)V", nullptr, 0, $method(KeychainStore$CertKeychainItemPair, init$, void, int64_t, $Certificate*)},
	{}
};

$InnerClassInfo _KeychainStore$CertKeychainItemPair_InnerClassesInfo_[] = {
	{"apple.security.KeychainStore$CertKeychainItemPair", "apple.security.KeychainStore", "CertKeychainItemPair", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _KeychainStore$CertKeychainItemPair_ClassInfo_ = {
	$ACC_SUPER,
	"apple.security.KeychainStore$CertKeychainItemPair",
	"java.lang.Object",
	nullptr,
	_KeychainStore$CertKeychainItemPair_FieldInfo_,
	_KeychainStore$CertKeychainItemPair_MethodInfo_,
	nullptr,
	nullptr,
	_KeychainStore$CertKeychainItemPair_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"apple.security.KeychainStore"
};

$Object* allocate$KeychainStore$CertKeychainItemPair($Class* clazz) {
	return $of($alloc(KeychainStore$CertKeychainItemPair));
}

void KeychainStore$CertKeychainItemPair::init$(int64_t inCertRef, $Certificate* cert) {
	this->mCertificateRef = inCertRef;
	$set(this, mCert, cert);
}

KeychainStore$CertKeychainItemPair::KeychainStore$CertKeychainItemPair() {
}

$Class* KeychainStore$CertKeychainItemPair::load$($String* name, bool initialize) {
	$loadClass(KeychainStore$CertKeychainItemPair, name, initialize, &_KeychainStore$CertKeychainItemPair_ClassInfo_, allocate$KeychainStore$CertKeychainItemPair);
	return class$;
}

$Class* KeychainStore$CertKeychainItemPair::class$ = nullptr;

	} // security
} // apple