#include <sun/reflect/misc/Trampoline.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/ClassLoader.h>
#include <java/lang/Error.h>
#include <java/lang/Exception.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/RuntimeException.h>
#include <java/lang/String.h>
#include <java/lang/Throwable.h>
#include <java/lang/UnsupportedOperationException.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/InvocationTargetException.h>
#include <java/lang/reflect/Method.h>
#include <java/security/AccessController.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $ClassLoader = ::java::lang::ClassLoader;
using $Error = ::java::lang::Error;
using $Exception = ::java::lang::Exception;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $UnsupportedOperationException = ::java::lang::UnsupportedOperationException;
using $InvocationTargetException = ::java::lang::reflect::InvocationTargetException;
using $Method = ::java::lang::reflect::Method;
using $AccessController = ::java::security::AccessController;

namespace sun {
	namespace reflect {
		namespace misc {

$MethodInfo _Trampoline_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(Trampoline::*)()>(&Trampoline::init$))},
	{"ensureInvocableMethod", "(Ljava/lang/reflect/Method;)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)($Method*)>(&Trampoline::ensureInvocableMethod)), "java.lang.reflect.InvocationTargetException"},
	{"invoke", "(Ljava/lang/reflect/Method;Ljava/lang/Object;[Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$Object*(*)($Method*,Object$*,$ObjectArray*)>(&Trampoline::invoke)), "java.lang.reflect.InvocationTargetException,java.lang.IllegalAccessException"},
	{}
};

$ClassInfo _Trampoline_ClassInfo_ = {
	$ACC_SUPER,
	"sun.reflect.misc.Trampoline",
	"java.lang.Object",
	nullptr,
	nullptr,
	_Trampoline_MethodInfo_
};

$Object* allocate$Trampoline($Class* clazz) {
	return $of($alloc(Trampoline));
}

void Trampoline::init$() {
}

void Trampoline::ensureInvocableMethod($Method* m) {
	$init(Trampoline);
	$useLocalCurrentObjectStackCache();
	$Class* clazz = $nc(m)->getDeclaringClass();
	$load($AccessController);
	bool var$1 = $nc($of(clazz))->equals($AccessController::class$);
	bool var$0 = var$1 || $nc($of(clazz))->equals($Method::class$);
	if (var$0 || $nc($($nc(clazz)->getName()))->startsWith("java.lang.invoke."_s)) {
		$throwNew($InvocationTargetException, $$new($UnsupportedOperationException, "invocation not supported"_s));
	}
}

$Object* Trampoline::invoke($Method* m, Object$* obj, $ObjectArray* params) {
	$init(Trampoline);
	$beforeCallerSensitive();
	ensureInvocableMethod(m);
	return $of($nc(m)->invoke(obj, params));
}

void clinit$Trampoline($Class* class$) {
}

Trampoline::Trampoline() {
}

$Class* Trampoline::load$($String* name, bool initialize) {
	$loadClass(Trampoline, name, initialize, &_Trampoline_ClassInfo_, clinit$Trampoline, allocate$Trampoline);
	return class$;
}

$Class* Trampoline::class$ = nullptr;

		} // misc
	} // reflect
} // sun