#include <sun/util/locale/InternalLocaleBuilder$CaseInsensitiveString.h>

#include <sun/util/locale/InternalLocaleBuilder.h>
#include <sun/util/locale/LocaleUtils.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $InternalLocaleBuilder = ::sun::util::locale::InternalLocaleBuilder;
using $LocaleUtils = ::sun::util::locale::LocaleUtils;

namespace sun {
	namespace util {
		namespace locale {

$FieldInfo _InternalLocaleBuilder$CaseInsensitiveString_FieldInfo_[] = {
	{"str", "Ljava/lang/String;", nullptr, $PRIVATE | $FINAL, $field(InternalLocaleBuilder$CaseInsensitiveString, str)},
	{"lowerStr", "Ljava/lang/String;", nullptr, $PRIVATE | $FINAL, $field(InternalLocaleBuilder$CaseInsensitiveString, lowerStr)},
	{}
};

$MethodInfo _InternalLocaleBuilder$CaseInsensitiveString_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;)V", nullptr, 0, $method(static_cast<void(InternalLocaleBuilder$CaseInsensitiveString::*)($String*)>(&InternalLocaleBuilder$CaseInsensitiveString::init$))},
	{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"hashCode", "()I", nullptr, $PUBLIC},
	{"value", "()Ljava/lang/String;", nullptr, $PUBLIC, $method(static_cast<$String*(InternalLocaleBuilder$CaseInsensitiveString::*)()>(&InternalLocaleBuilder$CaseInsensitiveString::value))},
	{}
};

$InnerClassInfo _InternalLocaleBuilder$CaseInsensitiveString_InnerClassesInfo_[] = {
	{"sun.util.locale.InternalLocaleBuilder$CaseInsensitiveString", "sun.util.locale.InternalLocaleBuilder", "CaseInsensitiveString", $STATIC | $FINAL},
	{}
};

$ClassInfo _InternalLocaleBuilder$CaseInsensitiveString_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"sun.util.locale.InternalLocaleBuilder$CaseInsensitiveString",
	"java.lang.Object",
	nullptr,
	_InternalLocaleBuilder$CaseInsensitiveString_FieldInfo_,
	_InternalLocaleBuilder$CaseInsensitiveString_MethodInfo_,
	nullptr,
	nullptr,
	_InternalLocaleBuilder$CaseInsensitiveString_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.util.locale.InternalLocaleBuilder"
};

$Object* allocate$InternalLocaleBuilder$CaseInsensitiveString($Class* clazz) {
	return $of($alloc(InternalLocaleBuilder$CaseInsensitiveString));
}

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
	return $nc(this->lowerStr)->equals($nc(($cast(InternalLocaleBuilder$CaseInsensitiveString, obj)))->lowerStr);
}

InternalLocaleBuilder$CaseInsensitiveString::InternalLocaleBuilder$CaseInsensitiveString() {
}

$Class* InternalLocaleBuilder$CaseInsensitiveString::load$($String* name, bool initialize) {
	$loadClass(InternalLocaleBuilder$CaseInsensitiveString, name, initialize, &_InternalLocaleBuilder$CaseInsensitiveString_ClassInfo_, allocate$InternalLocaleBuilder$CaseInsensitiveString);
	return class$;
}

$Class* InternalLocaleBuilder$CaseInsensitiveString::class$ = nullptr;

		} // locale
	} // util
} // sun