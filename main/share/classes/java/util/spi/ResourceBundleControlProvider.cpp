#include <java/util/spi/ResourceBundleControlProvider.h>

#include <java/util/ResourceBundle$Control.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ResourceBundle$Control = ::java::util::ResourceBundle$Control;

namespace java {
	namespace util {
		namespace spi {

$MethodInfo _ResourceBundleControlProvider_MethodInfo_[] = {
	{"getControl", "(Ljava/lang/String;)Ljava/util/ResourceBundle$Control;", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _ResourceBundleControlProvider_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"java.util.spi.ResourceBundleControlProvider",
	nullptr,
	nullptr,
	nullptr,
	_ResourceBundleControlProvider_MethodInfo_
};

$Object* allocate$ResourceBundleControlProvider($Class* clazz) {
	return $of($alloc(ResourceBundleControlProvider));
}

$Class* ResourceBundleControlProvider::load$($String* name, bool initialize) {
	$loadClass(ResourceBundleControlProvider, name, initialize, &_ResourceBundleControlProvider_ClassInfo_, allocate$ResourceBundleControlProvider);
	return class$;
}

$Class* ResourceBundleControlProvider::class$ = nullptr;

		} // spi
	} // util
} // java