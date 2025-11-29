#include <sun/util/resources/CalendarDataProvider.h>

#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;

namespace sun {
	namespace util {
		namespace resources {

$ClassInfo _CalendarDataProvider_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"sun.util.resources.CalendarDataProvider",
	nullptr,
	"java.util.spi.ResourceBundleProvider"
};

$Object* allocate$CalendarDataProvider($Class* clazz) {
	return $of($alloc(CalendarDataProvider));
}

$Class* CalendarDataProvider::load$($String* name, bool initialize) {
	$loadClass(CalendarDataProvider, name, initialize, &_CalendarDataProvider_ClassInfo_, allocate$CalendarDataProvider);
	return class$;
}

$Class* CalendarDataProvider::class$ = nullptr;

		} // resources
	} // util
} // sun