#include <T8032704.h>

#include <T8032704other.h>
#include <java/io/Closeable.h>
#include <java/lang/Array.h>
#include <java/lang/AssertionError.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/Thread.h>
#include <java/lang/Void.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaConversionException.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodHandles.h>
#include <java/lang/invoke/MethodType.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

#undef TYPE

using $T8032704other = ::T8032704other;
using $Closeable = ::java::io::Closeable;
using $AssertionError = ::java::lang::AssertionError;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Void = ::java::lang::Void;
using $CallSite = ::java::lang::invoke::CallSite;
using $LambdaConversionException = ::java::lang::invoke::LambdaConversionException;
using $LambdaMetafactory = ::java::lang::invoke::LambdaMetafactory;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $MethodHandles = ::java::lang::invoke::MethodHandles;
using $MethodHandles$Lookup = ::java::lang::invoke::MethodHandles$Lookup;
using $MethodType = ::java::lang::invoke::MethodType;

$FieldInfo _T8032704_FieldInfo_[] = {
	{"h", "Ljava/lang/invoke/MethodHandle;", nullptr, $STATIC, $staticField(T8032704, h)},
	{}
};

$MethodInfo _T8032704_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(T8032704::*)()>(&T8032704::init$))},
	{"here", "()V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)()>(&T8032704::here))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&T8032704::main)), "java.lang.Throwable"},
	{"mf", "(Ljava/lang/invoke/MethodHandles$Lookup;)Z", nullptr, $PRIVATE | $STATIC, $method(static_cast<bool(*)($MethodHandles$Lookup*)>(&T8032704::mf))},
	{"mt", "(Ljava/lang/Class;)Ljava/lang/invoke/MethodType;", "(Ljava/lang/Class<*>;)Ljava/lang/invoke/MethodType;", $PRIVATE | $STATIC, $method(static_cast<$MethodType*(*)($Class*)>(&T8032704::mt))},
	{}
};

$ClassInfo _T8032704_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"T8032704",
	"java.lang.Object",
	nullptr,
	_T8032704_FieldInfo_,
	_T8032704_MethodInfo_
};

$Object* allocate$T8032704($Class* clazz) {
	return $of($alloc(T8032704));
}

$MethodHandle* T8032704::h = nullptr;

void T8032704::init$() {
}

void T8032704::here() {
}

$MethodType* T8032704::mt($Class* k) {
	return $MethodType::methodType(k);
}

bool T8032704::mf($MethodHandles$Lookup* l) {
	try {
		$var($MethodHandles$Lookup, var$0, l);
		$var($String, var$1, "close"_s);
		$load($Closeable);
		$var($MethodType, var$2, mt($Closeable::class$));
		$init($Void);
		$var($MethodType, var$3, mt($Void::TYPE));
		$init(T8032704);
		$var($MethodHandle, var$4, T8032704::h);
		$LambdaMetafactory::metafactory(var$0, var$1, var$2, var$3, var$4, $(mt($Void::TYPE)));
	} catch ($LambdaConversionException&) {
		$var($LambdaConversionException, e, $catch());
		return true;
	}
	return false;
}

void T8032704::main($StringArray* args) {
	$load(T8032704);
	$beforeCallerSensitive();
	$var($MethodHandles$Lookup, ll, $MethodHandles::lookup());
	$init(T8032704);
	$init($Void);
	$assignStatic(T8032704::h, $nc(ll)->findStatic(T8032704::class$, "here"_s, $(mt($Void::TYPE))));
	if (mf(ll)) {
		$throwNew($AssertionError, $of("Error: Should work"_s));
	}
	if (!mf($($MethodHandles::publicLookup()))) {
		$throwNew($AssertionError, $of("Error: Should fail - public"_s));
	}
	$load($T8032704other);
	if (!mf($(ll->in($T8032704other::class$)))) {
		$throwNew($AssertionError, $of("Error: Should fail - other"_s));
	}
	$load($Thread);
	if (!mf($(ll->in($Thread::class$)))) {
		$throwNew($AssertionError, $of("Error: Should fail - Thread"_s));
	}
}

T8032704::T8032704() {
}

$Class* T8032704::load$($String* name, bool initialize) {
	$loadClass(T8032704, name, initialize, &_T8032704_ClassInfo_, allocate$T8032704);
	return class$;
}

$Class* T8032704::class$ = nullptr;