#include <sun/text/resources/BreakIteratorInfoProvider.h>

#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $ResourceBundleProvider = ::java::util::spi::ResourceBundleProvider;

namespace sun {
	namespace text {
		namespace resources {

$ClassInfo _BreakIteratorInfoProvider_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"sun.text.resources.BreakIteratorInfoProvider",
	nullptr,
	"java.util.spi.ResourceBundleProvider"
};

$Object* allocate$BreakIteratorInfoProvider($Class* clazz) {
	return $of($alloc(BreakIteratorInfoProvider));
}

$Class* BreakIteratorInfoProvider::load$($String* name, bool initialize) {
	$loadClass(BreakIteratorInfoProvider, name, initialize, &_BreakIteratorInfoProvider_ClassInfo_, allocate$BreakIteratorInfoProvider);
	return class$;
}

$Class* BreakIteratorInfoProvider::class$ = nullptr;

		} // resources
	} // text
} // sun