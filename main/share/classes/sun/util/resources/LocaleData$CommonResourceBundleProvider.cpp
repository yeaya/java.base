#include <sun/util/resources/LocaleData$CommonResourceBundleProvider.h>

#include <sun/util/resources/LocaleData$LocaleDataResourceBundleProvider.h>
#include <sun/util/resources/LocaleData.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $LocaleData$LocaleDataResourceBundleProvider = ::sun::util::resources::LocaleData$LocaleDataResourceBundleProvider;

namespace sun {
	namespace util {
		namespace resources {

$MethodInfo _LocaleData$CommonResourceBundleProvider_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(LocaleData$CommonResourceBundleProvider::*)()>(&LocaleData$CommonResourceBundleProvider::init$))},
	{}
};

$InnerClassInfo _LocaleData$CommonResourceBundleProvider_InnerClassesInfo_[] = {
	{"sun.util.resources.LocaleData$CommonResourceBundleProvider", "sun.util.resources.LocaleData", "CommonResourceBundleProvider", $PUBLIC | $STATIC | $ABSTRACT},
	{"sun.util.resources.LocaleData$LocaleDataResourceBundleProvider", "sun.util.resources.LocaleData", "LocaleDataResourceBundleProvider", $PRIVATE | $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _LocaleData$CommonResourceBundleProvider_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"sun.util.resources.LocaleData$CommonResourceBundleProvider",
	"sun.util.resources.LocaleData$LocaleDataResourceBundleProvider",
	nullptr,
	nullptr,
	_LocaleData$CommonResourceBundleProvider_MethodInfo_,
	nullptr,
	nullptr,
	_LocaleData$CommonResourceBundleProvider_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.util.resources.LocaleData"
};

$Object* allocate$LocaleData$CommonResourceBundleProvider($Class* clazz) {
	return $of($alloc(LocaleData$CommonResourceBundleProvider));
}

void LocaleData$CommonResourceBundleProvider::init$() {
	$LocaleData$LocaleDataResourceBundleProvider::init$();
}

LocaleData$CommonResourceBundleProvider::LocaleData$CommonResourceBundleProvider() {
}

$Class* LocaleData$CommonResourceBundleProvider::load$($String* name, bool initialize) {
	$loadClass(LocaleData$CommonResourceBundleProvider, name, initialize, &_LocaleData$CommonResourceBundleProvider_ClassInfo_, allocate$LocaleData$CommonResourceBundleProvider);
	return class$;
}

$Class* LocaleData$CommonResourceBundleProvider::class$ = nullptr;

		} // resources
	} // util
} // sun