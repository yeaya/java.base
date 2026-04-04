#include <sun/util/locale/provider/LocaleServiceProviderPool$AllAvailableLocales.h>
#include <java/util/HashSet.h>
#include <java/util/Locale.h>
#include <java/util/Set.h>
#include <sun/util/locale/provider/LocaleServiceProviderPool.h>
#include <jcpp.h>

using $LocaleArray = $Array<::java::util::Locale>;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $HashSet = ::java::util::HashSet;
using $Set = ::java::util::Set;
using $LocaleServiceProviderPool = ::sun::util::locale::provider::LocaleServiceProviderPool;

namespace sun {
	namespace util {
		namespace locale {
			namespace provider {

$LocaleArray* LocaleServiceProviderPool$AllAvailableLocales::allAvailableLocales = nullptr;

void LocaleServiceProviderPool$AllAvailableLocales::init$() {
}

void LocaleServiceProviderPool$AllAvailableLocales::clinit$($Class* clazz) {
	$useLocalObjectStack();
	{
		$var($Set, all, $new($HashSet));
		{
			$init($LocaleServiceProviderPool);
			$var($ClassArray, arr$, $LocaleServiceProviderPool::spiClasses);
			for (int32_t len$ = $nc(arr$)->length, i$ = 0; i$ < len$; ++i$) {
				$Class* c = arr$->get(i$);
				{
					$var($LocaleServiceProviderPool, pool, $LocaleServiceProviderPool::getPool(c));
					all->addAll($($nc(pool)->getAvailableLocaleSet()));
				}
			}
		}
		$assignStatic(LocaleServiceProviderPool$AllAvailableLocales::allAvailableLocales, $cast($LocaleArray, all->toArray($$new($LocaleArray, 0))));
	}
}

LocaleServiceProviderPool$AllAvailableLocales::LocaleServiceProviderPool$AllAvailableLocales() {
}

$Class* LocaleServiceProviderPool$AllAvailableLocales::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"allAvailableLocales", "[Ljava/util/Locale;", nullptr, $STATIC | $FINAL, $staticField(LocaleServiceProviderPool$AllAvailableLocales, allAvailableLocales)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PRIVATE, $method(LocaleServiceProviderPool$AllAvailableLocales, init$, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.util.locale.provider.LocaleServiceProviderPool$AllAvailableLocales", "sun.util.locale.provider.LocaleServiceProviderPool", "AllAvailableLocales", $PRIVATE | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.util.locale.provider.LocaleServiceProviderPool$AllAvailableLocales",
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
		"sun.util.locale.provider.LocaleServiceProviderPool"
	};
	$loadClass(LocaleServiceProviderPool$AllAvailableLocales, name, initialize, &classInfo$$, LocaleServiceProviderPool$AllAvailableLocales::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(LocaleServiceProviderPool$AllAvailableLocales);
	});
	return class$;
}

$Class* LocaleServiceProviderPool$AllAvailableLocales::class$ = nullptr;

			} // provider
		} // locale
	} // util
} // sun