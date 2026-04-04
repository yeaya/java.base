#include <WithSecurityManager4concat.h>
#include <WithSecurityManager4concat$1.h>
#include <WithSecurityManager4concat$2.h>
#include <WithSecurityManager4concat$3.h>
#include <WithSecurityManager4concat$4.h>
#include <java/lang/ClassLoader.h>
#include <java/lang/SecurityManager.h>
#include <jcpp.h>

using $WithSecurityManager4concat$1 = ::WithSecurityManager4concat$1;
using $WithSecurityManager4concat$2 = ::WithSecurityManager4concat$2;
using $WithSecurityManager4concat$3 = ::WithSecurityManager4concat$3;
using $WithSecurityManager4concat$4 = ::WithSecurityManager4concat$4;
using $ClassInfo = ::java::lang::ClassInfo;
using $ClassLoader = ::java::lang::ClassLoader;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SecurityManager = ::java::lang::SecurityManager;

void WithSecurityManager4concat::init$() {
}

void WithSecurityManager4concat::main($StringArray* args) {
	$useLocalObjectStack();
	$load(WithSecurityManager4concat);
	$beforeCallerSensitive();
	{
		$var($SecurityManager, sm, $new($WithSecurityManager4concat$1));
		$System::setSecurityManager(sm);
		$var($ClassLoader, cl, $new($WithSecurityManager4concat$2));
	}
	{
		$var($SecurityManager, sm, $new($WithSecurityManager4concat$3));
		$System::setSecurityManager(sm);
		$var($ClassLoader, cl, $new($WithSecurityManager4concat$4));
	}
}

WithSecurityManager4concat::WithSecurityManager4concat() {
}

$Class* WithSecurityManager4concat::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(WithSecurityManager4concat, init$, void)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(WithSecurityManager4concat, main, void, $StringArray*), "java.lang.Throwable"},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"WithSecurityManager4concat$4", nullptr, nullptr, 0},
		{"WithSecurityManager4concat$3", nullptr, nullptr, 0},
		{"WithSecurityManager4concat$2", nullptr, nullptr, 0},
		{"WithSecurityManager4concat$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"WithSecurityManager4concat",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"WithSecurityManager4concat$4,WithSecurityManager4concat$3,WithSecurityManager4concat$2,WithSecurityManager4concat$1"
	};
	$loadClass(WithSecurityManager4concat, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(WithSecurityManager4concat);
	});
	return class$;
}

$Class* WithSecurityManager4concat::class$ = nullptr;