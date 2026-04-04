#include <WithSecurityManager4concat$2.h>
#include <WithSecurityManager4concat.h>
#include <java/lang/ClassLoader.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $ClassLoader = ::java::lang::ClassLoader;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

void WithSecurityManager4concat$2::init$() {
	$ClassLoader::init$();
}

WithSecurityManager4concat$2::WithSecurityManager4concat$2() {
}

$Class* WithSecurityManager4concat$2::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(WithSecurityManager4concat$2, init$, void)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"WithSecurityManager4concat",
		"main",
		"([Ljava/lang/String;)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"WithSecurityManager4concat$2", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"WithSecurityManager4concat$2",
		"java.lang.ClassLoader",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"WithSecurityManager4concat"
	};
	$loadClass(WithSecurityManager4concat$2, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(WithSecurityManager4concat$2);
	});
	return class$;
}

$Class* WithSecurityManager4concat$2::class$ = nullptr;