#include <jdk/internal/jimage/ImageReaderFactory.h>
#include <java/io/IOException.h>
#include <java/io/UncheckedIOException.h>
#include <java/nio/file/Path.h>
#include <java/nio/file/Paths.h>
#include <java/util/AbstractMap.h>
#include <java/util/Map.h>
#include <java/util/Objects.h>
#include <java/util/concurrent/ConcurrentHashMap.h>
#include <java/util/function/Function.h>
#include <jdk/internal/jimage/ImageReader.h>
#include <jdk/internal/jimage/ImageReaderFactory$1.h>
#include <jcpp.h>

#undef BOOT_MODULES_JIMAGE
#undef JAVA_HOME
#undef OPENER

using $IOException = ::java::io::IOException;
using $UncheckedIOException = ::java::io::UncheckedIOException;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Path = ::java::nio::file::Path;
using $Paths = ::java::nio::file::Paths;
using $AbstractMap = ::java::util::AbstractMap;
using $Map = ::java::util::Map;
using $Objects = ::java::util::Objects;
using $ConcurrentHashMap = ::java::util::concurrent::ConcurrentHashMap;
using $Function = ::java::util::function::Function;
using $ImageReader = ::jdk::internal::jimage::ImageReader;
using $ImageReaderFactory$1 = ::jdk::internal::jimage::ImageReaderFactory$1;

namespace jdk {
	namespace internal {
		namespace jimage {

$String* ImageReaderFactory::JAVA_HOME = nullptr;
$Path* ImageReaderFactory::BOOT_MODULES_JIMAGE = nullptr;
$Map* ImageReaderFactory::readers = nullptr;
$Function* ImageReaderFactory::OPENER = nullptr;

void ImageReaderFactory::init$() {
}

$ImageReader* ImageReaderFactory::get($Path* jimage) {
	$init(ImageReaderFactory);
	$Objects::requireNonNull(jimage);
	try {
		return $cast($ImageReader, ImageReaderFactory::readers->computeIfAbsent(jimage, ImageReaderFactory::OPENER));
	} catch ($UncheckedIOException& io) {
		$throw($$cast($IOException, io->getCause()));
	}
	$shouldNotReachHere();
}

$ImageReader* ImageReaderFactory::getImageReader() {
	$init(ImageReaderFactory);
	try {
		return get(ImageReaderFactory::BOOT_MODULES_JIMAGE);
	} catch ($IOException& ioe) {
		$throwNew($UncheckedIOException, ioe);
	}
	$shouldNotReachHere();
}

void ImageReaderFactory::clinit$($Class* clazz) {
	$assignStatic(ImageReaderFactory::JAVA_HOME, $System::getProperty("java.home"_s));
	$assignStatic(ImageReaderFactory::BOOT_MODULES_JIMAGE, $Paths::get(ImageReaderFactory::JAVA_HOME, $$new($StringArray, {
		"lib"_s,
		"modules"_s
	})));
	$assignStatic(ImageReaderFactory::readers, $cast($AbstractMap, $new($ConcurrentHashMap)));
	$assignStatic(ImageReaderFactory::OPENER, $new($ImageReaderFactory$1));
}

ImageReaderFactory::ImageReaderFactory() {
}

$Class* ImageReaderFactory::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"JAVA_HOME", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(ImageReaderFactory, JAVA_HOME)},
		{"BOOT_MODULES_JIMAGE", "Ljava/nio/file/Path;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(ImageReaderFactory, BOOT_MODULES_JIMAGE)},
		{"readers", "Ljava/util/Map;", "Ljava/util/Map<Ljava/nio/file/Path;Ljdk/internal/jimage/ImageReader;>;", $PRIVATE | $STATIC | $FINAL, $staticField(ImageReaderFactory, readers)},
		{"OPENER", "Ljava/util/function/Function;", "Ljava/util/function/Function<Ljava/nio/file/Path;Ljdk/internal/jimage/ImageReader;>;", $PRIVATE | $STATIC, $staticField(ImageReaderFactory, OPENER)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PRIVATE, $method(ImageReaderFactory, init$, void)},
		{"get", "(Ljava/nio/file/Path;)Ljdk/internal/jimage/ImageReader;", nullptr, $PUBLIC | $STATIC, $staticMethod(ImageReaderFactory, get, $ImageReader*, $Path*), "java.io.IOException"},
		{"getImageReader", "()Ljdk/internal/jimage/ImageReader;", nullptr, $PUBLIC | $STATIC, $staticMethod(ImageReaderFactory, getImageReader, $ImageReader*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"jdk.internal.jimage.ImageReaderFactory$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"jdk.internal.jimage.ImageReaderFactory",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"jdk.internal.jimage.ImageReaderFactory$1"
	};
	$loadClass(ImageReaderFactory, name, initialize, &classInfo$$, ImageReaderFactory::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(ImageReaderFactory);
	});
	return class$;
}

$Class* ImageReaderFactory::class$ = nullptr;

		} // jimage
	} // internal
} // jdk