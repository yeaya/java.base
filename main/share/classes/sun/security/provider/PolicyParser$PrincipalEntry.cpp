#include <sun/security/provider/PolicyParser$PrincipalEntry.h>

#include <java/io/PrintWriter.h>
#include <sun/security/provider/PolicyParser.h>
#include <sun/security/util/LocalizedMessage.h>
#include <jcpp.h>

#undef REPLACE_NAME
#undef WILDCARD_CLASS
#undef WILDCARD_NAME

using $PrintWriter = ::java::io::PrintWriter;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $LocalizedMessage = ::sun::security::util::LocalizedMessage;

namespace sun {
	namespace security {
		namespace provider {

$FieldInfo _PolicyParser$PrincipalEntry_FieldInfo_[] = {
	{"WILDCARD_CLASS", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(PolicyParser$PrincipalEntry, WILDCARD_CLASS)},
	{"WILDCARD_NAME", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(PolicyParser$PrincipalEntry, WILDCARD_NAME)},
	{"REPLACE_NAME", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(PolicyParser$PrincipalEntry, REPLACE_NAME)},
	{"principalClass", "Ljava/lang/String;", nullptr, 0, $field(PolicyParser$PrincipalEntry, principalClass)},
	{"principalName", "Ljava/lang/String;", nullptr, 0, $field(PolicyParser$PrincipalEntry, principalName)},
	{}
};

$MethodInfo _PolicyParser$PrincipalEntry_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC, $method(PolicyParser$PrincipalEntry, init$, void, $String*, $String*)},
	{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC, $virtualMethod(PolicyParser$PrincipalEntry, equals, bool, Object$*)},
	{"getDisplayClass", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(PolicyParser$PrincipalEntry, getDisplayClass, $String*)},
	{"getDisplayName", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(PolicyParser$PrincipalEntry, getDisplayName, $String*)},
	{"getDisplayName", "(Z)Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(PolicyParser$PrincipalEntry, getDisplayName, $String*, bool)},
	{"getName", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(PolicyParser$PrincipalEntry, getName, $String*)},
	{"getPrincipalClass", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(PolicyParser$PrincipalEntry, getPrincipalClass, $String*)},
	{"getPrincipalName", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(PolicyParser$PrincipalEntry, getPrincipalName, $String*)},
	{"hashCode", "()I", nullptr, $PUBLIC, $virtualMethod(PolicyParser$PrincipalEntry, hashCode, int32_t)},
	{"isReplaceName", "()Z", nullptr, 0, $virtualMethod(PolicyParser$PrincipalEntry, isReplaceName, bool)},
	{"isWildcardClass", "()Z", nullptr, 0, $virtualMethod(PolicyParser$PrincipalEntry, isWildcardClass, bool)},
	{"isWildcardName", "()Z", nullptr, 0, $virtualMethod(PolicyParser$PrincipalEntry, isWildcardName, bool)},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(PolicyParser$PrincipalEntry, toString, $String*)},
	{"write", "(Ljava/io/PrintWriter;)V", nullptr, $PUBLIC, $virtualMethod(PolicyParser$PrincipalEntry, write, void, $PrintWriter*)},
	{}
};

$InnerClassInfo _PolicyParser$PrincipalEntry_InnerClassesInfo_[] = {
	{"sun.security.provider.PolicyParser$PrincipalEntry", "sun.security.provider.PolicyParser", "PrincipalEntry", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _PolicyParser$PrincipalEntry_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.security.provider.PolicyParser$PrincipalEntry",
	"java.lang.Object",
	"java.security.Principal",
	_PolicyParser$PrincipalEntry_FieldInfo_,
	_PolicyParser$PrincipalEntry_MethodInfo_,
	nullptr,
	nullptr,
	_PolicyParser$PrincipalEntry_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.security.provider.PolicyParser"
};

$Object* allocate$PolicyParser$PrincipalEntry($Class* clazz) {
	return $of($alloc(PolicyParser$PrincipalEntry));
}

$String* PolicyParser$PrincipalEntry::WILDCARD_CLASS = nullptr;
$String* PolicyParser$PrincipalEntry::WILDCARD_NAME = nullptr;
$String* PolicyParser$PrincipalEntry::REPLACE_NAME = nullptr;

void PolicyParser$PrincipalEntry::init$($String* principalClass, $String* principalName) {
	$useLocalCurrentObjectStackCache();
	if (principalClass == nullptr || principalName == nullptr) {
		$throwNew($NullPointerException, $($LocalizedMessage::getNonlocalized("null.principalClass.or.principalName"_s, $$new($ObjectArray, 0))));
	}
	$set(this, principalClass, principalClass);
	$set(this, principalName, principalName);
}

bool PolicyParser$PrincipalEntry::isWildcardName() {
	return $nc(this->principalName)->equals(PolicyParser$PrincipalEntry::WILDCARD_NAME);
}

bool PolicyParser$PrincipalEntry::isWildcardClass() {
	return $nc(this->principalClass)->equals(PolicyParser$PrincipalEntry::WILDCARD_CLASS);
}

bool PolicyParser$PrincipalEntry::isReplaceName() {
	return $nc(this->principalClass)->equals(PolicyParser$PrincipalEntry::REPLACE_NAME);
}

$String* PolicyParser$PrincipalEntry::getPrincipalClass() {
	return this->principalClass;
}

$String* PolicyParser$PrincipalEntry::getPrincipalName() {
	return this->principalName;
}

$String* PolicyParser$PrincipalEntry::getDisplayClass() {
	if (isWildcardClass()) {
		return "*"_s;
	} else if (isReplaceName()) {
		return ""_s;
	} else {
		return this->principalClass;
	}
}

$String* PolicyParser$PrincipalEntry::getDisplayName() {
	return getDisplayName(false);
}

$String* PolicyParser$PrincipalEntry::getDisplayName(bool addQuote) {
	if (isWildcardName()) {
		return "*"_s;
	} else if (addQuote) {
		return $str({"\""_s, this->principalName, "\""_s});
	} else {
		return this->principalName;
	}
}

$String* PolicyParser$PrincipalEntry::getName() {
	return this->principalName;
}

$String* PolicyParser$PrincipalEntry::toString() {
	$useLocalCurrentObjectStackCache();
	if (!isReplaceName()) {
		$var($String, var$0, $$str({$(getDisplayClass()), "/"_s}));
		return $concat(var$0, $(getDisplayName()));
	} else {
		return getDisplayName();
	}
}

bool PolicyParser$PrincipalEntry::equals(Object$* obj) {
	if ($equals(this, obj)) {
		return true;
	}
	if (!($instanceOf(PolicyParser$PrincipalEntry, obj))) {
		return false;
	}
	$var(PolicyParser$PrincipalEntry, that, $cast(PolicyParser$PrincipalEntry, obj));
	bool var$0 = $nc(this->principalClass)->equals($nc(that)->principalClass);
	return (var$0 && $nc(this->principalName)->equals($nc(that)->principalName));
}

int32_t PolicyParser$PrincipalEntry::hashCode() {
	return $nc(this->principalClass)->hashCode();
}

void PolicyParser$PrincipalEntry::write($PrintWriter* out) {
	$useLocalCurrentObjectStackCache();
	$var($String, var$0, $$str({"principal "_s, $(getDisplayClass()), " "_s}));
	$nc(out)->print($$concat(var$0, $(getDisplayName(true))));
}

PolicyParser$PrincipalEntry::PolicyParser$PrincipalEntry() {
}

void clinit$PolicyParser$PrincipalEntry($Class* class$) {
	$assignStatic(PolicyParser$PrincipalEntry::WILDCARD_CLASS, "WILDCARD_PRINCIPAL_CLASS"_s);
	$assignStatic(PolicyParser$PrincipalEntry::WILDCARD_NAME, "WILDCARD_PRINCIPAL_NAME"_s);
	$assignStatic(PolicyParser$PrincipalEntry::REPLACE_NAME, "PolicyParser.REPLACE_NAME"_s);
}

$Class* PolicyParser$PrincipalEntry::load$($String* name, bool initialize) {
	$loadClass(PolicyParser$PrincipalEntry, name, initialize, &_PolicyParser$PrincipalEntry_ClassInfo_, clinit$PolicyParser$PrincipalEntry, allocate$PolicyParser$PrincipalEntry);
	return class$;
}

$Class* PolicyParser$PrincipalEntry::class$ = nullptr;

		} // provider
	} // security
} // sun