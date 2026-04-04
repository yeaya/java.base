#include <VerifyStackTrace$Handle.h>
#include <VerifyStackTrace.h>
#include <java/lang/Error.h>
#include <java/lang/IllegalAccessException.h>
#include <java/lang/NoSuchMethodException.h>
#include <java/lang/ReflectiveOperationException.h>
#include <java/lang/Runnable.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodHandles.h>
#include <java/lang/invoke/MethodType.h>
#include <jcpp.h>

#undef TYPE

using $ClassInfo = ::java::lang::ClassInfo;
using $Error = ::java::lang::Error;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalAccessException = ::java::lang::IllegalAccessException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NoSuchMethodException = ::java::lang::NoSuchMethodException;
using $Runnable = ::java::lang::Runnable;
using $RuntimeException = ::java::lang::RuntimeException;
using $Void = ::java::lang::Void;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $MethodHandles = ::java::lang::invoke::MethodHandles;
using $MethodHandles$Lookup = ::java::lang::invoke::MethodHandles$Lookup;
using $MethodType = ::java::lang::invoke::MethodType;

void VerifyStackTrace$Handle::init$($Runnable* run) {
	$set(this, impl, run);
}

void VerifyStackTrace$Handle::execute($Runnable* run) {
	$nc(run)->run();
}

void VerifyStackTrace$Handle::run() {
	$useLocalObjectStack();
	$beforeCallerSensitive();
	$var($MethodHandles$Lookup, lookup, $MethodHandles::lookup());
	$var($MethodHandle, handle, nullptr);
	try {
		$assign(handle, $nc(lookup)->findVirtual(VerifyStackTrace$Handle::class$, "execute"_s, $($MethodType::methodType($Void::TYPE, $Runnable::class$))));
	} catch ($NoSuchMethodException& x) {
		$throwNew($RuntimeException, x);
	} catch ($IllegalAccessException& x) {
		$throwNew($RuntimeException, x);
	}
	try {
		$nc(handle)->invoke($$new($ObjectArray, {this, this->impl}));
	} catch ($Error& x) {
		$throw(x);
	} catch ($RuntimeException& x) {
		$throw(x);
	} catch ($Throwable& t) {
		$throwNew($RuntimeException, t);
	}
}

VerifyStackTrace$Handle::VerifyStackTrace$Handle() {
}

$Class* VerifyStackTrace$Handle::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"impl", "Ljava/lang/Runnable;", nullptr, 0, $field(VerifyStackTrace$Handle, impl)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/Runnable;)V", nullptr, $PUBLIC, $method(VerifyStackTrace$Handle, init$, void, $Runnable*)},
		{"execute", "(Ljava/lang/Runnable;)V", nullptr, $PUBLIC, $virtualMethod(VerifyStackTrace$Handle, execute, void, $Runnable*)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(VerifyStackTrace$Handle, run, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"VerifyStackTrace$Handle", "VerifyStackTrace", "Handle", $PUBLIC | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"VerifyStackTrace$Handle",
		"java.lang.Object",
		"java.lang.Runnable",
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"VerifyStackTrace"
	};
	$loadClass(VerifyStackTrace$Handle, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(VerifyStackTrace$Handle);
	});
	return class$;
}

$Class* VerifyStackTrace$Handle::class$ = nullptr;