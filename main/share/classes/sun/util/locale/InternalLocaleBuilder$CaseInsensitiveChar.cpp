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

$FieldInfo _InternalLocaleBuilder$CaseInsensitiveChar_FieldInfo_[] = {
	{"ch", "C", nullptr, $PRIVATE | $FINAL, $field(InternalLocaleBuilder$CaseInsensitiveChar, ch)},
	{"lowerCh", "C", nullptr, $PRIVATE | $FINAL, $field(InternalLocaleBuilder$CaseInsensitiveChar, lowerCh)},
	{}
};

$MethodInfo _InternalLocaleBuilder$CaseInsensitiveChar_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PRIVATE, $method(static_cast<void(InternalLocaleBuilder$CaseInsensitiveChar::*)($String*)>(&InternalLocaleBuilder$CaseInsensitiveChar::init$))},
	{"<init>", "(C)V", nullptr, 0, $method(static_cast<void(InternalLocaleBuilder$CaseInsensitiveChar::*)(char16_t)>(&InternalLocaleBuilder$CaseInsensitiveChar::init$))},
	{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"hashCode", "()I", nullptr, $PUBLIC},
	{"value", "()C", nullptr, $PUBLIC, $method(static_cast<char16_t(InternalLocaleBuilder$CaseInsensitiveChar::*)()>(&InternalLocaleBuilder$CaseInsensitiveChar::value))},
	{}
};

$InnerClassInfo _InternalLocaleBuilder$CaseInsensitiveChar_InnerClassesInfo_[] = {
	{"sun.util.locale.InternalLocaleBuilder$CaseInsensitiveChar", "sun.util.locale.InternalLocaleBuilder", "CaseInsensitiveChar", $STATIC | $FINAL},
	{}
};

$ClassInfo _InternalLocaleBuilder$CaseInsensitiveChar_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"sun.util.locale.InternalLocaleBuilder$CaseInsensitiveChar",
	"java.lang.Object",
	nullptr,
	_InternalLocaleBuilder$CaseInsensitiveChar_FieldInfo_,
	_InternalLocaleBuilder$CaseInsensitiveChar_MethodInfo_,
	nullptr,
	nullptr,
	_InternalLocaleBuilder$CaseInsensitiveChar_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.util.locale.InternalLocaleBuilder"
};

$Object* allocate$InternalLocaleBuilder$CaseInsensitiveChar($Class* clazz) {
	return $of($alloc(InternalLocaleBuilder$CaseInsensitiveChar));
}

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
	return this->lowerCh == $nc(($cast(InternalLocaleBuilder$CaseInsensitiveChar, obj)))->lowerCh;
}

InternalLocaleBuilder$CaseInsensitiveChar::InternalLocaleBuilder$CaseInsensitiveChar() {
}

$Class* InternalLocaleBuilder$CaseInsensitiveChar::load$($String* name, bool initialize) {
	$loadClass(InternalLocaleBuilder$CaseInsensitiveChar, name, initialize, &_InternalLocaleBuilder$CaseInsensitiveChar_ClassInfo_, allocate$InternalLocaleBuilder$CaseInsensitiveChar);
	return class$;
}

$Class* InternalLocaleBuilder$CaseInsensitiveChar::class$ = nullptr;

		} // locale
	} // util
} // sun