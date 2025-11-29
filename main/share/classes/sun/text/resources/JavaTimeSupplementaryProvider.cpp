#include <sun/text/resources/JavaTimeSupplementaryProvider.h>

#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;

namespace sun {
	namespace text {
		namespace resources {

$ClassInfo _JavaTimeSupplementaryProvider_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"sun.text.resources.JavaTimeSupplementaryProvider",
	nullptr,
	"java.util.spi.ResourceBundleProvider"
};

$Object* allocate$JavaTimeSupplementaryProvider($Class* clazz) {
	return $of($alloc(JavaTimeSupplementaryProvider));
}

$Class* JavaTimeSupplementaryProvider::load$($String* name, bool initialize) {
	$loadClass(JavaTimeSupplementaryProvider, name, initialize, &_JavaTimeSupplementaryProvider_ClassInfo_, allocate$JavaTimeSupplementaryProvider);
	return class$;
}

$Class* JavaTimeSupplementaryProvider::class$ = nullptr;

		} // resources
	} // text
} // sun