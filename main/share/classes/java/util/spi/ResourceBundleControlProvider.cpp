#include <java/util/spi/ResourceBundleControlProvider.h>
#include <java/util/ResourceBundle$Control.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ResourceBundle$Control = ::java::util::ResourceBundle$Control;

namespace java {
	namespace util {
		namespace spi {

$Class* ResourceBundleControlProvider::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"getControl", "(Ljava/lang/String;)Ljava/util/ResourceBundle$Control;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ResourceBundleControlProvider, getControl, $ResourceBundle$Control*, $String*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"java.util.spi.ResourceBundleControlProvider",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(ResourceBundleControlProvider, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ResourceBundleControlProvider);
	});
	return class$;
}

$Class* ResourceBundleControlProvider::class$ = nullptr;

		} // spi
	} // util
} // java