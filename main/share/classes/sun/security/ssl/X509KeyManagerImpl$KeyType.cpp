#include <sun/security/ssl/X509KeyManagerImpl$KeyType.h>

#include <java/lang/CharSequence.h>
#include <java/security/PublicKey.h>
#include <java/security/cert/Certificate.h>
#include <java/security/cert/X509Certificate.h>
#include <java/util/Locale.h>
#include <sun/security/ssl/X509KeyManagerImpl.h>
#include <jcpp.h>

#undef ENGLISH

using $CertificateArray = $Array<::java::security::cert::Certificate>;
using $CharSequence = ::java::lang::CharSequence;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $PublicKey = ::java::security::PublicKey;
using $Certificate = ::java::security::cert::Certificate;
using $X509Certificate = ::java::security::cert::X509Certificate;
using $Locale = ::java::util::Locale;

namespace sun {
	namespace security {
		namespace ssl {

$FieldInfo _X509KeyManagerImpl$KeyType_FieldInfo_[] = {
	{"keyAlgorithm", "Ljava/lang/String;", nullptr, $FINAL, $field(X509KeyManagerImpl$KeyType, keyAlgorithm)},
	{"sigKeyAlgorithm", "Ljava/lang/String;", nullptr, $FINAL, $field(X509KeyManagerImpl$KeyType, sigKeyAlgorithm)},
	{}
};

$MethodInfo _X509KeyManagerImpl$KeyType_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;)V", nullptr, 0, $method(X509KeyManagerImpl$KeyType, init$, void, $String*)},
	{"matches", "([Ljava/security/cert/Certificate;)Z", nullptr, 0, $virtualMethod(X509KeyManagerImpl$KeyType, matches, bool, $CertificateArray*)},
	{}
};

$InnerClassInfo _X509KeyManagerImpl$KeyType_InnerClassesInfo_[] = {
	{"sun.security.ssl.X509KeyManagerImpl$KeyType", "sun.security.ssl.X509KeyManagerImpl", "KeyType", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _X509KeyManagerImpl$KeyType_ClassInfo_ = {
	$ACC_SUPER,
	"sun.security.ssl.X509KeyManagerImpl$KeyType",
	"java.lang.Object",
	nullptr,
	_X509KeyManagerImpl$KeyType_FieldInfo_,
	_X509KeyManagerImpl$KeyType_MethodInfo_,
	nullptr,
	nullptr,
	_X509KeyManagerImpl$KeyType_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.security.ssl.X509KeyManagerImpl"
};

$Object* allocate$X509KeyManagerImpl$KeyType($Class* clazz) {
	return $of($alloc(X509KeyManagerImpl$KeyType));
}

void X509KeyManagerImpl$KeyType::init$($String* algorithm) {
	int32_t k = $nc(algorithm)->indexOf((int32_t)u'_');
	if (k == -1) {
		$set(this, keyAlgorithm, algorithm);
		$set(this, sigKeyAlgorithm, nullptr);
	} else {
		$set(this, keyAlgorithm, algorithm->substring(0, k));
		$set(this, sigKeyAlgorithm, algorithm->substring(k + 1));
	}
}

bool X509KeyManagerImpl$KeyType::matches($CertificateArray* chain) {
	$useLocalCurrentObjectStackCache();
	if (!$nc($($nc($($nc($nc(chain)->get(0))->getPublicKey()))->getAlgorithm()))->equals(this->keyAlgorithm)) {
		return false;
	}
	if (this->sigKeyAlgorithm == nullptr) {
		return true;
	}
	if ($nc(chain)->length > 1) {
		return $nc(this->sigKeyAlgorithm)->equals($($nc($($nc(chain->get(1))->getPublicKey()))->getAlgorithm()));
	} else {
		$var($X509Certificate, issuer, $cast($X509Certificate, chain->get(0)));
		$init($Locale);
		$var($String, sigAlgName, $nc($($nc(issuer)->getSigAlgName()))->toUpperCase($Locale::ENGLISH));
		$var($String, pattern, $str({"WITH"_s, $($nc(this->sigKeyAlgorithm)->toUpperCase($Locale::ENGLISH))}));
		return sigAlgName->contains(pattern);
	}
}

X509KeyManagerImpl$KeyType::X509KeyManagerImpl$KeyType() {
}

$Class* X509KeyManagerImpl$KeyType::load$($String* name, bool initialize) {
	$loadClass(X509KeyManagerImpl$KeyType, name, initialize, &_X509KeyManagerImpl$KeyType_ClassInfo_, allocate$X509KeyManagerImpl$KeyType);
	return class$;
}

$Class* X509KeyManagerImpl$KeyType::class$ = nullptr;

		} // ssl
	} // security
} // sun