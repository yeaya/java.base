#include <CheckPermission$3.h>
#include <CheckPermission.h>
#include <java/io/File.h>
#include <jcpp.h>

using $File = ::java::io::File;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

void CheckPermission$3::init$() {
}

bool CheckPermission$3::accept($File* file) {
	return false;
}

CheckPermission$3::CheckPermission$3() {
}

$Class* CheckPermission$3::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(CheckPermission$3, init$, void)},
		{"accept", "(Ljava/io/File;)Z", nullptr, $PUBLIC, $virtualMethod(CheckPermission$3, accept, bool, $File*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"CheckPermission",
		"main",
		"([Ljava/lang/String;)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"CheckPermission$3", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"CheckPermission$3",
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
		"CheckPermission"
	};
	$loadClass(CheckPermission$3, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(CheckPermission$3);
	});
	return class$;
}

$Class* CheckPermission$3::class$ = nullptr;