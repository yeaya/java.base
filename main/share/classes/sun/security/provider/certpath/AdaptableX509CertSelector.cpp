#include <sun/security/provider/certpath/AdaptableX509CertSelector.h>

#include <java/io/IOException.h>
#include <java/math/BigInteger.h>
#include <java/security/cert/Certificate.h>
#include <java/security/cert/CertificateException.h>
#include <java/security/cert/X509CertSelector.h>
#include <java/security/cert/X509Certificate.h>
#include <java/util/Arrays.h>
#include <java/util/Date.h>
#include <javax/security/auth/x500/X500Principal.h>
#include <sun/security/util/Debug.h>
#include <sun/security/util/DerInputStream.h>
#include <sun/security/util/KnownOIDs.h>
#include <sun/security/x509/AuthorityKeyIdentifierExtension.h>
#include <sun/security/x509/SerialNumber.h>
#include <jcpp.h>

#undef SERIAL_NUMBER

using $IOException = ::java::io::IOException;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $MethodInfo = ::java::lang::MethodInfo;
using $BigInteger = ::java::math::BigInteger;
using $Certificate = ::java::security::cert::Certificate;
using $CertificateException = ::java::security::cert::CertificateException;
using $X509CertSelector = ::java::security::cert::X509CertSelector;
using $X509Certificate = ::java::security::cert::X509Certificate;
using $Arrays = ::java::util::Arrays;
using $Date = ::java::util::Date;
using $Debug = ::sun::security::util::Debug;
using $DerInputStream = ::sun::security::util::DerInputStream;
using $KnownOIDs = ::sun::security::util::KnownOIDs;
using $AuthorityKeyIdentifierExtension = ::sun::security::x509::AuthorityKeyIdentifierExtension;
using $SerialNumber = ::sun::security::x509::SerialNumber;

namespace sun {
	namespace security {
		namespace provider {
			namespace certpath {

$FieldInfo _AdaptableX509CertSelector_FieldInfo_[] = {
	{"debug", "Lsun/security/util/Debug;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(AdaptableX509CertSelector, debug)},
	{"startDate", "Ljava/util/Date;", nullptr, $PRIVATE, $field(AdaptableX509CertSelector, startDate)},
	{"endDate", "Ljava/util/Date;", nullptr, $PRIVATE, $field(AdaptableX509CertSelector, endDate)},
	{"ski", "[B", nullptr, $PRIVATE, $field(AdaptableX509CertSelector, ski)},
	{"serial", "Ljava/math/BigInteger;", nullptr, $PRIVATE, $field(AdaptableX509CertSelector, serial)},
	{}
};

$MethodInfo _AdaptableX509CertSelector_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(AdaptableX509CertSelector, init$, void)},
	{"clone", "()Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(AdaptableX509CertSelector, clone, $Object*)},
	{"match", "(Ljava/security/cert/Certificate;)Z", nullptr, $PUBLIC, $virtualMethod(AdaptableX509CertSelector, match, bool, $Certificate*)},
	{"matchSubjectKeyID", "(Ljava/security/cert/X509Certificate;)Z", nullptr, $PRIVATE, $method(AdaptableX509CertSelector, matchSubjectKeyID, bool, $X509Certificate*)},
	{"setSerialNumber", "(Ljava/math/BigInteger;)V", nullptr, $PUBLIC, $virtualMethod(AdaptableX509CertSelector, setSerialNumber, void, $BigInteger*)},
	{"setSkiAndSerialNumber", "(Lsun/security/x509/AuthorityKeyIdentifierExtension;)V", nullptr, 0, $virtualMethod(AdaptableX509CertSelector, setSkiAndSerialNumber, void, $AuthorityKeyIdentifierExtension*), "java.io.IOException"},
	{"setSubjectKeyIdentifier", "([B)V", nullptr, $PUBLIC, $virtualMethod(AdaptableX509CertSelector, setSubjectKeyIdentifier, void, $bytes*)},
	{"setValidityPeriod", "(Ljava/util/Date;Ljava/util/Date;)V", nullptr, 0, $virtualMethod(AdaptableX509CertSelector, setValidityPeriod, void, $Date*, $Date*)},
	{}
};

$ClassInfo _AdaptableX509CertSelector_ClassInfo_ = {
	$ACC_SUPER,
	"sun.security.provider.certpath.AdaptableX509CertSelector",
	"java.security.cert.X509CertSelector",
	nullptr,
	_AdaptableX509CertSelector_FieldInfo_,
	_AdaptableX509CertSelector_MethodInfo_
};

$Object* allocate$AdaptableX509CertSelector($Class* clazz) {
	return $of($alloc(AdaptableX509CertSelector));
}

$Debug* AdaptableX509CertSelector::debug = nullptr;

void AdaptableX509CertSelector::init$() {
	$X509CertSelector::init$();
}

void AdaptableX509CertSelector::setValidityPeriod($Date* startDate, $Date* endDate) {
	$set(this, startDate, startDate);
	$set(this, endDate, endDate);
}

void AdaptableX509CertSelector::setSubjectKeyIdentifier($bytes* subjectKeyID) {
	$throwNew($IllegalArgumentException);
}

void AdaptableX509CertSelector::setSerialNumber($BigInteger* serial) {
	$throwNew($IllegalArgumentException);
}

void AdaptableX509CertSelector::setSkiAndSerialNumber($AuthorityKeyIdentifierExtension* ext) {
	$set(this, ski, nullptr);
	$set(this, serial, nullptr);
	if (ext != nullptr) {
		$set(this, ski, ext->getEncodedKeyIdentifier());
		$var($SerialNumber, asn, $cast($SerialNumber, ext->get($AuthorityKeyIdentifierExtension::SERIAL_NUMBER)));
		if (asn != nullptr) {
			$set(this, serial, asn->getNumber());
		}
	}
}

bool AdaptableX509CertSelector::match($Certificate* cert) {
	$useLocalCurrentObjectStackCache();
	$var($X509Certificate, xcert, $cast($X509Certificate, cert));
	if (!matchSubjectKeyID(xcert)) {
		return false;
	}
	int32_t version = $nc(xcert)->getVersion();
	if (this->serial != nullptr && version > 2) {
		if (!$nc(this->serial)->equals($(xcert->getSerialNumber()))) {
			return false;
		}
	}
	if (version < 3) {
		if (this->startDate != nullptr) {
			try {
				xcert->checkValidity(this->startDate);
			} catch ($CertificateException& ce) {
				return false;
			}
		}
		if (this->endDate != nullptr) {
			try {
				xcert->checkValidity(this->endDate);
			} catch ($CertificateException& ce) {
				return false;
			}
		}
	}
	if (!$X509CertSelector::match(cert)) {
		return false;
	}
	return true;
}

bool AdaptableX509CertSelector::matchSubjectKeyID($X509Certificate* xcert) {
	$useLocalCurrentObjectStackCache();
	if (this->ski == nullptr) {
		return true;
	}
	try {
		$init($KnownOIDs);
		$var($bytes, extVal, $nc(xcert)->getExtensionValue($($KnownOIDs::SubjectKeyID->value())));
		if (extVal == nullptr) {
			if (AdaptableX509CertSelector::debug != nullptr && $Debug::isVerbose()) {
				$nc(AdaptableX509CertSelector::debug)->println($$str({"AdaptableX509CertSelector.match: no subject key ID extension. Subject: "_s, $(xcert->getSubjectX500Principal())}));
			}
			return true;
		}
		$var($DerInputStream, in, $new($DerInputStream, extVal));
		$var($bytes, certSubjectKeyID, in->getOctetString());
		if (certSubjectKeyID == nullptr || !$Arrays::equals(this->ski, certSubjectKeyID)) {
			if (AdaptableX509CertSelector::debug != nullptr && $Debug::isVerbose()) {
				$var($String, var$0, $$str({"AdaptableX509CertSelector.match: subject key IDs don\'t match. Expected: "_s, $($Arrays::toString(this->ski)), " Cert\'s: "_s}));
				$nc(AdaptableX509CertSelector::debug)->println($$concat(var$0, $($Arrays::toString(certSubjectKeyID))));
			}
			return false;
		}
	} catch ($IOException& ex) {
		if (AdaptableX509CertSelector::debug != nullptr && $Debug::isVerbose()) {
			$nc(AdaptableX509CertSelector::debug)->println("AdaptableX509CertSelector.match: exception in subject key ID check"_s);
		}
		return false;
	}
	return true;
}

$Object* AdaptableX509CertSelector::clone() {
	$var(AdaptableX509CertSelector, copy, $cast(AdaptableX509CertSelector, $X509CertSelector::clone()));
	if (this->startDate != nullptr) {
		$set($nc(copy), startDate, $cast($Date, $nc(this->startDate)->clone()));
	}
	if (this->endDate != nullptr) {
		$set($nc(copy), endDate, $cast($Date, $nc(this->endDate)->clone()));
	}
	if (this->ski != nullptr) {
		$set($nc(copy), ski, $cast($bytes, $nc(this->ski)->clone()));
	}
	return $of(copy);
}

void clinit$AdaptableX509CertSelector($Class* class$) {
	$assignStatic(AdaptableX509CertSelector::debug, $Debug::getInstance("certpath"_s));
}

AdaptableX509CertSelector::AdaptableX509CertSelector() {
}

$Class* AdaptableX509CertSelector::load$($String* name, bool initialize) {
	$loadClass(AdaptableX509CertSelector, name, initialize, &_AdaptableX509CertSelector_ClassInfo_, clinit$AdaptableX509CertSelector, allocate$AdaptableX509CertSelector);
	return class$;
}

$Class* AdaptableX509CertSelector::class$ = nullptr;

			} // certpath
		} // provider
	} // security
} // sun