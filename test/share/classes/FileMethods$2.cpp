#include <FileMethods$2.h>
#include <FileMethods.h>
#include <java/io/File.h>
#include <jcpp.h>

using $File = ::java::io::File;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

void FileMethods$2::init$() {
}

bool FileMethods$2::accept($File* f) {
	return $$nc($nc(f)->getPath())->endsWith(".class"_s);
}

FileMethods$2::FileMethods$2() {
}

$Class* FileMethods$2::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(FileMethods$2, init$, void)},
		{"accept", "(Ljava/io/File;)Z", nullptr, $PUBLIC, $virtualMethod(FileMethods$2, accept, bool, $File*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"FileMethods",
		"main",
		"([Ljava/lang/String;)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"FileMethods$2", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"FileMethods$2",
		"java.lang.Object",
		"java.io.FileFilter",
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
	$loadClass(FileMethods$2, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(FileMethods$2);
	});
	return class$;
}

$Class* FileMethods$2::class$ = nullptr;