#include <java/lang/invoke/NativeMethodHandle$Lazy.h>
#include <java/lang/AssertionError.h>
#include <java/lang/InternalError.h>
#include <java/lang/ReflectiveOperationException.h>
#include <java/lang/invoke/InvokerBytecodeGenerator.h>
#include <java/lang/invoke/LambdaForm$NamedFunction.h>
#include <java/lang/invoke/MemberName.h>
#include <java/lang/invoke/MethodHandleStatics.h>
#include <java/lang/invoke/NativeMethodHandle.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

#undef THIS_CLASS

using $LambdaForm$NamedFunctionArray = $Array<::java::lang::invoke::LambdaForm$NamedFunction>;
using $AssertionError = ::java::lang::AssertionError;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ReflectiveOperationException = ::java::lang::ReflectiveOperationException;
using $InvokerBytecodeGenerator = ::java::lang::invoke::InvokerBytecodeGenerator;
using $LambdaForm$NamedFunction = ::java::lang::invoke::LambdaForm$NamedFunction;
using $MethodHandleStatics = ::java::lang::invoke::MethodHandleStatics;
using $NativeMethodHandle = ::java::lang::invoke::NativeMethodHandle;

namespace java {
	namespace lang {
		namespace invoke {

bool NativeMethodHandle$Lazy::$assertionsDisabled = false;
$LambdaForm$NamedFunction* NativeMethodHandle$Lazy::NF_internalNativeEntryPoint = nullptr;
$LambdaForm$NamedFunction* NativeMethodHandle$Lazy::NF_internalFallback = nullptr;

void NativeMethodHandle$Lazy::init$() {
}

void NativeMethodHandle$Lazy::clinit$($Class* clazz) {
	$useLocalObjectStack();
	$beforeCallerSensitive();
	$load($NativeMethodHandle);
	NativeMethodHandle$Lazy::$assertionsDisabled = !$NativeMethodHandle::class$->desiredAssertionStatus();
	{
		try {
			$Class* THIS_CLASS = $NativeMethodHandle::class$;
			$var($LambdaForm$NamedFunctionArray, nfs, $new($LambdaForm$NamedFunctionArray, {
				$assignStatic(NativeMethodHandle$Lazy::NF_internalNativeEntryPoint, $new($LambdaForm$NamedFunction, $(THIS_CLASS->getDeclaredMethod("internalNativeEntryPoint"_s, $$new($ClassArray, {$Object::class$}))))),
				$assignStatic(NativeMethodHandle$Lazy::NF_internalFallback, $new($LambdaForm$NamedFunction, $(THIS_CLASS->getDeclaredMethod("internalFallback"_s, $$new($ClassArray, {$Object::class$})))))
			}));
			{
				$var($LambdaForm$NamedFunctionArray, arr$, nfs);
				for (int32_t len$ = arr$->length, i$ = 0; i$ < len$; ++i$) {
					$var($LambdaForm$NamedFunction, nf, arr$->get(i$));
					{
						if (!NativeMethodHandle$Lazy::$assertionsDisabled && !($InvokerBytecodeGenerator::isStaticallyInvocable($nc(nf)->member$))) {
							$throwNew($AssertionError, nf);
						}
						$nc(nf)->resolve();
					}
				}
			}
		} catch ($ReflectiveOperationException& ex) {
			$throw($($MethodHandleStatics::newInternalError(ex)));
		}
	}
}

NativeMethodHandle$Lazy::NativeMethodHandle$Lazy() {
}

$Class* NativeMethodHandle$Lazy::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"$assertionsDisabled", "Z", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(NativeMethodHandle$Lazy, $assertionsDisabled)},
		{"NF_internalNativeEntryPoint", "Ljava/lang/invoke/LambdaForm$NamedFunction;", nullptr, $STATIC | $FINAL, $staticField(NativeMethodHandle$Lazy, NF_internalNativeEntryPoint)},
		{"NF_internalFallback", "Ljava/lang/invoke/LambdaForm$NamedFunction;", nullptr, $STATIC | $FINAL, $staticField(NativeMethodHandle$Lazy, NF_internalFallback)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PRIVATE, $method(NativeMethodHandle$Lazy, init$, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.lang.invoke.NativeMethodHandle$Lazy", "java.lang.invoke.NativeMethodHandle", "Lazy", $PRIVATE | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"java.lang.invoke.NativeMethodHandle$Lazy",
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
		"java.lang.invoke.NativeMethodHandle"
	};
	$loadClass(NativeMethodHandle$Lazy, name, initialize, &classInfo$$, NativeMethodHandle$Lazy::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(NativeMethodHandle$Lazy);
	});
	return class$;
}

$Class* NativeMethodHandle$Lazy::class$ = nullptr;

		} // invoke
	} // lang
} // java