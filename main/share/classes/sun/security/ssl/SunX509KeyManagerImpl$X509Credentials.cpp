#include <sun/security/ssl/SunX509KeyManagerImpl$X509Credentials.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/security/PrivateKey.h>
#include <java/security/cert/X509Certificate.h>
#include <java/util/AbstractSet.h>
#include <java/util/HashSet.h>
#include <java/util/Set.h>
#include <javax/security/auth/x500/X500Principal.h>
#include <sun/security/ssl/SunX509KeyManagerImpl.h>
#include <jcpp.h>

using $X509CertificateArray = $Array<::java::security::cert::X509Certificate>;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $PrivateKey = ::java::security::PrivateKey;
using $X509Certificate = ::java::security::cert::X509Certificate;
using $AbstractSet = ::java::util::AbstractSet;
using $HashSet = ::java::util::HashSet;
using $Set = ::java::util::Set;
using $X500Principal = ::javax::security::auth::x500::X500Principal;
using $SunX509KeyManagerImpl = ::sun::security::ssl::SunX509KeyManagerImpl;

namespace sun {
	namespace security {
		namespace ssl {

$FieldInfo _SunX509KeyManagerImpl$X509Credentials_FieldInfo_[] = {
	{"privateKey", "Ljava/security/PrivateKey;", nullptr, $FINAL, $field(SunX509KeyManagerImpl$X509Credentials, privateKey)},
	{"certificates", "[Ljava/security/cert/X509Certificate;", nullptr, $FINAL, $field(SunX509KeyManagerImpl$X509Credentials, certificates)},
	{"issuerX500Principals", "Ljava/util/Set;", "Ljava/util/Set<Ljavax/security/auth/x500/X500Principal;>;", $PRIVATE | $FINAL, $field(SunX509KeyManagerImpl$X509Credentials, issuerX500Principals)},
	{}
};

$MethodInfo _SunX509KeyManagerImpl$X509Credentials_MethodInfo_[] = {
	{"<init>", "(Ljava/security/PrivateKey;[Ljava/security/cert/X509Certificate;)V", nullptr, 0, $method(static_cast<void(SunX509KeyManagerImpl$X509Credentials::*)($PrivateKey*,$X509CertificateArray*)>(&SunX509KeyManagerImpl$X509Credentials::init$))},
	{"getIssuerX500Principals", "()Ljava/util/Set;", "()Ljava/util/Set<Ljavax/security/auth/x500/X500Principal;>;", 0},
	{}
};

$InnerClassInfo _SunX509KeyManagerImpl$X509Credentials_InnerClassesInfo_[] = {
	{"sun.security.ssl.SunX509KeyManagerImpl$X509Credentials", "sun.security.ssl.SunX509KeyManagerImpl", "X509Credentials", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _SunX509KeyManagerImpl$X509Credentials_ClassInfo_ = {
	$ACC_SUPER,
	"sun.security.ssl.SunX509KeyManagerImpl$X509Credentials",
	"java.lang.Object",
	nullptr,
	_SunX509KeyManagerImpl$X509Credentials_FieldInfo_,
	_SunX509KeyManagerImpl$X509Credentials_MethodInfo_,
	nullptr,
	nullptr,
	_SunX509KeyManagerImpl$X509Credentials_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.security.ssl.SunX509KeyManagerImpl"
};

$Object* allocate$SunX509KeyManagerImpl$X509Credentials($Class* clazz) {
	return $of($alloc(SunX509KeyManagerImpl$X509Credentials));
}

void SunX509KeyManagerImpl$X509Credentials::init$($PrivateKey* privateKey, $X509CertificateArray* certificates) {
	$set(this, privateKey, privateKey);
	$set(this, certificates, certificates);
	$set(this, issuerX500Principals, $new($HashSet, $nc(certificates)->length));
	{
		$var($X509CertificateArray, arr$, certificates);
		int32_t len$ = $nc(arr$)->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$var($X509Certificate, certificate, arr$->get(i$));
			{
				$nc(this->issuerX500Principals)->add($($nc(certificate)->getIssuerX500Principal()));
			}
		}
	}
}

$Set* SunX509KeyManagerImpl$X509Credentials::getIssuerX500Principals() {
	return this->issuerX500Principals;
}

SunX509KeyManagerImpl$X509Credentials::SunX509KeyManagerImpl$X509Credentials() {
}

$Class* SunX509KeyManagerImpl$X509Credentials::load$($String* name, bool initialize) {
	$loadClass(SunX509KeyManagerImpl$X509Credentials, name, initialize, &_SunX509KeyManagerImpl$X509Credentials_ClassInfo_, allocate$SunX509KeyManagerImpl$X509Credentials);
	return class$;
}

$Class* SunX509KeyManagerImpl$X509Credentials::class$ = nullptr;

		} // ssl
	} // security
} // sun