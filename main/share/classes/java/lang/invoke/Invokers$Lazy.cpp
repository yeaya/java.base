#include <java/lang/invoke/Invokers$Lazy.h>

#include <java/lang/InternalError.h>
#include <java/lang/ReflectiveOperationException.h>
#include <java/lang/invoke/Invokers.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandleStatics.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <jcpp.h>

#undef IMPL_LOOKUP
#undef TYPE

using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $InternalError = ::java::lang::InternalError;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $ReflectiveOperationException = ::java::lang::ReflectiveOperationException;
using $Invokers = ::java::lang::invoke::Invokers;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $MethodHandleStatics = ::java::lang::invoke::MethodHandleStatics;
using $MethodHandles$Lookup = ::java::lang::invoke::MethodHandles$Lookup;
using $MethodType = ::java::lang::invoke::MethodType;

namespace java {
	namespace lang {
		namespace invoke {

$FieldInfo _Invokers$Lazy_FieldInfo_[] = {
	{"MH_asSpreader", "Ljava/lang/invoke/MethodHandle;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(Invokers$Lazy, MH_asSpreader)},
	{}
};

$MethodInfo _Invokers$Lazy_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(Invokers$Lazy::*)()>(&Invokers$Lazy::init$))},
	{}
};

$InnerClassInfo _Invokers$Lazy_InnerClassesInfo_[] = {
	{"java.lang.invoke.Invokers$Lazy", "java.lang.invoke.Invokers", "Lazy", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _Invokers$Lazy_ClassInfo_ = {
	$ACC_SUPER,
	"java.lang.invoke.Invokers$Lazy",
	"java.lang.Object",
	nullptr,
	_Invokers$Lazy_FieldInfo_,
	_Invokers$Lazy_MethodInfo_,
	nullptr,
	nullptr,
	_Invokers$Lazy_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.lang.invoke.Invokers"
};

$Object* allocate$Invokers$Lazy($Class* clazz) {
	return $of($alloc(Invokers$Lazy));
}

$MethodHandle* Invokers$Lazy::MH_asSpreader = nullptr;

void Invokers$Lazy::init$() {
}

void clinit$Invokers$Lazy($Class* class$) {
	$useLocalCurrentObjectStackCache();
	{
		try {
			$init($MethodHandles$Lookup);
			$load($MethodHandle);
			$init($Integer);
			$assignStatic(Invokers$Lazy::MH_asSpreader, $nc($MethodHandles$Lookup::IMPL_LOOKUP)->findVirtual($MethodHandle::class$, "asSpreader"_s, $($MethodType::methodType($MethodHandle::class$, $Class::class$, $$new($ClassArray, {$Integer::TYPE})))));
		} catch ($ReflectiveOperationException& ex) {
			$throw($($MethodHandleStatics::newInternalError(static_cast<$Exception*>(ex))));
		}
	}
}

Invokers$Lazy::Invokers$Lazy() {
}

$Class* Invokers$Lazy::load$($String* name, bool initialize) {
	$loadClass(Invokers$Lazy, name, initialize, &_Invokers$Lazy_ClassInfo_, clinit$Invokers$Lazy, allocate$Invokers$Lazy);
	return class$;
}

$Class* Invokers$Lazy::class$ = nullptr;

		} // invoke
	} // lang
} // java