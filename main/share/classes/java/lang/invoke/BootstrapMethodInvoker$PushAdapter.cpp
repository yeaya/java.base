#include <java/lang/invoke/BootstrapMethodInvoker$PushAdapter.h>
#include <java/lang/InternalError.h>
#include <java/lang/invoke/BootstrapCallInfo.h>
#include <java/lang/invoke/BootstrapMethodInvoker.h>
#include <java/lang/invoke/ConstantGroup.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandleStatics.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/util/Arrays.h>
#include <java/util/List.h>
#include <jcpp.h>

#undef IMPL_LOOKUP
#undef THIS_CLASS
#undef TRACE_METHOD_LINKAGE

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $InternalError = ::java::lang::InternalError;
using $MethodInfo = ::java::lang::MethodInfo;
using $BootstrapCallInfo = ::java::lang::invoke::BootstrapCallInfo;
using $ConstantGroup = ::java::lang::invoke::ConstantGroup;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $MethodHandleStatics = ::java::lang::invoke::MethodHandleStatics;
using $MethodHandles$Lookup = ::java::lang::invoke::MethodHandles$Lookup;
using $MethodType = ::java::lang::invoke::MethodType;
using $Arrays = ::java::util::Arrays;

namespace java {
	namespace lang {
		namespace invoke {

$MethodHandle* BootstrapMethodInvoker$PushAdapter::MH_pushToBootstrapMethod = nullptr;

void BootstrapMethodInvoker$PushAdapter::init$() {
}

$Object* BootstrapMethodInvoker$PushAdapter::pushToBootstrapMethod($MethodHandle* pullModeBSM, $MethodHandles$Lookup* lookup, $String* name, Object$* type, $ObjectArray* arguments) {
	$init(BootstrapMethodInvoker$PushAdapter);
	$useLocalObjectStack();
	$var($ConstantGroup, cons, $ConstantGroup::makeConstantGroup($($Arrays::asList(arguments))));
	$var($BootstrapCallInfo, bsci, $BootstrapCallInfo::makeBootstrapCallInfo(pullModeBSM, name, type, cons));
	$init($MethodHandleStatics);
	if ($MethodHandleStatics::TRACE_METHOD_LINKAGE) {
		$nc($System::out)->println("pull-mode BSM gets pushed arguments from fake BSCI"_s);
	}
	return $nc(pullModeBSM)->invoke($$new($ObjectArray, {lookup, bsci}));
}

void BootstrapMethodInvoker$PushAdapter::clinit$($Class* clazz) {
	$useLocalObjectStack();
	{
		$Class* THIS_CLASS = BootstrapMethodInvoker$PushAdapter::class$;
		try {
			$init($MethodHandles$Lookup);
			$load($MethodHandle);
			$assignStatic(BootstrapMethodInvoker$PushAdapter::MH_pushToBootstrapMethod, $nc($MethodHandles$Lookup::IMPL_LOOKUP)->findStatic(THIS_CLASS, "pushToBootstrapMethod"_s, $($MethodType::methodType($Object::class$, $MethodHandle::class$, $$new($ClassArray, {
				$MethodHandles$Lookup::class$,
				$String::class$,
				$Object::class$,
				$getClass($ObjectArray)
			})))));
		} catch ($Throwable& ex) {
			$throwNew($InternalError, ex);
		}
	}
}

BootstrapMethodInvoker$PushAdapter::BootstrapMethodInvoker$PushAdapter() {
}

$Class* BootstrapMethodInvoker$PushAdapter::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"MH_pushToBootstrapMethod", "Ljava/lang/invoke/MethodHandle;", nullptr, $STATIC | $FINAL, $staticField(BootstrapMethodInvoker$PushAdapter, MH_pushToBootstrapMethod)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(BootstrapMethodInvoker$PushAdapter, init$, void)},
		{"pushToBootstrapMethod", "(Ljava/lang/invoke/MethodHandle;Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/Object;[Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $STATIC | $TRANSIENT, $staticMethod(BootstrapMethodInvoker$PushAdapter, pushToBootstrapMethod, $Object*, $MethodHandle*, $MethodHandles$Lookup*, $String*, Object$*, $ObjectArray*), "java.lang.Throwable"},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.lang.invoke.BootstrapMethodInvoker$PushAdapter", "java.lang.invoke.BootstrapMethodInvoker", "PushAdapter", $STATIC | $FINAL},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"java.lang.invoke.BootstrapMethodInvoker$PushAdapter",
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
		"java.lang.invoke.BootstrapMethodInvoker"
	};
	$loadClass(BootstrapMethodInvoker$PushAdapter, name, initialize, &classInfo$$, BootstrapMethodInvoker$PushAdapter::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(BootstrapMethodInvoker$PushAdapter);
	});
	return class$;
}

$Class* BootstrapMethodInvoker$PushAdapter::class$ = nullptr;

		} // invoke
	} // lang
} // java