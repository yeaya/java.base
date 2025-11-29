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

using $PrintStream = ::java::io::PrintStream;
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

$FieldInfo _BootstrapMethodInvoker$PushAdapter_FieldInfo_[] = {
	{"MH_pushToBootstrapMethod", "Ljava/lang/invoke/MethodHandle;", nullptr, $STATIC | $FINAL, $staticField(BootstrapMethodInvoker$PushAdapter, MH_pushToBootstrapMethod)},
	{}
};

$MethodInfo _BootstrapMethodInvoker$PushAdapter_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(BootstrapMethodInvoker$PushAdapter::*)()>(&BootstrapMethodInvoker$PushAdapter::init$))},
	{"pushToBootstrapMethod", "(Ljava/lang/invoke/MethodHandle;Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/Object;[Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $STATIC | $TRANSIENT, $method(static_cast<$Object*(*)($MethodHandle*,$MethodHandles$Lookup*,$String*,Object$*,$ObjectArray*)>(&BootstrapMethodInvoker$PushAdapter::pushToBootstrapMethod)), "java.lang.Throwable"},
	{}
};

$InnerClassInfo _BootstrapMethodInvoker$PushAdapter_InnerClassesInfo_[] = {
	{"java.lang.invoke.BootstrapMethodInvoker$PushAdapter", "java.lang.invoke.BootstrapMethodInvoker", "PushAdapter", $STATIC | $FINAL},
	{}
};

$ClassInfo _BootstrapMethodInvoker$PushAdapter_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"java.lang.invoke.BootstrapMethodInvoker$PushAdapter",
	"java.lang.Object",
	nullptr,
	_BootstrapMethodInvoker$PushAdapter_FieldInfo_,
	_BootstrapMethodInvoker$PushAdapter_MethodInfo_,
	nullptr,
	nullptr,
	_BootstrapMethodInvoker$PushAdapter_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.lang.invoke.BootstrapMethodInvoker"
};

$Object* allocate$BootstrapMethodInvoker$PushAdapter($Class* clazz) {
	return $of($alloc(BootstrapMethodInvoker$PushAdapter));
}

$MethodHandle* BootstrapMethodInvoker$PushAdapter::MH_pushToBootstrapMethod = nullptr;

void BootstrapMethodInvoker$PushAdapter::init$() {
}

$Object* BootstrapMethodInvoker$PushAdapter::pushToBootstrapMethod($MethodHandle* pullModeBSM, $MethodHandles$Lookup* lookup, $String* name, Object$* type, $ObjectArray* arguments) {
	$init(BootstrapMethodInvoker$PushAdapter);
	$useLocalCurrentObjectStackCache();
	$var($ConstantGroup, cons, $ConstantGroup::makeConstantGroup($($Arrays::asList(arguments))));
	$var($BootstrapCallInfo, bsci, $BootstrapCallInfo::makeBootstrapCallInfo(pullModeBSM, name, type, cons));
	$init($MethodHandleStatics);
	if ($MethodHandleStatics::TRACE_METHOD_LINKAGE) {
		$nc($System::out)->println("pull-mode BSM gets pushed arguments from fake BSCI"_s);
	}
	return $of($nc(pullModeBSM)->invoke($$new($ObjectArray, {$of(lookup), $of(bsci)})));
}

void clinit$BootstrapMethodInvoker$PushAdapter($Class* class$) {
	$useLocalCurrentObjectStackCache();
	{
		$Class* THIS_CLASS = BootstrapMethodInvoker$PushAdapter::class$;
		try {
			$init($MethodHandles$Lookup);
			$load($MethodHandle);
			$load($ObjectArray);
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
	$loadClass(BootstrapMethodInvoker$PushAdapter, name, initialize, &_BootstrapMethodInvoker$PushAdapter_ClassInfo_, clinit$BootstrapMethodInvoker$PushAdapter, allocate$BootstrapMethodInvoker$PushAdapter);
	return class$;
}

$Class* BootstrapMethodInvoker$PushAdapter::class$ = nullptr;

		} // invoke
	} // lang
} // java