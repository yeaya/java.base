#include <jdk/internal/jimage/decompressor/ZipDecompressorFactory.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
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

$FieldInfo _ZipDecompressorFactory_FieldInfo_[] = {
	{"NAME", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(ZipDecompressorFactory, NAME)},
	{}
};

$MethodInfo _ZipDecompressorFactory_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(ZipDecompressorFactory::*)()>(&ZipDecompressorFactory::init$))},
	{"newDecompressor", "(Ljava/util/Properties;)Ljdk/internal/jimage/decompressor/ResourceDecompressor;", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{}
};

$ClassInfo _ZipDecompressorFactory_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"jdk.internal.jimage.decompressor.ZipDecompressorFactory",
	"jdk.internal.jimage.decompressor.ResourceDecompressorFactory",
	nullptr,
	_ZipDecompressorFactory_FieldInfo_,
	_ZipDecompressorFactory_MethodInfo_
};

$Object* allocate$ZipDecompressorFactory($Class* clazz) {
	return $of($alloc(ZipDecompressorFactory));
}

$String* ZipDecompressorFactory::NAME = nullptr;

void ZipDecompressorFactory::init$() {
	$ResourceDecompressorFactory::init$(ZipDecompressorFactory::NAME);
}

$ResourceDecompressor* ZipDecompressorFactory::newDecompressor($Properties* properties) {
	return $new($ZipDecompressor);
}

ZipDecompressorFactory::ZipDecompressorFactory() {
}

void clinit$ZipDecompressorFactory($Class* class$) {
	$assignStatic(ZipDecompressorFactory::NAME, "zip"_s);
}

$Class* ZipDecompressorFactory::load$($String* name, bool initialize) {
	$loadClass(ZipDecompressorFactory, name, initialize, &_ZipDecompressorFactory_ClassInfo_, clinit$ZipDecompressorFactory, allocate$ZipDecompressorFactory);
	return class$;
}

$Class* ZipDecompressorFactory::class$ = nullptr;

			} // decompressor
		} // jimage
	} // internal
} // jdk