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

void UTIFileTypeDetector::init$() {
	$AbstractFileTypeDetector::init$();
}

$String* UTIFileTypeDetector::probe0($String* fileExtension) {
	$prepareNative(probe0, $String*, $String* fileExtension);
	$var($String, $ret, $invokeNativeObject(fileExtension));
	$finishNative();
	return $ret;
}

$String* UTIFileTypeDetector::implProbeContentType($Path* path) {
	$useLocalObjectStack();
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

void UTIFileTypeDetector::clinit$($Class* clazz) {
	{
		$BootLoader::loadLibrary("nio"_s);
	}
}

UTIFileTypeDetector::UTIFileTypeDetector() {
}

$Class* UTIFileTypeDetector::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(UTIFileTypeDetector, init$, void)},
		{"implProbeContentType", "(Ljava/nio/file/Path;)Ljava/lang/String;", nullptr, $PROTECTED, $virtualMethod(UTIFileTypeDetector, implProbeContentType, $String*, $Path*), "java.io.IOException"},
		{"probe0", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PRIVATE | $NATIVE, $method(UTIFileTypeDetector, probe0, $String*, $String*), "java.io.IOException"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.nio.fs.UTIFileTypeDetector",
		"sun.nio.fs.AbstractFileTypeDetector",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(UTIFileTypeDetector, name, initialize, &classInfo$$, UTIFileTypeDetector::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(UTIFileTypeDetector);
	});
	return class$;
}

$Class* UTIFileTypeDetector::class$ = nullptr;

		} // fs
	} // nio
} // sun