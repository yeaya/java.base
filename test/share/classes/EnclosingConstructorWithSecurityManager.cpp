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

$MethodInfo _EnclosingConstructorWithSecurityManager_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(EnclosingConstructorWithSecurityManager, init$, void)},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(EnclosingConstructorWithSecurityManager, main, void, $StringArray*)},
	{}
};

$InnerClassInfo _EnclosingConstructorWithSecurityManager_InnerClassesInfo_[] = {
	{"EnclosingConstructorWithSecurityManager$Inner", "EnclosingConstructorWithSecurityManager", "Inner", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _EnclosingConstructorWithSecurityManager_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"EnclosingConstructorWithSecurityManager",
	"java.lang.Object",
	nullptr,
	nullptr,
	_EnclosingConstructorWithSecurityManager_MethodInfo_,
	nullptr,
	nullptr,
	_EnclosingConstructorWithSecurityManager_InnerClassesInfo_,
	nullptr,
	nullptr,
	"EnclosingConstructorWithSecurityManager$Inner,EnclosingConstructorWithSecurityManager$Inner$1"
};

$Object* allocate$EnclosingConstructorWithSecurityManager($Class* clazz) {
	return $of($alloc(EnclosingConstructorWithSecurityManager));
}

void EnclosingConstructorWithSecurityManager::init$() {
}

void EnclosingConstructorWithSecurityManager::main($StringArray* args) {
	$load(EnclosingConstructorWithSecurityManager);
	$beforeCallerSensitive();
	if ($nc(args)->length == 1) {
		$System::setSecurityManager($$new($SecurityManager));
	}
	$new($EnclosingConstructorWithSecurityManager$Inner);
	$init($EnclosingConstructorWithSecurityManager$Inner);
	$nc($EnclosingConstructorWithSecurityManager$Inner::theInner)->getEnclosingConstructor();
}

EnclosingConstructorWithSecurityManager::EnclosingConstructorWithSecurityManager() {
}

$Class* EnclosingConstructorWithSecurityManager::load$($String* name, bool initialize) {
	$loadClass(EnclosingConstructorWithSecurityManager, name, initialize, &_EnclosingConstructorWithSecurityManager_ClassInfo_, allocate$EnclosingConstructorWithSecurityManager);
	return class$;
}

$Class* EnclosingConstructorWithSecurityManager::class$ = nullptr;