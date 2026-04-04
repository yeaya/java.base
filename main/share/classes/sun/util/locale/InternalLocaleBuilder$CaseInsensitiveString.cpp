#include <sun/util/locale/InternalLocaleBuilder$CaseInsensitiveString.h>
#include <sun/util/locale/InternalLocaleBuilder.h>
#include <sun/util/locale/LocaleUtils.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $LocaleUtils = ::sun::util::locale::LocaleUtils;

namespace sun {
	namespace util {
		namespace locale {

void InternalLocaleBuilder$CaseInsensitiveString::init$($String* s) {
	$set(this, str, s);
	$set(this, lowerStr, $LocaleUtils::toLowerString(s));
}

$String* InternalLocaleBuilder$CaseInsensitiveString::value() {
	return this->str;
}

int32_t InternalLocaleBuilder$CaseInsensitiveString::hashCode() {
	return $nc(this->lowerStr)->hashCode();
}

bool InternalLocaleBuilder$CaseInsensitiveString::equals(Object$* obj) {
	if ($equals(this, obj)) {
		return true;
	}
	if (!($instanceOf(InternalLocaleBuilder$CaseInsensitiveString, obj))) {
		return false;
	}
	return $nc(this->lowerStr)->equals($nc($cast(InternalLocaleBuilder$CaseInsensitiveString, obj))->lowerStr);
}

InternalLocaleBuilder$CaseInsensitiveString::InternalLocaleBuilder$CaseInsensitiveString() {
}

$Class* InternalLocaleBuilder$CaseInsensitiveString::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"str", "Ljava/lang/String;", nullptr, $PRIVATE | $FINAL, $field(InternalLocaleBuilder$CaseInsensitiveString, str)},
		{"lowerStr", "Ljava/lang/String;", nullptr, $PRIVATE | $FINAL, $field(InternalLocaleBuilder$CaseInsensitiveString, lowerStr)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/String;)V", nullptr, 0, $method(InternalLocaleBuilder$CaseInsensitiveString, init$, void, $String*)},
		{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC, $virtualMethod(InternalLocaleBuilder$CaseInsensitiveString, equals, bool, Object$*)},
		{"hashCode", "()I", nullptr, $PUBLIC, $virtualMethod(InternalLocaleBuilder$CaseInsensitiveString, hashCode, int32_t)},
		{"value", "()Ljava/lang/String;", nullptr, $PUBLIC, $method(InternalLocaleBuilder$CaseInsensitiveString, value, $String*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.util.locale.InternalLocaleBuilder$CaseInsensitiveString", "sun.util.locale.InternalLocaleBuilder", "CaseInsensitiveString", $STATIC | $FINAL},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"sun.util.locale.InternalLocaleBuilder$CaseInsensitiveString",
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
		"sun.util.locale.InternalLocaleBuilder"
	};
	$loadClass(InternalLocaleBuilder$CaseInsensitiveString, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(InternalLocaleBuilder$CaseInsensitiveString);
	});
	return class$;
}

$Class* InternalLocaleBuilder$CaseInsensitiveString::class$ = nullptr;

		} // locale
	} // util
} // sun