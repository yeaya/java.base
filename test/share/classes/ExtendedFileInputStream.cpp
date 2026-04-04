#include <ExtendedFileInputStream.h>
#include <java/io/File.h>
#include <java/io/FileInputStream.h>
#include <jcpp.h>

using $File = ::java::io::File;
using $FileInputStream = ::java::io::FileInputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

void ExtendedFileInputStream::init$($File* file) {
	$FileInputStream::init$(file);
}

ExtendedFileInputStream::ExtendedFileInputStream() {
}

$Class* ExtendedFileInputStream::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/io/File;)V", nullptr, 0, $method(ExtendedFileInputStream, init$, void, $File*), "java.io.FileNotFoundException"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"ExtendedFileInputStream",
		"java.io.FileInputStream",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(ExtendedFileInputStream, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ExtendedFileInputStream);
	});
	return class$;
}

$Class* ExtendedFileInputStream::class$ = nullptr;