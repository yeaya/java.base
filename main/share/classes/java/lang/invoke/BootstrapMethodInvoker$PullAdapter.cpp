#include <java/lang/invoke/BootstrapMethodInvoker$PullAdapter.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/InternalError.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/Throwable.h>
#include <java/lang/invoke/BootstrapCallInfo.h>
#include <java/lang/invoke/BootstrapMethodInvoker.h>
#include <java/lang/invoke/Invokers.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

#undef IMPL_LOOKUP
#undef MAX_MH_ARITY
#undef MAX_SAFE_SIZE
#undef NON_SPREAD_ARG_COUNT
#undef THIS_CLASS

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $InternalError = ::java::lang::InternalError;
using $MethodInfo = ::java::lang::MethodInfo;
using $BootstrapCallInfo = ::java::lang::invoke::BootstrapCallInfo;
using $BootstrapMethodInvoker = ::java::lang::invoke::BootstrapMethodInvoker;
using $ConstantGroup = ::java::lang::invoke::ConstantGroup;
using $Invokers = ::java::lang::invoke::Invokers;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $MethodHandles$Lookup = ::java::lang::invoke::MethodHandles$Lookup;
using $MethodType = ::java::lang::invoke::MethodType;

namespace java {
	namespace lang {
		namespace invoke {

$FieldInfo _BootstrapMethodInvoker$PullAdapter_FieldInfo_[] = {
	{"MH_pullFromBootstrapMethod", "Ljava/lang/invoke/MethodHandle;", nullptr, $STATIC | $FINAL, $staticField(BootstrapMethodInvoker$PullAdapter, MH_pullFromBootstrapMethod)},
	{}
};

$MethodInfo _BootstrapMethodInvoker$PullAdapter_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(BootstrapMethodInvoker$PullAdapter::*)()>(&BootstrapMethodInvoker$PullAdapter::init$))},
	{"pullFromBootstrapMethod", "(Ljava/lang/invoke/MethodHandle;Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/invoke/BootstrapCallInfo;)Ljava/lang/Object;", "(Ljava/lang/invoke/MethodHandle;Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/invoke/BootstrapCallInfo<*>;)Ljava/lang/Object;", $STATIC, $method(static_cast<$Object*(*)($MethodHandle*,$MethodHandles$Lookup*,$BootstrapCallInfo*)>(&BootstrapMethodInvoker$PullAdapter::pullFromBootstrapMethod)), "java.lang.Throwable"},
	{}
};

$InnerClassInfo _BootstrapMethodInvoker$PullAdapter_InnerClassesInfo_[] = {
	{"java.lang.invoke.BootstrapMethodInvoker$PullAdapter", "java.lang.invoke.BootstrapMethodInvoker", "PullAdapter", $STATIC | $FINAL},
	{}
};

$ClassInfo _BootstrapMethodInvoker$PullAdapter_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"java.lang.invoke.BootstrapMethodInvoker$PullAdapter",
	"java.lang.Object",
	nullptr,
	_BootstrapMethodInvoker$PullAdapter_FieldInfo_,
	_BootstrapMethodInvoker$PullAdapter_MethodInfo_,
	nullptr,
	nullptr,
	_BootstrapMethodInvoker$PullAdapter_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.lang.invoke.BootstrapMethodInvoker"
};

$Object* allocate$BootstrapMethodInvoker$PullAdapter($Class* clazz) {
	return $of($alloc(BootstrapMethodInvoker$PullAdapter));
}

$MethodHandle* BootstrapMethodInvoker$PullAdapter::MH_pullFromBootstrapMethod = nullptr;

void BootstrapMethodInvoker$PullAdapter::init$() {
}

$Object* BootstrapMethodInvoker$PullAdapter::pullFromBootstrapMethod($MethodHandle* pushModeBSM, $MethodHandles$Lookup* lookup, $BootstrapCallInfo* bsci) {
	$init(BootstrapMethodInvoker$PullAdapter);
	$useLocalCurrentObjectStackCache();
	int32_t argc = $nc(bsci)->size();
	{
		int32_t NON_SPREAD_ARG_COUNT = 0;
		int32_t MAX_SAFE_SIZE = 0;
		$var($MethodType, invocationType, nullptr)
		$var($MethodHandle, typedBSM, nullptr)
		$var($MethodHandle, spreader, nullptr)
		$var($ObjectArray, argv, nullptr)
		switch (argc) {
		case 0:
			{
				$var($Object, var$0, $of(lookup));
				$var($Object, var$1, $of(bsci->invocationName()));
				return $of($nc(pushModeBSM)->invoke($$new($ObjectArray, {var$0, var$1, $(bsci->invocationType())})));
			}
		case 1:
			{
				$var($Object, var$2, $of(lookup));
				$var($Object, var$3, $of(bsci->invocationName()));
				$var($Object, var$4, bsci->invocationType());
				return $of($nc(pushModeBSM)->invoke($$new($ObjectArray, {var$2, var$3, var$4, $(bsci->get(0))})));
			}
		case 2:
			{
				$var($Object, var$5, $of(lookup));
				$var($Object, var$6, $of(bsci->invocationName()));
				$var($Object, var$7, bsci->invocationType());
				$var($Object, var$8, bsci->get(0));
				return $of($nc(pushModeBSM)->invoke($$new($ObjectArray, {var$5, var$6, var$7, var$8, $(bsci->get(1))})));
			}
		case 3:
			{
				$var($Object, var$9, $of(lookup));
				$var($Object, var$10, $of(bsci->invocationName()));
				$var($Object, var$11, bsci->invocationType());
				$var($Object, var$12, bsci->get(0));
				$var($Object, var$13, bsci->get(1));
				return $of($nc(pushModeBSM)->invoke($$new($ObjectArray, {var$9, var$10, var$11, var$12, var$13, $(bsci->get(2))})));
			}
		case 4:
			{
				$var($Object, var$14, $of(lookup));
				$var($Object, var$15, $of(bsci->invocationName()));
				$var($Object, var$16, bsci->invocationType());
				$var($Object, var$17, bsci->get(0));
				$var($Object, var$18, bsci->get(1));
				$var($Object, var$19, bsci->get(2));
				return $of($nc(pushModeBSM)->invoke($$new($ObjectArray, {var$14, var$15, var$16, var$17, var$18, var$19, $(bsci->get(3))})));
			}
		case 5:
			{
				$var($Object, var$20, $of(lookup));
				$var($Object, var$21, $of(bsci->invocationName()));
				$var($Object, var$22, bsci->invocationType());
				$var($Object, var$23, bsci->get(0));
				$var($Object, var$24, bsci->get(1));
				$var($Object, var$25, bsci->get(2));
				$var($Object, var$26, bsci->get(3));
				return $of($nc(pushModeBSM)->invoke($$new($ObjectArray, {var$20, var$21, var$22, var$23, var$24, var$25, var$26, $(bsci->get(4))})));
			}
		case 6:
			{
				$var($Object, var$27, $of(lookup));
				$var($Object, var$28, $of(bsci->invocationName()));
				$var($Object, var$29, bsci->invocationType());
				$var($Object, var$30, bsci->get(0));
				$var($Object, var$31, bsci->get(1));
				$var($Object, var$32, bsci->get(2));
				$var($Object, var$33, bsci->get(3));
				$var($Object, var$34, bsci->get(4));
				return $of($nc(pushModeBSM)->invoke($$new($ObjectArray, {var$27, var$28, var$29, var$30, var$31, var$32, var$33, var$34, $(bsci->get(5))})));
			}
		default:
			{
				NON_SPREAD_ARG_COUNT = 3;
				MAX_SAFE_SIZE = $MethodType::MAX_MH_ARITY / 2 - NON_SPREAD_ARG_COUNT;
				if (argc >= MAX_SAFE_SIZE) {
					$var($ObjectArray, newargv, $new($ObjectArray, NON_SPREAD_ARG_COUNT + argc));
					newargv->set(0, lookup);
					newargv->set(1, $(bsci->invocationName()));
					newargv->set(2, $(bsci->invocationType()));
					bsci->copyConstants(0, argc, newargv, NON_SPREAD_ARG_COUNT);
					return $of($nc(pushModeBSM)->invokeWithArguments(newargv));
				}
				$assign(invocationType, $MethodType::genericMethodType(NON_SPREAD_ARG_COUNT + argc));
				$assign(typedBSM, $nc(pushModeBSM)->asType(invocationType));
				$assign(spreader, $nc($($nc(invocationType)->invokers()))->spreadInvoker(NON_SPREAD_ARG_COUNT));
				$assign(argv, $new($ObjectArray, argc));
				bsci->copyConstants(0, argc, argv, 0);
				$var($Object, var$35, $of(typedBSM));
				$var($Object, var$36, $of(lookup));
				$var($Object, var$37, $of(bsci->invocationName()));
				return $of($nc(spreader)->invokeExact($$new($ObjectArray, {var$35, var$36, var$37, $(bsci->invocationType()), $of(argv)})));
			}
		}
	}
}

void clinit$BootstrapMethodInvoker$PullAdapter($Class* class$) {
	$useLocalCurrentObjectStackCache();
	{
		$Class* THIS_CLASS = BootstrapMethodInvoker$PullAdapter::class$;
		try {
			$init($MethodHandles$Lookup);
			$load($Object);
			$load($MethodHandle);
				$load($BootstrapCallInfo);
			$assignStatic(BootstrapMethodInvoker$PullAdapter::MH_pullFromBootstrapMethod, $nc($MethodHandles$Lookup::IMPL_LOOKUP)->findStatic(THIS_CLASS, "pullFromBootstrapMethod"_s, $($MethodType::methodType($Object::class$, $MethodHandle::class$, $$new($ClassArray, {
				$MethodHandles$Lookup::class$,
				$BootstrapCallInfo::class$
			})))));
		} catch ($Throwable&) {
			$var($Throwable, ex, $catch());
			$throwNew($InternalError, ex);
		}
	}
}

BootstrapMethodInvoker$PullAdapter::BootstrapMethodInvoker$PullAdapter() {
}

$Class* BootstrapMethodInvoker$PullAdapter::load$($String* name, bool initialize) {
	$loadClass(BootstrapMethodInvoker$PullAdapter, name, initialize, &_BootstrapMethodInvoker$PullAdapter_ClassInfo_, clinit$BootstrapMethodInvoker$PullAdapter, allocate$BootstrapMethodInvoker$PullAdapter);
	return class$;
}

$Class* BootstrapMethodInvoker$PullAdapter::class$ = nullptr;

		} // invoke
	} // lang
} // java