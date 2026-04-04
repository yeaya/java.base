#include <sun/util/locale/provider/LocaleServiceProviderPool$LocalizedObjectGetter.h>
#include <java/util/Locale.h>
#include <java/util/spi/LocaleServiceProvider.h>
#include <sun/util/locale/provider/LocaleServiceProviderPool.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Locale = ::java::util::Locale;
using $LocaleServiceProvider = ::java::util::spi::LocaleServiceProvider;

namespace sun {
	namespace util {
		namespace locale {
			namespace provider {

$Class* LocaleServiceProviderPool$LocalizedObjectGetter::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"getObject", "(Ljava/util/spi/LocaleServiceProvider;Ljava/util/Locale;Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/Object;", "(TP;Ljava/util/Locale;Ljava/lang/String;[Ljava/lang/Object;)TS;", $PUBLIC | $TRANSIENT | $ABSTRACT, $virtualMethod(LocaleServiceProviderPool$LocalizedObjectGetter, getObject, $Object*, $LocaleServiceProvider*, $Locale*, $String*, $ObjectArray*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.util.locale.provider.LocaleServiceProviderPool$LocalizedObjectGetter", "sun.util.locale.provider.LocaleServiceProviderPool", "LocalizedObjectGetter", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"sun.util.locale.provider.LocaleServiceProviderPool$LocalizedObjectGetter",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$,
		"<P:Ljava/util/spi/LocaleServiceProvider;S:Ljava/lang/Object;>Ljava/lang/Object;",
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.util.locale.provider.LocaleServiceProviderPool"
	};
	$loadClass(LocaleServiceProviderPool$LocalizedObjectGetter, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(LocaleServiceProviderPool$LocalizedObjectGetter);
	});
	return class$;
}

$Class* LocaleServiceProviderPool$LocalizedObjectGetter::class$ = nullptr;

			} // provider
		} // locale
	} // util
} // sun