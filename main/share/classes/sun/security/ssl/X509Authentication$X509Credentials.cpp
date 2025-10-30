#include <sun/security/ssl/X509Authentication$X509Credentials.h>

#include <java/security/PublicKey.h>
#include <java/security/cert/X509Certificate.h>
#include <sun/security/ssl/X509Authentication.h>
#include <jcpp.h>

using $X509CertificateArray = $Array<::java::security::cert::X509Certificate>;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $PublicKey = ::java::security::PublicKey;
using $X509Certificate = ::java::security::cert::X509Certificate;
using $SSLCredentials = ::sun::security::ssl::SSLCredentials;
using $X509Authentication = ::sun::security::ssl::X509Authentication;

namespace sun {
	namespace security {
		namespace ssl {

$FieldInfo _X509Authentication$X509Credentials_FieldInfo_[] = {
	{"popCerts", "[Ljava/security/cert/X509Certificate;", nullptr, $FINAL, $field(X509Authentication$X509Credentials, popCerts)},
	{"popPublicKey", "Ljava/security/PublicKey;", nullptr, $FINAL, $field(X509Authentication$X509Credentials, popPublicKey)},
	{}
};

$MethodInfo _X509Authentication$X509Credentials_MethodInfo_[] = {
	{"<init>", "(Ljava/security/PublicKey;[Ljava/security/cert/X509Certificate;)V", nullptr, 0, $method(static_cast<void(X509Authentication$X509Credentials::*)($PublicKey*,$X509CertificateArray*)>(&X509Authentication$X509Credentials::init$))},
	{}
};

$InnerClassInfo _X509Authentication$X509Credentials_InnerClassesInfo_[] = {
	{"sun.security.ssl.X509Authentication$X509Credentials", "sun.security.ssl.X509Authentication", "X509Credentials", $STATIC | $FINAL},
	{}
};

$ClassInfo _X509Authentication$X509Credentials_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"sun.security.ssl.X509Authentication$X509Credentials",
	"java.lang.Object",
	"sun.security.ssl.SSLCredentials",
	_X509Authentication$X509Credentials_FieldInfo_,
	_X509Authentication$X509Credentials_MethodInfo_,
	nullptr,
	nullptr,
	_X509Authentication$X509Credentials_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.security.ssl.X509Authentication"
};

$Object* allocate$X509Authentication$X509Credentials($Class* clazz) {
	return $of($alloc(X509Authentication$X509Credentials));
}

void X509Authentication$X509Credentials::init$($PublicKey* popPublicKey, $X509CertificateArray* popCerts) {
	$set(this, popCerts, popCerts);
	$set(this, popPublicKey, popPublicKey);
}

X509Authentication$X509Credentials::X509Authentication$X509Credentials() {
}

$Class* X509Authentication$X509Credentials::load$($String* name, bool initialize) {
	$loadClass(X509Authentication$X509Credentials, name, initialize, &_X509Authentication$X509Credentials_ClassInfo_, allocate$X509Authentication$X509Credentials);
	return class$;
}

$Class* X509Authentication$X509Credentials::class$ = nullptr;

		} // ssl
	} // security
} // sun