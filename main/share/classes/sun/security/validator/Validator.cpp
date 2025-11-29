#include <sun/security/validator/Validator.h>

#include <java/security/AlgorithmConstraints.h>
#include <java/security/KeyStore.h>
#include <java/security/cert/PKIXBuilderParameters.h>
#include <java/security/cert/X509Certificate.h>
#include <java/util/Collection.h>
#include <java/util/Collections.h>
#include <java/util/Date.h>
#include <java/util/List.h>
#include <java/util/Set.h>
#include <sun/security/validator/EndEntityChecker.h>
#include <sun/security/validator/PKIXValidator.h>
#include <sun/security/validator/SimpleValidator.h>
#include <sun/security/validator/TrustStoreUtil.h>
#include <jcpp.h>

#undef CHAIN0
#undef TYPE_PKIX
#undef TYPE_SIMPLE
#undef VAR_CODE_SIGNING
#undef VAR_GENERIC
#undef VAR_JCE_SIGNING
#undef VAR_PLUGIN_CODE_SIGNING
#undef VAR_TLS_CLIENT
#undef VAR_TLS_SERVER
#undef VAR_TSA_SERVER

using $X509CertificateArray = $Array<::java::security::cert::X509Certificate>;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $MethodInfo = ::java::lang::MethodInfo;
using $AlgorithmConstraints = ::java::security::AlgorithmConstraints;
using $KeyStore = ::java::security::KeyStore;
using $PKIXBuilderParameters = ::java::security::cert::PKIXBuilderParameters;
using $Collection = ::java::util::Collection;
using $Collections = ::java::util::Collections;
using $Date = ::java::util::Date;
using $List = ::java::util::List;
using $EndEntityChecker = ::sun::security::validator::EndEntityChecker;
using $PKIXValidator = ::sun::security::validator::PKIXValidator;
using $SimpleValidator = ::sun::security::validator::SimpleValidator;
using $TrustStoreUtil = ::sun::security::validator::TrustStoreUtil;

namespace sun {
	namespace security {
		namespace validator {

$CompoundAttribute _Validator_FieldAnnotations_validationDate[] = {
	{"Ljava/lang/Deprecated;", nullptr},
	{}
};

$CompoundAttribute _Validator_MethodAnnotations_setValidationDate6[] = {
	{"Ljava/lang/Deprecated;", nullptr},
	{}
};

$FieldInfo _Validator_FieldInfo_[] = {
	{"CHAIN0", "[Ljava/security/cert/X509Certificate;", nullptr, $STATIC | $FINAL, $staticField(Validator, CHAIN0)},
	{"TYPE_SIMPLE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Validator, TYPE_SIMPLE)},
	{"TYPE_PKIX", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Validator, TYPE_PKIX)},
	{"VAR_GENERIC", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Validator, VAR_GENERIC)},
	{"VAR_CODE_SIGNING", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Validator, VAR_CODE_SIGNING)},
	{"VAR_JCE_SIGNING", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Validator, VAR_JCE_SIGNING)},
	{"VAR_TLS_CLIENT", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Validator, VAR_TLS_CLIENT)},
	{"VAR_TLS_SERVER", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Validator, VAR_TLS_SERVER)},
	{"VAR_TSA_SERVER", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Validator, VAR_TSA_SERVER)},
	{"VAR_PLUGIN_CODE_SIGNING", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Validator, VAR_PLUGIN_CODE_SIGNING)},
	{"type", "Ljava/lang/String;", nullptr, $PRIVATE | $FINAL, $field(Validator, type)},
	{"endEntityChecker", "Lsun/security/validator/EndEntityChecker;", nullptr, $FINAL, $field(Validator, endEntityChecker)},
	{"variant", "Ljava/lang/String;", nullptr, $FINAL, $field(Validator, variant)},
	{"validationDate", "Ljava/util/Date;", nullptr, $VOLATILE | $DEPRECATED, $field(Validator, validationDate), _Validator_FieldAnnotations_validationDate},
	{}
};

$MethodInfo _Validator_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;Ljava/lang/String;)V", nullptr, 0, $method(static_cast<void(Validator::*)($String*,$String*)>(&Validator::init$))},
	{"engineValidate", "([Ljava/security/cert/X509Certificate;Ljava/util/Collection;Ljava/util/List;Ljava/security/AlgorithmConstraints;Ljava/lang/Object;)[Ljava/security/cert/X509Certificate;", "([Ljava/security/cert/X509Certificate;Ljava/util/Collection<Ljava/security/cert/X509Certificate;>;Ljava/util/List<[B>;Ljava/security/AlgorithmConstraints;Ljava/lang/Object;)[Ljava/security/cert/X509Certificate;", $ABSTRACT, nullptr, "java.security.cert.CertificateException"},
	{"getInstance", "(Ljava/lang/String;Ljava/lang/String;Ljava/security/KeyStore;)Lsun/security/validator/Validator;", nullptr, $PUBLIC | $STATIC, $method(static_cast<Validator*(*)($String*,$String*,$KeyStore*)>(&Validator::getInstance))},
	{"getInstance", "(Ljava/lang/String;Ljava/lang/String;Ljava/util/Collection;)Lsun/security/validator/Validator;", "(Ljava/lang/String;Ljava/lang/String;Ljava/util/Collection<Ljava/security/cert/X509Certificate;>;)Lsun/security/validator/Validator;", $PUBLIC | $STATIC, $method(static_cast<Validator*(*)($String*,$String*,$Collection*)>(&Validator::getInstance))},
	{"getInstance", "(Ljava/lang/String;Ljava/lang/String;Ljava/security/cert/PKIXBuilderParameters;)Lsun/security/validator/Validator;", nullptr, $PUBLIC | $STATIC, $method(static_cast<Validator*(*)($String*,$String*,$PKIXBuilderParameters*)>(&Validator::getInstance))},
	{"getTrustedCertificates", "()Ljava/util/Collection;", "()Ljava/util/Collection<Ljava/security/cert/X509Certificate;>;", $PUBLIC | $ABSTRACT},
	{"setValidationDate", "(Ljava/util/Date;)V", nullptr, $PUBLIC | $DEPRECATED, nullptr, nullptr, nullptr, _Validator_MethodAnnotations_setValidationDate6},
	{"validate", "([Ljava/security/cert/X509Certificate;)[Ljava/security/cert/X509Certificate;", nullptr, $PUBLIC | $FINAL, $method(static_cast<$X509CertificateArray*(Validator::*)($X509CertificateArray*)>(&Validator::validate)), "java.security.cert.CertificateException"},
	{"validate", "([Ljava/security/cert/X509Certificate;Ljava/util/Collection;)[Ljava/security/cert/X509Certificate;", "([Ljava/security/cert/X509Certificate;Ljava/util/Collection<Ljava/security/cert/X509Certificate;>;)[Ljava/security/cert/X509Certificate;", $PUBLIC | $FINAL, $method(static_cast<$X509CertificateArray*(Validator::*)($X509CertificateArray*,$Collection*)>(&Validator::validate)), "java.security.cert.CertificateException"},
	{"validate", "([Ljava/security/cert/X509Certificate;Ljava/util/Collection;Ljava/lang/Object;)[Ljava/security/cert/X509Certificate;", "([Ljava/security/cert/X509Certificate;Ljava/util/Collection<Ljava/security/cert/X509Certificate;>;Ljava/lang/Object;)[Ljava/security/cert/X509Certificate;", $PUBLIC | $FINAL, $method(static_cast<$X509CertificateArray*(Validator::*)($X509CertificateArray*,$Collection*,Object$*)>(&Validator::validate)), "java.security.cert.CertificateException"},
	{"validate", "([Ljava/security/cert/X509Certificate;Ljava/util/Collection;Ljava/util/List;Ljava/security/AlgorithmConstraints;Ljava/lang/Object;)[Ljava/security/cert/X509Certificate;", "([Ljava/security/cert/X509Certificate;Ljava/util/Collection<Ljava/security/cert/X509Certificate;>;Ljava/util/List<[B>;Ljava/security/AlgorithmConstraints;Ljava/lang/Object;)[Ljava/security/cert/X509Certificate;", $PUBLIC | $FINAL, $method(static_cast<$X509CertificateArray*(Validator::*)($X509CertificateArray*,$Collection*,$List*,$AlgorithmConstraints*,Object$*)>(&Validator::validate)), "java.security.cert.CertificateException"},
	{}
};

$ClassInfo _Validator_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"sun.security.validator.Validator",
	"java.lang.Object",
	nullptr,
	_Validator_FieldInfo_,
	_Validator_MethodInfo_
};

$Object* allocate$Validator($Class* clazz) {
	return $of($alloc(Validator));
}

$X509CertificateArray* Validator::CHAIN0 = nullptr;
$String* Validator::TYPE_SIMPLE = nullptr;
$String* Validator::TYPE_PKIX = nullptr;
$String* Validator::VAR_GENERIC = nullptr;
$String* Validator::VAR_CODE_SIGNING = nullptr;
$String* Validator::VAR_JCE_SIGNING = nullptr;
$String* Validator::VAR_TLS_CLIENT = nullptr;
$String* Validator::VAR_TLS_SERVER = nullptr;
$String* Validator::VAR_TSA_SERVER = nullptr;
$String* Validator::VAR_PLUGIN_CODE_SIGNING = nullptr;

void Validator::init$($String* type, $String* variant) {
	$set(this, type, type);
	$set(this, variant, variant);
	$set(this, endEntityChecker, $EndEntityChecker::getInstance(type, variant));
}

Validator* Validator::getInstance($String* type, $String* variant, $KeyStore* ks) {
	$init(Validator);
	return getInstance(type, variant, $(static_cast<$Collection*>($TrustStoreUtil::getTrustedCerts(ks))));
}

Validator* Validator::getInstance($String* type, $String* variant, $Collection* trustedCerts) {
	$init(Validator);
	if ($nc(type)->equals(Validator::TYPE_SIMPLE)) {
		return $new($SimpleValidator, variant, trustedCerts);
	} else {
		if (type->equals(Validator::TYPE_PKIX)) {
			return $new($PKIXValidator, variant, trustedCerts);
		} else {
			$throwNew($IllegalArgumentException, $$str({"Unknown validator type: "_s, type}));
		}
	}
}

Validator* Validator::getInstance($String* type, $String* variant, $PKIXBuilderParameters* params) {
	$init(Validator);
	if ($nc(type)->equals(Validator::TYPE_PKIX) == false) {
		$throwNew($IllegalArgumentException, "getInstance(PKIXBuilderParameters) can only be used with PKIX validator"_s);
	}
	return $new($PKIXValidator, variant, params);
}

$X509CertificateArray* Validator::validate($X509CertificateArray* chain) {
	return validate(chain, nullptr, nullptr);
}

$X509CertificateArray* Validator::validate($X509CertificateArray* chain, $Collection* otherCerts) {
	return validate(chain, otherCerts, nullptr);
}

$X509CertificateArray* Validator::validate($X509CertificateArray* chain, $Collection* otherCerts, Object$* parameter) {
	return validate(chain, otherCerts, $($Collections::emptyList()), nullptr, parameter);
}

$X509CertificateArray* Validator::validate($X509CertificateArray* chain$renamed, $Collection* otherCerts, $List* responseList, $AlgorithmConstraints* constraints, Object$* parameter) {
	$var($X509CertificateArray, chain, chain$renamed);
	$assign(chain, engineValidate(chain, otherCerts, responseList, constraints, parameter));
	if ($nc(chain)->length > 1) {
		bool checkUnresolvedCritExts = (this->type == Validator::TYPE_PKIX) ? false : true;
		$nc(this->endEntityChecker)->check(chain, parameter, checkUnresolvedCritExts);
	}
	return chain;
}

void Validator::setValidationDate($Date* validationDate) {
	$set(this, validationDate, validationDate);
}

void clinit$Validator($Class* class$) {
	$assignStatic(Validator::TYPE_SIMPLE, "Simple"_s);
	$assignStatic(Validator::TYPE_PKIX, "PKIX"_s);
	$assignStatic(Validator::VAR_GENERIC, "generic"_s);
	$assignStatic(Validator::VAR_CODE_SIGNING, "code signing"_s);
	$assignStatic(Validator::VAR_JCE_SIGNING, "jce signing"_s);
	$assignStatic(Validator::VAR_TLS_CLIENT, "tls client"_s);
	$assignStatic(Validator::VAR_TLS_SERVER, "tls server"_s);
	$assignStatic(Validator::VAR_TSA_SERVER, "tsa server"_s);
	$assignStatic(Validator::VAR_PLUGIN_CODE_SIGNING, "plugin code signing"_s);
	$assignStatic(Validator::CHAIN0, $new($X509CertificateArray, 0));
}

Validator::Validator() {
}

$Class* Validator::load$($String* name, bool initialize) {
	$loadClass(Validator, name, initialize, &_Validator_ClassInfo_, clinit$Validator, allocate$Validator);
	return class$;
}

$Class* Validator::class$ = nullptr;

		} // validator
	} // security
} // sun