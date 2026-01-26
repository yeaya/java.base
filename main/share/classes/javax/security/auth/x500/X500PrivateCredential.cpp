#include <javax/security/auth/x500/X500PrivateCredential.h>

#include <java/security/PrivateKey.h>
#include <java/security/cert/X509Certificate.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $MethodInfo = ::java::lang::MethodInfo;
using $PrivateKey = ::java::security::PrivateKey;
using $X509Certificate = ::java::security::cert::X509Certificate;

namespace javax {
	namespace security {
		namespace auth {
			namespace x500 {

$FieldInfo _X500PrivateCredential_FieldInfo_[] = {
	{"cert", "Ljava/security/cert/X509Certificate;", nullptr, $PRIVATE, $field(X500PrivateCredential, cert)},
	{"key", "Ljava/security/PrivateKey;", nullptr, $PRIVATE, $field(X500PrivateCredential, key)},
	{"alias", "Ljava/lang/String;", nullptr, $PRIVATE, $field(X500PrivateCredential, alias)},
	{}
};

$MethodInfo _X500PrivateCredential_MethodInfo_[] = {
	{"<init>", "(Ljava/security/cert/X509Certificate;Ljava/security/PrivateKey;)V", nullptr, $PUBLIC, $method(X500PrivateCredential, init$, void, $X509Certificate*, $PrivateKey*)},
	{"<init>", "(Ljava/security/cert/X509Certificate;Ljava/security/PrivateKey;Ljava/lang/String;)V", nullptr, $PUBLIC, $method(X500PrivateCredential, init$, void, $X509Certificate*, $PrivateKey*, $String*)},
	{"destroy", "()V", nullptr, $PUBLIC, $virtualMethod(X500PrivateCredential, destroy, void)},
	{"getAlias", "()Ljava/lang/String;", nullptr, $PUBLIC, $method(X500PrivateCredential, getAlias, $String*)},
	{"getCertificate", "()Ljava/security/cert/X509Certificate;", nullptr, $PUBLIC, $method(X500PrivateCredential, getCertificate, $X509Certificate*)},
	{"getPrivateKey", "()Ljava/security/PrivateKey;", nullptr, $PUBLIC, $method(X500PrivateCredential, getPrivateKey, $PrivateKey*)},
	{"isDestroyed", "()Z", nullptr, $PUBLIC, $virtualMethod(X500PrivateCredential, isDestroyed, bool)},
	{}
};

$ClassInfo _X500PrivateCredential_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"javax.security.auth.x500.X500PrivateCredential",
	"java.lang.Object",
	"javax.security.auth.Destroyable",
	_X500PrivateCredential_FieldInfo_,
	_X500PrivateCredential_MethodInfo_
};

$Object* allocate$X500PrivateCredential($Class* clazz) {
	return $of($alloc(X500PrivateCredential));
}

void X500PrivateCredential::init$($X509Certificate* cert, $PrivateKey* key) {
	if (cert == nullptr || key == nullptr) {
		$throwNew($IllegalArgumentException);
	}
	$set(this, cert, cert);
	$set(this, key, key);
	$set(this, alias, nullptr);
}

void X500PrivateCredential::init$($X509Certificate* cert, $PrivateKey* key, $String* alias) {
	if (cert == nullptr || key == nullptr || alias == nullptr) {
		$throwNew($IllegalArgumentException);
	}
	$set(this, cert, cert);
	$set(this, key, key);
	$set(this, alias, alias);
}

$X509Certificate* X500PrivateCredential::getCertificate() {
	return this->cert;
}

$PrivateKey* X500PrivateCredential::getPrivateKey() {
	return this->key;
}

$String* X500PrivateCredential::getAlias() {
	return this->alias;
}

void X500PrivateCredential::destroy() {
	$set(this, cert, nullptr);
	$set(this, key, nullptr);
	$set(this, alias, nullptr);
}

bool X500PrivateCredential::isDestroyed() {
	return this->cert == nullptr && this->key == nullptr && this->alias == nullptr;
}

X500PrivateCredential::X500PrivateCredential() {
}

$Class* X500PrivateCredential::load$($String* name, bool initialize) {
	$loadClass(X500PrivateCredential, name, initialize, &_X500PrivateCredential_ClassInfo_, allocate$X500PrivateCredential);
	return class$;
}

$Class* X500PrivateCredential::class$ = nullptr;

			} // x500
		} // auth
	} // security
} // javax