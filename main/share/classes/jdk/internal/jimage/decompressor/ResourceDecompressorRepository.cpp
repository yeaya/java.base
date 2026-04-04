#include <jdk/internal/jimage/decompressor/ResourceDecompressorRepository.h>
#include <java/util/HashMap.h>
#include <java/util/Map.h>
#include <java/util/Properties.h>
#include <jdk/internal/jimage/decompressor/ResourceDecompressor.h>
#include <jdk/internal/jimage/decompressor/ResourceDecompressorFactory.h>
#include <jdk/internal/jimage/decompressor/StringSharingDecompressorFactory.h>
#include <jdk/internal/jimage/decompressor/ZipDecompressorFactory.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $HashMap = ::java::util::HashMap;
using $Map = ::java::util::Map;
using $Properties = ::java::util::Properties;
using $ResourceDecompressor = ::jdk::internal::jimage::decompressor::ResourceDecompressor;
using $ResourceDecompressorFactory = ::jdk::internal::jimage::decompressor::ResourceDecompressorFactory;
using $StringSharingDecompressorFactory = ::jdk::internal::jimage::decompressor::StringSharingDecompressorFactory;
using $ZipDecompressorFactory = ::jdk::internal::jimage::decompressor::ZipDecompressorFactory;

namespace jdk {
	namespace internal {
		namespace jimage {
			namespace decompressor {

$Map* ResourceDecompressorRepository::factories = nullptr;

void ResourceDecompressorRepository::init$() {
}

$ResourceDecompressor* ResourceDecompressorRepository::newResourceDecompressor($Properties* properties, $String* name) {
	$init(ResourceDecompressorRepository);
	$var($ResourceDecompressorFactory, fact, $cast($ResourceDecompressorFactory, ResourceDecompressorRepository::factories->get(name)));
	if (fact != nullptr) {
		return fact->newDecompressor(properties);
	}
	return nullptr;
}

void ResourceDecompressorRepository::registerReaderProvider($ResourceDecompressorFactory* factory) {
	$init(ResourceDecompressorRepository);
	ResourceDecompressorRepository::factories->put($($nc(factory)->getName()), factory);
}

void ResourceDecompressorRepository::clinit$($Class* clazz) {
	$useLocalObjectStack();
	$assignStatic(ResourceDecompressorRepository::factories, $new($HashMap));
	{
		ResourceDecompressorRepository::registerReaderProvider($$new($ZipDecompressorFactory));
		ResourceDecompressorRepository::registerReaderProvider($$new($StringSharingDecompressorFactory));
	}
}

ResourceDecompressorRepository::ResourceDecompressorRepository() {
}

$Class* ResourceDecompressorRepository::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"factories", "Ljava/util/Map;", "Ljava/util/Map<Ljava/lang/String;Ljdk/internal/jimage/decompressor/ResourceDecompressorFactory;>;", $PRIVATE | $STATIC | $FINAL, $staticField(ResourceDecompressorRepository, factories)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PRIVATE, $method(ResourceDecompressorRepository, init$, void)},
		{"newResourceDecompressor", "(Ljava/util/Properties;Ljava/lang/String;)Ljdk/internal/jimage/decompressor/ResourceDecompressor;", nullptr, $PUBLIC | $STATIC, $staticMethod(ResourceDecompressorRepository, newResourceDecompressor, $ResourceDecompressor*, $Properties*, $String*), "java.io.IOException"},
		{"registerReaderProvider", "(Ljdk/internal/jimage/decompressor/ResourceDecompressorFactory;)V", nullptr, $PRIVATE | $STATIC, $staticMethod(ResourceDecompressorRepository, registerReaderProvider, void, $ResourceDecompressorFactory*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER,
		"jdk.internal.jimage.decompressor.ResourceDecompressorRepository",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(ResourceDecompressorRepository, name, initialize, &classInfo$$, ResourceDecompressorRepository::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(ResourceDecompressorRepository);
	});
	return class$;
}

$Class* ResourceDecompressorRepository::class$ = nullptr;

			} // decompressor
		} // jimage
	} // internal
} // jdk