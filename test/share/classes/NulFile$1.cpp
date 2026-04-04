#include <NulFile$1.h>
#include <NulFile.h>
#include <java/io/File.h>
#include <jcpp.h>

using $File = ::java::io::File;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

void NulFile$1::init$() {
}

bool NulFile$1::accept($File* dir, $String* name) {
	return false;
}

NulFile$1::NulFile$1() {
}

$Class* NulFile$1::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(NulFile$1, init$, void)},
		{"accept", "(Ljava/io/File;Ljava/lang/String;)Z", nullptr, $PUBLIC, $virtualMethod(NulFile$1, accept, bool, $File*, $String*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"NulFile",
		"test",
		"(Ljava/io/File;Z)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"NulFile$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"NulFile$1",
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
		"NulFile"
	};
	$loadClass(NulFile$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(NulFile$1);
	});
	return class$;
}

$Class* NulFile$1::class$ = nullptr;