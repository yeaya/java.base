#include <sun/security/x509/DistributionPointName.h>

#include <java/io/IOException.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/IllegalArgumentException.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/StringBuilder.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/Objects.h>
#include <sun/security/util/DerOutputStream.h>
#include <sun/security/util/DerValue.h>
#include <sun/security/x509/GeneralNames.h>
#include <sun/security/x509/RDN.h>
#include <jcpp.h>

#undef TAG_CONTEXT
#undef TAG_RELATIVE_NAME
#undef TAG_FULL_NAME

using $IOException = ::java::io::IOException;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $MethodInfo = ::java::lang::MethodInfo;
using $Objects = ::java::util::Objects;
using $DerOutputStream = ::sun::security::util::DerOutputStream;
using $DerValue = ::sun::security::util::DerValue;
using $GeneralNames = ::sun::security::x509::GeneralNames;
using $RDN = ::sun::security::x509::RDN;

namespace sun {
	namespace security {
		namespace x509 {

$FieldInfo _DistributionPointName_FieldInfo_[] = {
	{"TAG_FULL_NAME", "B", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(DistributionPointName, TAG_FULL_NAME)},
	{"TAG_RELATIVE_NAME", "B", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(DistributionPointName, TAG_RELATIVE_NAME)},
	{"fullName", "Lsun/security/x509/GeneralNames;", nullptr, $PRIVATE, $field(DistributionPointName, fullName)},
	{"relativeName", "Lsun/security/x509/RDN;", nullptr, $PRIVATE, $field(DistributionPointName, relativeName)},
	{"hashCode", "I", nullptr, $PRIVATE | $VOLATILE, $field(DistributionPointName, hashCode$)},
	{}
};

$MethodInfo _DistributionPointName_MethodInfo_[] = {
	{"<init>", "(Lsun/security/x509/GeneralNames;)V", nullptr, $PUBLIC, $method(static_cast<void(DistributionPointName::*)($GeneralNames*)>(&DistributionPointName::init$))},
	{"<init>", "(Lsun/security/x509/RDN;)V", nullptr, $PUBLIC, $method(static_cast<void(DistributionPointName::*)($RDN*)>(&DistributionPointName::init$))},
	{"<init>", "(Lsun/security/util/DerValue;)V", nullptr, $PUBLIC, $method(static_cast<void(DistributionPointName::*)($DerValue*)>(&DistributionPointName::init$)), "java.io.IOException"},
	{"encode", "(Lsun/security/util/DerOutputStream;)V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"getFullName", "()Lsun/security/x509/GeneralNames;", nullptr, $PUBLIC},
	{"getRelativeName", "()Lsun/security/x509/RDN;", nullptr, $PUBLIC},
	{"hashCode", "()I", nullptr, $PUBLIC},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _DistributionPointName_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.security.x509.DistributionPointName",
	"java.lang.Object",
	nullptr,
	_DistributionPointName_FieldInfo_,
	_DistributionPointName_MethodInfo_
};

$Object* allocate$DistributionPointName($Class* clazz) {
	return $of($alloc(DistributionPointName));
}

void DistributionPointName::init$($GeneralNames* fullName) {
	$set(this, fullName, nullptr);
	$set(this, relativeName, nullptr);
	if (fullName == nullptr) {
		$throwNew($IllegalArgumentException, "fullName must not be null"_s);
	}
	$set(this, fullName, fullName);
}

void DistributionPointName::init$($RDN* relativeName) {
	$set(this, fullName, nullptr);
	$set(this, relativeName, nullptr);
	if (relativeName == nullptr) {
		$throwNew($IllegalArgumentException, "relativeName must not be null"_s);
	}
	$set(this, relativeName, relativeName);
}

void DistributionPointName::init$($DerValue* encoding) {
	$set(this, fullName, nullptr);
	$set(this, relativeName, nullptr);
	bool var$0 = $nc(encoding)->isContextSpecific(DistributionPointName::TAG_FULL_NAME);
	if (var$0 && encoding->isConstructed()) {
		encoding->resetTag($DerValue::tag_Sequence);
		$set(this, fullName, $new($GeneralNames, encoding));
	} else {
		bool var$2 = encoding->isContextSpecific(DistributionPointName::TAG_RELATIVE_NAME);
		if (var$2 && encoding->isConstructed()) {
			encoding->resetTag($DerValue::tag_Set);
			$set(this, relativeName, $new($RDN, encoding));
		} else {
			$throwNew($IOException, "Invalid encoding for DistributionPointName"_s);
		}
	}
}

$GeneralNames* DistributionPointName::getFullName() {
	return this->fullName;
}

$RDN* DistributionPointName::getRelativeName() {
	return this->relativeName;
}

void DistributionPointName::encode($DerOutputStream* out) {
	$var($DerOutputStream, theChoice, $new($DerOutputStream));
	if (this->fullName != nullptr) {
		$nc(this->fullName)->encode(theChoice);
		$nc(out)->writeImplicit($DerValue::createTag($DerValue::TAG_CONTEXT, true, DistributionPointName::TAG_FULL_NAME), theChoice);
	} else {
		$nc(this->relativeName)->encode(theChoice);
		$nc(out)->writeImplicit($DerValue::createTag($DerValue::TAG_CONTEXT, true, DistributionPointName::TAG_RELATIVE_NAME), theChoice);
	}
}

bool DistributionPointName::equals(Object$* obj) {
	if ($equals(this, obj)) {
		return true;
	}
	if ($instanceOf(DistributionPointName, obj) == false) {
		return false;
	}
	$var(DistributionPointName, other, $cast(DistributionPointName, obj));
	bool var$0 = $Objects::equals(this->fullName, $nc(other)->fullName);
	return var$0 && $Objects::equals(this->relativeName, $nc(other)->relativeName);
}

int32_t DistributionPointName::hashCode() {
	int32_t hash = this->hashCode$;
	if (hash == 0) {
		hash = 1;
		if (this->fullName != nullptr) {
			hash += $nc(this->fullName)->hashCode();
		} else {
			hash += $nc(this->relativeName)->hashCode();
		}
		this->hashCode$ = hash;
	}
	return hash;
}

$String* DistributionPointName::toString() {
	$var($StringBuilder, sb, $new($StringBuilder));
	sb->append("DistributionPointName:\n     "_s);
	if (this->fullName != nullptr) {
		sb->append($of(this->fullName));
	} else {
		sb->append($of(this->relativeName));
	}
	sb->append(u'\n');
	return sb->toString();
}

DistributionPointName::DistributionPointName() {
}

$Class* DistributionPointName::load$($String* name, bool initialize) {
	$loadClass(DistributionPointName, name, initialize, &_DistributionPointName_ClassInfo_, allocate$DistributionPointName);
	return class$;
}

$Class* DistributionPointName::class$ = nullptr;

		} // x509
	} // security
} // sun