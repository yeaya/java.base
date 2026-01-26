#include <sun/security/ssl/X509Authentication$X509Possession.h>

#include <java/security/PrivateKey.h>
#include <java/security/PublicKey.h>
#include <java/security/cert/X509Certificate.h>
#include <java/security/interfaces/ECKey.h>
#include <java/security/interfaces/XECKey.h>
#include <java/security/spec/AlgorithmParameterSpec.h>
#include <java/security/spec/ECParameterSpec.h>
#include <java/security/spec/NamedParameterSpec.h>
#include <sun/security/ssl/X509Authentication.h>
#include <jcpp.h>

using $X509CertificateArray = $Array<::java::security::cert::X509Certificate>;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $PrivateKey = ::java::security::PrivateKey;
using $PublicKey = ::java::security::PublicKey;
using $X509Certificate = ::java::security::cert::X509Certificate;
using $ECKey = ::java::security::interfaces::ECKey;
using $XECKey = ::java::security::interfaces::XECKey;
using $AlgorithmParameterSpec = ::java::security::spec::AlgorithmParameterSpec;
using $ECParameterSpec = ::java::security::spec::ECParameterSpec;
using $NamedParameterSpec = ::java::security::spec::NamedParameterSpec;

namespace sun {
	namespace security {
		namespace ssl {

$FieldInfo _X509Authentication$X509Possession_FieldInfo_[] = {
	{"popCerts", "[Ljava/security/cert/X509Certificate;", nullptr, $FINAL, $field(X509Authentication$X509Possession, popCerts)},
	{"popPrivateKey", "Ljava/security/PrivateKey;", nullptr, $FINAL, $field(X509Authentication$X509Possession, popPrivateKey)},
	{}
};

$MethodInfo _X509Authentication$X509Possession_MethodInfo_[] = {
	{"<init>", "(Ljava/security/PrivateKey;[Ljava/security/cert/X509Certificate;)V", nullptr, 0, $method(X509Authentication$X509Possession, init$, void, $PrivateKey*, $X509CertificateArray*)},
	{"getECParameterSpec", "()Ljava/security/spec/ECParameterSpec;", nullptr, 0, $method(X509Authentication$X509Possession, getECParameterSpec, $ECParameterSpec*)},
	{"getXECParameterSpec", "()Ljava/security/spec/NamedParameterSpec;", nullptr, 0, $method(X509Authentication$X509Possession, getXECParameterSpec, $NamedParameterSpec*)},
	{}
};

$InnerClassInfo _X509Authentication$X509Possession_InnerClassesInfo_[] = {
	{"sun.security.ssl.X509Authentication$X509Possession", "sun.security.ssl.X509Authentication", "X509Possession", $STATIC | $FINAL},
	{}
};

$ClassInfo _X509Authentication$X509Possession_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"sun.security.ssl.X509Authentication$X509Possession",
	"java.lang.Object",
	"sun.security.ssl.SSLPossession",
	_X509Authentication$X509Possession_FieldInfo_,
	_X509Authentication$X509Possession_MethodInfo_,
	nullptr,
	nullptr,
	_X509Authentication$X509Possession_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.security.ssl.X509Authentication"
};

$Object* allocate$X509Authentication$X509Possession($Class* clazz) {
	return $of($alloc(X509Authentication$X509Possession));
}

void X509Authentication$X509Possession::init$($PrivateKey* popPrivateKey, $X509CertificateArray* popCerts) {
	$set(this, popCerts, popCerts);
	$set(this, popPrivateKey, popPrivateKey);
}

$ECParameterSpec* X509Authentication$X509Possession::getECParameterSpec() {
	$useLocalCurrentObjectStackCache();
	if (this->popPrivateKey == nullptr || !"EC"_s->equals($($nc(this->popPrivateKey)->getAlgorithm()))) {
		return nullptr;
	}
	if ($instanceOf($ECKey, this->popPrivateKey)) {
		return $nc(($cast($ECKey, this->popPrivateKey)))->getParams();
	} else if (this->popCerts != nullptr && $nc(this->popCerts)->length != 0) {
		$var($PublicKey, publicKey, $nc($nc(this->popCerts)->get(0))->getPublicKey());
		if ($instanceOf($ECKey, publicKey)) {
			return $nc(($cast($ECKey, publicKey)))->getParams();
		}
	}
	return nullptr;
}

$NamedParameterSpec* X509Authentication$X509Possession::getXECParameterSpec() {
	$useLocalCurrentObjectStackCache();
	if (this->popPrivateKey == nullptr || !"XEC"_s->equals($($nc(this->popPrivateKey)->getAlgorithm()))) {
		return nullptr;
	}
	if ($instanceOf($XECKey, this->popPrivateKey)) {
		$var($AlgorithmParameterSpec, params, $nc(($cast($XECKey, this->popPrivateKey)))->getParams());
		if ($instanceOf($NamedParameterSpec, params)) {
			return $cast($NamedParameterSpec, params);
		}
	} else if (this->popCerts != nullptr && $nc(this->popCerts)->length != 0) {
		$var($PublicKey, publicKey, $nc($nc(this->popCerts)->get(0))->getPublicKey());
		if ($instanceOf($XECKey, publicKey)) {
			$var($AlgorithmParameterSpec, params, $nc(($cast($XECKey, publicKey)))->getParams());
			if ($instanceOf($NamedParameterSpec, params)) {
				return $cast($NamedParameterSpec, params);
			}
		}
	}
	return nullptr;
}

X509Authentication$X509Possession::X509Authentication$X509Possession() {
}

$Class* X509Authentication$X509Possession::load$($String* name, bool initialize) {
	$loadClass(X509Authentication$X509Possession, name, initialize, &_X509Authentication$X509Possession_ClassInfo_, allocate$X509Authentication$X509Possession);
	return class$;
}

$Class* X509Authentication$X509Possession::class$ = nullptr;

		} // ssl
	} // security
} // sun