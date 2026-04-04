#include <sun/security/ssl/SunX509KeyManagerImpl$X509Credentials.h>
#include <java/security/PrivateKey.h>
#include <java/security/cert/X509Certificate.h>
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
using $HashSet = ::java::util::HashSet;
using $Set = ::java::util::Set;

namespace sun {
	namespace security {
		namespace ssl {

void SunX509KeyManagerImpl$X509Credentials::init$($PrivateKey* privateKey, $X509CertificateArray* certificates) {
	$useLocalObjectStack();
	$set(this, privateKey, privateKey);
	$set(this, certificates, certificates);
	$set(this, issuerX500Principals, $new($HashSet, $nc(certificates)->length));
	{
		$var($X509CertificateArray, arr$, certificates);
		for (int32_t len$ = arr$->length, i$ = 0; i$ < len$; ++i$) {
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
	$FieldInfo fieldInfos$$[] = {
		{"privateKey", "Ljava/security/PrivateKey;", nullptr, $FINAL, $field(SunX509KeyManagerImpl$X509Credentials, privateKey)},
		{"certificates", "[Ljava/security/cert/X509Certificate;", nullptr, $FINAL, $field(SunX509KeyManagerImpl$X509Credentials, certificates)},
		{"issuerX500Principals", "Ljava/util/Set;", "Ljava/util/Set<Ljavax/security/auth/x500/X500Principal;>;", $PRIVATE | $FINAL, $field(SunX509KeyManagerImpl$X509Credentials, issuerX500Principals)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/security/PrivateKey;[Ljava/security/cert/X509Certificate;)V", nullptr, 0, $method(SunX509KeyManagerImpl$X509Credentials, init$, void, $PrivateKey*, $X509CertificateArray*)},
		{"getIssuerX500Principals", "()Ljava/util/Set;", "()Ljava/util/Set<Ljavax/security/auth/x500/X500Principal;>;", 0, $virtualMethod(SunX509KeyManagerImpl$X509Credentials, getIssuerX500Principals, $Set*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.security.ssl.SunX509KeyManagerImpl$X509Credentials", "sun.security.ssl.SunX509KeyManagerImpl", "X509Credentials", $PRIVATE | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.security.ssl.SunX509KeyManagerImpl$X509Credentials",
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
		"sun.security.ssl.SunX509KeyManagerImpl"
	};
	$loadClass(SunX509KeyManagerImpl$X509Credentials, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(SunX509KeyManagerImpl$X509Credentials);
	});
	return class$;
}

$Class* SunX509KeyManagerImpl$X509Credentials::class$ = nullptr;

		} // ssl
	} // security
} // sun