#include <EnclosingConstructorWithSecurityManager.h>
#include <EnclosingConstructorWithSecurityManager$Inner.h>
#include <java/lang/SecurityManager.h>
#include <java/lang/reflect/Constructor.h>
#include <jcpp.h>

using $EnclosingConstructorWithSecurityManager$Inner = ::EnclosingConstructorWithSecurityManager$Inner;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SecurityManager = ::java::lang::SecurityManager;

void EnclosingConstructorWithSecurityManager::init$() {
}

void EnclosingConstructorWithSecurityManager::main($StringArray* args) {
	$load(EnclosingConstructorWithSecurityManager);
	$beforeCallerSensitive();
	if ($nc(args)->length == 1) {
		$System::setSecurityManager($$new($SecurityManager));
	}
	$new($EnclosingConstructorWithSecurityManager$Inner);
	$nc($EnclosingConstructorWithSecurityManager$Inner::theInner)->getEnclosingConstructor();
}

EnclosingConstructorWithSecurityManager::EnclosingConstructorWithSecurityManager() {
}

$Class* EnclosingConstructorWithSecurityManager::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(EnclosingConstructorWithSecurityManager, init$, void)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(EnclosingConstructorWithSecurityManager, main, void, $StringArray*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"EnclosingConstructorWithSecurityManager$Inner", "EnclosingConstructorWithSecurityManager", "Inner", $PUBLIC | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"EnclosingConstructorWithSecurityManager",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"EnclosingConstructorWithSecurityManager$Inner,EnclosingConstructorWithSecurityManager$Inner$1"
	};
	$loadClass(EnclosingConstructorWithSecurityManager, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(EnclosingConstructorWithSecurityManager);
	});
	return class$;
}

$Class* EnclosingConstructorWithSecurityManager::class$ = nullptr;