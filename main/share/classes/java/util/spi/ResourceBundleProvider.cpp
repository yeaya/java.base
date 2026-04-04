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

$Class* ResourceBundleProvider::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"getBundle", "(Ljava/lang/String;Ljava/util/Locale;)Ljava/util/ResourceBundle;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ResourceBundleProvider, getBundle, $ResourceBundle*, $String*, $Locale*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"java.util.spi.ResourceBundleProvider",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(ResourceBundleProvider, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ResourceBundleProvider);
	});
	return class$;
}

$Class* ResourceBundleProvider::class$ = nullptr;

		} // spi
	} // util
} // java