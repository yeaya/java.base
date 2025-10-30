#include <sun/util/resources/CurrencyNamesProvider.h>

#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $ResourceBundleProvider = ::java::util::spi::ResourceBundleProvider;

namespace sun {
	namespace util {
		namespace resources {

$ClassInfo _CurrencyNamesProvider_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"sun.util.resources.CurrencyNamesProvider",
	nullptr,
	"java.util.spi.ResourceBundleProvider"
};

$Object* allocate$CurrencyNamesProvider($Class* clazz) {
	return $of($alloc(CurrencyNamesProvider));
}

$Class* CurrencyNamesProvider::load$($String* name, bool initialize) {
	$loadClass(CurrencyNamesProvider, name, initialize, &_CurrencyNamesProvider_ClassInfo_, allocate$CurrencyNamesProvider);
	return class$;
}

$Class* CurrencyNamesProvider::class$ = nullptr;

		} // resources
	} // util
} // sun