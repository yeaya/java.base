#include <sun/security/validator/SymantecTLSPolicy.h>

#include <java/security/cert/X509Certificate.h>
#include <java/time/Instant.h>
#include <java/time/LocalDate.h>
#include <java/time/Month.h>
#include <java/time/ZoneId.h>
#include <java/time/ZoneOffset.h>
#include <java/time/chrono/ChronoLocalDate.h>
#include <java/util/Date.h>
#include <java/util/Map.h>
#include <java/util/Set.h>
#include <javax/security/auth/x500/X500Principal.h>
#include <sun/security/validator/ValidatorException.h>
#include <sun/security/x509/X509CertImpl.h>
#include <jcpp.h>

#undef APRIL
#undef DECEMBER
#undef EXEMPT_SUBCAS
#undef FINGERPRINTS
#undef T_UNTRUSTED_CERT
#undef UTC

using $X509CertificateArray = $Array<::java::security::cert::X509Certificate>;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $X509Certificate = ::java::security::cert::X509Certificate;
using $Instant = ::java::time::Instant;
using $LocalDate = ::java::time::LocalDate;
using $Month = ::java::time::Month;
using $ZoneId = ::java::time::ZoneId;
using $ZoneOffset = ::java::time::ZoneOffset;
using $ChronoLocalDate = ::java::time::chrono::ChronoLocalDate;
using $Date = ::java::util::Date;
using $Map = ::java::util::Map;
using $Set = ::java::util::Set;
using $X500Principal = ::javax::security::auth::x500::X500Principal;
using $ValidatorException = ::sun::security::validator::ValidatorException;
using $X509CertImpl = ::sun::security::x509::X509CertImpl;

namespace sun {
	namespace security {
		namespace validator {

$FieldInfo _SymantecTLSPolicy_FieldInfo_[] = {
	{"FINGERPRINTS", "Ljava/util/Set;", "Ljava/util/Set<Ljava/lang/String;>;", $PRIVATE | $STATIC | $FINAL, $staticField(SymantecTLSPolicy, FINGERPRINTS)},
	{"DECEMBER_31_2019", "Ljava/time/LocalDate;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(SymantecTLSPolicy, DECEMBER_31_2019)},
	{"EXEMPT_SUBCAS", "Ljava/util/Map;", "Ljava/util/Map<Ljava/lang/String;Ljava/time/LocalDate;>;", $PRIVATE | $STATIC | $FINAL, $staticField(SymantecTLSPolicy, EXEMPT_SUBCAS)},
	{"APRIL_16_2019", "Ljava/time/LocalDate;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(SymantecTLSPolicy, APRIL_16_2019)},
	{}
};

$MethodInfo _SymantecTLSPolicy_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(SymantecTLSPolicy::*)()>(&SymantecTLSPolicy::init$))},
	{"checkDistrust", "([Ljava/security/cert/X509Certificate;)V", nullptr, $STATIC, $method(static_cast<void(*)($X509CertificateArray*)>(&SymantecTLSPolicy::checkDistrust)), "sun.security.validator.ValidatorException"},
	{"checkNotBefore", "(Ljava/time/LocalDate;Ljava/time/LocalDate;Ljava/security/cert/X509Certificate;)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)($LocalDate*,$LocalDate*,$X509Certificate*)>(&SymantecTLSPolicy::checkNotBefore)), "sun.security.validator.ValidatorException"},
	{"fingerprint", "(Ljava/security/cert/X509Certificate;)Ljava/lang/String;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$String*(*)($X509Certificate*)>(&SymantecTLSPolicy::fingerprint))},
	{}
};

$ClassInfo _SymantecTLSPolicy_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"sun.security.validator.SymantecTLSPolicy",
	"java.lang.Object",
	nullptr,
	_SymantecTLSPolicy_FieldInfo_,
	_SymantecTLSPolicy_MethodInfo_
};

$Object* allocate$SymantecTLSPolicy($Class* clazz) {
	return $of($alloc(SymantecTLSPolicy));
}

$Set* SymantecTLSPolicy::FINGERPRINTS = nullptr;
$LocalDate* SymantecTLSPolicy::DECEMBER_31_2019 = nullptr;
$Map* SymantecTLSPolicy::EXEMPT_SUBCAS = nullptr;
$LocalDate* SymantecTLSPolicy::APRIL_16_2019 = nullptr;

void SymantecTLSPolicy::checkDistrust($X509CertificateArray* chain) {
	$init(SymantecTLSPolicy);
	$useLocalCurrentObjectStackCache();
	$var($X509Certificate, anchor, $nc(chain)->get(chain->length - 1));
	if ($nc(SymantecTLSPolicy::FINGERPRINTS)->contains($(fingerprint(anchor)))) {
		$var($Date, notBefore, $nc(chain->get(0))->getNotBefore());
		$init($ZoneOffset);
		$var($LocalDate, ldNotBefore, $LocalDate::ofInstant($($nc(notBefore)->toInstant()), $ZoneOffset::UTC));
		if (chain->length > 2) {
			$var($X509Certificate, subCA, chain->get(chain->length - 2));
			$var($LocalDate, distrustDate, $cast($LocalDate, $nc(SymantecTLSPolicy::EXEMPT_SUBCAS)->get($(fingerprint(subCA)))));
			if (distrustDate != nullptr) {
				checkNotBefore(ldNotBefore, distrustDate, anchor);
				return;
			}
		}
		checkNotBefore(ldNotBefore, SymantecTLSPolicy::APRIL_16_2019, anchor);
	}
}

$String* SymantecTLSPolicy::fingerprint($X509Certificate* cert) {
	$init(SymantecTLSPolicy);
	return ($instanceOf($X509CertImpl, cert)) ? $nc(($cast($X509CertImpl, cert)))->getFingerprint("SHA-256"_s) : $X509CertImpl::getFingerprint("SHA-256"_s, cert);
}

void SymantecTLSPolicy::checkNotBefore($LocalDate* notBeforeDate, $LocalDate* distrustDate, $X509Certificate* anchor) {
	$init(SymantecTLSPolicy);
	$useLocalCurrentObjectStackCache();
	if ($nc(notBeforeDate)->isAfter(distrustDate)) {
		$var($String, var$0, $$str({"TLS Server certificate issued after "_s, distrustDate, " and anchored by a distrusted legacy Symantec root CA: "_s}));
		$init($ValidatorException);
		$throwNew($ValidatorException, $$concat(var$0, $($nc(anchor)->getSubjectX500Principal())), $ValidatorException::T_UNTRUSTED_CERT, anchor);
	}
}

void SymantecTLSPolicy::init$() {
}

void clinit$SymantecTLSPolicy($Class* class$) {
	$assignStatic(SymantecTLSPolicy::FINGERPRINTS, $Set::of($$new($StringArray, {
		"FF856A2D251DCD88D36656F450126798CFABAADE40799C722DE4D2B5DB36A73A"_s,
		"37D51006C512EAAB626421F1EC8C92013FC5F82AE98EE533EB4619B8DEB4D06C"_s,
		"5EDB7AC43B82A06A8761E8D7BE4979EBF2611F7DD79BF91C1C6B566A219ED766"_s,
		"B478B812250DF878635C2AA7EC7D155EAA625EE82916E2CD294361886CD1FBD4"_s,
		"A0459B9F63B22559F5FA5D4C6DB3F9F72FF19342033578F073BF1D1B46CBB912"_s,
		"8D722F81A9C113C0791DF136A2966DB26C950A971DB46B4199F4EA54B78BFB9F"_s,
		"A4310D50AF18A6447190372A86AFAF8B951FFB431D837F1E5688B45971ED1557"_s,
		"4B03F45807AD70F21BFC2CAE71C9FDE4604C064CF5FFB686BAE5DBAAD7FDD34C"_s,
		"3F9F27D583204B9E09C8A3D2066C4B57D3A2479C3693650880505698105DBCE9"_s,
		"3A43E220FE7F3EA9653D1E21742EAC2B75C20FD8980305BC502CAF8C2D9B41A1"_s,
		"A4B6B3996FC2F306B3FD8681BD63413D8C5009CC4FA329C2CCF0E2FA1B140305"_s,
		"83CE3C1229688A593D485F81973C0F9195431EDA37CC5E36430E79C7A888638B"_s,
		"EB04CF5EB1F39AFA762F2BB120F296CBA520C1B97DB1589565B81CB9A17B7244"_s,
		"69DDD7EA90BB57C93E135DC85EA6FCD5480B603239BDC454FC758B2A26CF7F79"_s,
		"9ACFAB7E43C8D880D06B262A94DEEEE4B4659989C3D0CAF19BAF6405E41AB7DF"_s,
		"2399561127A57125DE8CEFEA610DDF2FA078B5C8067F4E828290BFB860E84B3C"_s
	})));
	$init($Month);
	$assignStatic(SymantecTLSPolicy::DECEMBER_31_2019, $LocalDate::of(2019, $Month::DECEMBER, 31));
	$assignStatic(SymantecTLSPolicy::EXEMPT_SUBCAS, $Map::of("AC2B922ECFD5E01711772FEA8ED372DE9D1E2245FCE3F57A9CDBEC77296A424B"_s, SymantecTLSPolicy::DECEMBER_31_2019, "A4FE7C7F15155F3F0AEF7AAA83CF6E06DEB97CA3F909DF920AC1490882D488ED"_s, SymantecTLSPolicy::DECEMBER_31_2019));
	$assignStatic(SymantecTLSPolicy::APRIL_16_2019, $LocalDate::of(2019, $Month::APRIL, 16));
}

SymantecTLSPolicy::SymantecTLSPolicy() {
}

$Class* SymantecTLSPolicy::load$($String* name, bool initialize) {
	$loadClass(SymantecTLSPolicy, name, initialize, &_SymantecTLSPolicy_ClassInfo_, clinit$SymantecTLSPolicy, allocate$SymantecTLSPolicy);
	return class$;
}

$Class* SymantecTLSPolicy::class$ = nullptr;

		} // validator
	} // security
} // sun