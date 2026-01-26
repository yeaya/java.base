#include <sun/security/provider/certpath/PKIX.h>

#include <java/security/InvalidAlgorithmParameterException.h>
#include <java/security/PublicKey.h>
#include <java/security/cert/CertPath.h>
#include <java/security/cert/CertPathParameters.h>
#include <java/security/cert/PKIXBuilderParameters.h>
#include <java/security/cert/PKIXParameters.h>
#include <java/security/interfaces/DSAParams.h>
#include <java/security/interfaces/DSAPublicKey.h>
#include <sun/security/provider/certpath/PKIX$BuilderParams.h>
#include <sun/security/provider/certpath/PKIX$ValidatorParams.h>
#include <sun/security/util/Debug.h>
#include <jcpp.h>

#undef PKIX

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $InvalidAlgorithmParameterException = ::java::security::InvalidAlgorithmParameterException;
using $PublicKey = ::java::security::PublicKey;
using $CertPath = ::java::security::cert::CertPath;
using $CertPathParameters = ::java::security::cert::CertPathParameters;
using $PKIXBuilderParameters = ::java::security::cert::PKIXBuilderParameters;
using $PKIXParameters = ::java::security::cert::PKIXParameters;
using $DSAPublicKey = ::java::security::interfaces::DSAPublicKey;
using $PKIX$BuilderParams = ::sun::security::provider::certpath::PKIX$BuilderParams;
using $PKIX$ValidatorParams = ::sun::security::provider::certpath::PKIX$ValidatorParams;
using $Debug = ::sun::security::util::Debug;

namespace sun {
	namespace security {
		namespace provider {
			namespace certpath {

$FieldInfo _PKIX_FieldInfo_[] = {
	{"debug", "Lsun/security/util/Debug;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(PKIX, debug)},
	{}
};

$MethodInfo _PKIX_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(PKIX, init$, void)},
	{"checkBuilderParams", "(Ljava/security/cert/CertPathParameters;)Lsun/security/provider/certpath/PKIX$BuilderParams;", nullptr, $STATIC, $staticMethod(PKIX, checkBuilderParams, $PKIX$BuilderParams*, $CertPathParameters*), "java.security.InvalidAlgorithmParameterException"},
	{"checkParams", "(Ljava/security/cert/CertPath;Ljava/security/cert/CertPathParameters;)Lsun/security/provider/certpath/PKIX$ValidatorParams;", nullptr, $STATIC, $staticMethod(PKIX, checkParams, $PKIX$ValidatorParams*, $CertPath*, $CertPathParameters*), "java.security.InvalidAlgorithmParameterException"},
	{"isDSAPublicKeyWithoutParams", "(Ljava/security/PublicKey;)Z", nullptr, $STATIC, $staticMethod(PKIX, isDSAPublicKeyWithoutParams, bool, $PublicKey*)},
	{}
};

$InnerClassInfo _PKIX_InnerClassesInfo_[] = {
	{"sun.security.provider.certpath.PKIX$CertStoreComparator", "sun.security.provider.certpath.PKIX", "CertStoreComparator", $PRIVATE | $STATIC},
	{"sun.security.provider.certpath.PKIX$CertStoreTypeException", "sun.security.provider.certpath.PKIX", "CertStoreTypeException", $STATIC},
	{"sun.security.provider.certpath.PKIX$BuilderParams", "sun.security.provider.certpath.PKIX", "BuilderParams", $STATIC},
	{"sun.security.provider.certpath.PKIX$ValidatorParams", "sun.security.provider.certpath.PKIX", "ValidatorParams", $STATIC},
	{}
};

$ClassInfo _PKIX_ClassInfo_ = {
	$ACC_SUPER,
	"sun.security.provider.certpath.PKIX",
	"java.lang.Object",
	nullptr,
	_PKIX_FieldInfo_,
	_PKIX_MethodInfo_,
	nullptr,
	nullptr,
	_PKIX_InnerClassesInfo_,
	nullptr,
	nullptr,
	"sun.security.provider.certpath.PKIX$CertStoreComparator,sun.security.provider.certpath.PKIX$CertStoreTypeException,sun.security.provider.certpath.PKIX$BuilderParams,sun.security.provider.certpath.PKIX$ValidatorParams"
};

$Object* allocate$PKIX($Class* clazz) {
	return $of($alloc(PKIX));
}

$Debug* PKIX::debug = nullptr;

void PKIX::init$() {
}

bool PKIX::isDSAPublicKeyWithoutParams($PublicKey* publicKey) {
	$init(PKIX);
	return ($instanceOf($DSAPublicKey, publicKey) && $nc(($cast($DSAPublicKey, publicKey)))->getParams() == nullptr);
}

$PKIX$ValidatorParams* PKIX::checkParams($CertPath* cp, $CertPathParameters* params) {
	$init(PKIX);
	if (!($instanceOf($PKIXParameters, params))) {
		$throwNew($InvalidAlgorithmParameterException, "inappropriate params, must be an instance of PKIXParameters"_s);
	}
	return $new($PKIX$ValidatorParams, cp, $cast($PKIXParameters, params));
}

$PKIX$BuilderParams* PKIX::checkBuilderParams($CertPathParameters* params) {
	$init(PKIX);
	if (!($instanceOf($PKIXBuilderParameters, params))) {
		$throwNew($InvalidAlgorithmParameterException, "inappropriate params, must be an instance of PKIXBuilderParameters"_s);
	}
	return $new($PKIX$BuilderParams, $cast($PKIXBuilderParameters, params));
}

void clinit$PKIX($Class* class$) {
	$assignStatic(PKIX::debug, $Debug::getInstance("certpath"_s));
}

PKIX::PKIX() {
}

$Class* PKIX::load$($String* name, bool initialize) {
	$loadClass(PKIX, name, initialize, &_PKIX_ClassInfo_, clinit$PKIX, allocate$PKIX);
	return class$;
}

$Class* PKIX::class$ = nullptr;

			} // certpath
		} // provider
	} // security
} // sun