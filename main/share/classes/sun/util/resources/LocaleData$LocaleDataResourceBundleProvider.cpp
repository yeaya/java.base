#include <sun/util/resources/LocaleData$LocaleDataResourceBundleProvider.h>

#include <java/util/Locale.h>
#include <sun/util/resources/Bundles.h>
#include <sun/util/resources/LocaleData$LocaleDataStrategy.h>
#include <sun/util/resources/LocaleData.h>
#include <jcpp.h>

#undef INSTANCE

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Locale = ::java::util::Locale;
using $Bundles = ::sun::util::resources::Bundles;
using $LocaleData$LocaleDataStrategy = ::sun::util::resources::LocaleData$LocaleDataStrategy;

namespace sun {
	namespace util {
		namespace resources {

$MethodInfo _LocaleData$LocaleDataResourceBundleProvider_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(LocaleData$LocaleDataResourceBundleProvider, init$, void)},
	{"toBundleName", "(Ljava/lang/String;Ljava/util/Locale;)Ljava/lang/String;", nullptr, $PROTECTED, $virtualMethod(LocaleData$LocaleDataResourceBundleProvider, toBundleName, $String*, $String*, $Locale*)},
	{"toOtherBundleName", "(Ljava/lang/String;Ljava/lang/String;Ljava/util/Locale;)Ljava/lang/String;", nullptr, $PROTECTED, $virtualMethod(LocaleData$LocaleDataResourceBundleProvider, toOtherBundleName, $String*, $String*, $String*, $Locale*)},
	{}
};

$InnerClassInfo _LocaleData$LocaleDataResourceBundleProvider_InnerClassesInfo_[] = {
	{"sun.util.resources.LocaleData$LocaleDataResourceBundleProvider", "sun.util.resources.LocaleData", "LocaleDataResourceBundleProvider", $PRIVATE | $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _LocaleData$LocaleDataResourceBundleProvider_ClassInfo_ = {
	$ACC_SUPER | $ABSTRACT,
	"sun.util.resources.LocaleData$LocaleDataResourceBundleProvider",
	"java.lang.Object",
	"java.util.spi.ResourceBundleProvider",
	nullptr,
	_LocaleData$LocaleDataResourceBundleProvider_MethodInfo_,
	nullptr,
	nullptr,
	_LocaleData$LocaleDataResourceBundleProvider_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.util.resources.LocaleData"
};

$Object* allocate$LocaleData$LocaleDataResourceBundleProvider($Class* clazz) {
	return $of($alloc(LocaleData$LocaleDataResourceBundleProvider));
}

void LocaleData$LocaleDataResourceBundleProvider::init$() {
}

$String* LocaleData$LocaleDataResourceBundleProvider::toBundleName($String* baseName, $Locale* locale) {
	$init($LocaleData$LocaleDataStrategy);
	return $nc($LocaleData$LocaleDataStrategy::INSTANCE)->toBundleName(baseName, locale);
}

$String* LocaleData$LocaleDataResourceBundleProvider::toOtherBundleName($String* baseName, $String* bundleName, $Locale* locale) {
	return $Bundles::toOtherBundleName(baseName, bundleName, locale);
}

LocaleData$LocaleDataResourceBundleProvider::LocaleData$LocaleDataResourceBundleProvider() {
}

$Class* LocaleData$LocaleDataResourceBundleProvider::load$($String* name, bool initialize) {
	$loadClass(LocaleData$LocaleDataResourceBundleProvider, name, initialize, &_LocaleData$LocaleDataResourceBundleProvider_ClassInfo_, allocate$LocaleData$LocaleDataResourceBundleProvider);
	return class$;
}

$Class* LocaleData$LocaleDataResourceBundleProvider::class$ = nullptr;

		} // resources
	} // util
} // sun