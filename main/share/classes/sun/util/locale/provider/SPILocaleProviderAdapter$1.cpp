#include <sun/util/locale/provider/SPILocaleProviderAdapter$1.h>
#include <java/lang/ClassLoader.h>
#include <java/lang/ClassNotFoundException.h>
#include <java/lang/IllegalAccessException.h>
#include <java/lang/InstantiationException.h>
#include <java/lang/ReflectiveOperationException.h>
#include <java/util/Iterator.h>
#include <java/util/ServiceConfigurationError.h>
#include <java/util/ServiceLoader.h>
#include <java/util/spi/LocaleServiceProvider.h>
#include <sun/util/locale/provider/SPILocaleProviderAdapter$Delegate.h>
#include <sun/util/locale/provider/SPILocaleProviderAdapter.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $ClassLoader = ::java::lang::ClassLoader;
using $ClassNotFoundException = ::java::lang::ClassNotFoundException;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalAccessException = ::java::lang::IllegalAccessException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $InstantiationException = ::java::lang::InstantiationException;
using $MethodInfo = ::java::lang::MethodInfo;
using $Iterator = ::java::util::Iterator;
using $ServiceConfigurationError = ::java::util::ServiceConfigurationError;
using $ServiceLoader = ::java::util::ServiceLoader;
using $LocaleServiceProvider = ::java::util::spi::LocaleServiceProvider;
using $SPILocaleProviderAdapter = ::sun::util::locale::provider::SPILocaleProviderAdapter;
using $SPILocaleProviderAdapter$Delegate = ::sun::util::locale::provider::SPILocaleProviderAdapter$Delegate;

namespace sun {
	namespace util {
		namespace locale {
			namespace provider {

void SPILocaleProviderAdapter$1::init$($SPILocaleProviderAdapter* this$0, $Class* val$c) {
	$set(this, this$0, this$0);
	$set(this, val$c, val$c);
}

$Object* SPILocaleProviderAdapter$1::run() {
	$useLocalObjectStack();
	$beforeCallerSensitive();
	$var($LocaleServiceProvider, delegate, nullptr);
	{
		$var($Iterator, i$, $$nc($ServiceLoader::load(this->val$c, $($ClassLoader::getSystemClassLoader())))->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($LocaleServiceProvider, provider, $cast($LocaleServiceProvider, i$->next()));
			{
				if (delegate == nullptr) {
					try {
						$var($StringBuilder, var$0, $new($StringBuilder));
						$load($SPILocaleProviderAdapter);
						var$0->append($($SPILocaleProviderAdapter::class$->getCanonicalName()));
						var$0->append("$"_s);
						var$0->append($($nc(this->val$c)->getSimpleName()));
						var$0->append("Delegate"_s);
						$assign(delegate, $cast($LocaleServiceProvider, $Class::forName($$str(var$0))->newInstance()));
					} catch ($ClassNotFoundException& e) {
						$throwNew($ServiceConfigurationError, "SPI locale provider cannot be instantiated."_s, e);
					} catch ($InstantiationException& e) {
						$throwNew($ServiceConfigurationError, "SPI locale provider cannot be instantiated."_s, e);
					} catch ($IllegalAccessException& e) {
						$throwNew($ServiceConfigurationError, "SPI locale provider cannot be instantiated."_s, e);
					}
				}
				$nc($cast($SPILocaleProviderAdapter$Delegate, delegate))->addImpl(provider);
			}
		}
	}
	return delegate;
}

SPILocaleProviderAdapter$1::SPILocaleProviderAdapter$1() {
}

$Class* SPILocaleProviderAdapter$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lsun/util/locale/provider/SPILocaleProviderAdapter;", nullptr, $FINAL | $SYNTHETIC, $field(SPILocaleProviderAdapter$1, this$0)},
		{"val$c", "Ljava/lang/Class;", nullptr, $FINAL | $SYNTHETIC, $field(SPILocaleProviderAdapter$1, val$c)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lsun/util/locale/provider/SPILocaleProviderAdapter;Ljava/lang/Class;)V", nullptr, 0, $method(SPILocaleProviderAdapter$1, init$, void, $SPILocaleProviderAdapter*, $Class*)},
		{"run", "()Ljava/util/spi/LocaleServiceProvider;", "()TP;", $PUBLIC, $virtualMethod(SPILocaleProviderAdapter$1, run, $Object*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"sun.util.locale.provider.SPILocaleProviderAdapter",
		"findInstalledProvider",
		"(Ljava/lang/Class;)Ljava/util/spi/LocaleServiceProvider;"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.util.locale.provider.SPILocaleProviderAdapter$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.util.locale.provider.SPILocaleProviderAdapter$1",
		"java.lang.Object",
		"java.security.PrivilegedExceptionAction",
		fieldInfos$$,
		methodInfos$$,
		"Ljava/lang/Object;Ljava/security/PrivilegedExceptionAction<TP;>;",
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.util.locale.provider.SPILocaleProviderAdapter"
	};
	$loadClass(SPILocaleProviderAdapter$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(SPILocaleProviderAdapter$1);
	});
	return class$;
}

$Class* SPILocaleProviderAdapter$1::class$ = nullptr;

			} // provider
		} // locale
	} // util
} // sun