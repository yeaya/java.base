#include <CheckPermission$1.h>
#include <CheckPermission.h>
#include <java/io/File.h>
#include <jcpp.h>

using $File = ::java::io::File;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

void CheckPermission$1::init$() {
}

bool CheckPermission$1::accept($File* dir, $String* name) {
	return false;
}

CheckPermission$1::CheckPermission$1() {
}

$Class* CheckPermission$1::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(CheckPermission$1, init$, void)},
		{"accept", "(Ljava/io/File;Ljava/lang/String;)Z", nullptr, $PUBLIC, $virtualMethod(CheckPermission$1, accept, bool, $File*, $String*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"CheckPermission",
		"main",
		"([Ljava/lang/String;)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"CheckPermission$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"CheckPermission$1",
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
		"CheckPermission"
	};
	$loadClass(CheckPermission$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(CheckPermission$1);
	});
	return class$;
}

$Class* CheckPermission$1::class$ = nullptr;