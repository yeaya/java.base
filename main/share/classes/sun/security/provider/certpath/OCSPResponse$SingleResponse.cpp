#include <sun/security/provider/certpath/OCSPResponse$SingleResponse.h>
#include <java/io/IOException.h>
#include <java/security/cert/CRLReason.h>
#include <java/security/cert/Extension.h>
#include <java/util/Collection.h>
#include <java/util/Collections.h>
#include <java/util/Date.h>
#include <java/util/Iterator.h>
#include <java/util/Map.h>
#include <sun/security/provider/certpath/CertId.h>
#include <sun/security/provider/certpath/OCSP$RevocationStatus$CertStatus.h>
#include <sun/security/provider/certpath/OCSPResponse.h>
#include <sun/security/util/Debug.h>
#include <sun/security/util/DerInputStream.h>
#include <sun/security/util/DerValue.h>
#include <jcpp.h>

#undef GOOD
#undef REVOKED
#undef UNKNOWN
#undef UNSPECIFIED

using $IOException = ::java::io::IOException;
using $Byte = ::java::lang::Byte;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $CRLReason = ::java::security::cert::CRLReason;
using $Extension = ::java::security::cert::Extension;
using $Collections = ::java::util::Collections;
using $Date = ::java::util::Date;
using $Iterator = ::java::util::Iterator;
using $Map = ::java::util::Map;
using $CertId = ::sun::security::provider::certpath::CertId;
using $OCSP$RevocationStatus$CertStatus = ::sun::security::provider::certpath::OCSP$RevocationStatus$CertStatus;
using $OCSPResponse = ::sun::security::provider::certpath::OCSPResponse;
using $DerInputStream = ::sun::security::util::DerInputStream;
using $DerValue = ::sun::security::util::DerValue;

namespace sun {
	namespace security {
		namespace provider {
			namespace certpath {

void OCSPResponse$SingleResponse::init$($DerValue* der) {
	$useLocalObjectStack();
	if ($nc(der)->tag != $DerValue::tag_Sequence) {
		$throwNew($IOException, "Bad ASN.1 encoding in SingleResponse"_s);
	}
	$var($DerInputStream, tmp, der->data$);
	$set(this, certId, $new($CertId, $nc($($nc(tmp)->getDerValue()))->data$));
	$var($DerValue, derVal, tmp->getDerValue());
	int16_t tag = (int8_t)($nc(derVal)->tag & 0x1f);
	if (tag == 1) {
		$init($OCSP$RevocationStatus$CertStatus);
		$set(this, certStatus, $OCSP$RevocationStatus$CertStatus::REVOKED);
		$set(this, revocationTime, $nc(derVal->data$)->getGeneralizedTime());
		if (derVal->data$->available() != 0) {
			$var($DerValue, dv, derVal->data$->getDerValue());
			tag = (int8_t)($nc(dv)->tag & 0x1f);
			if (tag == 0) {
				int32_t reason = $nc(dv->data$)->getEnumerated();
				$init($OCSPResponse);
				if (reason >= 0 && reason < $nc($OCSPResponse::values)->length) {
					$set(this, revocationReason, $OCSPResponse::values->get(reason));
				} else {
					$init($CRLReason);
					$set(this, revocationReason, $CRLReason::UNSPECIFIED);
				}
			} else {
				$init($CRLReason);
				$set(this, revocationReason, $CRLReason::UNSPECIFIED);
			}
		} else {
			$init($CRLReason);
			$set(this, revocationReason, $CRLReason::UNSPECIFIED);
		}
		$init($OCSPResponse);
		if ($OCSPResponse::debug != nullptr) {
			$OCSPResponse::debug->println($$str({"Revocation time: "_s, this->revocationTime}));
			$OCSPResponse::debug->println($$str({"Revocation reason: "_s, this->revocationReason}));
		}
	} else {
		$set(this, revocationTime, nullptr);
		$set(this, revocationReason, nullptr);
		if (tag == 0) {
			$init($OCSP$RevocationStatus$CertStatus);
			$set(this, certStatus, $OCSP$RevocationStatus$CertStatus::GOOD);
		} else if (tag == 2) {
			$init($OCSP$RevocationStatus$CertStatus);
			$set(this, certStatus, $OCSP$RevocationStatus$CertStatus::UNKNOWN);
		} else {
			$throwNew($IOException, "Invalid certificate status"_s);
		}
	}
	$set(this, thisUpdate, tmp->getGeneralizedTime());
	$init($OCSPResponse);
	if ($OCSPResponse::debug != nullptr) {
		$OCSPResponse::debug->println($$str({"thisUpdate: "_s, this->thisUpdate}));
	}
	$var($Date, tmpNextUpdate, nullptr);
	$var($Map, tmpMap, nullptr);
	if (tmp->available() > 0) {
		$assign(derVal, tmp->getDerValue());
		if ($nc(derVal)->isContextSpecific((int8_t)0)) {
			$assign(tmpNextUpdate, $nc(derVal->data$)->getGeneralizedTime());
			if ($OCSPResponse::debug != nullptr) {
				$OCSPResponse::debug->println($$str({"nextUpdate: "_s, tmpNextUpdate}));
			}
			$assign(derVal, tmp->available() > 0 ? tmp->getDerValue() : ($DerValue*)nullptr);
		}
		if (derVal != nullptr) {
			if (derVal->isContextSpecific((int8_t)1)) {
				$assign(tmpMap, $OCSPResponse::parseExtensions(derVal));
				if (tmp->available() > 0) {
					$throwNew($IOException, $$str({$$str(tmp->available()), " bytes of additional data in singleResponse"_s}));
				}
			} else {
				$throwNew($IOException, $$str({"Unsupported singleResponse item, tag = "_s, $($String::format("%02X"_s, $$new($ObjectArray, {$($Byte::valueOf(derVal->tag))})))}));
			}
		}
	}
	$set(this, nextUpdate, tmpNextUpdate);
	$set(this, singleExtensions, (tmpMap != nullptr) ? tmpMap : $Collections::emptyMap());
	if ($OCSPResponse::debug != nullptr) {
		$var($Iterator, i$, $$nc($nc(this->singleExtensions)->values())->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($Extension, ext, $cast($Extension, i$->next()));
			{
				$OCSPResponse::debug->println($$str({"singleExtension: "_s, ext}));
			}
		}
	}
}

$OCSP$RevocationStatus$CertStatus* OCSPResponse$SingleResponse::getCertStatus() {
	return this->certStatus;
}

$CertId* OCSPResponse$SingleResponse::getCertId() {
	return this->certId;
}

$Date* OCSPResponse$SingleResponse::getThisUpdate() {
	return (this->thisUpdate != nullptr ? $cast($Date, this->thisUpdate->clone()) : ($Date*)nullptr);
}

$Date* OCSPResponse$SingleResponse::getNextUpdate() {
	return (this->nextUpdate != nullptr ? $cast($Date, this->nextUpdate->clone()) : ($Date*)nullptr);
}

$Date* OCSPResponse$SingleResponse::getRevocationTime() {
	return (this->revocationTime != nullptr ? $cast($Date, this->revocationTime->clone()) : ($Date*)nullptr);
}

$CRLReason* OCSPResponse$SingleResponse::getRevocationReason() {
	return this->revocationReason;
}

$Map* OCSPResponse$SingleResponse::getSingleExtensions() {
	return $Collections::unmodifiableMap(this->singleExtensions);
}

$String* OCSPResponse$SingleResponse::toString() {
	$useLocalObjectStack();
	$var($StringBuilder, sb, $new($StringBuilder));
	sb->append("SingleResponse:\n"_s);
	sb->append(this->certId);
	sb->append("\nCertStatus: "_s)->append(this->certStatus)->append("\n"_s);
	$init($OCSP$RevocationStatus$CertStatus);
	if (this->certStatus == $OCSP$RevocationStatus$CertStatus::REVOKED) {
		sb->append("revocationTime is "_s);
		sb->append(this->revocationTime)->append("\n"_s);
		sb->append("revocationReason is "_s);
		sb->append(this->revocationReason)->append("\n"_s);
	}
	sb->append("thisUpdate is "_s)->append(this->thisUpdate)->append("\n"_s);
	if (this->nextUpdate != nullptr) {
		sb->append("nextUpdate is "_s)->append(this->nextUpdate)->append("\n"_s);
	}
	{
		$var($Iterator, i$, $$nc($nc(this->singleExtensions)->values())->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($Extension, ext, $cast($Extension, i$->next()));
			{
				sb->append("singleExtension: "_s);
				sb->append($($nc(ext)->toString()))->append("\n"_s);
			}
		}
	}
	return sb->toString();
}

OCSPResponse$SingleResponse::OCSPResponse$SingleResponse() {
}

$Class* OCSPResponse$SingleResponse::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"certId", "Lsun/security/provider/certpath/CertId;", nullptr, $PRIVATE | $FINAL, $field(OCSPResponse$SingleResponse, certId)},
		{"certStatus", "Lsun/security/provider/certpath/OCSP$RevocationStatus$CertStatus;", nullptr, $PRIVATE | $FINAL, $field(OCSPResponse$SingleResponse, certStatus)},
		{"thisUpdate", "Ljava/util/Date;", nullptr, $PRIVATE | $FINAL, $field(OCSPResponse$SingleResponse, thisUpdate)},
		{"nextUpdate", "Ljava/util/Date;", nullptr, $PRIVATE | $FINAL, $field(OCSPResponse$SingleResponse, nextUpdate)},
		{"revocationTime", "Ljava/util/Date;", nullptr, $PRIVATE | $FINAL, $field(OCSPResponse$SingleResponse, revocationTime)},
		{"revocationReason", "Ljava/security/cert/CRLReason;", nullptr, $PRIVATE | $FINAL, $field(OCSPResponse$SingleResponse, revocationReason)},
		{"singleExtensions", "Ljava/util/Map;", "Ljava/util/Map<Ljava/lang/String;Ljava/security/cert/Extension;>;", $PRIVATE | $FINAL, $field(OCSPResponse$SingleResponse, singleExtensions)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lsun/security/util/DerValue;)V", nullptr, $PRIVATE, $method(OCSPResponse$SingleResponse, init$, void, $DerValue*), "java.io.IOException"},
		{"getCertId", "()Lsun/security/provider/certpath/CertId;", nullptr, $PUBLIC, $method(OCSPResponse$SingleResponse, getCertId, $CertId*)},
		{"getCertStatus", "()Lsun/security/provider/certpath/OCSP$RevocationStatus$CertStatus;", nullptr, $PUBLIC, $virtualMethod(OCSPResponse$SingleResponse, getCertStatus, $OCSP$RevocationStatus$CertStatus*)},
		{"getNextUpdate", "()Ljava/util/Date;", nullptr, $PUBLIC, $method(OCSPResponse$SingleResponse, getNextUpdate, $Date*)},
		{"getRevocationReason", "()Ljava/security/cert/CRLReason;", nullptr, $PUBLIC, $virtualMethod(OCSPResponse$SingleResponse, getRevocationReason, $CRLReason*)},
		{"getRevocationTime", "()Ljava/util/Date;", nullptr, $PUBLIC, $virtualMethod(OCSPResponse$SingleResponse, getRevocationTime, $Date*)},
		{"getSingleExtensions", "()Ljava/util/Map;", "()Ljava/util/Map<Ljava/lang/String;Ljava/security/cert/Extension;>;", $PUBLIC, $virtualMethod(OCSPResponse$SingleResponse, getSingleExtensions, $Map*)},
		{"getThisUpdate", "()Ljava/util/Date;", nullptr, $PUBLIC, $method(OCSPResponse$SingleResponse, getThisUpdate, $Date*)},
		{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(OCSPResponse$SingleResponse, toString, $String*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.security.provider.certpath.OCSPResponse$SingleResponse", "sun.security.provider.certpath.OCSPResponse", "SingleResponse", $PUBLIC | $STATIC | $FINAL},
		{"sun.security.provider.certpath.OCSP$RevocationStatus", "sun.security.provider.certpath.OCSP", "RevocationStatus", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER,
		"sun.security.provider.certpath.OCSPResponse$SingleResponse",
		"java.lang.Object",
		"sun.security.provider.certpath.OCSP$RevocationStatus",
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.security.provider.certpath.OCSPResponse"
	};
	$loadClass(OCSPResponse$SingleResponse, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(OCSPResponse$SingleResponse);
	});
	return class$;
}

$Class* OCSPResponse$SingleResponse::class$ = nullptr;

			} // certpath
		} // provider
	} // security
} // sun