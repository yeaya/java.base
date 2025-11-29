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
using $Exception = ::java::lang::Exception;
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

$FieldInfo _NativeMethodHandle$Lazy_FieldInfo_[] = {
	{"$assertionsDisabled", "Z", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(NativeMethodHandle$Lazy, $assertionsDisabled)},
	{"NF_internalNativeEntryPoint", "Ljava/lang/invoke/LambdaForm$NamedFunction;", nullptr, $STATIC | $FINAL, $staticField(NativeMethodHandle$Lazy, NF_internalNativeEntryPoint)},
	{"NF_internalFallback", "Ljava/lang/invoke/LambdaForm$NamedFunction;", nullptr, $STATIC | $FINAL, $staticField(NativeMethodHandle$Lazy, NF_internalFallback)},
	{}
};

$MethodInfo _NativeMethodHandle$Lazy_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(NativeMethodHandle$Lazy::*)()>(&NativeMethodHandle$Lazy::init$))},
	{}
};

$InnerClassInfo _NativeMethodHandle$Lazy_InnerClassesInfo_[] = {
	{"java.lang.invoke.NativeMethodHandle$Lazy", "java.lang.invoke.NativeMethodHandle", "Lazy", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _NativeMethodHandle$Lazy_ClassInfo_ = {
	$ACC_SUPER,
	"java.lang.invoke.NativeMethodHandle$Lazy",
	"java.lang.Object",
	nullptr,
	_NativeMethodHandle$Lazy_FieldInfo_,
	_NativeMethodHandle$Lazy_MethodInfo_,
	nullptr,
	nullptr,
	_NativeMethodHandle$Lazy_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.lang.invoke.NativeMethodHandle"
};

$Object* allocate$NativeMethodHandle$Lazy($Class* clazz) {
	return $of($alloc(NativeMethodHandle$Lazy));
}

bool NativeMethodHandle$Lazy::$assertionsDisabled = false;
$LambdaForm$NamedFunction* NativeMethodHandle$Lazy::NF_internalNativeEntryPoint = nullptr;
$LambdaForm$NamedFunction* NativeMethodHandle$Lazy::NF_internalFallback = nullptr;

void NativeMethodHandle$Lazy::init$() {
}

void clinit$NativeMethodHandle$Lazy($Class* class$) {
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	$load($NativeMethodHandle);
	NativeMethodHandle$Lazy::$assertionsDisabled = !$NativeMethodHandle::class$->desiredAssertionStatus();
	{
		try {
			$Class* THIS_CLASS = $NativeMethodHandle::class$;
			$var($LambdaForm$NamedFunctionArray, nfs, $new($LambdaForm$NamedFunctionArray, {
				$assignStatic(NativeMethodHandle$Lazy::NF_internalNativeEntryPoint, $new($LambdaForm$NamedFunction, $($nc(THIS_CLASS)->getDeclaredMethod("internalNativeEntryPoint"_s, $$new($ClassArray, {$Object::class$}))))),
				$assignStatic(NativeMethodHandle$Lazy::NF_internalFallback, $new($LambdaForm$NamedFunction, $($nc(THIS_CLASS)->getDeclaredMethod("internalFallback"_s, $$new($ClassArray, {$Object::class$})))))
			}));
			{
				$var($LambdaForm$NamedFunctionArray, arr$, nfs);
				int32_t len$ = arr$->length;
				int32_t i$ = 0;
				for (; i$ < len$; ++i$) {
					$var($LambdaForm$NamedFunction, nf, arr$->get(i$));
					{
						if (!NativeMethodHandle$Lazy::$assertionsDisabled && !($InvokerBytecodeGenerator::isStaticallyInvocable($nc(nf)->member$))) {
							$throwNew($AssertionError, $of(nf));
						}
						$nc(nf)->resolve();
					}
				}
			}
		} catch ($ReflectiveOperationException& ex) {
			$throw($($MethodHandleStatics::newInternalError(static_cast<$Exception*>(ex))));
		}
	}
}

NativeMethodHandle$Lazy::NativeMethodHandle$Lazy() {
}

$Class* NativeMethodHandle$Lazy::load$($String* name, bool initialize) {
	$loadClass(NativeMethodHandle$Lazy, name, initialize, &_NativeMethodHandle$Lazy_ClassInfo_, clinit$NativeMethodHandle$Lazy, allocate$NativeMethodHandle$Lazy);
	return class$;
}

$Class* NativeMethodHandle$Lazy::class$ = nullptr;

		} // invoke
	} // lang
} // java