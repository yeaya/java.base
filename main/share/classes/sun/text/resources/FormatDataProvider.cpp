#include <sun/text/resources/FormatDataProvider.h>

#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;

namespace sun {
	namespace text {
		namespace resources {

$ClassInfo _FormatDataProvider_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"sun.text.resources.FormatDataProvider",
	nullptr,
	"java.util.spi.ResourceBundleProvider"
};

$Object* allocate$FormatDataProvider($Class* clazz) {
	return $of($alloc(FormatDataProvider));
}

$Class* FormatDataProvider::load$($String* name, bool initialize) {
	$loadClass(FormatDataProvider, name, initialize, &_FormatDataProvider_ClassInfo_, allocate$FormatDataProvider);
	return class$;
}

$Class* FormatDataProvider::class$ = nullptr;

		} // resources
	} // text
} // sun