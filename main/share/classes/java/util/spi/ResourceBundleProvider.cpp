#include <java/util/spi/ResourceBundleProvider.h>

#include <java/util/Locale.h>
#include <java/util/ResourceBundle.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Locale = ::java::util::Locale;
using $ResourceBundle = ::java::util::ResourceBundle;

namespace java {
	namespace util {
		namespace spi {

$MethodInfo _ResourceBundleProvider_MethodInfo_[] = {
	{"getBundle", "(Ljava/lang/String;Ljava/util/Locale;)Ljava/util/ResourceBundle;", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _ResourceBundleProvider_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"java.util.spi.ResourceBundleProvider",
	nullptr,
	nullptr,
	nullptr,
	_ResourceBundleProvider_MethodInfo_
};

$Object* allocate$ResourceBundleProvider($Class* clazz) {
	return $of($alloc(ResourceBundleProvider));
}

$Class* ResourceBundleProvider::load$($String* name, bool initialize) {
	$loadClass(ResourceBundleProvider, name, initialize, &_ResourceBundleProvider_ClassInfo_, allocate$ResourceBundleProvider);
	return class$;
}

$Class* ResourceBundleProvider::class$ = nullptr;

		} // spi
	} // util
} // java