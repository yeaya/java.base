#include <sun/security/provider/certpath/CertPathConstraintsParameters.h>

#include <java/security/Key.h>
#include <java/security/PublicKey.h>
#include <java/security/cert/TrustAnchor.h>
#include <java/security/cert/X509Certificate.h>
#include <java/util/Date.h>
#include <java/util/Set.h>
#include <javax/security/auth/x500/X500Principal.h>
#include <sun/security/provider/certpath/CertPathHelper.h>
#include <sun/security/validator/Validator.h>
#include <jcpp.h>

#undef VAR_GENERIC

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Key = ::java::security::Key;
using $TrustAnchor = ::java::security::cert::TrustAnchor;
using $X509Certificate = ::java::security::cert::X509Certificate;
using $Date = ::java::util::Date;
using $Set = ::java::util::Set;
using $CertPathHelper = ::sun::security::provider::certpath::CertPathHelper;
using $Validator = ::sun::security::validator::Validator;

namespace sun {
	namespace security {
		namespace provider {
			namespace certpath {

$FieldInfo _CertPathConstraintsParameters_FieldInfo_[] = {
	{"key", "Ljava/security/Key;", nullptr, $PRIVATE | $FINAL, $field(CertPathConstraintsParameters, key)},
	{"anchor", "Ljava/security/cert/TrustAnchor;", nullptr, $PRIVATE | $FINAL, $field(CertPathConstraintsParameters, anchor)},
	{"date", "Ljava/util/Date;", nullptr, $PRIVATE | $FINAL, $field(CertPathConstraintsParameters, date)},
	{"variant", "Ljava/lang/String;", nullptr, $PRIVATE | $FINAL, $field(CertPathConstraintsParameters, variant)},
	{"cert", "Ljava/security/cert/X509Certificate;", nullptr, $PRIVATE | $FINAL, $field(CertPathConstraintsParameters, cert)},
	{}
};

$MethodInfo _CertPathConstraintsParameters_MethodInfo_[] = {
	{"<init>", "(Ljava/security/cert/X509Certificate;Ljava/lang/String;Ljava/security/cert/TrustAnchor;Ljava/util/Date;)V", nullptr, $PUBLIC, $method(CertPathConstraintsParameters, init$, void, $X509Certificate*, $String*, $TrustAnchor*, $Date*)},
	{"<init>", "(Ljava/security/Key;Ljava/lang/String;Ljava/security/cert/TrustAnchor;)V", nullptr, $PUBLIC, $method(CertPathConstraintsParameters, init$, void, $Key*, $String*, $TrustAnchor*)},
	{"<init>", "(Ljava/security/Key;Ljava/lang/String;Ljava/security/cert/TrustAnchor;Ljava/util/Date;Ljava/security/cert/X509Certificate;)V", nullptr, $PRIVATE, $method(CertPathConstraintsParameters, init$, void, $Key*, $String*, $TrustAnchor*, $Date*, $X509Certificate*)},
	{"anchorIsJdkCA", "()Z", nullptr, $PUBLIC, $virtualMethod(CertPathConstraintsParameters, anchorIsJdkCA, bool)},
	{"extendedExceptionMsg", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(CertPathConstraintsParameters, extendedExceptionMsg, $String*)},
	{"getDate", "()Ljava/util/Date;", nullptr, $PUBLIC, $virtualMethod(CertPathConstraintsParameters, getDate, $Date*)},
	{"getKeys", "()Ljava/util/Set;", "()Ljava/util/Set<Ljava/security/Key;>;", $PUBLIC, $virtualMethod(CertPathConstraintsParameters, getKeys, $Set*)},
	{"getVariant", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(CertPathConstraintsParameters, getVariant, $String*)},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(CertPathConstraintsParameters, toString, $String*)},
	{}
};

$ClassInfo _CertPathConstraintsParameters_ClassInfo_ = {
	$ACC_SUPER,
	"sun.security.provider.certpath.CertPathConstraintsParameters",
	"java.lang.Object",
	"sun.security.util.ConstraintsParameters",
	_CertPathConstraintsParameters_FieldInfo_,
	_CertPathConstraintsParameters_MethodInfo_
};

$Object* allocate$CertPathConstraintsParameters($Class* clazz) {
	return $of($alloc(CertPathConstraintsParameters));
}

void CertPathConstraintsParameters::init$($X509Certificate* cert, $String* variant, $TrustAnchor* anchor, $Date* date) {
	CertPathConstraintsParameters::init$($($nc(cert)->getPublicKey()), variant, anchor, date, cert);
}

void CertPathConstraintsParameters::init$($Key* key, $String* variant, $TrustAnchor* anchor) {
	CertPathConstraintsParameters::init$(key, variant, anchor, nullptr, nullptr);
}

void CertPathConstraintsParameters::init$($Key* key, $String* variant, $TrustAnchor* anchor, $Date* date, $X509Certificate* cert) {
	$set(this, key, key);
	$init($Validator);
	$set(this, variant, variant == nullptr ? $Validator::VAR_GENERIC : variant);
	$set(this, anchor, anchor);
	$set(this, date, date);
	$set(this, cert, cert);
}

bool CertPathConstraintsParameters::anchorIsJdkCA() {
	return $CertPathHelper::isJdkCA(this->anchor);
}

$Set* CertPathConstraintsParameters::getKeys() {
	return (this->key == nullptr) ? $Set::of() : $Set::of($of(this->key));
}

$Date* CertPathConstraintsParameters::getDate() {
	return this->date;
}

$String* CertPathConstraintsParameters::getVariant() {
	return this->variant;
}

$String* CertPathConstraintsParameters::extendedExceptionMsg() {
	return (this->cert == nullptr ? "."_s : $str({" used with certificate: "_s, $($nc(this->cert)->getSubjectX500Principal())}));
}

$String* CertPathConstraintsParameters::toString() {
	$useLocalCurrentObjectStackCache();
	$var($StringBuilder, sb, $new($StringBuilder, "[\n"_s));
	sb->append("\n  Variant: "_s)->append(this->variant);
	if (this->anchor != nullptr) {
		sb->append("\n  Anchor: "_s)->append($of(this->anchor));
	}
	if (this->cert != nullptr) {
		sb->append("\n  Cert Issuer: "_s)->append($($of($nc(this->cert)->getIssuerX500Principal())));
		sb->append("\n  Cert Subject: "_s)->append($($of($nc(this->cert)->getSubjectX500Principal())));
	}
	if (this->key != nullptr) {
		sb->append("\n  Key: "_s)->append($($nc(this->key)->getAlgorithm()));
	}
	if (this->date != nullptr) {
		sb->append("\n  Date: "_s)->append($of(this->date));
	}
	sb->append("\n]"_s);
	return sb->toString();
}

CertPathConstraintsParameters::CertPathConstraintsParameters() {
}

$Class* CertPathConstraintsParameters::load$($String* name, bool initialize) {
	$loadClass(CertPathConstraintsParameters, name, initialize, &_CertPathConstraintsParameters_ClassInfo_, allocate$CertPathConstraintsParameters);
	return class$;
}

$Class* CertPathConstraintsParameters::class$ = nullptr;

			} // certpath
		} // provider
	} // security
} // sun