#include <jdk/internal/jimage/decompressor/ResourceDecompressor.h>
#include <jdk/internal/jimage/decompressor/ResourceDecompressor$StringsProvider.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ResourceDecompressor$StringsProvider = ::jdk::internal::jimage::decompressor::ResourceDecompressor$StringsProvider;

namespace jdk {
	namespace internal {
		namespace jimage {
			namespace decompressor {

$Class* ResourceDecompressor::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"decompress", "(Ljdk/internal/jimage/decompressor/ResourceDecompressor$StringsProvider;[BIJ)[B", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ResourceDecompressor, decompress, $bytes*, $ResourceDecompressor$StringsProvider*, $bytes*, int32_t, int64_t), "java.lang.Exception"},
		{"getName", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ResourceDecompressor, getName, $String*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"jdk.internal.jimage.decompressor.ResourceDecompressor$StringsProvider", "jdk.internal.jimage.decompressor.ResourceDecompressor", "StringsProvider", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"jdk.internal.jimage.decompressor.ResourceDecompressor",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"jdk.internal.jimage.decompressor.ResourceDecompressor$StringsProvider"
	};
	$loadClass(ResourceDecompressor, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ResourceDecompressor);
	});
	return class$;
}

$Class* ResourceDecompressor::class$ = nullptr;

			} // decompressor
		} // jimage
	} // internal
} // jdk