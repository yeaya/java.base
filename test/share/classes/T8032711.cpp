#include <T8032711.h>

#include <T8032711$I.h>
#include <java/lang/AssertionError.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaConversionException.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodHandles.h>
#include <java/lang/invoke/MethodType.h>
#include <jcpp.h>

#undef TYPE

using $T8032711$I = ::T8032711$I;
using $AssertionError = ::java::lang::AssertionError;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Void = ::java::lang::Void;
using $CallSite = ::java::lang::invoke::CallSite;
using $LambdaConversionException = ::java::lang::invoke::LambdaConversionException;
using $LambdaMetafactory = ::java::lang::invoke::LambdaMetafactory;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $MethodHandles = ::java::lang::invoke::MethodHandles;
using $MethodHandles$Lookup = ::java::lang::invoke::MethodHandles$Lookup;
using $MethodType = ::java::lang::invoke::MethodType;

$FieldInfo _T8032711_FieldInfo_[] = {
	{"l", "Ljava/lang/invoke/MethodHandles$Lookup;", nullptr, $STATIC, $staticField(T8032711, l)},
	{"h", "Ljava/lang/invoke/MethodHandle;", nullptr, $STATIC, $staticField(T8032711, h)},
	{}
};

$MethodInfo _T8032711_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(T8032711::*)()>(&T8032711::init$))},
	{"here", "()V", nullptr, $STATIC, $method(static_cast<void(*)()>(&T8032711::here))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&T8032711::main)), "java.lang.Throwable"},
	{"mf", "(Ljava/lang/Class;)Z", "(Ljava/lang/Class<*>;)Z", $PRIVATE | $STATIC, $method(static_cast<bool(*)($Class*)>(&T8032711::mf))},
	{"mt", "(Ljava/lang/Class;)Ljava/lang/invoke/MethodType;", "(Ljava/lang/Class<*>;)Ljava/lang/invoke/MethodType;", $PRIVATE | $STATIC, $method(static_cast<$MethodType*(*)($Class*)>(&T8032711::mt))},
	{}
};

$InnerClassInfo _T8032711_InnerClassesInfo_[] = {
	{"T8032711$I", "T8032711", "I", $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _T8032711_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"T8032711",
	"java.lang.Object",
	nullptr,
	_T8032711_FieldInfo_,
	_T8032711_MethodInfo_,
	nullptr,
	nullptr,
	_T8032711_InnerClassesInfo_,
	nullptr,
	nullptr,
	"T8032711$I"
};

$Object* allocate$T8032711($Class* clazz) {
	return $of($alloc(T8032711));
}

$MethodHandles$Lookup* T8032711::l = nullptr;
$MethodHandle* T8032711::h = nullptr;

void T8032711::init$() {
}

void T8032711::here() {
}

$MethodType* T8032711::mt($Class* k) {
	return $MethodType::methodType(k);
}

bool T8032711::mf($Class* k) {
	$useLocalCurrentObjectStackCache();
	try {
		$init(T8032711);
		$var($MethodHandles$Lookup, var$0, T8032711::l);
		$var($String, var$1, "m"_s);
		$load($T8032711$I);
		$var($MethodType, var$2, mt($T8032711$I::class$));
		$var($MethodType, var$3, mt(k));
		$var($MethodHandle, var$4, T8032711::h);
		$init($Void);
		$LambdaMetafactory::metafactory(var$0, var$1, var$2, var$3, var$4, $(mt($Void::TYPE)));
	} catch ($LambdaConversionException& e) {
		return true;
	}
	return false;
}

void T8032711::main($StringArray* args) {
	$load(T8032711);
	$beforeCallerSensitive();
	$init(T8032711);
	$assignStatic(T8032711::l, $MethodHandles::lookup());
	$init($Void);
	$assignStatic(T8032711::h, $nc(T8032711::l)->findStatic(T8032711::class$, "here"_s, $(mt($Void::TYPE))));
	if (mf($Void::TYPE)) {
		$throwNew($AssertionError, $of("Error: Should work"_s));
	}
	if (!mf($String::class$)) {
		$throwNew($AssertionError, $of("Error: Should fail"_s));
	}
}

T8032711::T8032711() {
}

$Class* T8032711::load$($String* name, bool initialize) {
	$loadClass(T8032711, name, initialize, &_T8032711_ClassInfo_, allocate$T8032711);
	return class$;
}

$Class* T8032711::class$ = nullptr;