#include <sun/util/locale/provider/LocaleServiceProviderPool$LocalizedObjectGetter.h>

#include <java/util/Locale.h>
#include <java/util/spi/LocaleServiceProvider.h>
#include <sun/util/locale/provider/LocaleServiceProviderPool.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace sun {
	namespace util {
		namespace locale {
			namespace provider {

$MethodInfo _LocaleServiceProviderPool$LocalizedObjectGetter_MethodInfo_[] = {
	{"getObject", "(Ljava/util/spi/LocaleServiceProvider;Ljava/util/Locale;Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/Object;", "(TP;Ljava/util/Locale;Ljava/lang/String;[Ljava/lang/Object;)TS;", $PUBLIC | $TRANSIENT | $ABSTRACT},
	{}
};

$InnerClassInfo _LocaleServiceProviderPool$LocalizedObjectGetter_InnerClassesInfo_[] = {
	{"sun.util.locale.provider.LocaleServiceProviderPool$LocalizedObjectGetter", "sun.util.locale.provider.LocaleServiceProviderPool", "LocalizedObjectGetter", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _LocaleServiceProviderPool$LocalizedObjectGetter_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"sun.util.locale.provider.LocaleServiceProviderPool$LocalizedObjectGetter",
	nullptr,
	nullptr,
	nullptr,
	_LocaleServiceProviderPool$LocalizedObjectGetter_MethodInfo_,
	"<P:Ljava/util/spi/LocaleServiceProvider;S:Ljava/lang/Object;>Ljava/lang/Object;",
	nullptr,
	_LocaleServiceProviderPool$LocalizedObjectGetter_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.util.locale.provider.LocaleServiceProviderPool"
};

$Object* allocate$LocaleServiceProviderPool$LocalizedObjectGetter($Class* clazz) {
	return $of($alloc(LocaleServiceProviderPool$LocalizedObjectGetter));
}

$Class* LocaleServiceProviderPool$LocalizedObjectGetter::load$($String* name, bool initialize) {
	$loadClass(LocaleServiceProviderPool$LocalizedObjectGetter, name, initialize, &_LocaleServiceProviderPool$LocalizedObjectGetter_ClassInfo_, allocate$LocaleServiceProviderPool$LocalizedObjectGetter);
	return class$;
}

$Class* LocaleServiceProviderPool$LocalizedObjectGetter::class$ = nullptr;

			} // provider
		} // locale
	} // util
} // sun