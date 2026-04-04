#include <VerifyStackTrace$1.h>
#include <VerifyStackTrace$Handle.h>
#include <VerifyStackTrace.h>
#include <java/lang/IllegalAccessException.h>
#include <java/lang/NoSuchMethodException.h>
#include <java/lang/ReflectiveOperationException.h>
#include <java/lang/Runnable.h>
#include <java/lang/reflect/InvocationTargetException.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $VerifyStackTrace = ::VerifyStackTrace;
using $VerifyStackTrace$Handle = ::VerifyStackTrace$Handle;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalAccessException = ::java::lang::IllegalAccessException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NoSuchMethodException = ::java::lang::NoSuchMethodException;
using $Runnable = ::java::lang::Runnable;
using $RuntimeException = ::java::lang::RuntimeException;
using $InvocationTargetException = ::java::lang::reflect::InvocationTargetException;

void VerifyStackTrace$1::init$($VerifyStackTrace$Handle* val$handle) {
	$set(this, val$handle, val$handle);
}

$Object* VerifyStackTrace$1::run() {
	$useLocalObjectStack();
	$beforeCallerSensitive();
	try {
		$load($VerifyStackTrace);
		return $$nc($VerifyStackTrace::class$->getMethod("invoke"_s, $$new($ClassArray, {$Runnable::class$})))->invoke(nullptr, $$new($ObjectArray, {this->val$handle}));
	} catch ($NoSuchMethodException& ex) {
		$nc($System::out)->flush();
		$throwNew($RuntimeException, ex);
	} catch ($IllegalAccessException& ex) {
		$nc($System::out)->flush();
		$throwNew($RuntimeException, ex);
	} catch ($InvocationTargetException& ex) {
		$nc($System::out)->flush();
		$throwNew($RuntimeException, ex);
	}
	$shouldNotReachHere();
}

VerifyStackTrace$1::VerifyStackTrace$1() {
}

$Class* VerifyStackTrace$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"val$handle", "LVerifyStackTrace$Handle;", nullptr, $FINAL | $SYNTHETIC, $field(VerifyStackTrace$1, val$handle)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(LVerifyStackTrace$Handle;)V", "()V", 0, $method(VerifyStackTrace$1, init$, void, $VerifyStackTrace$Handle*)},
		{"run", "()Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(VerifyStackTrace$1, run, $Object*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"VerifyStackTrace",
		"test",
		"(LVerifyStackTrace$TestCase;)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"VerifyStackTrace$1", nullptr, nullptr, 0},
		{"VerifyStackTrace$TestCase", "VerifyStackTrace", "TestCase", $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"VerifyStackTrace$1",
		"java.lang.Object",
		"java.security.PrivilegedAction",
		fieldInfos$$,
		methodInfos$$,
		"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljava/lang/Object;>;",
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"VerifyStackTrace"
	};
	$loadClass(VerifyStackTrace$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(VerifyStackTrace$1);
	});
	return class$;
}

$Class* VerifyStackTrace$1::class$ = nullptr;