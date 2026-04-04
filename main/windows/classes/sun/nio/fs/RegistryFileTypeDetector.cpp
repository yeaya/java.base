#include <sun/nio/fs/RegistryFileTypeDetector.h>
#include <java/nio/file/Path.h>
#include <jdk/internal/loader/BootLoader.h>
#include <sun/nio/fs/AbstractFileTypeDetector.h>
#include <sun/nio/fs/NativeBuffer.h>
#include <sun/nio/fs/WindowsException.h>
#include <sun/nio/fs/WindowsNativeDispatcher.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Path = ::java::nio::file::Path;
using $BootLoader = ::jdk::internal::loader::BootLoader;
using $AbstractFileTypeDetector = ::sun::nio::fs::AbstractFileTypeDetector;
using $NativeBuffer = ::sun::nio::fs::NativeBuffer;
using $WindowsException = ::sun::nio::fs::WindowsException;
using $WindowsNativeDispatcher = ::sun::nio::fs::WindowsNativeDispatcher;

namespace sun {
	namespace nio {
		namespace fs {

void RegistryFileTypeDetector::init$() {
	$AbstractFileTypeDetector::init$();
}

$String* RegistryFileTypeDetector::implProbeContentType($Path* file) {
	$useLocalObjectStack();
	if (!($instanceOf($Path, file))) {
		return nullptr;
	}
	$var($Path, name, $nc(file)->getFileName());
	if (name == nullptr) {
		return nullptr;
	}
	$var($String, filename, $nc(name)->toString());
	int32_t dot = $nc(filename)->lastIndexOf(u'.');
	if ((dot < 0) || (dot == (filename->length() - 1))) {
		return nullptr;
	}
	$var($String, key, filename->substring(dot));
	$var($NativeBuffer, keyBuffer, nullptr);
	$var($NativeBuffer, nameBuffer, nullptr);
	$var($Throwable, var$0, nullptr);
	$var($String, var$2, nullptr);
	bool return$1 = false;
	try {
		try {
			$assign(keyBuffer, $WindowsNativeDispatcher::asNativeBuffer(key));
			$assign(nameBuffer, $WindowsNativeDispatcher::asNativeBuffer("Content Type"_s));
			int64_t var$3 = $nc(keyBuffer)->address();
			$assign(var$2, queryStringValue(var$3, $nc(nameBuffer)->address()));
			return$1 = true;
			goto $finally;
		} catch ($WindowsException& we) {
			we->rethrowAsIOException($(file->toString()));
			$assign(var$2, nullptr);
			return$1 = true;
			goto $finally;
		}
	} catch ($Throwable& var$4) {
		$assign(var$0, var$4);
	} $finally: {
		$nc(nameBuffer)->release();
		$nc(keyBuffer)->release();
	}
	if (var$0 != nullptr) {
		$throw(var$0);
	}
	if (return$1) {
		return var$2;
	}
	$shouldNotReachHere();
}

$String* RegistryFileTypeDetector::queryStringValue(int64_t subKey, int64_t name) {
	$init(RegistryFileTypeDetector);
	$prepareNativeStatic(queryStringValue, $String*, int64_t subKey, int64_t name);
	$var($String, $ret, $invokeNativeStaticObject(subKey, name));
	$finishNativeStatic();
	return $ret;
}

void RegistryFileTypeDetector::clinit$($Class* clazz) {
	{
		$BootLoader::loadLibrary("net"_s);
		$BootLoader::loadLibrary("nio"_s);
	}
}

RegistryFileTypeDetector::RegistryFileTypeDetector() {
}

$Class* RegistryFileTypeDetector::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(RegistryFileTypeDetector, init$, void)},
		{"implProbeContentType", "(Ljava/nio/file/Path;)Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(RegistryFileTypeDetector, implProbeContentType, $String*, $Path*), "java.io.IOException"},
		{"queryStringValue", "(JJ)Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $NATIVE, $staticMethod(RegistryFileTypeDetector, queryStringValue, $String*, int64_t, int64_t)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"sun.nio.fs.RegistryFileTypeDetector",
		"sun.nio.fs.AbstractFileTypeDetector",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(RegistryFileTypeDetector, name, initialize, &classInfo$$, RegistryFileTypeDetector::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(RegistryFileTypeDetector);
	});
	return class$;
}

$Class* RegistryFileTypeDetector::class$ = nullptr;

		} // fs
	} // nio
} // sun