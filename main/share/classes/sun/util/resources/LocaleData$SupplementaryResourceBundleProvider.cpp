#include <sun/util/resources/LocaleData$SupplementaryResourceBundleProvider.h>

#include <sun/util/resources/LocaleData$LocaleDataResourceBundleProvider.h>
#include <sun/util/resources/LocaleData.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $LocaleData = ::sun::util::resources::LocaleData;
using $LocaleData$LocaleDataResourceBundleProvider = ::sun::util::resources::LocaleData$LocaleDataResourceBundleProvider;

namespace sun {
	namespace util {
		namespace resources {

$MethodInfo _LocaleData$SupplementaryResourceBundleProvider_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(LocaleData$SupplementaryResourceBundleProvider::*)()>(&LocaleData$SupplementaryResourceBundleProvider::init$))},
	{}
};

$InnerClassInfo _LocaleData$SupplementaryResourceBundleProvider_InnerClassesInfo_[] = {
	{"sun.util.resources.LocaleData$SupplementaryResourceBundleProvider", "sun.util.resources.LocaleData", "SupplementaryResourceBundleProvider", $PUBLIC | $STATIC | $ABSTRACT},
	{"sun.util.resources.LocaleData$LocaleDataResourceBundleProvider", "sun.util.resources.LocaleData", "LocaleDataResourceBundleProvider", $PRIVATE | $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _LocaleData$SupplementaryResourceBundleProvider_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"sun.util.resources.LocaleData$SupplementaryResourceBundleProvider",
	"sun.util.resources.LocaleData$LocaleDataResourceBundleProvider",
	nullptr,
	nullptr,
	_LocaleData$SupplementaryResourceBundleProvider_MethodInfo_,
	nullptr,
	nullptr,
	_LocaleData$SupplementaryResourceBundleProvider_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.util.resources.LocaleData"
};

$Object* allocate$LocaleData$SupplementaryResourceBundleProvider($Class* clazz) {
	return $of($alloc(LocaleData$SupplementaryResourceBundleProvider));
}

void LocaleData$SupplementaryResourceBundleProvider::init$() {
	$LocaleData$LocaleDataResourceBundleProvider::init$();
}

LocaleData$SupplementaryResourceBundleProvider::LocaleData$SupplementaryResourceBundleProvider() {
}

$Class* LocaleData$SupplementaryResourceBundleProvider::load$($String* name, bool initialize) {
	$loadClass(LocaleData$SupplementaryResourceBundleProvider, name, initialize, &_LocaleData$SupplementaryResourceBundleProvider_ClassInfo_, allocate$LocaleData$SupplementaryResourceBundleProvider);
	return class$;
}

$Class* LocaleData$SupplementaryResourceBundleProvider::class$ = nullptr;

		} // resources
	} // util
} // sun