#include <sun/util/locale/provider/AuxLocaleProviderAdapter$NullProvider.h>
#include <java/util/Locale.h>
#include <java/util/spi/LocaleServiceProvider.h>
#include <sun/util/locale/provider/AuxLocaleProviderAdapter.h>
#include <jcpp.h>

using $LocaleArray = $Array<::java::util::Locale>;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $LocaleServiceProvider = ::java::util::spi::LocaleServiceProvider;

namespace sun {
	namespace util {
		namespace locale {
			namespace provider {

void AuxLocaleProviderAdapter$NullProvider::init$() {
	$LocaleServiceProvider::init$();
}

$LocaleArray* AuxLocaleProviderAdapter$NullProvider::getAvailableLocales() {
	return $new($LocaleArray, 0);
}

AuxLocaleProviderAdapter$NullProvider::AuxLocaleProviderAdapter$NullProvider() {
}

$Class* AuxLocaleProviderAdapter$NullProvider::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PRIVATE, $method(AuxLocaleProviderAdapter$NullProvider, init$, void)},
		{"getAvailableLocales", "()[Ljava/util/Locale;", nullptr, $PUBLIC, $virtualMethod(AuxLocaleProviderAdapter$NullProvider, getAvailableLocales, $LocaleArray*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.util.locale.provider.AuxLocaleProviderAdapter$NullProvider", "sun.util.locale.provider.AuxLocaleProviderAdapter", "NullProvider", $PRIVATE | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.util.locale.provider.AuxLocaleProviderAdapter$NullProvider",
		"java.util.spi.LocaleServiceProvider",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.util.locale.provider.AuxLocaleProviderAdapter"
	};
	$loadClass(AuxLocaleProviderAdapter$NullProvider, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(AuxLocaleProviderAdapter$NullProvider);
	});
	return class$;
}

$Class* AuxLocaleProviderAdapter$NullProvider::class$ = nullptr;

			} // provider
		} // locale
	} // util
} // sun