#include <CheckPermission$2.h>
#include <CheckPermission.h>
#include <java/io/File.h>
#include <jcpp.h>

using $File = ::java::io::File;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

void CheckPermission$2::init$() {
}

bool CheckPermission$2::accept($File* dir, $String* name) {
	return false;
}

CheckPermission$2::CheckPermission$2() {
}

$Class* CheckPermission$2::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(CheckPermission$2, init$, void)},
		{"accept", "(Ljava/io/File;Ljava/lang/String;)Z", nullptr, $PUBLIC, $virtualMethod(CheckPermission$2, accept, bool, $File*, $String*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"CheckPermission",
		"main",
		"([Ljava/lang/String;)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"CheckPermission$2", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"CheckPermission$2",
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
	$loadClass(CheckPermission$2, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(CheckPermission$2);
	});
	return class$;
}

$Class* CheckPermission$2::class$ = nullptr;