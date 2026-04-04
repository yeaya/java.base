#include <java/io/RandomAccessFile$2.h>
#include <java/io/File.h>
#include <java/io/RandomAccessFile.h>
#include <jcpp.h>

using $File = ::java::io::File;
using $RandomAccessFile = ::java::io::RandomAccessFile;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace io {

void RandomAccessFile$2::init$() {
}

$RandomAccessFile* RandomAccessFile$2::openAndDelete($File* file, $String* mode) {
	return $new($RandomAccessFile, file, mode, true);
}

RandomAccessFile$2::RandomAccessFile$2() {
}

$Class* RandomAccessFile$2::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(RandomAccessFile$2, init$, void)},
		{"openAndDelete", "(Ljava/io/File;Ljava/lang/String;)Ljava/io/RandomAccessFile;", nullptr, $PUBLIC, $virtualMethod(RandomAccessFile$2, openAndDelete, $RandomAccessFile*, $File*, $String*), "java.io.IOException"},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"java.io.RandomAccessFile",
		nullptr,
		nullptr
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.io.RandomAccessFile$2", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"java.io.RandomAccessFile$2",
		"java.lang.Object",
		"jdk.internal.access.JavaIORandomAccessFileAccess",
		nullptr,
		methodInfos$$,
		nullptr,
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.io.RandomAccessFile"
	};
	$loadClass(RandomAccessFile$2, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(RandomAccessFile$2);
	});
	return class$;
}

$Class* RandomAccessFile$2::class$ = nullptr;

	} // io
} // java