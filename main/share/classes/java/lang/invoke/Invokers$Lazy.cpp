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
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $ReflectiveOperationException = ::java::lang::ReflectiveOperationException;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $MethodHandleStatics = ::java::lang::invoke::MethodHandleStatics;
using $MethodHandles$Lookup = ::java::lang::invoke::MethodHandles$Lookup;
using $MethodType = ::java::lang::invoke::MethodType;

namespace java {
	namespace lang {
		namespace invoke {

$MethodHandle* Invokers$Lazy::MH_asSpreader = nullptr;

void Invokers$Lazy::init$() {
}

void Invokers$Lazy::clinit$($Class* clazz) {
	$useLocalObjectStack();
	{
		try {
			$init($MethodHandles$Lookup);
			$load($MethodHandle);
			$assignStatic(Invokers$Lazy::MH_asSpreader, $nc($MethodHandles$Lookup::IMPL_LOOKUP)->findVirtual($MethodHandle::class$, "asSpreader"_s, $($MethodType::methodType($MethodHandle::class$, $Class::class$, $$new($ClassArray, {$Integer::TYPE})))));
		} catch ($ReflectiveOperationException& ex) {
			$throw($($MethodHandleStatics::newInternalError(ex)));
		}
	}
}

Invokers$Lazy::Invokers$Lazy() {
}

$Class* Invokers$Lazy::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"MH_asSpreader", "Ljava/lang/invoke/MethodHandle;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(Invokers$Lazy, MH_asSpreader)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PRIVATE, $method(Invokers$Lazy, init$, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.lang.invoke.Invokers$Lazy", "java.lang.invoke.Invokers", "Lazy", $PRIVATE | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"java.lang.invoke.Invokers$Lazy",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.lang.invoke.Invokers"
	};
	$loadClass(Invokers$Lazy, name, initialize, &classInfo$$, Invokers$Lazy::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(Invokers$Lazy);
	});
	return class$;
}

$Class* Invokers$Lazy::class$ = nullptr;

		} // invoke
	} // lang
} // java