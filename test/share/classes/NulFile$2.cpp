#include <NulFile$2.h>
#include <NulFile.h>
#include <java/io/File.h>
#include <jcpp.h>

using $File = ::java::io::File;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

void NulFile$2::init$() {
}

bool NulFile$2::accept($File* file) {
	return false;
}

NulFile$2::NulFile$2() {
}

$Class* NulFile$2::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(NulFile$2, init$, void)},
		{"accept", "(Ljava/io/File;)Z", nullptr, $PUBLIC, $virtualMethod(NulFile$2, accept, bool, $File*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"NulFile",
		"test",
		"(Ljava/io/File;Z)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"NulFile$2", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"NulFile$2",
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
		"NulFile"
	};
	$loadClass(NulFile$2, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(NulFile$2);
	});
	return class$;
}

$Class* NulFile$2::class$ = nullptr;