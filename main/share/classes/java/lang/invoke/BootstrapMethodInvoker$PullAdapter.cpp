#include <java/lang/invoke/BootstrapMethodInvoker$PullAdapter.h>
#include <java/lang/InternalError.h>
#include <java/lang/invoke/BootstrapCallInfo.h>
#include <java/lang/invoke/BootstrapMethodInvoker.h>
#include <java/lang/invoke/Invokers.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
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
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $MethodHandles$Lookup = ::java::lang::invoke::MethodHandles$Lookup;
using $MethodType = ::java::lang::invoke::MethodType;

namespace java {
	namespace lang {
		namespace invoke {

$MethodHandle* BootstrapMethodInvoker$PullAdapter::MH_pullFromBootstrapMethod = nullptr;

void BootstrapMethodInvoker$PullAdapter::init$() {
}

$Object* BootstrapMethodInvoker$PullAdapter::pullFromBootstrapMethod($MethodHandle* pushModeBSM, $MethodHandles$Lookup* lookup, $BootstrapCallInfo* bsci) {
	$init(BootstrapMethodInvoker$PullAdapter);
	$useLocalObjectStack();
	int32_t argc = $nc(bsci)->size();
	{
		int32_t NON_SPREAD_ARG_COUNT = 0;
		int32_t MAX_SAFE_SIZE = 0;
		$var($MethodType, invocationType, nullptr);
		$var($MethodHandle, typedBSM, nullptr);
		$var($MethodHandle, spreader, nullptr);
		$var($ObjectArray, argv, nullptr);
		switch (argc) {
		case 0:
			{
				$var($Object, var$0, bsci->invocationName());
				return $nc(pushModeBSM)->invoke($$new($ObjectArray, {lookup, var$0, $(bsci->invocationType())}));
			}
		case 1:
			{
				$var($Object, var$1, bsci->invocationName());
				$var($Object, var$2, bsci->invocationType());
				return $nc(pushModeBSM)->invoke($$new($ObjectArray, {lookup, var$1, var$2, $(bsci->get(0))}));
			}
		case 2:
			{
				$var($Object, var$3, bsci->invocationName());
				$var($Object, var$4, bsci->invocationType());
				$var($Object, var$5, bsci->get(0));
				return $nc(pushModeBSM)->invoke($$new($ObjectArray, {lookup, var$3, var$4, var$5, $(bsci->get(1))}));
			}
		case 3:
			{
				$var($Object, var$6, bsci->invocationName());
				$var($Object, var$7, bsci->invocationType());
				$var($Object, var$8, bsci->get(0));
				$var($Object, var$9, bsci->get(1));
				return $nc(pushModeBSM)->invoke($$new($ObjectArray, {lookup, var$6, var$7, var$8, var$9, $(bsci->get(2))}));
			}
		case 4:
			{
				$var($Object, var$10, bsci->invocationName());
				$var($Object, var$11, bsci->invocationType());
				$var($Object, var$12, bsci->get(0));
				$var($Object, var$13, bsci->get(1));
				$var($Object, var$14, bsci->get(2));
				return $nc(pushModeBSM)->invoke($$new($ObjectArray, {lookup, var$10, var$11, var$12, var$13, var$14, $(bsci->get(3))}));
			}
		case 5:
			{
				$var($Object, var$15, bsci->invocationName());
				$var($Object, var$16, bsci->invocationType());
				$var($Object, var$17, bsci->get(0));
				$var($Object, var$18, bsci->get(1));
				$var($Object, var$19, bsci->get(2));
				$var($Object, var$20, bsci->get(3));
				return $nc(pushModeBSM)->invoke($$new($ObjectArray, {lookup, var$15, var$16, var$17, var$18, var$19, var$20, $(bsci->get(4))}));
			}
		case 6:
			{
				$var($Object, var$21, bsci->invocationName());
				$var($Object, var$22, bsci->invocationType());
				$var($Object, var$23, bsci->get(0));
				$var($Object, var$24, bsci->get(1));
				$var($Object, var$25, bsci->get(2));
				$var($Object, var$26, bsci->get(3));
				$var($Object, var$27, bsci->get(4));
				return $nc(pushModeBSM)->invoke($$new($ObjectArray, {lookup, var$21, var$22, var$23, var$24, var$25, var$26, var$27, $(bsci->get(5))}));
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
					return $nc(pushModeBSM)->invokeWithArguments(newargv);
				}
				$assign(invocationType, $MethodType::genericMethodType(NON_SPREAD_ARG_COUNT + argc));
				$assign(typedBSM, $nc(pushModeBSM)->asType(invocationType));
				$assign(spreader, $$nc($nc(invocationType)->invokers())->spreadInvoker(NON_SPREAD_ARG_COUNT));
				$assign(argv, $new($ObjectArray, argc));
				bsci->copyConstants(0, argc, argv, 0);
				$var($Object, var$28, $of(bsci->invocationName()));
				return $nc(spreader)->invokeExact($$new($ObjectArray, {typedBSM, $of(lookup), var$28, $(bsci->invocationType()), argv}));
			}
		}
	}
}

void BootstrapMethodInvoker$PullAdapter::clinit$($Class* clazz) {
	$useLocalObjectStack();
	{
		$Class* THIS_CLASS = BootstrapMethodInvoker$PullAdapter::class$;
		try {
			$init($MethodHandles$Lookup);
			$load($MethodHandle);
			$load($BootstrapCallInfo);
			$assignStatic(BootstrapMethodInvoker$PullAdapter::MH_pullFromBootstrapMethod, $nc($MethodHandles$Lookup::IMPL_LOOKUP)->findStatic(THIS_CLASS, "pullFromBootstrapMethod"_s, $($MethodType::methodType($Object::class$, $MethodHandle::class$, $$new($ClassArray, {
				$MethodHandles$Lookup::class$,
				$BootstrapCallInfo::class$
			})))));
		} catch ($Throwable& ex) {
			$throwNew($InternalError, ex);
		}
	}
}

BootstrapMethodInvoker$PullAdapter::BootstrapMethodInvoker$PullAdapter() {
}

$Class* BootstrapMethodInvoker$PullAdapter::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"MH_pullFromBootstrapMethod", "Ljava/lang/invoke/MethodHandle;", nullptr, $STATIC | $FINAL, $staticField(BootstrapMethodInvoker$PullAdapter, MH_pullFromBootstrapMethod)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(BootstrapMethodInvoker$PullAdapter, init$, void)},
		{"pullFromBootstrapMethod", "(Ljava/lang/invoke/MethodHandle;Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/invoke/BootstrapCallInfo;)Ljava/lang/Object;", "(Ljava/lang/invoke/MethodHandle;Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/invoke/BootstrapCallInfo<*>;)Ljava/lang/Object;", $STATIC, $staticMethod(BootstrapMethodInvoker$PullAdapter, pullFromBootstrapMethod, $Object*, $MethodHandle*, $MethodHandles$Lookup*, $BootstrapCallInfo*), "java.lang.Throwable"},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.lang.invoke.BootstrapMethodInvoker$PullAdapter", "java.lang.invoke.BootstrapMethodInvoker", "PullAdapter", $STATIC | $FINAL},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"java.lang.invoke.BootstrapMethodInvoker$PullAdapter",
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
	$loadClass(BootstrapMethodInvoker$PullAdapter, name, initialize, &classInfo$$, BootstrapMethodInvoker$PullAdapter::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(BootstrapMethodInvoker$PullAdapter);
	});
	return class$;
}

$Class* BootstrapMethodInvoker$PullAdapter::class$ = nullptr;

		} // invoke
	} // lang
} // java