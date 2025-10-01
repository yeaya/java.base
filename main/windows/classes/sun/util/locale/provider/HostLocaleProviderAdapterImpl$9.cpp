#include <sun/util/locale/provider/HostLocaleProviderAdapterImpl$9.h>

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

$MethodInfo _HostLocaleProviderAdapterImpl$9_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(HostLocaleProviderAdapterImpl$9::*)()>(&HostLocaleProviderAdapterImpl$9::init$))},
	{"getAvailableLocales", "()[Ljava/util/Locale;", nullptr, $PUBLIC},
	{"getDisplayCountry", "(Ljava/lang/String;Ljava/util/Locale;)Ljava/lang/String;", nullptr, $PUBLIC},
	{"getDisplayLanguage", "(Ljava/lang/String;Ljava/util/Locale;)Ljava/lang/String;", nullptr, $PUBLIC},
	{"getDisplayScript", "(Ljava/lang/String;Ljava/util/Locale;)Ljava/lang/String;", nullptr, $PUBLIC},
	{"getDisplayVariant", "(Ljava/lang/String;Ljava/util/Locale;)Ljava/lang/String;", nullptr, $PUBLIC},
	{"isSupportedLocale", "(Ljava/util/Locale;)Z", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _HostLocaleProviderAdapterImpl$9_EnclosingMethodInfo_ = {
	"sun.util.locale.provider.HostLocaleProviderAdapterImpl",
	"getLocaleNameProvider",
	"()Ljava/util/spi/LocaleNameProvider;"
};

$InnerClassInfo _HostLocaleProviderAdapterImpl$9_InnerClassesInfo_[] = {
	{"sun.util.locale.provider.HostLocaleProviderAdapterImpl$9", nullptr, nullptr, 0},
	{}
};

$ClassInfo _HostLocaleProviderAdapterImpl$9_ClassInfo_ = {
	$ACC_SUPER,
	"sun.util.locale.provider.HostLocaleProviderAdapterImpl$9",
	"java.util.spi.LocaleNameProvider",
	nullptr,
	nullptr,
	_HostLocaleProviderAdapterImpl$9_MethodInfo_,
	nullptr,
	&_HostLocaleProviderAdapterImpl$9_EnclosingMethodInfo_,
	_HostLocaleProviderAdapterImpl$9_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.util.locale.provider.HostLocaleProviderAdapterImpl"
};

$Object* allocate$HostLocaleProviderAdapterImpl$9($Class* clazz) {
	return $of($alloc(HostLocaleProviderAdapterImpl$9));
}

void HostLocaleProviderAdapterImpl$9::init$() {
	$LocaleNameProvider::init$();
}

$LocaleArray* HostLocaleProviderAdapterImpl$9::getAvailableLocales() {
	$init($HostLocaleProviderAdapterImpl);
	return $HostLocaleProviderAdapterImpl::supportedLocale;
}

bool HostLocaleProviderAdapterImpl$9::isSupportedLocale($Locale* locale) {
	$init($HostLocaleProviderAdapterImpl);
	bool var$0 = $nc($HostLocaleProviderAdapterImpl::supportedLocaleSet)->contains($($nc(locale)->stripExtensions()));
	return var$0 && $nc($($nc(locale)->getLanguage()))->equals($HostLocaleProviderAdapterImpl::nativeDisplayLanguage);
}

$String* HostLocaleProviderAdapterImpl$9::getDisplayLanguage($String* languageCode, $Locale* locale) {
	return $HostLocaleProviderAdapterImpl::getDisplayString($($nc(locale)->toLanguageTag()), 2, languageCode);
}

$String* HostLocaleProviderAdapterImpl$9::getDisplayCountry($String* countryCode, $Locale* locale) {
	$init($HostLocaleProviderAdapterImpl);
	$var($String, str, $HostLocaleProviderAdapterImpl::getDisplayString($($nc(locale)->toLanguageTag()), 4, $$str({$HostLocaleProviderAdapterImpl::nativeDisplayLanguage, "-"_s, countryCode})));
	if (str != nullptr && str->endsWith($$str({"("_s, countryCode, ")"_s}))) {
		return nullptr;
	}
	return str;
}

$String* HostLocaleProviderAdapterImpl$9::getDisplayScript($String* scriptCode, $Locale* locale) {
	return nullptr;
}

$String* HostLocaleProviderAdapterImpl$9::getDisplayVariant($String* variantCode, $Locale* locale) {
	return nullptr;
}

HostLocaleProviderAdapterImpl$9::HostLocaleProviderAdapterImpl$9() {
}

$Class* HostLocaleProviderAdapterImpl$9::load$($String* name, bool initialize) {
	$loadClass(HostLocaleProviderAdapterImpl$9, name, initialize, &_HostLocaleProviderAdapterImpl$9_ClassInfo_, allocate$HostLocaleProviderAdapterImpl$9);
	return class$;
}

$Class* HostLocaleProviderAdapterImpl$9::class$ = nullptr;

			} // provider
		} // locale
	} // util
} // sun