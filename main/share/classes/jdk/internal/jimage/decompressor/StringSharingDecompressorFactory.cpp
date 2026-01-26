#include <jdk/internal/jimage/decompressor/StringSharingDecompressorFactory.h>

#include <java/util/Properties.h>
#include <jdk/internal/jimage/decompressor/ResourceDecompressor.h>
#include <jdk/internal/jimage/decompressor/ResourceDecompressorFactory.h>
#include <jdk/internal/jimage/decompressor/StringSharingDecompressor.h>
#include <jcpp.h>

#undef NAME

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Properties = ::java::util::Properties;
using $ResourceDecompressor = ::jdk::internal::jimage::decompressor::ResourceDecompressor;
using $ResourceDecompressorFactory = ::jdk::internal::jimage::decompressor::ResourceDecompressorFactory;
using $StringSharingDecompressor = ::jdk::internal::jimage::decompressor::StringSharingDecompressor;

namespace jdk {
	namespace internal {
		namespace jimage {
			namespace decompressor {

$FieldInfo _StringSharingDecompressorFactory_FieldInfo_[] = {
	{"NAME", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(StringSharingDecompressorFactory, NAME)},
	{}
};

$MethodInfo _StringSharingDecompressorFactory_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(StringSharingDecompressorFactory, init$, void)},
	{"newDecompressor", "(Ljava/util/Properties;)Ljdk/internal/jimage/decompressor/ResourceDecompressor;", nullptr, $PUBLIC, $virtualMethod(StringSharingDecompressorFactory, newDecompressor, $ResourceDecompressor*, $Properties*), "java.io.IOException"},
	{}
};

$ClassInfo _StringSharingDecompressorFactory_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"jdk.internal.jimage.decompressor.StringSharingDecompressorFactory",
	"jdk.internal.jimage.decompressor.ResourceDecompressorFactory",
	nullptr,
	_StringSharingDecompressorFactory_FieldInfo_,
	_StringSharingDecompressorFactory_MethodInfo_
};

$Object* allocate$StringSharingDecompressorFactory($Class* clazz) {
	return $of($alloc(StringSharingDecompressorFactory));
}

$String* StringSharingDecompressorFactory::NAME = nullptr;

void StringSharingDecompressorFactory::init$() {
	$ResourceDecompressorFactory::init$(StringSharingDecompressorFactory::NAME);
}

$ResourceDecompressor* StringSharingDecompressorFactory::newDecompressor($Properties* properties) {
	return $new($StringSharingDecompressor, properties);
}

StringSharingDecompressorFactory::StringSharingDecompressorFactory() {
}

void clinit$StringSharingDecompressorFactory($Class* class$) {
	$assignStatic(StringSharingDecompressorFactory::NAME, "compact-cp"_s);
}

$Class* StringSharingDecompressorFactory::load$($String* name, bool initialize) {
	$loadClass(StringSharingDecompressorFactory, name, initialize, &_StringSharingDecompressorFactory_ClassInfo_, clinit$StringSharingDecompressorFactory, allocate$StringSharingDecompressorFactory);
	return class$;
}

$Class* StringSharingDecompressorFactory::class$ = nullptr;

			} // decompressor
		} // jimage
	} // internal
} // jdk