#include <ExtendedFileOutputStream.h>
#include <java/io/File.h>
#include <java/io/FileOutputStream.h>
#include <jcpp.h>

using $File = ::java::io::File;
using $FileOutputStream = ::java::io::FileOutputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

void ExtendedFileOutputStream::init$($File* file) {
	$FileOutputStream::init$(file);
}

ExtendedFileOutputStream::ExtendedFileOutputStream() {
}

$Class* ExtendedFileOutputStream::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/io/File;)V", nullptr, 0, $method(ExtendedFileOutputStream, init$, void, $File*), "java.io.FileNotFoundException"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"ExtendedFileOutputStream",
		"java.io.FileOutputStream",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(ExtendedFileOutputStream, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(ExtendedFileOutputStream));
	});
	return class$;
}

$Class* ExtendedFileOutputStream::class$ = nullptr;