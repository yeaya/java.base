#include <SimpleFileTypeDetector.h>
#include <java/nio/file/Path.h>
#include <java/nio/file/spi/FileTypeDetector.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Path = ::java::nio::file::Path;
using $FileTypeDetector = ::java::nio::file::spi::FileTypeDetector;

void SimpleFileTypeDetector::init$() {
	$FileTypeDetector::init$();
}

$String* SimpleFileTypeDetector::probeContentType($Path* file) {
	$useLocalObjectStack();
	$nc($System::out)->println($$str({"probe "_s, file, "..."_s}));
	$var($String, name, $nc(file)->toString());
	return $nc(name)->endsWith(".grape"_s) ? "grape/unknown"_s : ($String*)nullptr;
}

SimpleFileTypeDetector::SimpleFileTypeDetector() {
}

$Class* SimpleFileTypeDetector::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(SimpleFileTypeDetector, init$, void)},
		{"probeContentType", "(Ljava/nio/file/Path;)Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(SimpleFileTypeDetector, probeContentType, $String*, $Path*), "java.io.IOException"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"SimpleFileTypeDetector",
		"java.nio.file.spi.FileTypeDetector",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(SimpleFileTypeDetector, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(SimpleFileTypeDetector);
	});
	return class$;
}

$Class* SimpleFileTypeDetector::class$ = nullptr;