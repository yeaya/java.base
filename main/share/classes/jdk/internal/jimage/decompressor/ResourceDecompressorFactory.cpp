#include <jdk/internal/jimage/decompressor/ResourceDecompressorFactory.h>
#include <java/util/Properties.h>
#include <jdk/internal/jimage/decompressor/ResourceDecompressor.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Properties = ::java::util::Properties;
using $ResourceDecompressor = ::jdk::internal::jimage::decompressor::ResourceDecompressor;

namespace jdk {
	namespace internal {
		namespace jimage {
			namespace decompressor {

void ResourceDecompressorFactory::init$($String* name) {
	$set(this, name, name);
}

$String* ResourceDecompressorFactory::getName() {
	return this->name;
}

ResourceDecompressorFactory::ResourceDecompressorFactory() {
}

$Class* ResourceDecompressorFactory::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"name", "Ljava/lang/String;", nullptr, $PRIVATE | $FINAL, $field(ResourceDecompressorFactory, name)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/String;)V", nullptr, $PROTECTED, $method(ResourceDecompressorFactory, init$, void, $String*)},
		{"getName", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(ResourceDecompressorFactory, getName, $String*)},
		{"newDecompressor", "(Ljava/util/Properties;)Ljdk/internal/jimage/decompressor/ResourceDecompressor;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ResourceDecompressorFactory, newDecompressor, $ResourceDecompressor*, $Properties*), "java.io.IOException"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER | $ABSTRACT,
		"jdk.internal.jimage.decompressor.ResourceDecompressorFactory",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(ResourceDecompressorFactory, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ResourceDecompressorFactory);
	});
	return class$;
}

$Class* ResourceDecompressorFactory::class$ = nullptr;

			} // decompressor
		} // jimage
	} // internal
} // jdk