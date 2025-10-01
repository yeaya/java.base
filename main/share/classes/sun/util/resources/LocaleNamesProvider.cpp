#include <sun/util/resources/LocaleNamesProvider.h>

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

$ClassInfo _LocaleNamesProvider_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"sun.util.resources.LocaleNamesProvider",
	nullptr,
	"java.util.spi.ResourceBundleProvider"
};

$Object* allocate$LocaleNamesProvider($Class* clazz) {
	return $of($alloc(LocaleNamesProvider));
}

$Class* LocaleNamesProvider::load$($String* name, bool initialize) {
	$loadClass(LocaleNamesProvider, name, initialize, &_LocaleNamesProvider_ClassInfo_, allocate$LocaleNamesProvider);
	return class$;
}

$Class* LocaleNamesProvider::class$ = nullptr;

		} // resources
	} // util
} // sun