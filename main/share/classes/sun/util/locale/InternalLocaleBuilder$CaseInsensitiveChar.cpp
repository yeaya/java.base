#include <sun/util/locale/InternalLocaleBuilder$CaseInsensitiveChar.h>
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

void InternalLocaleBuilder$CaseInsensitiveChar::init$($String* s) {
	InternalLocaleBuilder$CaseInsensitiveChar::init$($nc(s)->charAt(0));
}

void InternalLocaleBuilder$CaseInsensitiveChar::init$(char16_t c) {
	this->ch = c;
	this->lowerCh = $LocaleUtils::toLower(this->ch);
}

char16_t InternalLocaleBuilder$CaseInsensitiveChar::value() {
	return this->ch;
}

int32_t InternalLocaleBuilder$CaseInsensitiveChar::hashCode() {
	return this->lowerCh;
}

bool InternalLocaleBuilder$CaseInsensitiveChar::equals(Object$* obj) {
	if ($equals(this, obj)) {
		return true;
	}
	if (!($instanceOf(InternalLocaleBuilder$CaseInsensitiveChar, obj))) {
		return false;
	}
	return this->lowerCh == $nc($cast(InternalLocaleBuilder$CaseInsensitiveChar, obj))->lowerCh;
}

InternalLocaleBuilder$CaseInsensitiveChar::InternalLocaleBuilder$CaseInsensitiveChar() {
}

$Class* InternalLocaleBuilder$CaseInsensitiveChar::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"ch", "C", nullptr, $PRIVATE | $FINAL, $field(InternalLocaleBuilder$CaseInsensitiveChar, ch)},
		{"lowerCh", "C", nullptr, $PRIVATE | $FINAL, $field(InternalLocaleBuilder$CaseInsensitiveChar, lowerCh)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/String;)V", nullptr, $PRIVATE, $method(InternalLocaleBuilder$CaseInsensitiveChar, init$, void, $String*)},
		{"<init>", "(C)V", nullptr, 0, $method(InternalLocaleBuilder$CaseInsensitiveChar, init$, void, char16_t)},
		{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC, $virtualMethod(InternalLocaleBuilder$CaseInsensitiveChar, equals, bool, Object$*)},
		{"hashCode", "()I", nullptr, $PUBLIC, $virtualMethod(InternalLocaleBuilder$CaseInsensitiveChar, hashCode, int32_t)},
		{"value", "()C", nullptr, $PUBLIC, $method(InternalLocaleBuilder$CaseInsensitiveChar, value, char16_t)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.util.locale.InternalLocaleBuilder$CaseInsensitiveChar", "sun.util.locale.InternalLocaleBuilder", "CaseInsensitiveChar", $STATIC | $FINAL},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"sun.util.locale.InternalLocaleBuilder$CaseInsensitiveChar",
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
	$loadClass(InternalLocaleBuilder$CaseInsensitiveChar, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(InternalLocaleBuilder$CaseInsensitiveChar);
	});
	return class$;
}

$Class* InternalLocaleBuilder$CaseInsensitiveChar::class$ = nullptr;

		} // locale
	} // util
} // sun