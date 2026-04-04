#include <sun/security/pkcs/ESSCertId.h>
#include <sun/security/util/DerInputStream.h>
#include <sun/security/util/DerValue.h>
#include <sun/security/util/HexDumpEncoder.h>
#include <sun/security/x509/GeneralNames.h>
#include <sun/security/x509/SerialNumber.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $DerValue = ::sun::security::util::DerValue;
using $HexDumpEncoder = ::sun::security::util::HexDumpEncoder;
using $GeneralNames = ::sun::security::x509::GeneralNames;
using $SerialNumber = ::sun::security::x509::SerialNumber;

namespace sun {
	namespace security {
		namespace pkcs {

$volatile($HexDumpEncoder*) ESSCertId::hexDumper = nullptr;

void ESSCertId::init$($DerValue* certId) {
	$useLocalObjectStack();
	$set(this, certHash, $$nc($nc($nc(certId)->data$)->getDerValue())->toByteArray());
	if (certId->data$->available() > 0) {
		$var($DerValue, issuerSerial, certId->data$->getDerValue());
		$set(this, issuer, $new($GeneralNames, $($nc($nc(issuerSerial)->data$)->getDerValue())));
		$set(this, serialNumber, $new($SerialNumber, $(issuerSerial->data$->getDerValue())));
	}
}

$String* ESSCertId::toString() {
	$useLocalObjectStack();
	$var($StringBuilder, sb, $new($StringBuilder));
	sb->append("[\n\tCertificate hash (SHA-1):\n"_s);
	if (ESSCertId::hexDumper == nullptr) {
		$assignStatic(ESSCertId::hexDumper, $new($HexDumpEncoder));
	}
	sb->append($($nc(ESSCertId::hexDumper)->encode(this->certHash)));
	if (this->issuer != nullptr && this->serialNumber != nullptr) {
		sb->append($$str({"\n\tIssuer: "_s, this->issuer, "\n"_s}));
		sb->append($$str({"\t"_s, this->serialNumber}));
	}
	sb->append("\n]"_s);
	return sb->toString();
}

ESSCertId::ESSCertId() {
}

$Class* ESSCertId::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"hexDumper", "Lsun/security/util/HexDumpEncoder;", nullptr, $PRIVATE | $STATIC | $VOLATILE, $staticField(ESSCertId, hexDumper)},
		{"certHash", "[B", nullptr, $PRIVATE, $field(ESSCertId, certHash)},
		{"issuer", "Lsun/security/x509/GeneralNames;", nullptr, $PRIVATE, $field(ESSCertId, issuer)},
		{"serialNumber", "Lsun/security/x509/SerialNumber;", nullptr, $PRIVATE, $field(ESSCertId, serialNumber)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lsun/security/util/DerValue;)V", nullptr, 0, $method(ESSCertId, init$, void, $DerValue*), "java.io.IOException"},
		{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(ESSCertId, toString, $String*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.security.pkcs.ESSCertId",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(ESSCertId, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ESSCertId);
	});
	return class$;
}

$Class* ESSCertId::class$ = nullptr;

		} // pkcs
	} // security
} // sun