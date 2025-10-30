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

$MethodInfo _ResourceDecompressor_MethodInfo_[] = {
	{"decompress", "(Ljdk/internal/jimage/decompressor/ResourceDecompressor$StringsProvider;[BIJ)[B", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.lang.Exception"},
	{"getName", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$InnerClassInfo _ResourceDecompressor_InnerClassesInfo_[] = {
	{"jdk.internal.jimage.decompressor.ResourceDecompressor$StringsProvider", "jdk.internal.jimage.decompressor.ResourceDecompressor", "StringsProvider", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _ResourceDecompressor_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"jdk.internal.jimage.decompressor.ResourceDecompressor",
	nullptr,
	nullptr,
	nullptr,
	_ResourceDecompressor_MethodInfo_,
	nullptr,
	nullptr,
	_ResourceDecompressor_InnerClassesInfo_,
	nullptr,
	nullptr,
	"jdk.internal.jimage.decompressor.ResourceDecompressor$StringsProvider"
};

$Object* allocate$ResourceDecompressor($Class* clazz) {
	return $of($alloc(ResourceDecompressor));
}

$Class* ResourceDecompressor::load$($String* name, bool initialize) {
	$loadClass(ResourceDecompressor, name, initialize, &_ResourceDecompressor_ClassInfo_, allocate$ResourceDecompressor);
	return class$;
}

$Class* ResourceDecompressor::class$ = nullptr;

			} // decompressor
		} // jimage
	} // internal
} // jdk