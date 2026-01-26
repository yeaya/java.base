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

$MethodInfo _ResourceDecompressor$StringsProvider_MethodInfo_[] = {
	{"getString", "(I)Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ResourceDecompressor$StringsProvider, getString, $String*, int32_t)},
	{}
};

$InnerClassInfo _ResourceDecompressor$StringsProvider_InnerClassesInfo_[] = {
	{"jdk.internal.jimage.decompressor.ResourceDecompressor$StringsProvider", "jdk.internal.jimage.decompressor.ResourceDecompressor", "StringsProvider", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _ResourceDecompressor$StringsProvider_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"jdk.internal.jimage.decompressor.ResourceDecompressor$StringsProvider",
	nullptr,
	nullptr,
	nullptr,
	_ResourceDecompressor$StringsProvider_MethodInfo_,
	nullptr,
	nullptr,
	_ResourceDecompressor$StringsProvider_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"jdk.internal.jimage.decompressor.ResourceDecompressor"
};

$Object* allocate$ResourceDecompressor$StringsProvider($Class* clazz) {
	return $of($alloc(ResourceDecompressor$StringsProvider));
}

$Class* ResourceDecompressor$StringsProvider::load$($String* name, bool initialize) {
	$loadClass(ResourceDecompressor$StringsProvider, name, initialize, &_ResourceDecompressor$StringsProvider_ClassInfo_, allocate$ResourceDecompressor$StringsProvider);
	return class$;
}

$Class* ResourceDecompressor$StringsProvider::class$ = nullptr;

			} // decompressor
		} // jimage
	} // internal
} // jdk