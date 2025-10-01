#include <sun/text/resources/CollationDataProvider.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $ResourceBundleProvider = ::java::util::spi::ResourceBundleProvider;

namespace sun {
	namespace text {
		namespace resources {

$ClassInfo _CollationDataProvider_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"sun.text.resources.CollationDataProvider",
	nullptr,
	"java.util.spi.ResourceBundleProvider"
};

$Object* allocate$CollationDataProvider($Class* clazz) {
	return $of($alloc(CollationDataProvider));
}

$Class* CollationDataProvider::load$($String* name, bool initialize) {
	$loadClass(CollationDataProvider, name, initialize, &_CollationDataProvider_ClassInfo_, allocate$CollationDataProvider);
	return class$;
}

$Class* CollationDataProvider::class$ = nullptr;

		} // resources
	} // text
} // sun