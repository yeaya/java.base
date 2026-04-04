#include <FileMethods$1.h>
#include <FileMethods.h>
#include <java/io/File.h>
#include <jcpp.h>

using $File = ::java::io::File;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

void FileMethods$1::init$() {
}

bool FileMethods$1::accept($File* dir, $String* name) {
	return $nc(name)->endsWith(".class"_s);
}

FileMethods$1::FileMethods$1() {
}

$Class* FileMethods$1::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(FileMethods$1, init$, void)},
		{"accept", "(Ljava/io/File;Ljava/lang/String;)Z", nullptr, $PUBLIC, $virtualMethod(FileMethods$1, accept, bool, $File*, $String*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"FileMethods",
		"main",
		"([Ljava/lang/String;)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"FileMethods$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"FileMethods$1",
		"java.lang.Object",
		"java.io.FilenameFilter",
		nullptr,
		methodInfos$$,
		nullptr,
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"FileMethods"
	};
	$loadClass(FileMethods$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(FileMethods$1);
	});
	return class$;
}

$Class* FileMethods$1::class$ = nullptr;