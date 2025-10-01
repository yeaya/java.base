#include <VerifyStackTrace$1.h>

#include <VerifyStackTrace$Handle.h>
#include <VerifyStackTrace.h>
#include <java/io/PrintStream.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/Exception.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/IllegalAccessException.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/NoSuchMethodException.h>
#include <java/lang/ReflectiveOperationException.h>
#include <java/lang/Runnable.h>
#include <java/lang/RuntimeException.h>
#include <java/lang/String.h>
#include <java/lang/System.h>
#include <java/lang/Throwable.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/InvocationTargetException.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $VerifyStackTrace = ::VerifyStackTrace;
using $VerifyStackTrace$Handle = ::VerifyStackTrace$Handle;
using $PrintStream = ::java::io::PrintStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalAccessException = ::java::lang::IllegalAccessException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NoSuchMethodException = ::java::lang::NoSuchMethodException;
using $ReflectiveOperationException = ::java::lang::ReflectiveOperationException;
using $Runnable = ::java::lang::Runnable;
using $RuntimeException = ::java::lang::RuntimeException;
using $InvocationTargetException = ::java::lang::reflect::InvocationTargetException;
using $Method = ::java::lang::reflect::Method;
using $PrivilegedAction = ::java::security::PrivilegedAction;

$FieldInfo _VerifyStackTrace$1_FieldInfo_[] = {
	{"val$handle", "LVerifyStackTrace$Handle;", nullptr, $FINAL | $SYNTHETIC, $field(VerifyStackTrace$1, val$handle)},
	{}
};

$MethodInfo _VerifyStackTrace$1_MethodInfo_[] = {
	{"<init>", "(LVerifyStackTrace$Handle;)V", "()V", 0, $method(static_cast<void(VerifyStackTrace$1::*)($VerifyStackTrace$Handle*)>(&VerifyStackTrace$1::init$))},
	{"run", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _VerifyStackTrace$1_EnclosingMethodInfo_ = {
	"VerifyStackTrace",
	"test",
	"(LVerifyStackTrace$TestCase;)V"
};

$InnerClassInfo _VerifyStackTrace$1_InnerClassesInfo_[] = {
	{"VerifyStackTrace$1", nullptr, nullptr, 0},
	{"VerifyStackTrace$TestCase", "VerifyStackTrace", "TestCase", $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _VerifyStackTrace$1_ClassInfo_ = {
	$ACC_SUPER,
	"VerifyStackTrace$1",
	"java.lang.Object",
	"java.security.PrivilegedAction",
	_VerifyStackTrace$1_FieldInfo_,
	_VerifyStackTrace$1_MethodInfo_,
	"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljava/lang/Object;>;",
	&_VerifyStackTrace$1_EnclosingMethodInfo_,
	_VerifyStackTrace$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"VerifyStackTrace"
};

$Object* allocate$VerifyStackTrace$1($Class* clazz) {
	return $of($alloc(VerifyStackTrace$1));
}

void VerifyStackTrace$1::init$($VerifyStackTrace$Handle* val$handle) {
	$set(this, val$handle, val$handle);
}

$Object* VerifyStackTrace$1::run() {
	$beforeCallerSensitive();
	try {
		$load($VerifyStackTrace);
		$load($Runnable);
		return $of($nc($($VerifyStackTrace::class$->getMethod("invoke"_s, $$new($ClassArray, {$Runnable::class$}))))->invoke(nullptr, $$new($ObjectArray, {$of(this->val$handle)})));
	} catch ($NoSuchMethodException&) {
		$var($ReflectiveOperationException, ex, $catch());
		$init($System);
		$nc($System::out)->flush();
		$throwNew($RuntimeException, static_cast<$Throwable*>(ex));
	} catch ($IllegalAccessException&) {
		$var($ReflectiveOperationException, ex, $catch());
		$init($System);
		$nc($System::out)->flush();
		$throwNew($RuntimeException, static_cast<$Throwable*>(ex));
	} catch ($InvocationTargetException&) {
		$var($ReflectiveOperationException, ex, $catch());
		$init($System);
		$nc($System::out)->flush();
		$throwNew($RuntimeException, static_cast<$Throwable*>(ex));
	}
	$shouldNotReachHere();
}

VerifyStackTrace$1::VerifyStackTrace$1() {
}

$Class* VerifyStackTrace$1::load$($String* name, bool initialize) {
	$loadClass(VerifyStackTrace$1, name, initialize, &_VerifyStackTrace$1_ClassInfo_, allocate$VerifyStackTrace$1);
	return class$;
}

$Class* VerifyStackTrace$1::class$ = nullptr;