#include <jdk/internal/jimage/decompressor/ZipDecompressorFactory.h>
#include <java/util/Properties.h>
#include <jdk/internal/jimage/decompressor/ResourceDecompressor.h>
#include <jdk/internal/jimage/decompressor/ResourceDecompressorFactory.h>
#include <jdk/internal/jimage/decompressor/ZipDecompressor.h>
#include <jcpp.h>

#undef NAME

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Properties = ::java::util::Properties;
using $ResourceDecompressor = ::jdk::internal::jimage::decompressor::ResourceDecompressor;
using $ResourceDecompressorFactory = ::jdk::internal::jimage::decompressor::ResourceDecompressorFactory;
using $ZipDecompressor = ::jdk::internal::jimage::decompressor::ZipDecompressor;

namespace jdk {
	namespace internal {
		namespace jimage {
			namespace decompressor {

$String* ZipDecompressorFactory::NAME = nullptr;

void ZipDecompressorFactory::init$() {
	$ResourceDecompressorFactory::init$(ZipDecompressorFactory::NAME);
}

$ResourceDecompressor* ZipDecompressorFactory::newDecompressor($Properties* properties) {
	return $new($ZipDecompressor);
}

ZipDecompressorFactory::ZipDecompressorFactory() {
}

void ZipDecompressorFactory::clinit$($Class* clazz) {
	$assignStatic(ZipDecompressorFactory::NAME, "zip"_s);
}

$Class* ZipDecompressorFactory::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"NAME", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(ZipDecompressorFactory, NAME)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(ZipDecompressorFactory, init$, void)},
		{"newDecompressor", "(Ljava/util/Properties;)Ljdk/internal/jimage/decompressor/ResourceDecompressor;", nullptr, $PUBLIC, $virtualMethod(ZipDecompressorFactory, newDecompressor, $ResourceDecompressor*, $Properties*), "java.io.IOException"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER,
		"jdk.internal.jimage.decompressor.ZipDecompressorFactory",
		"jdk.internal.jimage.decompressor.ResourceDecompressorFactory",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(ZipDecompressorFactory, name, initialize, &classInfo$$, ZipDecompressorFactory::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(ZipDecompressorFactory);
	});
	return class$;
}

$Class* ZipDecompressorFactory::class$ = nullptr;

			} // decompressor
		} // jimage
	} // internal
} // jdk