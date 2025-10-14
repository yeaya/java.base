#include <sun/security/x509/RFC822Name.h>

#include <java/io/IOException.h>
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
#undef NAME_MATCH
#undef NAME_NARROWS
#undef NAME_RFC822
#undef NAME_SAME_TYPE
#undef NAME_WIDENS

using $IOException = ::java::io::IOException;
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

$FieldInfo _RFC822Name_FieldInfo_[] = {
	{"name", "Ljava/lang/String;", nullptr, $PRIVATE, $field(RFC822Name, name)},
	{}
};

$MethodInfo _RFC822Name_MethodInfo_[] = {
	{"<init>", "(Lsun/security/util/DerValue;)V", nullptr, $PUBLIC, $method(static_cast<void(RFC822Name::*)($DerValue*)>(&RFC822Name::init$)), "java.io.IOException"},
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(RFC822Name::*)($String*)>(&RFC822Name::init$)), "java.io.IOException"},
	{"constrains", "(Lsun/security/x509/GeneralNameInterface;)I", nullptr, $PUBLIC, nullptr, "java.lang.UnsupportedOperationException"},
	{"encode", "(Lsun/security/util/DerOutputStream;)V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"getName", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getType", "()I", nullptr, $PUBLIC},
	{"hashCode", "()I", nullptr, $PUBLIC},
	{"parseName", "(Ljava/lang/String;)V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"subtreeDepth", "()I", nullptr, $PUBLIC, nullptr, "java.lang.UnsupportedOperationException"},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _RFC822Name_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.security.x509.RFC822Name",
	"java.lang.Object",
	"sun.security.x509.GeneralNameInterface",
	_RFC822Name_FieldInfo_,
	_RFC822Name_MethodInfo_
};

$Object* allocate$RFC822Name($Class* clazz) {
	return $of($alloc(RFC822Name));
}

void RFC822Name::init$($DerValue* derValue) {
	$set(this, name, $nc(derValue)->getIA5String());
	parseName(this->name);
}

void RFC822Name::init$($String* name) {
	parseName(name);
	$set(this, name, name);
}

void RFC822Name::parseName($String* name) {
	if (name == nullptr || $nc(name)->isEmpty()) {
		$throwNew($IOException, "RFC822Name may not be null or empty"_s);
	}
	$var($String, domain, $nc(name)->substring(name->indexOf((int32_t)u'@') + 1));
	if (domain->isEmpty()) {
		$throwNew($IOException, "RFC822Name may not end with @"_s);
	} else if (domain->startsWith("."_s)) {
		if (domain->length() == 1) {
			$throwNew($IOException, "RFC822Name domain may not be just ."_s);
		}
	}
}

int32_t RFC822Name::getType() {
	return ($GeneralNameInterface::NAME_RFC822);
}

$String* RFC822Name::getName() {
	return this->name;
}

void RFC822Name::encode($DerOutputStream* out) {
	$nc(out)->putIA5String(this->name);
}

$String* RFC822Name::toString() {
	return ($str({"RFC822Name: "_s, this->name}));
}

bool RFC822Name::equals(Object$* obj) {
	if ($equals(this, obj)) {
		return true;
	}
	if (!($instanceOf(RFC822Name, obj))) {
		return false;
	}
	$var(RFC822Name, other, $cast(RFC822Name, obj));
	return $nc(this->name)->equalsIgnoreCase($nc(other)->name);
}

int32_t RFC822Name::hashCode() {
	$init($Locale);
	return $($nc(this->name)->toUpperCase($Locale::ENGLISH))->hashCode();
}

int32_t RFC822Name::constrains($GeneralNameInterface* inputName) {
	int32_t constraintType = 0;
	if (inputName == nullptr) {
		constraintType = $GeneralNameInterface::NAME_DIFF_TYPE;
	} else if ($nc(inputName)->getType() != ($GeneralNameInterface::NAME_RFC822)) {
		constraintType = $GeneralNameInterface::NAME_DIFF_TYPE;
	} else {
		$init($Locale);
		$var($String, inName, $nc(($($nc(($cast(RFC822Name, inputName)))->getName())))->toLowerCase($Locale::ENGLISH));
		$var($String, thisName, $nc(this->name)->toLowerCase($Locale::ENGLISH));
		if (inName->equals(thisName)) {
			constraintType = $GeneralNameInterface::NAME_MATCH;
		} else if (thisName->endsWith(inName)) {
			if (inName->indexOf((int32_t)u'@') != -1) {
				constraintType = $GeneralNameInterface::NAME_SAME_TYPE;
			} else if (inName->startsWith("."_s)) {
				constraintType = $GeneralNameInterface::NAME_WIDENS;
			} else {
				int32_t inNdx = thisName->lastIndexOf(inName);
				if (thisName->charAt(inNdx - 1) == u'@') {
					constraintType = $GeneralNameInterface::NAME_WIDENS;
				} else {
					constraintType = $GeneralNameInterface::NAME_SAME_TYPE;
				}
			}
		} else if (inName->endsWith(thisName)) {
			if (thisName->indexOf((int32_t)u'@') != -1) {
				constraintType = $GeneralNameInterface::NAME_SAME_TYPE;
			} else if (thisName->startsWith("."_s)) {
				constraintType = $GeneralNameInterface::NAME_NARROWS;
			} else {
				int32_t ndx = inName->lastIndexOf(thisName);
				if (inName->charAt(ndx - 1) == u'@') {
					constraintType = $GeneralNameInterface::NAME_NARROWS;
				} else {
					constraintType = $GeneralNameInterface::NAME_SAME_TYPE;
				}
			}
		} else {
			constraintType = $GeneralNameInterface::NAME_SAME_TYPE;
		}
	}
	return constraintType;
}

int32_t RFC822Name::subtreeDepth() {
	$var($String, subtree, this->name);
	int32_t i = 1;
	int32_t atNdx = $nc(subtree)->lastIndexOf((int32_t)u'@');
	if (atNdx >= 0) {
		++i;
		$assign(subtree, subtree->substring(atNdx + 1));
	}
	for (; subtree->lastIndexOf((int32_t)u'.') >= 0; ++i) {
		$assign(subtree, subtree->substring(0, subtree->lastIndexOf((int32_t)u'.')));
	}
	return i;
}

RFC822Name::RFC822Name() {
}

$Class* RFC822Name::load$($String* name, bool initialize) {
	$loadClass(RFC822Name, name, initialize, &_RFC822Name_ClassInfo_, allocate$RFC822Name);
	return class$;
}

$Class* RFC822Name::class$ = nullptr;

		} // x509
	} // security
} // sun