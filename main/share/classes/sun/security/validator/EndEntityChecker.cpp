#include <sun/security/validator/EndEntityChecker.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/security/cert/CertificateException.h>
#include <java/security/cert/X509Certificate.h>
#include <java/util/Arrays.h>
#include <java/util/Collection.h>
#include <java/util/Collections.h>
#include <java/util/EnumSet.h>
#include <java/util/Iterator.h>
#include <java/util/List.h>
#include <java/util/Set.h>
#include <sun/security/util/KnownOIDs.h>
#include <sun/security/validator/CADistrustPolicy.h>
#include <sun/security/validator/SimpleValidator.h>
#include <sun/security/validator/Validator.h>
#include <sun/security/validator/ValidatorException.h>
#include <sun/security/x509/NetscapeCertTypeExtension.h>
#include <jcpp.h>

#undef KU_KEY_AGREEMENT
#undef KU_KEY_ENCIPHERMENT
#undef KU_SERVER_ENCRYPTION
#undef KU_SERVER_KEY_AGREEMENT
#undef KU_SERVER_SIGNATURE
#undef KU_SIGNATURE
#undef NSCT_CODE_SIGNING
#undef NSCT_SSL_CLIENT
#undef NSCT_SSL_SERVER
#undef OBJECT_SIGNING
#undef OID_BASIC_CONSTRAINTS
#undef OID_EKU_ANY_USAGE
#undef OID_EKU_CODE_SIGNING
#undef OID_EKU_MS_SGC
#undef OID_EKU_NS_SGC
#undef OID_EKU_TIME_STAMPING
#undef OID_EKU_TLS_CLIENT
#undef OID_EKU_TLS_SERVER
#undef OID_EXTENDED_KEY_USAGE
#undef OID_KEY_USAGE
#undef OID_NETSCAPE_CERT_TYPE
#undef OID_SUBJECT_ALT_NAME
#undef POLICIES
#undef SSL_CLIENT
#undef SSL_SERVER
#undef T_EE_EXTENSIONS
#undef VAR_CODE_SIGNING
#undef VAR_GENERIC
#undef VAR_JCE_SIGNING
#undef VAR_PLUGIN_CODE_SIGNING
#undef VAR_TLS_CLIENT
#undef VAR_TLS_SERVER
#undef VAR_TSA_SERVER

using $X509CertificateArray = $Array<::java::security::cert::X509Certificate>;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $CertificateException = ::java::security::cert::CertificateException;
using $X509Certificate = ::java::security::cert::X509Certificate;
using $X509Extension = ::java::security::cert::X509Extension;
using $Arrays = ::java::util::Arrays;
using $Collection = ::java::util::Collection;
using $Collections = ::java::util::Collections;
using $EnumSet = ::java::util::EnumSet;
using $Iterator = ::java::util::Iterator;
using $List = ::java::util::List;
using $Set = ::java::util::Set;
using $KnownOIDs = ::sun::security::util::KnownOIDs;
using $CADistrustPolicy = ::sun::security::validator::CADistrustPolicy;
using $SimpleValidator = ::sun::security::validator::SimpleValidator;
using $Validator = ::sun::security::validator::Validator;
using $ValidatorException = ::sun::security::validator::ValidatorException;
using $NetscapeCertTypeExtension = ::sun::security::x509::NetscapeCertTypeExtension;

namespace sun {
	namespace security {
		namespace validator {

$FieldInfo _EndEntityChecker_FieldInfo_[] = {
	{"OID_EXTENDED_KEY_USAGE", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(EndEntityChecker, OID_EXTENDED_KEY_USAGE)},
	{"OID_EKU_TLS_SERVER", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(EndEntityChecker, OID_EKU_TLS_SERVER)},
	{"OID_EKU_TLS_CLIENT", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(EndEntityChecker, OID_EKU_TLS_CLIENT)},
	{"OID_EKU_CODE_SIGNING", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(EndEntityChecker, OID_EKU_CODE_SIGNING)},
	{"OID_EKU_TIME_STAMPING", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(EndEntityChecker, OID_EKU_TIME_STAMPING)},
	{"OID_EKU_ANY_USAGE", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(EndEntityChecker, OID_EKU_ANY_USAGE)},
	{"OID_EKU_NS_SGC", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(EndEntityChecker, OID_EKU_NS_SGC)},
	{"OID_EKU_MS_SGC", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(EndEntityChecker, OID_EKU_MS_SGC)},
	{"OID_SUBJECT_ALT_NAME", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(EndEntityChecker, OID_SUBJECT_ALT_NAME)},
	{"NSCT_SSL_CLIENT", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(EndEntityChecker, NSCT_SSL_CLIENT)},
	{"NSCT_SSL_SERVER", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(EndEntityChecker, NSCT_SSL_SERVER)},
	{"NSCT_CODE_SIGNING", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(EndEntityChecker, NSCT_CODE_SIGNING)},
	{"KU_SIGNATURE", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(EndEntityChecker, KU_SIGNATURE)},
	{"KU_KEY_ENCIPHERMENT", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(EndEntityChecker, KU_KEY_ENCIPHERMENT)},
	{"KU_KEY_AGREEMENT", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(EndEntityChecker, KU_KEY_AGREEMENT)},
	{"KU_SERVER_SIGNATURE", "Ljava/util/Collection;", "Ljava/util/Collection<Ljava/lang/String;>;", $PRIVATE | $STATIC | $FINAL, $staticField(EndEntityChecker, KU_SERVER_SIGNATURE)},
	{"KU_SERVER_ENCRYPTION", "Ljava/util/Collection;", "Ljava/util/Collection<Ljava/lang/String;>;", $PRIVATE | $STATIC | $FINAL, $staticField(EndEntityChecker, KU_SERVER_ENCRYPTION)},
	{"KU_SERVER_KEY_AGREEMENT", "Ljava/util/Collection;", "Ljava/util/Collection<Ljava/lang/String;>;", $PRIVATE | $STATIC | $FINAL, $staticField(EndEntityChecker, KU_SERVER_KEY_AGREEMENT)},
	{"variant", "Ljava/lang/String;", nullptr, $PRIVATE | $FINAL, $field(EndEntityChecker, variant)},
	{"type", "Ljava/lang/String;", nullptr, $PRIVATE | $FINAL, $field(EndEntityChecker, type)},
	{}
};

$MethodInfo _EndEntityChecker_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PRIVATE, $method(static_cast<void(EndEntityChecker::*)($String*,$String*)>(&EndEntityChecker::init$))},
	{"check", "([Ljava/security/cert/X509Certificate;Ljava/lang/Object;Z)V", nullptr, 0, nullptr, "java.security.cert.CertificateException"},
	{"checkCodeSigning", "(Ljava/security/cert/X509Certificate;Ljava/util/Set;)V", "(Ljava/security/cert/X509Certificate;Ljava/util/Set<Ljava/lang/String;>;)V", $PRIVATE, $method(static_cast<void(EndEntityChecker::*)($X509Certificate*,$Set*)>(&EndEntityChecker::checkCodeSigning)), "java.security.cert.CertificateException"},
	{"checkEKU", "(Ljava/security/cert/X509Certificate;Ljava/util/Set;Ljava/lang/String;)Z", "(Ljava/security/cert/X509Certificate;Ljava/util/Set<Ljava/lang/String;>;Ljava/lang/String;)Z", $PRIVATE, $method(static_cast<bool(EndEntityChecker::*)($X509Certificate*,$Set*,$String*)>(&EndEntityChecker::checkEKU)), "java.security.cert.CertificateException"},
	{"checkKeyUsage", "(Ljava/security/cert/X509Certificate;I)Z", nullptr, $PRIVATE, $method(static_cast<bool(EndEntityChecker::*)($X509Certificate*,int32_t)>(&EndEntityChecker::checkKeyUsage)), "java.security.cert.CertificateException"},
	{"checkRemainingExtensions", "(Ljava/util/Set;)V", "(Ljava/util/Set<Ljava/lang/String;>;)V", $PRIVATE, $method(static_cast<void(EndEntityChecker::*)($Set*)>(&EndEntityChecker::checkRemainingExtensions)), "java.security.cert.CertificateException"},
	{"checkTLSClient", "(Ljava/security/cert/X509Certificate;Ljava/util/Set;)V", "(Ljava/security/cert/X509Certificate;Ljava/util/Set<Ljava/lang/String;>;)V", $PRIVATE, $method(static_cast<void(EndEntityChecker::*)($X509Certificate*,$Set*)>(&EndEntityChecker::checkTLSClient)), "java.security.cert.CertificateException"},
	{"checkTLSServer", "(Ljava/security/cert/X509Certificate;Ljava/lang/String;Ljava/util/Set;)V", "(Ljava/security/cert/X509Certificate;Ljava/lang/String;Ljava/util/Set<Ljava/lang/String;>;)V", $PRIVATE, $method(static_cast<void(EndEntityChecker::*)($X509Certificate*,$String*,$Set*)>(&EndEntityChecker::checkTLSServer)), "java.security.cert.CertificateException"},
	{"checkTSAServer", "(Ljava/security/cert/X509Certificate;Ljava/util/Set;)V", "(Ljava/security/cert/X509Certificate;Ljava/util/Set<Ljava/lang/String;>;)V", $PRIVATE, $method(static_cast<void(EndEntityChecker::*)($X509Certificate*,$Set*)>(&EndEntityChecker::checkTSAServer)), "java.security.cert.CertificateException"},
	{"getCriticalExtensions", "(Ljava/security/cert/X509Certificate;)Ljava/util/Set;", "(Ljava/security/cert/X509Certificate;)Ljava/util/Set<Ljava/lang/String;>;", $PRIVATE, $method(static_cast<$Set*(EndEntityChecker::*)($X509Certificate*)>(&EndEntityChecker::getCriticalExtensions))},
	{"getInstance", "(Ljava/lang/String;Ljava/lang/String;)Lsun/security/validator/EndEntityChecker;", nullptr, $STATIC, $method(static_cast<EndEntityChecker*(*)($String*,$String*)>(&EndEntityChecker::getInstance))},
	{}
};

$ClassInfo _EndEntityChecker_ClassInfo_ = {
	$ACC_SUPER,
	"sun.security.validator.EndEntityChecker",
	"java.lang.Object",
	nullptr,
	_EndEntityChecker_FieldInfo_,
	_EndEntityChecker_MethodInfo_
};

$Object* allocate$EndEntityChecker($Class* clazz) {
	return $of($alloc(EndEntityChecker));
}

$String* EndEntityChecker::OID_EXTENDED_KEY_USAGE = nullptr;
$String* EndEntityChecker::OID_EKU_TLS_SERVER = nullptr;
$String* EndEntityChecker::OID_EKU_TLS_CLIENT = nullptr;
$String* EndEntityChecker::OID_EKU_CODE_SIGNING = nullptr;
$String* EndEntityChecker::OID_EKU_TIME_STAMPING = nullptr;
$String* EndEntityChecker::OID_EKU_ANY_USAGE = nullptr;
$String* EndEntityChecker::OID_EKU_NS_SGC = nullptr;
$String* EndEntityChecker::OID_EKU_MS_SGC = nullptr;
$String* EndEntityChecker::OID_SUBJECT_ALT_NAME = nullptr;
$String* EndEntityChecker::NSCT_SSL_CLIENT = nullptr;
$String* EndEntityChecker::NSCT_SSL_SERVER = nullptr;
$String* EndEntityChecker::NSCT_CODE_SIGNING = nullptr;
$Collection* EndEntityChecker::KU_SERVER_SIGNATURE = nullptr;
$Collection* EndEntityChecker::KU_SERVER_ENCRYPTION = nullptr;
$Collection* EndEntityChecker::KU_SERVER_KEY_AGREEMENT = nullptr;

void EndEntityChecker::init$($String* type, $String* variant) {
	$set(this, type, type);
	$set(this, variant, variant);
}

EndEntityChecker* EndEntityChecker::getInstance($String* type, $String* variant) {
	$init(EndEntityChecker);
	return $new(EndEntityChecker, type, variant);
}

void EndEntityChecker::check($X509CertificateArray* chain, Object$* parameter, bool checkUnresolvedCritExts) {
	$useLocalCurrentObjectStackCache();
	$init($Validator);
	if ($nc(this->variant)->equals($Validator::VAR_GENERIC)) {
		return;
	}
	$var($Set, exts, getCriticalExtensions($nc(chain)->get(0)));
	if ($nc(this->variant)->equals($Validator::VAR_TLS_SERVER)) {
		checkTLSServer($nc(chain)->get(0), $cast($String, parameter), exts);
	} else {
		if ($nc(this->variant)->equals($Validator::VAR_TLS_CLIENT)) {
			checkTLSClient($nc(chain)->get(0), exts);
		} else {
			if ($nc(this->variant)->equals($Validator::VAR_CODE_SIGNING)) {
				checkCodeSigning($nc(chain)->get(0), exts);
			} else {
				if ($nc(this->variant)->equals($Validator::VAR_JCE_SIGNING)) {
					checkCodeSigning($nc(chain)->get(0), exts);
				} else {
					if ($nc(this->variant)->equals($Validator::VAR_PLUGIN_CODE_SIGNING)) {
						checkCodeSigning($nc(chain)->get(0), exts);
					} else {
						if ($nc(this->variant)->equals($Validator::VAR_TSA_SERVER)) {
							checkTSAServer($nc(chain)->get(0), exts);
						} else {
							$throwNew($CertificateException, $$str({"Unknown variant: "_s, this->variant}));
						}
					}
				}
			}
		}
	}
	if (checkUnresolvedCritExts) {
		checkRemainingExtensions(exts);
	}
	{
		$init($CADistrustPolicy);
		$var($Iterator, i$, $nc($CADistrustPolicy::POLICIES)->iterator());
		for (; $nc(i$)->hasNext();) {
			$CADistrustPolicy* policy = $cast($CADistrustPolicy, i$->next());
			{
				$nc(policy)->checkDistrust(this->variant, chain);
			}
		}
	}
}

$Set* EndEntityChecker::getCriticalExtensions($X509Certificate* cert) {
	$var($Set, exts, $nc(cert)->getCriticalExtensionOIDs());
	if (exts == nullptr) {
		$assign(exts, $Collections::emptySet());
	}
	return exts;
}

void EndEntityChecker::checkRemainingExtensions($Set* exts) {
	$init($SimpleValidator);
	$nc(exts)->remove($SimpleValidator::OID_BASIC_CONSTRAINTS);
	exts->remove(EndEntityChecker::OID_SUBJECT_ALT_NAME);
	if (!exts->isEmpty()) {
		$throwNew($CertificateException, $$str({"Certificate contains unsupported critical extensions: "_s, exts}));
	}
}

bool EndEntityChecker::checkEKU($X509Certificate* cert, $Set* exts, $String* expectedEKU) {
	$var($List, eku, $nc(cert)->getExtendedKeyUsage());
	if (eku == nullptr) {
		return true;
	}
	bool var$0 = $nc(eku)->contains(expectedEKU);
	return var$0 || $nc(eku)->contains(EndEntityChecker::OID_EKU_ANY_USAGE);
}

bool EndEntityChecker::checkKeyUsage($X509Certificate* cert, int32_t bit) {
	$var($booleans, keyUsage, $nc(cert)->getKeyUsage());
	if (keyUsage == nullptr) {
		return true;
	}
	return ($nc(keyUsage)->length > bit) && keyUsage->get(bit);
}

void EndEntityChecker::checkTLSClient($X509Certificate* cert, $Set* exts) {
	if (checkKeyUsage(cert, EndEntityChecker::KU_SIGNATURE) == false) {
		$init($ValidatorException);
		$throwNew($ValidatorException, "KeyUsage does not allow digital signatures"_s, $ValidatorException::T_EE_EXTENSIONS, cert);
	}
	if (checkEKU(cert, exts, EndEntityChecker::OID_EKU_TLS_CLIENT) == false) {
		$init($ValidatorException);
		$throwNew($ValidatorException, "Extended key usage does not permit use for TLS client authentication"_s, $ValidatorException::T_EE_EXTENSIONS, cert);
	}
	if (!$SimpleValidator::getNetscapeCertTypeBit(cert, EndEntityChecker::NSCT_SSL_CLIENT)) {
		$init($ValidatorException);
		$throwNew($ValidatorException, "Netscape cert type does not permit use for SSL client"_s, $ValidatorException::T_EE_EXTENSIONS, cert);
	}
	$nc(exts)->remove($SimpleValidator::OID_KEY_USAGE);
	exts->remove($SimpleValidator::OID_EXTENDED_KEY_USAGE);
	exts->remove($SimpleValidator::OID_NETSCAPE_CERT_TYPE);
}

void EndEntityChecker::checkTLSServer($X509Certificate* cert, $String* parameter, $Set* exts) {
	if ($nc(EndEntityChecker::KU_SERVER_ENCRYPTION)->contains(parameter)) {
		if (checkKeyUsage(cert, EndEntityChecker::KU_KEY_ENCIPHERMENT) == false) {
			$init($ValidatorException);
			$throwNew($ValidatorException, "KeyUsage does not allow key encipherment"_s, $ValidatorException::T_EE_EXTENSIONS, cert);
		}
	} else if ($nc(EndEntityChecker::KU_SERVER_SIGNATURE)->contains(parameter)) {
		if (checkKeyUsage(cert, EndEntityChecker::KU_SIGNATURE) == false) {
			$init($ValidatorException);
			$throwNew($ValidatorException, "KeyUsage does not allow digital signatures"_s, $ValidatorException::T_EE_EXTENSIONS, cert);
		}
	} else if ($nc(EndEntityChecker::KU_SERVER_KEY_AGREEMENT)->contains(parameter)) {
		if (checkKeyUsage(cert, EndEntityChecker::KU_KEY_AGREEMENT) == false) {
			$init($ValidatorException);
			$throwNew($ValidatorException, "KeyUsage does not allow key agreement"_s, $ValidatorException::T_EE_EXTENSIONS, cert);
		}
	} else {
		$throwNew($CertificateException, $$str({"Unknown authType: "_s, parameter}));
	}
	if (checkEKU(cert, exts, EndEntityChecker::OID_EKU_TLS_SERVER) == false) {
		bool var$0 = (checkEKU(cert, exts, EndEntityChecker::OID_EKU_MS_SGC) == false);
		if (var$0 && (checkEKU(cert, exts, EndEntityChecker::OID_EKU_NS_SGC) == false)) {
			$init($ValidatorException);
			$throwNew($ValidatorException, "Extended key usage does not permit use for TLS server authentication"_s, $ValidatorException::T_EE_EXTENSIONS, cert);
		}
	}
	if (!$SimpleValidator::getNetscapeCertTypeBit(cert, EndEntityChecker::NSCT_SSL_SERVER)) {
		$init($ValidatorException);
		$throwNew($ValidatorException, "Netscape cert type does not permit use for SSL server"_s, $ValidatorException::T_EE_EXTENSIONS, cert);
	}
	$nc(exts)->remove($SimpleValidator::OID_KEY_USAGE);
	exts->remove($SimpleValidator::OID_EXTENDED_KEY_USAGE);
	exts->remove($SimpleValidator::OID_NETSCAPE_CERT_TYPE);
}

void EndEntityChecker::checkCodeSigning($X509Certificate* cert, $Set* exts) {
	if (checkKeyUsage(cert, EndEntityChecker::KU_SIGNATURE) == false) {
		$init($ValidatorException);
		$throwNew($ValidatorException, "KeyUsage does not allow digital signatures"_s, $ValidatorException::T_EE_EXTENSIONS, cert);
	}
	if (checkEKU(cert, exts, EndEntityChecker::OID_EKU_CODE_SIGNING) == false) {
		$init($ValidatorException);
		$throwNew($ValidatorException, "Extended key usage does not permit use for code signing"_s, $ValidatorException::T_EE_EXTENSIONS, cert);
	}
	$init($Validator);
	if ($nc(this->variant)->equals($Validator::VAR_JCE_SIGNING) == false) {
		if (!$SimpleValidator::getNetscapeCertTypeBit(cert, EndEntityChecker::NSCT_CODE_SIGNING)) {
			$init($ValidatorException);
			$throwNew($ValidatorException, "Netscape cert type does not permit use for code signing"_s, $ValidatorException::T_EE_EXTENSIONS, cert);
		}
		$nc(exts)->remove($SimpleValidator::OID_NETSCAPE_CERT_TYPE);
	}
	$init($SimpleValidator);
	$nc(exts)->remove($SimpleValidator::OID_KEY_USAGE);
	exts->remove($SimpleValidator::OID_EXTENDED_KEY_USAGE);
}

void EndEntityChecker::checkTSAServer($X509Certificate* cert, $Set* exts) {
	if (checkKeyUsage(cert, EndEntityChecker::KU_SIGNATURE) == false) {
		$init($ValidatorException);
		$throwNew($ValidatorException, "KeyUsage does not allow digital signatures"_s, $ValidatorException::T_EE_EXTENSIONS, cert);
	}
	if ($nc(cert)->getExtendedKeyUsage() == nullptr) {
		$init($ValidatorException);
		$throwNew($ValidatorException, "Certificate does not contain an extended key usage extension required for a TSA server"_s, $ValidatorException::T_EE_EXTENSIONS, cert);
	}
	if (checkEKU(cert, exts, EndEntityChecker::OID_EKU_TIME_STAMPING) == false) {
		$init($ValidatorException);
		$throwNew($ValidatorException, "Extended key usage does not permit use for TSA server"_s, $ValidatorException::T_EE_EXTENSIONS, cert);
	}
	$init($SimpleValidator);
	$nc(exts)->remove($SimpleValidator::OID_KEY_USAGE);
	exts->remove($SimpleValidator::OID_EXTENDED_KEY_USAGE);
}

void clinit$EndEntityChecker($Class* class$) {
	$useLocalCurrentObjectStackCache();
	$init($NetscapeCertTypeExtension);
	$assignStatic(EndEntityChecker::NSCT_SSL_CLIENT, $NetscapeCertTypeExtension::SSL_CLIENT);
	$assignStatic(EndEntityChecker::NSCT_SSL_SERVER, $NetscapeCertTypeExtension::SSL_SERVER);
	$assignStatic(EndEntityChecker::NSCT_CODE_SIGNING, $NetscapeCertTypeExtension::OBJECT_SIGNING);
	$init($SimpleValidator);
	$assignStatic(EndEntityChecker::OID_EXTENDED_KEY_USAGE, $SimpleValidator::OID_EXTENDED_KEY_USAGE);
	$init($KnownOIDs);
	$assignStatic(EndEntityChecker::OID_EKU_TLS_SERVER, $KnownOIDs::serverAuth->value());
	$assignStatic(EndEntityChecker::OID_EKU_TLS_CLIENT, $KnownOIDs::clientAuth->value());
	$assignStatic(EndEntityChecker::OID_EKU_CODE_SIGNING, $KnownOIDs::codeSigning->value());
	$assignStatic(EndEntityChecker::OID_EKU_TIME_STAMPING, $KnownOIDs::KP_TimeStamping->value());
	$assignStatic(EndEntityChecker::OID_EKU_ANY_USAGE, $KnownOIDs::anyExtendedKeyUsage->value());
	$assignStatic(EndEntityChecker::OID_EKU_NS_SGC, $KnownOIDs::NETSCAPE_ExportApproved->value());
	$assignStatic(EndEntityChecker::OID_EKU_MS_SGC, $KnownOIDs::MICROSOFT_ExportApproved->value());
	$assignStatic(EndEntityChecker::OID_SUBJECT_ALT_NAME, $KnownOIDs::SubjectAlternativeName->value());
	$assignStatic(EndEntityChecker::KU_SERVER_SIGNATURE, $Arrays::asList($$new($StringArray, {
		"DHE_DSS"_s,
		"DHE_RSA"_s,
		"ECDHE_ECDSA"_s,
		"ECDHE_RSA"_s,
		"RSA_EXPORT"_s,
		"UNKNOWN"_s
	})));
	$assignStatic(EndEntityChecker::KU_SERVER_ENCRYPTION, $Arrays::asList($$new($StringArray, {"RSA"_s})));
	$assignStatic(EndEntityChecker::KU_SERVER_KEY_AGREEMENT, $Arrays::asList($$new($StringArray, {
		"DH_DSS"_s,
		"DH_RSA"_s,
		"ECDH_ECDSA"_s,
		"ECDH_RSA"_s
	})));
}

EndEntityChecker::EndEntityChecker() {
}

$Class* EndEntityChecker::load$($String* name, bool initialize) {
	$loadClass(EndEntityChecker, name, initialize, &_EndEntityChecker_ClassInfo_, clinit$EndEntityChecker, allocate$EndEntityChecker);
	return class$;
}

$Class* EndEntityChecker::class$ = nullptr;

		} // validator
	} // security
} // sun