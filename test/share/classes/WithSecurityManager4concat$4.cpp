#include <WithSecurityManager4concat$4.h>
#include <WithSecurityManager4concat.h>
#include <java/lang/ClassLoader.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $ClassLoader = ::java::lang::ClassLoader;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

void WithSecurityManager4concat$4::init$() {
	$ClassLoader::init$();
}

WithSecurityManager4concat$4::WithSecurityManager4concat$4() {
}

$Class* WithSecurityManager4concat$4::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(WithSecurityManager4concat$4, init$, void)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"WithSecurityManager4concat",
		"main",
		"([Ljava/lang/String;)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"WithSecurityManager4concat$4", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"WithSecurityManager4concat$4",
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
	$loadClass(WithSecurityManager4concat$4, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(WithSecurityManager4concat$4);
	});
	return class$;
}

$Class* WithSecurityManager4concat$4::class$ = nullptr;