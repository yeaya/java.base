#include <sun/security/x509/DistributionPoint.h>

#include <java/io/IOException.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/IllegalArgumentException.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/StringBuilder.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/Arrays.h>
#include <java/util/Objects.h>
#include <sun/security/util/BitArray.h>
#include <sun/security/util/DerInputStream.h>
#include <sun/security/util/DerOutputStream.h>
#include <sun/security/util/DerValue.h>
#include <sun/security/x509/GeneralNames.h>
#include <sun/security/x509/RDN.h>
#include <jcpp.h>

#undef AA_COMPROMISE
#undef AFFILIATION_CHANGED
#undef CA_COMPROMISE
#undef CERTIFICATE_HOLD
#undef CESSATION_OF_OPERATION
#undef KEY_COMPROMISE
#undef PRIVILEGE_WITHDRAWN
#undef REASON_STRINGS
#undef SUPERSEDED
#undef TAG_CONTEXT
#undef TAG_DIST_PT
#undef TAG_FULL_NAME
#undef TAG_ISSUER
#undef TAG_REASONS
#undef TAG_REL_NAME

using $IOException = ::java::io::IOException;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $MethodInfo = ::java::lang::MethodInfo;
using $Arrays = ::java::util::Arrays;
using $Objects = ::java::util::Objects;
using $BitArray = ::sun::security::util::BitArray;
using $DerInputStream = ::sun::security::util::DerInputStream;
using $DerOutputStream = ::sun::security::util::DerOutputStream;
using $DerValue = ::sun::security::util::DerValue;
using $GeneralNames = ::sun::security::x509::GeneralNames;
using $RDN = ::sun::security::x509::RDN;

namespace sun {
	namespace security {
		namespace x509 {

$FieldInfo _DistributionPoint_FieldInfo_[] = {
	{"KEY_COMPROMISE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(DistributionPoint, KEY_COMPROMISE)},
	{"CA_COMPROMISE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(DistributionPoint, CA_COMPROMISE)},
	{"AFFILIATION_CHANGED", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(DistributionPoint, AFFILIATION_CHANGED)},
	{"SUPERSEDED", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(DistributionPoint, SUPERSEDED)},
	{"CESSATION_OF_OPERATION", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(DistributionPoint, CESSATION_OF_OPERATION)},
	{"CERTIFICATE_HOLD", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(DistributionPoint, CERTIFICATE_HOLD)},
	{"PRIVILEGE_WITHDRAWN", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(DistributionPoint, PRIVILEGE_WITHDRAWN)},
	{"AA_COMPROMISE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(DistributionPoint, AA_COMPROMISE)},
	{"REASON_STRINGS", "[Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(DistributionPoint, REASON_STRINGS)},
	{"TAG_DIST_PT", "B", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(DistributionPoint, TAG_DIST_PT)},
	{"TAG_REASONS", "B", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(DistributionPoint, TAG_REASONS)},
	{"TAG_ISSUER", "B", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(DistributionPoint, TAG_ISSUER)},
	{"TAG_FULL_NAME", "B", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(DistributionPoint, TAG_FULL_NAME)},
	{"TAG_REL_NAME", "B", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(DistributionPoint, TAG_REL_NAME)},
	{"fullName", "Lsun/security/x509/GeneralNames;", nullptr, $PRIVATE, $field(DistributionPoint, fullName)},
	{"relativeName", "Lsun/security/x509/RDN;", nullptr, $PRIVATE, $field(DistributionPoint, relativeName)},
	{"reasonFlags", "[Z", nullptr, $PRIVATE, $field(DistributionPoint, reasonFlags)},
	{"crlIssuer", "Lsun/security/x509/GeneralNames;", nullptr, $PRIVATE, $field(DistributionPoint, crlIssuer)},
	{"hashCode", "I", nullptr, $PRIVATE | $VOLATILE, $field(DistributionPoint, hashCode$)},
	{}
};

$MethodInfo _DistributionPoint_MethodInfo_[] = {
	{"<init>", "(Lsun/security/x509/GeneralNames;[ZLsun/security/x509/GeneralNames;)V", nullptr, $PUBLIC, $method(static_cast<void(DistributionPoint::*)($GeneralNames*,$booleans*,$GeneralNames*)>(&DistributionPoint::init$))},
	{"<init>", "(Lsun/security/x509/RDN;[ZLsun/security/x509/GeneralNames;)V", nullptr, $PUBLIC, $method(static_cast<void(DistributionPoint::*)($RDN*,$booleans*,$GeneralNames*)>(&DistributionPoint::init$))},
	{"<init>", "(Lsun/security/util/DerValue;)V", nullptr, $PUBLIC, $method(static_cast<void(DistributionPoint::*)($DerValue*)>(&DistributionPoint::init$)), "java.io.IOException"},
	{"encode", "(Lsun/security/util/DerOutputStream;)V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"getCRLIssuer", "()Lsun/security/x509/GeneralNames;", nullptr, $PUBLIC},
	{"getFullName", "()Lsun/security/x509/GeneralNames;", nullptr, $PUBLIC},
	{"getReasonFlags", "()[Z", nullptr, $PUBLIC},
	{"getRelativeName", "()Lsun/security/x509/RDN;", nullptr, $PUBLIC},
	{"hashCode", "()I", nullptr, $PUBLIC},
	{"reasonToString", "(I)Ljava/lang/String;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$String*(*)(int32_t)>(&DistributionPoint::reasonToString))},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _DistributionPoint_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.security.x509.DistributionPoint",
	"java.lang.Object",
	nullptr,
	_DistributionPoint_FieldInfo_,
	_DistributionPoint_MethodInfo_
};

$Object* allocate$DistributionPoint($Class* clazz) {
	return $of($alloc(DistributionPoint));
}

$StringArray* DistributionPoint::REASON_STRINGS = nullptr;

void DistributionPoint::init$($GeneralNames* fullName, $booleans* reasonFlags, $GeneralNames* crlIssuer) {
	if ((fullName == nullptr) && (crlIssuer == nullptr)) {
		$throwNew($IllegalArgumentException, "fullName and crlIssuer may not both be null"_s);
	}
	$set(this, fullName, fullName);
	$set(this, reasonFlags, reasonFlags);
	$set(this, crlIssuer, crlIssuer);
}

void DistributionPoint::init$($RDN* relativeName, $booleans* reasonFlags, $GeneralNames* crlIssuer) {
	if ((relativeName == nullptr) && (crlIssuer == nullptr)) {
		$throwNew($IllegalArgumentException, "relativeName and crlIssuer may not both be null"_s);
	}
	$set(this, relativeName, relativeName);
	$set(this, reasonFlags, reasonFlags);
	$set(this, crlIssuer, crlIssuer);
}

void DistributionPoint::init$($DerValue* val) {
	if ($nc(val)->tag != $DerValue::tag_Sequence) {
		$throwNew($IOException, "Invalid encoding of DistributionPoint."_s);
	}
	while (($nc(val)->data$ != nullptr) && ($nc(val->data$)->available() != 0)) {
		$var($DerValue, opt, $nc(val->data$)->getDerValue());
		bool var$0 = $nc(opt)->isContextSpecific(DistributionPoint::TAG_DIST_PT);
		if (var$0 && opt->isConstructed()) {
			if ((this->fullName != nullptr) || (this->relativeName != nullptr)) {
				$throwNew($IOException, "Duplicate DistributionPointName in DistributionPoint."_s);
			}
			$var($DerValue, distPnt, $nc(opt->data$)->getDerValue());
			bool var$1 = $nc(distPnt)->isContextSpecific(DistributionPoint::TAG_FULL_NAME);
			if (var$1 && distPnt->isConstructed()) {
				distPnt->resetTag($DerValue::tag_Sequence);
				$set(this, fullName, $new($GeneralNames, distPnt));
			} else {
				bool var$3 = distPnt->isContextSpecific(DistributionPoint::TAG_REL_NAME);
				if (var$3 && distPnt->isConstructed()) {
					distPnt->resetTag($DerValue::tag_Set);
					$set(this, relativeName, $new($RDN, distPnt));
				} else {
					$throwNew($IOException, "Invalid DistributionPointName in DistributionPoint"_s);
				}
			}
		} else {
			bool var$5 = opt->isContextSpecific(DistributionPoint::TAG_REASONS);
			if (var$5 && !opt->isConstructed()) {
				if (this->reasonFlags != nullptr) {
					$throwNew($IOException, "Duplicate Reasons in DistributionPoint."_s);
				}
				opt->resetTag($DerValue::tag_BitString);
				$set(this, reasonFlags, $nc(($(opt->getUnalignedBitString())))->toBooleanArray());
			} else {
				bool var$7 = opt->isContextSpecific(DistributionPoint::TAG_ISSUER);
				if (var$7 && opt->isConstructed()) {
					if (this->crlIssuer != nullptr) {
						$throwNew($IOException, "Duplicate CRLIssuer in DistributionPoint."_s);
					}
					opt->resetTag($DerValue::tag_Sequence);
					$set(this, crlIssuer, $new($GeneralNames, opt));
				} else {
					$throwNew($IOException, "Invalid encoding of DistributionPoint."_s);
				}
			}
		}
	}
	if ((this->crlIssuer == nullptr) && (this->fullName == nullptr) && (this->relativeName == nullptr)) {
		$throwNew($IOException, "One of fullName, relativeName,  and crlIssuer has to be set"_s);
	}
}

$GeneralNames* DistributionPoint::getFullName() {
	return this->fullName;
}

$RDN* DistributionPoint::getRelativeName() {
	return this->relativeName;
}

$booleans* DistributionPoint::getReasonFlags() {
	return this->reasonFlags;
}

$GeneralNames* DistributionPoint::getCRLIssuer() {
	return this->crlIssuer;
}

void DistributionPoint::encode($DerOutputStream* out) {
	$var($DerOutputStream, tagged, $new($DerOutputStream));
	if ((this->fullName != nullptr) || (this->relativeName != nullptr)) {
		$var($DerOutputStream, distributionPoint, $new($DerOutputStream));
		if (this->fullName != nullptr) {
			$var($DerOutputStream, derOut, $new($DerOutputStream));
			$nc(this->fullName)->encode(derOut);
			distributionPoint->writeImplicit($DerValue::createTag($DerValue::TAG_CONTEXT, true, DistributionPoint::TAG_FULL_NAME), derOut);
		} else if (this->relativeName != nullptr) {
			$var($DerOutputStream, derOut, $new($DerOutputStream));
			$nc(this->relativeName)->encode(derOut);
			distributionPoint->writeImplicit($DerValue::createTag($DerValue::TAG_CONTEXT, true, DistributionPoint::TAG_REL_NAME), derOut);
		}
		tagged->write($DerValue::createTag($DerValue::TAG_CONTEXT, true, DistributionPoint::TAG_DIST_PT), distributionPoint);
	}
	if (this->reasonFlags != nullptr) {
		$var($DerOutputStream, reasons, $new($DerOutputStream));
		$var($BitArray, rf, $new($BitArray, this->reasonFlags));
		reasons->putTruncatedUnalignedBitString(rf);
		tagged->writeImplicit($DerValue::createTag($DerValue::TAG_CONTEXT, false, DistributionPoint::TAG_REASONS), reasons);
	}
	if (this->crlIssuer != nullptr) {
		$var($DerOutputStream, issuer, $new($DerOutputStream));
		$nc(this->crlIssuer)->encode(issuer);
		tagged->writeImplicit($DerValue::createTag($DerValue::TAG_CONTEXT, true, DistributionPoint::TAG_ISSUER), issuer);
	}
	$nc(out)->write($DerValue::tag_Sequence, tagged);
}

bool DistributionPoint::equals(Object$* obj) {
	if ($equals(this, obj)) {
		return true;
	}
	if ($instanceOf(DistributionPoint, obj) == false) {
		return false;
	}
	$var(DistributionPoint, other, $cast(DistributionPoint, obj));
	bool var$2 = $Objects::equals(this->fullName, $nc(other)->fullName);
	bool var$1 = var$2 && $Objects::equals(this->relativeName, $nc(other)->relativeName);
	bool var$0 = var$1 && $Objects::equals(this->crlIssuer, $nc(other)->crlIssuer);
	bool equal = var$0 && $Arrays::equals(this->reasonFlags, $nc(other)->reasonFlags);
	return equal;
}

int32_t DistributionPoint::hashCode() {
	int32_t hash = this->hashCode$;
	if (hash == 0) {
		hash = 1;
		if (this->fullName != nullptr) {
			hash += $nc(this->fullName)->hashCode();
		}
		if (this->relativeName != nullptr) {
			hash += $nc(this->relativeName)->hashCode();
		}
		if (this->crlIssuer != nullptr) {
			hash += $nc(this->crlIssuer)->hashCode();
		}
		if (this->reasonFlags != nullptr) {
			for (int32_t i = 0; i < $nc(this->reasonFlags)->length; ++i) {
				if ($nc(this->reasonFlags)->get(i)) {
					hash += i;
				}
			}
		}
		this->hashCode$ = hash;
	}
	return hash;
}

$String* DistributionPoint::reasonToString(int32_t reason) {
	$init(DistributionPoint);
	if ((reason > 0) && (reason < $nc(DistributionPoint::REASON_STRINGS)->length)) {
		return $nc(DistributionPoint::REASON_STRINGS)->get(reason);
	}
	return $str({"Unknown reason "_s, $$str(reason)});
}

$String* DistributionPoint::toString() {
	$var($StringBuilder, sb, $new($StringBuilder));
	sb->append("DistributionPoint:\n     "_s);
	if (this->fullName != nullptr) {
		sb->append($of(this->fullName));
	}
	if (this->relativeName != nullptr) {
		sb->append($of(this->relativeName));
	}
	sb->append(u'\n');
	if (this->reasonFlags != nullptr) {
		sb->append("   ReasonFlags:\n"_s);
		for (int32_t i = 0; i < $nc(this->reasonFlags)->length; ++i) {
			if ($nc(this->reasonFlags)->get(i)) {
				sb->append("    "_s)->append($(reasonToString(i)))->append(u'\n');
			}
		}
	}
	if (this->crlIssuer != nullptr) {
		sb->append("   CRLIssuer:"_s)->append($of(this->crlIssuer))->append(u'\n');
	}
	return sb->toString();
}

void clinit$DistributionPoint($Class* class$) {
	$assignStatic(DistributionPoint::REASON_STRINGS, $new($StringArray, {
		($String*)nullptr,
		"key compromise"_s,
		"CA compromise"_s,
		"affiliation changed"_s,
		"superseded"_s,
		"cessation of operation"_s,
		"certificate hold"_s,
		"privilege withdrawn"_s,
		"AA compromise"_s
	}));
}

DistributionPoint::DistributionPoint() {
}

$Class* DistributionPoint::load$($String* name, bool initialize) {
	$loadClass(DistributionPoint, name, initialize, &_DistributionPoint_ClassInfo_, clinit$DistributionPoint, allocate$DistributionPoint);
	return class$;
}

$Class* DistributionPoint::class$ = nullptr;

		} // x509
	} // security
} // sun