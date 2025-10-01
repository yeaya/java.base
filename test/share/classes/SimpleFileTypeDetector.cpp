#include <SimpleFileTypeDetector.h>

#include <java/io/PrintStream.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/System.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/nio/file/Path.h>
#include <java/nio/file/spi/FileTypeDetector.h>
#include <jcpp.h>

using $PrintStream = ::java::io::PrintStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Path = ::java::nio::file::Path;
using $FileTypeDetector = ::java::nio::file::spi::FileTypeDetector;

$MethodInfo _SimpleFileTypeDetector_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(SimpleFileTypeDetector::*)()>(&SimpleFileTypeDetector::init$))},
	{"probeContentType", "(Ljava/nio/file/Path;)Ljava/lang/String;", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{}
};

$ClassInfo _SimpleFileTypeDetector_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"SimpleFileTypeDetector",
	"java.nio.file.spi.FileTypeDetector",
	nullptr,
	nullptr,
	_SimpleFileTypeDetector_MethodInfo_
};

$Object* allocate$SimpleFileTypeDetector($Class* clazz) {
	return $of($alloc(SimpleFileTypeDetector));
}

void SimpleFileTypeDetector::init$() {
	$FileTypeDetector::init$();
}

$String* SimpleFileTypeDetector::probeContentType($Path* file) {
	$init($System);
	$nc($System::out)->println($$str({"probe "_s, file, "..."_s}));
	$var($String, name, $nc(file)->toString());
	return $nc(name)->endsWith(".grape"_s) ? "grape/unknown"_s : ($String*)nullptr;
}

SimpleFileTypeDetector::SimpleFileTypeDetector() {
}

$Class* SimpleFileTypeDetector::load$($String* name, bool initialize) {
	$loadClass(SimpleFileTypeDetector, name, initialize, &_SimpleFileTypeDetector_ClassInfo_, allocate$SimpleFileTypeDetector);
	return class$;
}

$Class* SimpleFileTypeDetector::class$ = nullptr;