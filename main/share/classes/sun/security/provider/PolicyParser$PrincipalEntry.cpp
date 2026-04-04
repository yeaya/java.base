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

$String* PolicyParser$PrincipalEntry::WILDCARD_CLASS = nullptr;
$String* PolicyParser$PrincipalEntry::WILDCARD_NAME = nullptr;
$String* PolicyParser$PrincipalEntry::REPLACE_NAME = nullptr;

void PolicyParser$PrincipalEntry::init$($String* principalClass, $String* principalName) {
	$useLocalObjectStack();
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
	$useLocalObjectStack();
	if (!isReplaceName()) {
		$var($StringBuilder, var$0, $new($StringBuilder));
		var$0->append($(getDisplayClass()));
		var$0->append("/"_s);
		var$0->append($(getDisplayName()));
		return $str(var$0);
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
	return (var$0 && $nc(this->principalName)->equals(that->principalName));
}

int32_t PolicyParser$PrincipalEntry::hashCode() {
	return $nc(this->principalClass)->hashCode();
}

void PolicyParser$PrincipalEntry::write($PrintWriter* out) {
	$useLocalObjectStack();
	$var($StringBuilder, var$0, $new($StringBuilder));
	var$0->append("principal "_s);
	var$0->append($(getDisplayClass()));
	var$0->append(" "_s);
	var$0->append($(getDisplayName(true)));
	$nc(out)->print($$str(var$0));
}

PolicyParser$PrincipalEntry::PolicyParser$PrincipalEntry() {
}

void PolicyParser$PrincipalEntry::clinit$($Class* clazz) {
	$assignStatic(PolicyParser$PrincipalEntry::WILDCARD_CLASS, "WILDCARD_PRINCIPAL_CLASS"_s);
	$assignStatic(PolicyParser$PrincipalEntry::WILDCARD_NAME, "WILDCARD_PRINCIPAL_NAME"_s);
	$assignStatic(PolicyParser$PrincipalEntry::REPLACE_NAME, "PolicyParser.REPLACE_NAME"_s);
}

$Class* PolicyParser$PrincipalEntry::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"WILDCARD_CLASS", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(PolicyParser$PrincipalEntry, WILDCARD_CLASS)},
		{"WILDCARD_NAME", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(PolicyParser$PrincipalEntry, WILDCARD_NAME)},
		{"REPLACE_NAME", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(PolicyParser$PrincipalEntry, REPLACE_NAME)},
		{"principalClass", "Ljava/lang/String;", nullptr, 0, $field(PolicyParser$PrincipalEntry, principalClass)},
		{"principalName", "Ljava/lang/String;", nullptr, 0, $field(PolicyParser$PrincipalEntry, principalName)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
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
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.security.provider.PolicyParser$PrincipalEntry", "sun.security.provider.PolicyParser", "PrincipalEntry", $PUBLIC | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"sun.security.provider.PolicyParser$PrincipalEntry",
		"java.lang.Object",
		"java.security.Principal",
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.security.provider.PolicyParser"
	};
	$loadClass(PolicyParser$PrincipalEntry, name, initialize, &classInfo$$, PolicyParser$PrincipalEntry::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(PolicyParser$PrincipalEntry);
	});
	return class$;
}

$Class* PolicyParser$PrincipalEntry::class$ = nullptr;

		} // provider
	} // security
} // sun