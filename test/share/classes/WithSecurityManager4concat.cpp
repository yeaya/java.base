#include <WithSecurityManager4concat.h>

#include <WithSecurityManager4concat$1.h>
#include <WithSecurityManager4concat$2.h>
#include <WithSecurityManager4concat$3.h>
#include <WithSecurityManager4concat$4.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/ClassLoader.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/SecurityManager.h>
#include <java/lang/String.h>
#include <java/lang/System.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
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

$MethodInfo _WithSecurityManager4concat_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(WithSecurityManager4concat::*)()>(&WithSecurityManager4concat::init$))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&WithSecurityManager4concat::main)), "java.lang.Throwable"},
	{}
};

$InnerClassInfo _WithSecurityManager4concat_InnerClassesInfo_[] = {
	{"WithSecurityManager4concat$4", nullptr, nullptr, 0},
	{"WithSecurityManager4concat$3", nullptr, nullptr, 0},
	{"WithSecurityManager4concat$2", nullptr, nullptr, 0},
	{"WithSecurityManager4concat$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _WithSecurityManager4concat_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"WithSecurityManager4concat",
	"java.lang.Object",
	nullptr,
	nullptr,
	_WithSecurityManager4concat_MethodInfo_,
	nullptr,
	nullptr,
	_WithSecurityManager4concat_InnerClassesInfo_,
	nullptr,
	nullptr,
	"WithSecurityManager4concat$4,WithSecurityManager4concat$3,WithSecurityManager4concat$2,WithSecurityManager4concat$1"
};

$Object* allocate$WithSecurityManager4concat($Class* clazz) {
	return $of($alloc(WithSecurityManager4concat));
}

void WithSecurityManager4concat::init$() {
}

void WithSecurityManager4concat::main($StringArray* args) {
	$load(WithSecurityManager4concat);
	$useLocalCurrentObjectStackCache();
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
	$loadClass(WithSecurityManager4concat, name, initialize, &_WithSecurityManager4concat_ClassInfo_, allocate$WithSecurityManager4concat);
	return class$;
}

$Class* WithSecurityManager4concat::class$ = nullptr;