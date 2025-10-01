#include <sun/util/locale/provider/HostLocaleProviderAdapterImpl$10.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/Locale.h>
#include <java/util/Set.h>
#include <java/util/spi/LocaleNameProvider.h>
#include <sun/util/locale/provider/HostLocaleProviderAdapterImpl.h>
#include <jcpp.h>

using $LocaleArray = $Array<::java::util::Locale>;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Locale = ::java::util::Locale;
using $Set = ::java::util::Set;
using $LocaleNameProvider = ::java::util::spi::LocaleNameProvider;
using $HostLocaleProviderAdapterImpl = ::sun::util::locale::provider::HostLocaleProviderAdapterImpl;

namespace sun {
	namespace util {
		namespace locale {
			namespace provider {

$MethodInfo _HostLocaleProviderAdapterImpl$10_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(HostLocaleProviderAdapterImpl$10::*)()>(&HostLocaleProviderAdapterImpl$10::init$))},
	{"getAvailableLocales", "()[Ljava/util/Locale;", nullptr, $PUBLIC},
	{"getDisplayCountry", "(Ljava/lang/String;Ljava/util/Locale;)Ljava/lang/String;", nullptr, $PUBLIC},
	{"getDisplayLanguage", "(Ljava/lang/String;Ljava/util/Locale;)Ljava/lang/String;", nullptr, $PUBLIC},
	{"getDisplayScript", "(Ljava/lang/String;Ljava/util/Locale;)Ljava/lang/String;", nullptr, $PUBLIC},
	{"getDisplayVariant", "(Ljava/lang/String;Ljava/util/Locale;)Ljava/lang/String;", nullptr, $PUBLIC},
	{"isSupportedLocale", "(Ljava/util/Locale;)Z", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _HostLocaleProviderAdapterImpl$10_EnclosingMethodInfo_ = {
	"sun.util.locale.provider.HostLocaleProviderAdapterImpl",
	"getLocaleNameProvider",
	"()Ljava/util/spi/LocaleNameProvider;"
};

$InnerClassInfo _HostLocaleProviderAdapterImpl$10_InnerClassesInfo_[] = {
	{"sun.util.locale.provider.HostLocaleProviderAdapterImpl$10", nullptr, nullptr, 0},
	{}
};

$ClassInfo _HostLocaleProviderAdapterImpl$10_ClassInfo_ = {
	$ACC_SUPER,
	"sun.util.locale.provider.HostLocaleProviderAdapterImpl$10",
	"java.util.spi.LocaleNameProvider",
	nullptr,
	nullptr,
	_HostLocaleProviderAdapterImpl$10_MethodInfo_,
	nullptr,
	&_HostLocaleProviderAdapterImpl$10_EnclosingMethodInfo_,
	_HostLocaleProviderAdapterImpl$10_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.util.locale.provider.HostLocaleProviderAdapterImpl"
};

$Object* allocate$HostLocaleProviderAdapterImpl$10($Class* clazz) {
	return $of($alloc(HostLocaleProviderAdapterImpl$10));
}

void HostLocaleProviderAdapterImpl$10::init$() {
	$LocaleNameProvider::init$();
}

$LocaleArray* HostLocaleProviderAdapterImpl$10::getAvailableLocales() {
	$init($HostLocaleProviderAdapterImpl);
	return $HostLocaleProviderAdapterImpl::supportedLocale;
}

bool HostLocaleProviderAdapterImpl$10::isSupportedLocale($Locale* locale) {
	$init($HostLocaleProviderAdapterImpl);
	return $nc($HostLocaleProviderAdapterImpl::supportedLocaleSet)->contains($($nc(locale)->stripExtensions()));
}

$String* HostLocaleProviderAdapterImpl$10::getDisplayLanguage($String* languageCode, $Locale* locale) {
	return $HostLocaleProviderAdapterImpl::getDisplayString($($nc(locale)->toLanguageTag()), 0, languageCode);
}

$String* HostLocaleProviderAdapterImpl$10::getDisplayCountry($String* countryCode, $Locale* locale) {
	return $HostLocaleProviderAdapterImpl::getDisplayString($($nc(locale)->toLanguageTag()), 2, countryCode);
}

$String* HostLocaleProviderAdapterImpl$10::getDisplayScript($String* scriptCode, $Locale* locale) {
	return $HostLocaleProviderAdapterImpl::getDisplayString($($nc(locale)->toLanguageTag()), 1, scriptCode);
}

$String* HostLocaleProviderAdapterImpl$10::getDisplayVariant($String* variantCode, $Locale* locale) {
	return $HostLocaleProviderAdapterImpl::getDisplayString($($nc(locale)->toLanguageTag()), 3, variantCode);
}

HostLocaleProviderAdapterImpl$10::HostLocaleProviderAdapterImpl$10() {
}

$Class* HostLocaleProviderAdapterImpl$10::load$($String* name, bool initialize) {
	$loadClass(HostLocaleProviderAdapterImpl$10, name, initialize, &_HostLocaleProviderAdapterImpl$10_ClassInfo_, allocate$HostLocaleProviderAdapterImpl$10);
	return class$;
}

$Class* HostLocaleProviderAdapterImpl$10::class$ = nullptr;

			} // provider
		} // locale
	} // util
} // sun