#include <sun/nio/fs/UTIFileTypeDetector.h>

#include <java/nio/file/Path.h>
#include <jdk/internal/loader/BootLoader.h>
#include <sun/nio/fs/AbstractFileTypeDetector.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Path = ::java::nio::file::Path;
using $BootLoader = ::jdk::internal::loader::BootLoader;
using $AbstractFileTypeDetector = ::sun::nio::fs::AbstractFileTypeDetector;

namespace sun {
	namespace nio {
		namespace fs {

$MethodInfo _UTIFileTypeDetector_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(UTIFileTypeDetector, init$, void)},
	{"implProbeContentType", "(Ljava/nio/file/Path;)Ljava/lang/String;", nullptr, $PROTECTED, $virtualMethod(UTIFileTypeDetector, implProbeContentType, $String*, $Path*), "java.io.IOException"},
	{"probe0", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PRIVATE | $NATIVE, $method(UTIFileTypeDetector, probe0, $String*, $String*), "java.io.IOException"},
	{}
};

#define _METHOD_INDEX_probe0 2

$ClassInfo _UTIFileTypeDetector_ClassInfo_ = {
	$ACC_SUPER,
	"sun.nio.fs.UTIFileTypeDetector",
	"sun.nio.fs.AbstractFileTypeDetector",
	nullptr,
	nullptr,
	_UTIFileTypeDetector_MethodInfo_
};

$Object* allocate$UTIFileTypeDetector($Class* clazz) {
	return $of($alloc(UTIFileTypeDetector));
}

void UTIFileTypeDetector::init$() {
	$AbstractFileTypeDetector::init$();
}

$String* UTIFileTypeDetector::probe0($String* fileExtension) {
	$var($String, $ret, nullptr);
	$prepareNative(UTIFileTypeDetector, probe0, $String*, $String* fileExtension);
	$assign($ret, $invokeNativeObject(fileExtension));
	$finishNative();
	return $ret;
}

$String* UTIFileTypeDetector::implProbeContentType($Path* path) {
	$useLocalCurrentObjectStackCache();
	$var($Path, fn, $nc(path)->getFileName());
	if (fn == nullptr) {
		return nullptr;
	}
	$var($String, ext, getExtension($($nc(fn)->toString())));
	if ($nc(ext)->isEmpty()) {
		return nullptr;
	}
	return probe0(ext);
}

void clinit$UTIFileTypeDetector($Class* class$) {
	{
		$BootLoader::loadLibrary("nio"_s);
	}
}

UTIFileTypeDetector::UTIFileTypeDetector() {
}

$Class* UTIFileTypeDetector::load$($String* name, bool initialize) {
	$loadClass(UTIFileTypeDetector, name, initialize, &_UTIFileTypeDetector_ClassInfo_, clinit$UTIFileTypeDetector, allocate$UTIFileTypeDetector);
	return class$;
}

$Class* UTIFileTypeDetector::class$ = nullptr;

		} // fs
	} // nio
} // sun