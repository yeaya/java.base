#include <jdk/internal/jimage/ImageReaderFactory$1.h>
#include <java/io/IOException.h>
#include <java/io/UncheckedIOException.h>
#include <java/nio/file/Path.h>
#include <jdk/internal/jimage/ImageReader.h>
#include <jcpp.h>

using $IOException = ::java::io::IOException;
using $UncheckedIOException = ::java::io::UncheckedIOException;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Path = ::java::nio::file::Path;
using $ImageReader = ::jdk::internal::jimage::ImageReader;

namespace jdk {
	namespace internal {
		namespace jimage {

void ImageReaderFactory$1::init$() {
}

$ImageReader* ImageReaderFactory$1::apply($Path* path) {
	try {
		return $ImageReader::open(path);
	} catch ($IOException& io) {
		$throwNew($UncheckedIOException, io);
	}
	$shouldNotReachHere();
}

$Object* ImageReaderFactory$1::apply(Object$* path) {
	return this->apply($cast($Path, path));
}

ImageReaderFactory$1::ImageReaderFactory$1() {
}

$Class* ImageReaderFactory$1::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(ImageReaderFactory$1, init$, void)},
		{"apply", "(Ljava/nio/file/Path;)Ljdk/internal/jimage/ImageReader;", nullptr, $PUBLIC, $virtualMethod(ImageReaderFactory$1, apply, $ImageReader*, $Path*)},
		{"apply", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(ImageReaderFactory$1, apply, $Object*, Object$*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"jdk.internal.jimage.ImageReaderFactory",
		nullptr,
		nullptr
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"jdk.internal.jimage.ImageReaderFactory$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"jdk.internal.jimage.ImageReaderFactory$1",
		"java.lang.Object",
		"java.util.function.Function",
		nullptr,
		methodInfos$$,
		"Ljava/lang/Object;Ljava/util/function/Function<Ljava/nio/file/Path;Ljdk/internal/jimage/ImageReader;>;",
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"jdk.internal.jimage.ImageReaderFactory"
	};
	$loadClass(ImageReaderFactory$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ImageReaderFactory$1);
	});
	return class$;
}

$Class* ImageReaderFactory$1::class$ = nullptr;

		} // jimage
	} // internal
} // jdk