#include <sun/util/locale/provider/JRELocaleProviderAdapter$AvailableJRELocales.h>
#include <java/util/Locale.h>
#include <sun/util/locale/provider/JRELocaleProviderAdapter.h>
#include <jcpp.h>

using $LocaleArray = $Array<::java::util::Locale>;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JRELocaleProviderAdapter = ::sun::util::locale::provider::JRELocaleProviderAdapter;

namespace sun {
	namespace util {
		namespace locale {
			namespace provider {

$LocaleArray* JRELocaleProviderAdapter$AvailableJRELocales::localeList = nullptr;

void JRELocaleProviderAdapter$AvailableJRELocales::init$() {
}

void JRELocaleProviderAdapter$AvailableJRELocales::clinit$($Class* clazz) {
	$assignStatic(JRELocaleProviderAdapter$AvailableJRELocales::localeList, $JRELocaleProviderAdapter::createAvailableLocales());
}

JRELocaleProviderAdapter$AvailableJRELocales::JRELocaleProviderAdapter$AvailableJRELocales() {
}

$Class* JRELocaleProviderAdapter$AvailableJRELocales::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"localeList", "[Ljava/util/Locale;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(JRELocaleProviderAdapter$AvailableJRELocales, localeList)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PRIVATE, $method(JRELocaleProviderAdapter$AvailableJRELocales, init$, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.util.locale.provider.JRELocaleProviderAdapter$AvailableJRELocales", "sun.util.locale.provider.JRELocaleProviderAdapter", "AvailableJRELocales", $PRIVATE | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.util.locale.provider.JRELocaleProviderAdapter$AvailableJRELocales",
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
		"sun.util.locale.provider.JRELocaleProviderAdapter"
	};
	$loadClass(JRELocaleProviderAdapter$AvailableJRELocales, name, initialize, &classInfo$$, JRELocaleProviderAdapter$AvailableJRELocales::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(JRELocaleProviderAdapter$AvailableJRELocales);
	});
	return class$;
}

$Class* JRELocaleProviderAdapter$AvailableJRELocales::class$ = nullptr;

			} // provider
		} // locale
	} // util
} // sun