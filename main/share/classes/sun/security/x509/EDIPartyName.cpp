#include <sun/security/x509/EDIPartyName.h>

#include <java/io/IOException.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/StringBuilder.h>
#include <java/lang/UnsupportedOperationException.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <sun/security/util/DerInputStream.h>
#include <sun/security/util/DerOutputStream.h>
#include <sun/security/util/DerValue.h>
#include <sun/security/x509/GeneralNameInterface.h>
#include <jcpp.h>

#undef TAG_CONTEXT
#undef TAG_ASSIGNER
#undef NAME_EDI
#undef NAME_DIFF_TYPE
#undef TAG_PARTYNAME

using $DerValueArray = $Array<::sun::security::util::DerValue>;
using $IOException = ::java::io::IOException;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $UnsupportedOperationException = ::java::lang::UnsupportedOperationException;
using $DerInputStream = ::sun::security::util::DerInputStream;
using $DerOutputStream = ::sun::security::util::DerOutputStream;
using $DerValue = ::sun::security::util::DerValue;
using $GeneralNameInterface = ::sun::security::x509::GeneralNameInterface;

namespace sun {
	namespace security {
		namespace x509 {

$FieldInfo _EDIPartyName_FieldInfo_[] = {
	{"TAG_ASSIGNER", "B", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(EDIPartyName, TAG_ASSIGNER)},
	{"TAG_PARTYNAME", "B", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(EDIPartyName, TAG_PARTYNAME)},
	{"assigner", "Ljava/lang/String;", nullptr, $PRIVATE, $field(EDIPartyName, assigner)},
	{"party", "Ljava/lang/String;", nullptr, $PRIVATE, $field(EDIPartyName, party)},
	{"myhash", "I", nullptr, $PRIVATE, $field(EDIPartyName, myhash)},
	{}
};

$MethodInfo _EDIPartyName_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(EDIPartyName::*)($String*,$String*)>(&EDIPartyName::init$))},
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(EDIPartyName::*)($String*)>(&EDIPartyName::init$))},
	{"<init>", "(Lsun/security/util/DerValue;)V", nullptr, $PUBLIC, $method(static_cast<void(EDIPartyName::*)($DerValue*)>(&EDIPartyName::init$)), "java.io.IOException"},
	{"constrains", "(Lsun/security/x509/GeneralNameInterface;)I", nullptr, $PUBLIC, nullptr, "java.lang.UnsupportedOperationException"},
	{"encode", "(Lsun/security/util/DerOutputStream;)V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"getAssignerName", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getPartyName", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getType", "()I", nullptr, $PUBLIC},
	{"hashCode", "()I", nullptr, $PUBLIC},
	{"subtreeDepth", "()I", nullptr, $PUBLIC, nullptr, "java.lang.UnsupportedOperationException"},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _EDIPartyName_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.security.x509.EDIPartyName",
	"java.lang.Object",
	"sun.security.x509.GeneralNameInterface",
	_EDIPartyName_FieldInfo_,
	_EDIPartyName_MethodInfo_
};

$Object* allocate$EDIPartyName($Class* clazz) {
	return $of($alloc(EDIPartyName));
}

void EDIPartyName::init$($String* assignerName, $String* partyName) {
	$set(this, assigner, nullptr);
	$set(this, party, nullptr);
	this->myhash = -1;
	$set(this, assigner, assignerName);
	$set(this, party, partyName);
}

void EDIPartyName::init$($String* partyName) {
	$set(this, assigner, nullptr);
	$set(this, party, nullptr);
	this->myhash = -1;
	$set(this, party, partyName);
}

void EDIPartyName::init$($DerValue* derValue) {
	$set(this, assigner, nullptr);
	$set(this, party, nullptr);
	this->myhash = -1;
	$var($DerInputStream, in, $new($DerInputStream, $($nc(derValue)->toByteArray())));
	$var($DerValueArray, seq, in->getSequence(2));
	int32_t len = $nc(seq)->length;
	if (len < 1 || len > 2) {
		$throwNew($IOException, "Invalid encoding of EDIPartyName"_s);
	}
	for (int32_t i = 0; i < len; ++i) {
		$var($DerValue, opt, seq->get(i));
		bool var$0 = $nc(opt)->isContextSpecific(EDIPartyName::TAG_ASSIGNER);
		if (var$0 && !opt->isConstructed()) {
			if (this->assigner != nullptr) {
				$throwNew($IOException, "Duplicate nameAssigner found in EDIPartyName"_s);
			}
			$assign(opt, $nc(opt->data$)->getDerValue());
			$set(this, assigner, $nc(opt)->getAsString());
		}
		bool var$1 = $nc(opt)->isContextSpecific(EDIPartyName::TAG_PARTYNAME);
		if (var$1 && !opt->isConstructed()) {
			if (this->party != nullptr) {
				$throwNew($IOException, "Duplicate partyName found in EDIPartyName"_s);
			}
			$assign(opt, $nc(opt->data$)->getDerValue());
			$set(this, party, $nc(opt)->getAsString());
		}
	}
}

int32_t EDIPartyName::getType() {
	return ($GeneralNameInterface::NAME_EDI);
}

void EDIPartyName::encode($DerOutputStream* out) {
	$var($DerOutputStream, tagged, $new($DerOutputStream));
	$var($DerOutputStream, tmp, $new($DerOutputStream));
	if (this->assigner != nullptr) {
		$var($DerOutputStream, tmp2, $new($DerOutputStream));
		tmp2->putPrintableString(this->assigner);
		tagged->write($DerValue::createTag($DerValue::TAG_CONTEXT, false, EDIPartyName::TAG_ASSIGNER), tmp2);
	}
	if (this->party == nullptr) {
		$throwNew($IOException, "Cannot have null partyName"_s);
	}
	tmp->putPrintableString(this->party);
	tagged->write($DerValue::createTag($DerValue::TAG_CONTEXT, false, EDIPartyName::TAG_PARTYNAME), tmp);
	$nc(out)->write($DerValue::tag_Sequence, tagged);
}

$String* EDIPartyName::getAssignerName() {
	return this->assigner;
}

$String* EDIPartyName::getPartyName() {
	return this->party;
}

bool EDIPartyName::equals(Object$* other) {
	if (!($instanceOf(EDIPartyName, other))) {
		return false;
	}
	$var($String, otherAssigner, $nc(($cast(EDIPartyName, other)))->assigner);
	if (this->assigner == nullptr) {
		if (otherAssigner != nullptr) {
			return false;
		}
	} else if (!($nc(this->assigner)->equals(otherAssigner))) {
		return false;
	}
	$var($String, otherParty, ($cast(EDIPartyName, other))->party);
	if (this->party == nullptr) {
		if (otherParty != nullptr) {
			return false;
		}
	} else if (!($nc(this->party)->equals(otherParty))) {
		return false;
	}
	return true;
}

int32_t EDIPartyName::hashCode() {
	if (this->myhash == -1) {
		this->myhash = 37 + (this->party == nullptr ? 1 : $nc(this->party)->hashCode());
		if (this->assigner != nullptr) {
			this->myhash = 37 * this->myhash + $nc(this->assigner)->hashCode();
		}
	}
	return this->myhash;
}

$String* EDIPartyName::toString() {
	$var($StringBuilder, sb, $new($StringBuilder, "EDIPartyName: "_s));
	if (this->assigner != nullptr) {
		sb->append("  nameAssigner = "_s)->append(this->assigner)->append(u',');
	}
	sb->append("  partyName = "_s)->append(this->party);
	return sb->toString();
}

int32_t EDIPartyName::constrains($GeneralNameInterface* inputName) {
	int32_t constraintType = 0;
	if (inputName == nullptr) {
		constraintType = $GeneralNameInterface::NAME_DIFF_TYPE;
	} else if ($nc(inputName)->getType() != $GeneralNameInterface::NAME_EDI) {
		constraintType = $GeneralNameInterface::NAME_DIFF_TYPE;
	} else {
		$throwNew($UnsupportedOperationException, "Narrowing, widening, and matching of names not supported for EDIPartyName"_s);
	}
	return constraintType;
}

int32_t EDIPartyName::subtreeDepth() {
	$throwNew($UnsupportedOperationException, "subtreeDepth() not supported for EDIPartyName"_s);
	$shouldNotReachHere();
}

EDIPartyName::EDIPartyName() {
}

$Class* EDIPartyName::load$($String* name, bool initialize) {
	$loadClass(EDIPartyName, name, initialize, &_EDIPartyName_ClassInfo_, allocate$EDIPartyName);
	return class$;
}

$Class* EDIPartyName::class$ = nullptr;

		} // x509
	} // security
} // sun