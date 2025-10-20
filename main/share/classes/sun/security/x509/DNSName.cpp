#include <sun/security/x509/DNSName.h>

#include <java/io/IOException.h>
#include <java/lang/CharSequence.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/Locale.h>
#include <sun/security/util/DerOutputStream.h>
#include <sun/security/util/DerValue.h>
#include <sun/security/x509/GeneralNameInterface.h>
#include <jcpp.h>

#undef ENGLISH
#undef NAME_DIFF_TYPE
#undef NAME_DNS
#undef NAME_MATCH
#undef NAME_NARROWS
#undef NAME_SAME_TYPE
#undef NAME_WIDENS

using $IOException = ::java::io::IOException;
using $CharSequence = ::java::lang::CharSequence;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Locale = ::java::util::Locale;
using $DerOutputStream = ::sun::security::util::DerOutputStream;
using $DerValue = ::sun::security::util::DerValue;
using $GeneralNameInterface = ::sun::security::x509::GeneralNameInterface;

namespace sun {
	namespace security {
		namespace x509 {

$FieldInfo _DNSName_FieldInfo_[] = {
	{"name", "Ljava/lang/String;", nullptr, $PRIVATE, $field(DNSName, name)},
	{"alphaDigits", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(DNSName, alphaDigits)},
	{}
};

$MethodInfo _DNSName_MethodInfo_[] = {
	{"<init>", "(Lsun/security/util/DerValue;)V", nullptr, $PUBLIC, $method(static_cast<void(DNSName::*)($DerValue*)>(&DNSName::init$)), "java.io.IOException"},
	{"<init>", "(Ljava/lang/String;Z)V", nullptr, $PUBLIC, $method(static_cast<void(DNSName::*)($String*,bool)>(&DNSName::init$)), "java.io.IOException"},
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(DNSName::*)($String*)>(&DNSName::init$)), "java.io.IOException"},
	{"constrains", "(Lsun/security/x509/GeneralNameInterface;)I", nullptr, $PUBLIC, nullptr, "java.lang.UnsupportedOperationException"},
	{"encode", "(Lsun/security/util/DerOutputStream;)V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"getName", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getType", "()I", nullptr, $PUBLIC},
	{"hashCode", "()I", nullptr, $PUBLIC},
	{"subtreeDepth", "()I", nullptr, $PUBLIC, nullptr, "java.lang.UnsupportedOperationException"},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _DNSName_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.security.x509.DNSName",
	"java.lang.Object",
	"sun.security.x509.GeneralNameInterface",
	_DNSName_FieldInfo_,
	_DNSName_MethodInfo_
};

$Object* allocate$DNSName($Class* clazz) {
	return $of($alloc(DNSName));
}

$String* DNSName::alphaDigits = nullptr;

void DNSName::init$($DerValue* derValue) {
	$set(this, name, $nc(derValue)->getIA5String());
}

void DNSName::init$($String* name, bool allowWildcard) {
	if (name == nullptr || $nc(name)->isEmpty()) {
		$throwNew($IOException, "DNSName must not be null or empty"_s);
	}
	if ($nc(name)->contains(" "_s)) {
		$throwNew($IOException, "DNSName with blank components is not permitted"_s);
	}
	bool var$0 = $nc(name)->startsWith("."_s);
	if (var$0 || $nc(name)->endsWith("."_s)) {
		$throwNew($IOException, "DNSName may not begin or end with a ."_s);
	}
	{
		int32_t endIndex = 0;
		int32_t startIndex = 0;
		for (; startIndex < $nc(name)->length(); startIndex = endIndex + 1) {
			endIndex = name->indexOf((int32_t)u'.', startIndex);
			if (endIndex < 0) {
				endIndex = name->length();
			}
			if (endIndex - startIndex < 1) {
				$throwNew($IOException, "DNSName with empty components are not permitted"_s);
			}
			if (allowWildcard) {
				if ($nc(DNSName::alphaDigits)->indexOf((int32_t)name->charAt(startIndex)) < 0) {
					bool var$3 = (name->length() < 3);
					bool var$2 = var$3 || (name->indexOf((int32_t)u'*', 0) != 0);
					bool var$1 = var$2 || (name->charAt(startIndex + 1) != u'.');
					if (var$1 || ($nc(DNSName::alphaDigits)->indexOf((int32_t)name->charAt(startIndex + 2)) < 0)) {
						$throwNew($IOException, "DNSName components must begin with a letter, digit, or the first component can have only a wildcard character *"_s);
					}
				}
			} else if ($nc(DNSName::alphaDigits)->indexOf((int32_t)name->charAt(startIndex)) < 0) {
				$throwNew($IOException, "DNSName components must begin with a letter or digit"_s);
			}
			for (int32_t nonStartIndex = startIndex + 1; nonStartIndex < endIndex; ++nonStartIndex) {
				char16_t x = name->charAt(nonStartIndex);
				if ($nc((DNSName::alphaDigits))->indexOf((int32_t)x) < 0 && x != u'-') {
					$throwNew($IOException, "DNSName components must consist of letters, digits, and hyphens"_s);
				}
			}
		}
	}
	$set(this, name, name);
}

void DNSName::init$($String* name) {
	DNSName::init$(name, false);
}

int32_t DNSName::getType() {
	return ($GeneralNameInterface::NAME_DNS);
}

$String* DNSName::getName() {
	return this->name;
}

void DNSName::encode($DerOutputStream* out) {
	$nc(out)->putIA5String(this->name);
}

$String* DNSName::toString() {
	return ($str({"DNSName: "_s, this->name}));
}

bool DNSName::equals(Object$* obj) {
	if ($equals(this, obj)) {
		return true;
	}
	if (!($instanceOf(DNSName, obj))) {
		return false;
	}
	$var(DNSName, other, $cast(DNSName, obj));
	return $nc(this->name)->equalsIgnoreCase($nc(other)->name);
}

int32_t DNSName::hashCode() {
	$init($Locale);
	return $($nc(this->name)->toUpperCase($Locale::ENGLISH))->hashCode();
}

int32_t DNSName::constrains($GeneralNameInterface* inputName) {
	$useLocalCurrentObjectStackCache();
	int32_t constraintType = 0;
	if (inputName == nullptr) {
		constraintType = $GeneralNameInterface::NAME_DIFF_TYPE;
	} else if ($nc(inputName)->getType() != $GeneralNameInterface::NAME_DNS) {
		constraintType = $GeneralNameInterface::NAME_DIFF_TYPE;
	} else {
		$init($Locale);
		$var($String, inName, $nc(($($nc(($cast(DNSName, inputName)))->getName())))->toLowerCase($Locale::ENGLISH));
		$var($String, thisName, $nc(this->name)->toLowerCase($Locale::ENGLISH));
		if (inName->equals(thisName)) {
			constraintType = $GeneralNameInterface::NAME_MATCH;
		} else if (thisName->endsWith(inName)) {
			int32_t inNdx = thisName->lastIndexOf(inName);
			if (thisName->charAt(inNdx - 1) == u'.') {
				constraintType = $GeneralNameInterface::NAME_WIDENS;
			} else {
				constraintType = $GeneralNameInterface::NAME_SAME_TYPE;
			}
		} else if (inName->endsWith(thisName)) {
			int32_t ndx = inName->lastIndexOf(thisName);
			if (inName->charAt(ndx - 1) == u'.') {
				constraintType = $GeneralNameInterface::NAME_NARROWS;
			} else {
				constraintType = $GeneralNameInterface::NAME_SAME_TYPE;
			}
		} else {
			constraintType = $GeneralNameInterface::NAME_SAME_TYPE;
		}
	}
	return constraintType;
}

int32_t DNSName::subtreeDepth() {
	int32_t sum = 1;
	for (int32_t i = $nc(this->name)->indexOf((int32_t)u'.'); i >= 0; i = $nc(this->name)->indexOf((int32_t)u'.', i + 1)) {
		++sum;
	}
	return sum;
}

DNSName::DNSName() {
}

void clinit$DNSName($Class* class$) {
	$assignStatic(DNSName::alphaDigits, "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789"_s);
}

$Class* DNSName::load$($String* name, bool initialize) {
	$loadClass(DNSName, name, initialize, &_DNSName_ClassInfo_, clinit$DNSName, allocate$DNSName);
	return class$;
}

$Class* DNSName::class$ = nullptr;

		} // x509
	} // security
} // sun