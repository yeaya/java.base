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
using $Function = ::java::util::function::Function;
using $ImageReader = ::jdk::internal::jimage::ImageReader;

namespace jdk {
	namespace internal {
		namespace jimage {

$MethodInfo _ImageReaderFactory$1_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(ImageReaderFactory$1::*)()>(&ImageReaderFactory$1::init$))},
	{"apply", "(Ljava/nio/file/Path;)Ljdk/internal/jimage/ImageReader;", nullptr, $PUBLIC},
	{"apply", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{}
};

$EnclosingMethodInfo _ImageReaderFactory$1_EnclosingMethodInfo_ = {
	"jdk.internal.jimage.ImageReaderFactory",
	nullptr,
	nullptr
};

$InnerClassInfo _ImageReaderFactory$1_InnerClassesInfo_[] = {
	{"jdk.internal.jimage.ImageReaderFactory$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _ImageReaderFactory$1_ClassInfo_ = {
	$ACC_SUPER,
	"jdk.internal.jimage.ImageReaderFactory$1",
	"java.lang.Object",
	"java.util.function.Function",
	nullptr,
	_ImageReaderFactory$1_MethodInfo_,
	"Ljava/lang/Object;Ljava/util/function/Function<Ljava/nio/file/Path;Ljdk/internal/jimage/ImageReader;>;",
	&_ImageReaderFactory$1_EnclosingMethodInfo_,
	_ImageReaderFactory$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"jdk.internal.jimage.ImageReaderFactory"
};

$Object* allocate$ImageReaderFactory$1($Class* clazz) {
	return $of($alloc(ImageReaderFactory$1));
}

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
	return $of(this->apply($cast($Path, path)));
}

ImageReaderFactory$1::ImageReaderFactory$1() {
}

$Class* ImageReaderFactory$1::load$($String* name, bool initialize) {
	$loadClass(ImageReaderFactory$1, name, initialize, &_ImageReaderFactory$1_ClassInfo_, allocate$ImageReaderFactory$1);
	return class$;
}

$Class* ImageReaderFactory$1::class$ = nullptr;

		} // jimage
	} // internal
} // jdk