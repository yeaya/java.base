#include <jdk/internal/jimage/decompressor/ResourceDecompressor$StringsProvider.h>
#include <jdk/internal/jimage/decompressor/ResourceDecompressor.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace jdk {
	namespace internal {
		namespace jimage {
			namespace decompressor {

$Class* ResourceDecompressor$StringsProvider::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"getString", "(I)Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ResourceDecompressor$StringsProvider, getString, $String*, int32_t)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"jdk.internal.jimage.decompressor.ResourceDecompressor$StringsProvider", "jdk.internal.jimage.decompressor.ResourceDecompressor", "StringsProvider", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"jdk.internal.jimage.decompressor.ResourceDecompressor$StringsProvider",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"jdk.internal.jimage.decompressor.ResourceDecompressor"
	};
	$loadClass(ResourceDecompressor$StringsProvider, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ResourceDecompressor$StringsProvider);
	});
	return class$;
}

$Class* ResourceDecompressor$StringsProvider::class$ = nullptr;

			} // decompressor
		} // jimage
	} // internal
} // jdk