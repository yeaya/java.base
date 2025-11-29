#include <sun/text/resources/cldr/FormatDataProvider.h>

#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;

namespace sun {
	namespace text {
		namespace resources {
			namespace cldr {

$ClassInfo _FormatDataProvider_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"sun.text.resources.cldr.FormatDataProvider",
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

			} // cldr
		} // resources
	} // text
} // sun