#include <sun/util/resources/LocaleDataProvider.h>

#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;

namespace sun {
	namespace util {
		namespace resources {

$ClassInfo _LocaleDataProvider_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"sun.util.resources.LocaleDataProvider",
	nullptr,
	"java.util.spi.ResourceBundleProvider"
};

$Object* allocate$LocaleDataProvider($Class* clazz) {
	return $of($alloc(LocaleDataProvider));
}

$Class* LocaleDataProvider::load$($String* name, bool initialize) {
	$loadClass(LocaleDataProvider, name, initialize, &_LocaleDataProvider_ClassInfo_, allocate$LocaleDataProvider);
	return class$;
}

$Class* LocaleDataProvider::class$ = nullptr;

		} // resources
	} // util
} // sun