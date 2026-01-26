#include <sun/util/locale/BaseLocale$Key.h>

#include <java/lang/AssertionError.h>
#include <java/lang/ref/SoftReference.h>
#include <sun/util/locale/BaseLocale.h>
#include <sun/util/locale/LocaleUtils.h>
#include <jcpp.h>

using $AssertionError = ::java::lang::AssertionError;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SoftReference = ::java::lang::ref::SoftReference;
using $BaseLocale = ::sun::util::locale::BaseLocale;
using $LocaleUtils = ::sun::util::locale::LocaleUtils;

namespace sun {
	namespace util {
		namespace locale {

$FieldInfo _BaseLocale$Key_FieldInfo_[] = {
	{"$assertionsDisabled", "Z", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(BaseLocale$Key, $assertionsDisabled)},
	{"holderRef", "Ljava/lang/ref/SoftReference;", "Ljava/lang/ref/SoftReference<Lsun/util/locale/BaseLocale;>;", $PRIVATE | $FINAL, $field(BaseLocale$Key, holderRef)},
	{"holder", "Lsun/util/locale/BaseLocale;", nullptr, $PRIVATE | $FINAL, $field(BaseLocale$Key, holder)},
	{"normalized", "Z", nullptr, $PRIVATE | $FINAL, $field(BaseLocale$Key, normalized)},
	{"hash", "I", nullptr, $PRIVATE | $FINAL, $field(BaseLocale$Key, hash)},
	{}
};

$MethodInfo _BaseLocale$Key_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Z)V", nullptr, $PRIVATE, $method(BaseLocale$Key, init$, void, $String*, $String*, $String*, $String*, bool)},
	{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC, $virtualMethod(BaseLocale$Key, equals, bool, Object$*)},
	{"getBaseLocale", "()Lsun/util/locale/BaseLocale;", nullptr, $PRIVATE, $method(BaseLocale$Key, getBaseLocale, $BaseLocale*)},
	{"hashCode", "()I", nullptr, $PUBLIC, $virtualMethod(BaseLocale$Key, hashCode, int32_t)},
	{"hashCode", "(Lsun/util/locale/BaseLocale;)I", nullptr, $PRIVATE, $method(BaseLocale$Key, hashCode, int32_t, $BaseLocale*)},
	{"normalize", "(Lsun/util/locale/BaseLocale$Key;)Lsun/util/locale/BaseLocale$Key;", nullptr, $PUBLIC | $STATIC, $staticMethod(BaseLocale$Key, normalize, BaseLocale$Key*, BaseLocale$Key*)},
	{}
};

$InnerClassInfo _BaseLocale$Key_InnerClassesInfo_[] = {
	{"sun.util.locale.BaseLocale$Key", "sun.util.locale.BaseLocale", "Key", $PRIVATE | $STATIC | $FINAL},
	{}
};

$ClassInfo _BaseLocale$Key_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"sun.util.locale.BaseLocale$Key",
	"java.lang.Object",
	nullptr,
	_BaseLocale$Key_FieldInfo_,
	_BaseLocale$Key_MethodInfo_,
	nullptr,
	nullptr,
	_BaseLocale$Key_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.util.locale.BaseLocale"
};

$Object* allocate$BaseLocale$Key($Class* clazz) {
	return $of($alloc(BaseLocale$Key));
}

bool BaseLocale$Key::$assertionsDisabled = false;

void BaseLocale$Key::init$($String* language, $String* script, $String* region, $String* variant, bool normalize) {
	$var($BaseLocale, locale, $new($BaseLocale, language, script, region, variant, normalize));
	this->normalized = normalize;
	if (this->normalized) {
		$set(this, holderRef, $new($SoftReference, locale));
		$set(this, holder, nullptr);
	} else {
		$set(this, holderRef, nullptr);
		$set(this, holder, locale);
	}
	this->hash = hashCode(locale);
}

int32_t BaseLocale$Key::hashCode() {
	return this->hash;
}

int32_t BaseLocale$Key::hashCode($BaseLocale* locale) {
	$useLocalCurrentObjectStackCache();
	int32_t h = 0;
	$var($String, lang, $nc(locale)->getLanguage());
	int32_t len = $nc(lang)->length();
	for (int32_t i = 0; i < len; ++i) {
		h = 31 * h + $LocaleUtils::toLower(lang->charAt(i));
	}
	$var($String, scrt, locale->getScript());
	len = $nc(scrt)->length();
	for (int32_t i = 0; i < len; ++i) {
		h = 31 * h + $LocaleUtils::toLower(scrt->charAt(i));
	}
	$var($String, regn, locale->getRegion());
	len = $nc(regn)->length();
	for (int32_t i = 0; i < len; ++i) {
		h = 31 * h + $LocaleUtils::toLower(regn->charAt(i));
	}
	$var($String, vart, locale->getVariant());
	len = $nc(vart)->length();
	for (int32_t i = 0; i < len; ++i) {
		h = 31 * h + vart->charAt(i);
	}
	return h;
}

$BaseLocale* BaseLocale$Key::getBaseLocale() {
	return (this->holder == nullptr) ? $cast($BaseLocale, $nc(this->holderRef)->get()) : this->holder;
}

bool BaseLocale$Key::equals(Object$* obj) {
	$useLocalCurrentObjectStackCache();
	if ($equals(this, obj)) {
		return true;
	}
	if ($instanceOf(BaseLocale$Key, obj) && this->hash == $nc(($cast(BaseLocale$Key, obj)))->hash) {
		$var($BaseLocale, other, ($cast(BaseLocale$Key, obj))->getBaseLocale());
		$var($BaseLocale, locale, this->getBaseLocale());
		bool var$3 = other != nullptr && locale != nullptr;
		if (var$3) {
			$var($String, var$4, other->getLanguage());
			var$3 = $LocaleUtils::caseIgnoreMatch(var$4, $(locale->getLanguage()));
		}
		bool var$2 = var$3;
		if (var$2) {
			$var($String, var$5, other->getScript());
			var$2 = $LocaleUtils::caseIgnoreMatch(var$5, $(locale->getScript()));
		}
		bool var$1 = var$2;
		if (var$1) {
			$var($String, var$6, other->getRegion());
			var$1 = $LocaleUtils::caseIgnoreMatch(var$6, $(locale->getRegion()));
		}
		bool var$0 = var$1;
		if (var$0 && $nc($(other->getVariant()))->equals($(locale->getVariant()))) {
			return true;
		}
	}
	return false;
}

BaseLocale$Key* BaseLocale$Key::normalize(BaseLocale$Key* key) {
	$init(BaseLocale$Key);
	$useLocalCurrentObjectStackCache();
	if ($nc(key)->normalized) {
		return key;
	}
	if (!BaseLocale$Key::$assertionsDisabled && !($nc(key)->holder != nullptr && key->holderRef == nullptr)) {
		$throwNew($AssertionError);
	}
	$var($BaseLocale, locale, $nc(key)->holder);
	$var($String, var$0, $nc(locale)->getLanguage());
	$var($String, var$1, locale->getScript());
	$var($String, var$2, locale->getRegion());
	return $new(BaseLocale$Key, var$0, var$1, var$2, $(locale->getVariant()), true);
}

void clinit$BaseLocale$Key($Class* class$) {
	$load($BaseLocale);
	BaseLocale$Key::$assertionsDisabled = !$BaseLocale::class$->desiredAssertionStatus();
}

BaseLocale$Key::BaseLocale$Key() {
}

$Class* BaseLocale$Key::load$($String* name, bool initialize) {
	$loadClass(BaseLocale$Key, name, initialize, &_BaseLocale$Key_ClassInfo_, clinit$BaseLocale$Key, allocate$BaseLocale$Key);
	return class$;
}

$Class* BaseLocale$Key::class$ = nullptr;

		} // locale
	} // util
} // sun