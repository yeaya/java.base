#include <sun/util/resources/cldr/TimeZoneNamesProvider.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $ResourceBundleProvider = ::java::util::spi::ResourceBundleProvider;

namespace sun {
	namespace util {
		namespace resources {
			namespace cldr {

$ClassInfo _TimeZoneNamesProvider_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"sun.util.resources.cldr.TimeZoneNamesProvider",
	nullptr,
	"java.util.spi.ResourceBundleProvider"
};

$Object* allocate$TimeZoneNamesProvider($Class* clazz) {
	return $of($alloc(TimeZoneNamesProvider));
}

$Class* TimeZoneNamesProvider::load$($String* name, bool initialize) {
	$loadClass(TimeZoneNamesProvider, name, initialize, &_TimeZoneNamesProvider_ClassInfo_, allocate$TimeZoneNamesProvider);
	return class$;
}

$Class* TimeZoneNamesProvider::class$ = nullptr;

			} // cldr
		} // resources
	} // util
} // sun