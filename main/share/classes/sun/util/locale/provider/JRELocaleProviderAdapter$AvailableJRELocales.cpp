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

$FieldInfo _JRELocaleProviderAdapter$AvailableJRELocales_FieldInfo_[] = {
	{"localeList", "[Ljava/util/Locale;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(JRELocaleProviderAdapter$AvailableJRELocales, localeList)},
	{}
};

$MethodInfo _JRELocaleProviderAdapter$AvailableJRELocales_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(JRELocaleProviderAdapter$AvailableJRELocales, init$, void)},
	{}
};

$InnerClassInfo _JRELocaleProviderAdapter$AvailableJRELocales_InnerClassesInfo_[] = {
	{"sun.util.locale.provider.JRELocaleProviderAdapter$AvailableJRELocales", "sun.util.locale.provider.JRELocaleProviderAdapter", "AvailableJRELocales", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _JRELocaleProviderAdapter$AvailableJRELocales_ClassInfo_ = {
	$ACC_SUPER,
	"sun.util.locale.provider.JRELocaleProviderAdapter$AvailableJRELocales",
	"java.lang.Object",
	nullptr,
	_JRELocaleProviderAdapter$AvailableJRELocales_FieldInfo_,
	_JRELocaleProviderAdapter$AvailableJRELocales_MethodInfo_,
	nullptr,
	nullptr,
	_JRELocaleProviderAdapter$AvailableJRELocales_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.util.locale.provider.JRELocaleProviderAdapter"
};

$Object* allocate$JRELocaleProviderAdapter$AvailableJRELocales($Class* clazz) {
	return $of($alloc(JRELocaleProviderAdapter$AvailableJRELocales));
}

$LocaleArray* JRELocaleProviderAdapter$AvailableJRELocales::localeList = nullptr;

void JRELocaleProviderAdapter$AvailableJRELocales::init$() {
}

void clinit$JRELocaleProviderAdapter$AvailableJRELocales($Class* class$) {
	$assignStatic(JRELocaleProviderAdapter$AvailableJRELocales::localeList, $JRELocaleProviderAdapter::createAvailableLocales());
}

JRELocaleProviderAdapter$AvailableJRELocales::JRELocaleProviderAdapter$AvailableJRELocales() {
}

$Class* JRELocaleProviderAdapter$AvailableJRELocales::load$($String* name, bool initialize) {
	$loadClass(JRELocaleProviderAdapter$AvailableJRELocales, name, initialize, &_JRELocaleProviderAdapter$AvailableJRELocales_ClassInfo_, clinit$JRELocaleProviderAdapter$AvailableJRELocales, allocate$JRELocaleProviderAdapter$AvailableJRELocales);
	return class$;
}

$Class* JRELocaleProviderAdapter$AvailableJRELocales::class$ = nullptr;

			} // provider
		} // locale
	} // util
} // sun