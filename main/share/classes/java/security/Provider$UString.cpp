#include <java/security/Provider$UString.h>
#include <java/security/Provider.h>
#include <java/util/Locale.h>
#include <jcpp.h>

#undef ENGLISH

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Locale = ::java::util::Locale;

namespace java {
	namespace security {

void Provider$UString::init$($String* s) {
	$set(this, string, s);
	$init($Locale);
	$set(this, lowerString, $nc(s)->toLowerCase($Locale::ENGLISH));
}

int32_t Provider$UString::hashCode() {
	return $nc(this->lowerString)->hashCode();
}

bool Provider$UString::equals(Object$* obj) {
	if ($equals(this, obj)) {
		return true;
	}
	$var(Provider$UString, other, nullptr);
	bool var$1 = $instanceOf(Provider$UString, obj);
	if (var$1) {
		$assign(other, $cast(Provider$UString, obj));
		var$1 = true;
	}
	bool var$0 = var$1;
	return var$0 && $nc(this->lowerString)->equals($nc(other)->lowerString);
}

$String* Provider$UString::toString() {
	return this->string;
}

Provider$UString::Provider$UString() {
}

$Class* Provider$UString::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"string", "Ljava/lang/String;", nullptr, $FINAL, $field(Provider$UString, string)},
		{"lowerString", "Ljava/lang/String;", nullptr, $FINAL, $field(Provider$UString, lowerString)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/String;)V", nullptr, 0, $method(Provider$UString, init$, void, $String*)},
		{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC, $virtualMethod(Provider$UString, equals, bool, Object$*)},
		{"hashCode", "()I", nullptr, $PUBLIC, $virtualMethod(Provider$UString, hashCode, int32_t)},
		{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(Provider$UString, toString, $String*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.security.Provider$UString", "java.security.Provider", "UString", $PRIVATE | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"java.security.Provider$UString",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.security.Provider"
	};
	$loadClass(Provider$UString, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Provider$UString);
	});
	return class$;
}

$Class* Provider$UString::class$ = nullptr;

	} // security
} // java