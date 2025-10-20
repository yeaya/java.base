#include <VerifyStackTrace$Handle.h>

#include <VerifyStackTrace.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Error.h>
#include <java/lang/Exception.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/IllegalAccessException.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/NoSuchMethodException.h>
#include <java/lang/NullPointerException.h>
#include <java/lang/ReflectiveOperationException.h>
#include <java/lang/Runnable.h>
#include <java/lang/RuntimeException.h>
#include <java/lang/String.h>
#include <java/lang/Throwable.h>
#include <java/lang/Void.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodHandles.h>
#include <java/lang/invoke/MethodType.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

#undef TYPE

using $VerifyStackTrace = ::VerifyStackTrace;
using $ClassInfo = ::java::lang::ClassInfo;
using $Error = ::java::lang::Error;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalAccessException = ::java::lang::IllegalAccessException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NoSuchMethodException = ::java::lang::NoSuchMethodException;
using $NullPointerException = ::java::lang::NullPointerException;
using $ReflectiveOperationException = ::java::lang::ReflectiveOperationException;
using $Runnable = ::java::lang::Runnable;
using $RuntimeException = ::java::lang::RuntimeException;
using $Void = ::java::lang::Void;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $MethodHandles = ::java::lang::invoke::MethodHandles;
using $MethodHandles$Lookup = ::java::lang::invoke::MethodHandles$Lookup;
using $MethodType = ::java::lang::invoke::MethodType;

$FieldInfo _VerifyStackTrace$Handle_FieldInfo_[] = {
	{"impl", "Ljava/lang/Runnable;", nullptr, 0, $field(VerifyStackTrace$Handle, impl)},
	{}
};

$MethodInfo _VerifyStackTrace$Handle_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/Runnable;)V", nullptr, $PUBLIC, $method(static_cast<void(VerifyStackTrace$Handle::*)($Runnable*)>(&VerifyStackTrace$Handle::init$))},
	{"execute", "(Ljava/lang/Runnable;)V", nullptr, $PUBLIC},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _VerifyStackTrace$Handle_InnerClassesInfo_[] = {
	{"VerifyStackTrace$Handle", "VerifyStackTrace", "Handle", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _VerifyStackTrace$Handle_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"VerifyStackTrace$Handle",
	"java.lang.Object",
	"java.lang.Runnable",
	_VerifyStackTrace$Handle_FieldInfo_,
	_VerifyStackTrace$Handle_MethodInfo_,
	nullptr,
	nullptr,
	_VerifyStackTrace$Handle_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"VerifyStackTrace"
};

$Object* allocate$VerifyStackTrace$Handle($Class* clazz) {
	return $of($alloc(VerifyStackTrace$Handle));
}

void VerifyStackTrace$Handle::init$($Runnable* run) {
	$set(this, impl, run);
}

void VerifyStackTrace$Handle::execute($Runnable* run) {
	$nc(run)->run();
}

void VerifyStackTrace$Handle::run() {
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	$var($MethodHandles$Lookup, lookup, $MethodHandles::lookup());
	$var($MethodHandle, handle, nullptr);
	try {
		$init($Void);
		$load($Runnable);
		$assign(handle, $nc(lookup)->findVirtual(VerifyStackTrace$Handle::class$, "execute"_s, $($MethodType::methodType($Void::TYPE, $Runnable::class$))));
	} catch ($NoSuchMethodException&) {
		$var($ReflectiveOperationException, x, $catch());
		$throwNew($RuntimeException, static_cast<$Throwable*>(x));
	} catch ($IllegalAccessException&) {
		$var($ReflectiveOperationException, x, $catch());
		$throwNew($RuntimeException, static_cast<$Throwable*>(x));
	}
	try {
		$nc(handle)->invoke($$new($ObjectArray, {$of(this), $of(this->impl)}));
	} catch ($Error&) {
		$var($Throwable, x, $catch());
		$throw(x);
	} catch ($RuntimeException&) {
		$var($Throwable, x, $catch());
		$throw(x);
	} catch ($Throwable&) {
		$var($Throwable, t, $catch());
		$throwNew($RuntimeException, t);
	}
}

VerifyStackTrace$Handle::VerifyStackTrace$Handle() {
}

$Class* VerifyStackTrace$Handle::load$($String* name, bool initialize) {
	$loadClass(VerifyStackTrace$Handle, name, initialize, &_VerifyStackTrace$Handle_ClassInfo_, allocate$VerifyStackTrace$Handle);
	return class$;
}

$Class* VerifyStackTrace$Handle::class$ = nullptr;