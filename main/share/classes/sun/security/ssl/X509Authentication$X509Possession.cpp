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
using $ECKey = ::java::security::interfaces::ECKey;
using $XECKey = ::java::security::interfaces::XECKey;
using $AlgorithmParameterSpec = ::java::security::spec::AlgorithmParameterSpec;
using $ECParameterSpec = ::java::security::spec::ECParameterSpec;
using $NamedParameterSpec = ::java::security::spec::NamedParameterSpec;

namespace sun {
	namespace security {
		namespace ssl {

void X509Authentication$X509Possession::init$($PrivateKey* popPrivateKey, $X509CertificateArray* popCerts) {
	$set(this, popCerts, popCerts);
	$set(this, popPrivateKey, popPrivateKey);
}

$ECParameterSpec* X509Authentication$X509Possession::getECParameterSpec() {
	$useLocalObjectStack();
	if (this->popPrivateKey == nullptr || !"EC"_s->equals($(this->popPrivateKey->getAlgorithm()))) {
		return nullptr;
	}
	if ($instanceOf($ECKey, this->popPrivateKey)) {
		return $cast($ECKey, this->popPrivateKey)->getParams();
	} else if (this->popCerts != nullptr && this->popCerts->length != 0) {
		$var($PublicKey, publicKey, $nc(this->popCerts->get(0))->getPublicKey());
		if ($instanceOf($ECKey, publicKey)) {
			return $cast($ECKey, publicKey)->getParams();
		}
	}
	return nullptr;
}

$NamedParameterSpec* X509Authentication$X509Possession::getXECParameterSpec() {
	$useLocalObjectStack();
	if (this->popPrivateKey == nullptr || !"XEC"_s->equals($(this->popPrivateKey->getAlgorithm()))) {
		return nullptr;
	}
	if ($instanceOf($XECKey, this->popPrivateKey)) {
		$var($AlgorithmParameterSpec, params, $cast($XECKey, this->popPrivateKey)->getParams());
		if ($instanceOf($NamedParameterSpec, params)) {
			return $cast($NamedParameterSpec, params);
		}
	} else if (this->popCerts != nullptr && this->popCerts->length != 0) {
		$var($PublicKey, publicKey, $nc(this->popCerts->get(0))->getPublicKey());
		if ($instanceOf($XECKey, publicKey)) {
			$var($AlgorithmParameterSpec, params, $cast($XECKey, publicKey)->getParams());
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
	$FieldInfo fieldInfos$$[] = {
		{"popCerts", "[Ljava/security/cert/X509Certificate;", nullptr, $FINAL, $field(X509Authentication$X509Possession, popCerts)},
		{"popPrivateKey", "Ljava/security/PrivateKey;", nullptr, $FINAL, $field(X509Authentication$X509Possession, popPrivateKey)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/security/PrivateKey;[Ljava/security/cert/X509Certificate;)V", nullptr, 0, $method(X509Authentication$X509Possession, init$, void, $PrivateKey*, $X509CertificateArray*)},
		{"getECParameterSpec", "()Ljava/security/spec/ECParameterSpec;", nullptr, 0, $method(X509Authentication$X509Possession, getECParameterSpec, $ECParameterSpec*)},
		{"getXECParameterSpec", "()Ljava/security/spec/NamedParameterSpec;", nullptr, 0, $method(X509Authentication$X509Possession, getXECParameterSpec, $NamedParameterSpec*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.security.ssl.X509Authentication$X509Possession", "sun.security.ssl.X509Authentication", "X509Possession", $STATIC | $FINAL},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"sun.security.ssl.X509Authentication$X509Possession",
		"java.lang.Object",
		"sun.security.ssl.SSLPossession",
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.security.ssl.X509Authentication"
	};
	$loadClass(X509Authentication$X509Possession, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(X509Authentication$X509Possession);
	});
	return class$;
}

$Class* X509Authentication$X509Possession::class$ = nullptr;

		} // ssl
	} // security
} // sun