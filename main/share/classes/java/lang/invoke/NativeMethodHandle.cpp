#include <java/lang/invoke/NativeMethodHandle.h>

#include <java/lang/Array.h>
#include <java/lang/AssertionError.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/CompoundAttribute.h>
#include <java/lang/Exception.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/IllegalArgumentException.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/InternalError.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/NoSuchMethodException.h>
#include <java/lang/NullPointerException.h>
#include <java/lang/ReflectiveOperationException.h>
#include <java/lang/String.h>
#include <java/lang/System.h>
#include <java/lang/invoke/BoundMethodHandle.h>
#include <java/lang/invoke/LambdaForm$Name.h>
#include <java/lang/invoke/LambdaForm$NamedFunction.h>
#include <java/lang/invoke/LambdaForm.h>
#include <java/lang/invoke/MemberName$Factory.h>
#include <java/lang/invoke/MemberName.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandleStatics.h>
#include <java/lang/invoke/MethodType.h>
#include <java/lang/invoke/MethodTypeForm.h>
#include <java/lang/invoke/NativeMethodHandle$Lazy.h>
#include <java/lang/invoke/TypeDescriptor$OfField.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jdk/internal/invoke/NativeEntryPoint.h>
#include <jcpp.h>

#undef LF_INVNATIVE
#undef GET_NEP
#undef ARG_BASE
#undef GET_FALLBACK
#undef ARG_LIMIT
#undef LINKER_CALL
#undef IMPL_NAMES
#undef NMH_THIS

using $LambdaForm$NameArray = $Array<::java::lang::invoke::LambdaForm$Name>;
using $AssertionError = ::java::lang::AssertionError;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $InternalError = ::java::lang::InternalError;
using $MethodInfo = ::java::lang::MethodInfo;
using $NoSuchMethodException = ::java::lang::NoSuchMethodException;
using $NullPointerException = ::java::lang::NullPointerException;
using $ReflectiveOperationException = ::java::lang::ReflectiveOperationException;
using $BoundMethodHandle = ::java::lang::invoke::BoundMethodHandle;
using $LambdaForm = ::java::lang::invoke::LambdaForm;
using $LambdaForm$Name = ::java::lang::invoke::LambdaForm$Name;
using $LambdaForm$NamedFunction = ::java::lang::invoke::LambdaForm$NamedFunction;
using $MemberName = ::java::lang::invoke::MemberName;
using $MemberName$Factory = ::java::lang::invoke::MemberName$Factory;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $MethodHandleStatics = ::java::lang::invoke::MethodHandleStatics;
using $MethodType = ::java::lang::invoke::MethodType;
using $MethodTypeForm = ::java::lang::invoke::MethodTypeForm;
using $NativeMethodHandle$Lazy = ::java::lang::invoke::NativeMethodHandle$Lazy;
using $NativeEntryPoint = ::jdk::internal::invoke::NativeEntryPoint;

namespace java {
	namespace lang {
		namespace invoke {

$CompoundAttribute _NativeMethodHandle_MethodAnnotations_internalFallback3[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _NativeMethodHandle_MethodAnnotations_internalNativeEntryPoint4[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$FieldInfo _NativeMethodHandle_FieldInfo_[] = {
	{"$assertionsDisabled", "Z", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(NativeMethodHandle, $assertionsDisabled)},
	{"nep", "Ljdk/internal/invoke/NativeEntryPoint;", nullptr, $FINAL, $field(NativeMethodHandle, nep)},
	{"fallback", "Ljava/lang/invoke/MethodHandle;", nullptr, $FINAL, $field(NativeMethodHandle, fallback)},
	{"IMPL_NAMES", "Ljava/lang/invoke/MemberName$Factory;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(NativeMethodHandle, IMPL_NAMES)},
	{}
};

$MethodInfo _NativeMethodHandle_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/invoke/MethodType;Ljava/lang/invoke/LambdaForm;Ljava/lang/invoke/MethodHandle;Ljdk/internal/invoke/NativeEntryPoint;)V", nullptr, $PRIVATE, $method(static_cast<void(NativeMethodHandle::*)($MethodType*,$LambdaForm*,$MethodHandle*,$NativeEntryPoint*)>(&NativeMethodHandle::init$))},
	{"allTypesPrimitive", "(Ljava/lang/invoke/MethodType;)Z", nullptr, $PRIVATE | $STATIC, $method(static_cast<bool(*)($MethodType*)>(&NativeMethodHandle::allTypesPrimitive))},
	{"copyWith", "(Ljava/lang/invoke/MethodType;Ljava/lang/invoke/LambdaForm;)Ljava/lang/invoke/MethodHandle;", nullptr, $FINAL},
	{"internalFallback", "(Ljava/lang/Object;)Ljava/lang/invoke/MethodHandle;", nullptr, $STATIC, $method(static_cast<$MethodHandle*(*)(Object$*)>(&NativeMethodHandle::internalFallback)), nullptr, nullptr, _NativeMethodHandle_MethodAnnotations_internalFallback3},
	{"internalNativeEntryPoint", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $STATIC, $method(static_cast<$Object*(*)(Object$*)>(&NativeMethodHandle::internalNativeEntryPoint)), nullptr, nullptr, _NativeMethodHandle_MethodAnnotations_internalNativeEntryPoint4},
	{"make", "(Ljdk/internal/invoke/NativeEntryPoint;Ljava/lang/invoke/MethodHandle;)Ljava/lang/invoke/MethodHandle;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$MethodHandle*(*)($NativeEntryPoint*,$MethodHandle*)>(&NativeMethodHandle::make))},
	{"makePreparedLambdaForm", "(Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/LambdaForm;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$LambdaForm*(*)($MethodType*)>(&NativeMethodHandle::makePreparedLambdaForm))},
	{"preparedLambdaForm", "(Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/LambdaForm;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$LambdaForm*(*)($MethodType*)>(&NativeMethodHandle::preparedLambdaForm))},
	{"rebind", "()Ljava/lang/invoke/BoundMethodHandle;", nullptr, 0},
	{}
};

$InnerClassInfo _NativeMethodHandle_InnerClassesInfo_[] = {
	{"java.lang.invoke.NativeMethodHandle$Lazy", "java.lang.invoke.NativeMethodHandle", "Lazy", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _NativeMethodHandle_ClassInfo_ = {
	$ACC_SUPER,
	"java.lang.invoke.NativeMethodHandle",
	"java.lang.invoke.MethodHandle",
	nullptr,
	_NativeMethodHandle_FieldInfo_,
	_NativeMethodHandle_MethodInfo_,
	nullptr,
	nullptr,
	_NativeMethodHandle_InnerClassesInfo_,
	nullptr,
	nullptr,
	"java.lang.invoke.NativeMethodHandle$Lazy"
};

$Object* allocate$NativeMethodHandle($Class* clazz) {
	return $of($alloc(NativeMethodHandle));
}

bool NativeMethodHandle::$assertionsDisabled = false;
$MemberName$Factory* NativeMethodHandle::IMPL_NAMES = nullptr;

void NativeMethodHandle::init$($MethodType* type, $LambdaForm* form, $MethodHandle* fallback, $NativeEntryPoint* nep) {
	$MethodHandle::init$(type, form);
	$set(this, fallback, fallback);
	$set(this, nep, nep);
}

$MethodHandle* NativeMethodHandle::make($NativeEntryPoint* nep, $MethodHandle* fallback) {
	$init(NativeMethodHandle);
	$var($MethodType, type, $nc(nep)->type());
	if (!allTypesPrimitive(type)) {
		$throwNew($IllegalArgumentException, $$str({"Type must only contain primitives: "_s, type}));
	}
	if (type != $nc(fallback)->type()) {
		$var($String, var$0, $$str({"Type of fallback must match: "_s, type, " != "_s}));
		$throwNew($IllegalArgumentException, $$concat(var$0, $(fallback->type())));
	}
	$var($LambdaForm, lform, preparedLambdaForm(type));
	return $new(NativeMethodHandle, type, lform, fallback, nep);
}

bool NativeMethodHandle::allTypesPrimitive($MethodType* type) {
	$init(NativeMethodHandle);
	if (!$nc($($cast($Class, $nc(type)->returnType())))->isPrimitive()) {
		return false;
	}
	{
		$var($ClassArray, arr$, $fcast($ClassArray, $nc(type)->parameterArray()));
		int32_t len$ = $nc(arr$)->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$Class* pType = arr$->get(i$);
			{
				if (!$nc(pType)->isPrimitive()) {
					return false;
				}
			}
		}
	}
	return true;
}

$LambdaForm* NativeMethodHandle::preparedLambdaForm($MethodType* mtype$renamed) {
	$init(NativeMethodHandle);
	$var($MethodType, mtype, mtype$renamed);
	int32_t id = $MethodTypeForm::LF_INVNATIVE;
	$assign(mtype, $nc(mtype)->basicType());
	$var($LambdaForm, lform, $nc($(mtype->form()))->cachedLambdaForm(id));
	if (lform != nullptr) {
		return lform;
	}
	$assign(lform, makePreparedLambdaForm(mtype));
	return $nc($(mtype->form()))->setCachedLambdaForm(id, lform);
}

$LambdaForm* NativeMethodHandle::makePreparedLambdaForm($MethodType* mtype) {
	$init(NativeMethodHandle);
	$load($MethodHandle);
	$load($Object);
	$var($MethodType, linkerType, $nc($($nc(mtype)->insertParameterTypes(0, $$new($ClassArray, {$MethodHandle::class$}))))->appendParameterTypes($$new($ClassArray, {$Object::class$})));
	$var($MemberName, linker, $new($MemberName, $MethodHandle::class$, "linkToNative"_s, linkerType, (int8_t)6));
	try {
		$load($NoSuchMethodException);
		$assign(linker, $nc(NativeMethodHandle::IMPL_NAMES)->resolveOrFail((int8_t)6, linker, nullptr, -1, $NoSuchMethodException::class$));
	} catch ($ReflectiveOperationException&) {
		$var($ReflectiveOperationException, ex, $catch());
		$throw($($MethodHandleStatics::newInternalError(static_cast<$Exception*>(ex))));
	}
	int32_t NMH_THIS = 0;
	int32_t ARG_BASE = 1;
	int32_t ARG_LIMIT = ARG_BASE + mtype->parameterCount();
	int32_t nameCursor = ARG_LIMIT;
	int32_t GET_FALLBACK = nameCursor++;
	int32_t GET_NEP = nameCursor++;
	int32_t LINKER_CALL = nameCursor++;
	$var($LambdaForm$NameArray, names, $LambdaForm::arguments(nameCursor - ARG_LIMIT, $(mtype->invokerType())));
	if (!NativeMethodHandle::$assertionsDisabled && !($nc(names)->length == nameCursor)) {
		$throwNew($AssertionError);
	}
	$init($NativeMethodHandle$Lazy);
	$nc(names)->set(GET_FALLBACK, $$new($LambdaForm$Name, $NativeMethodHandle$Lazy::NF_internalFallback, $$new($ObjectArray, {$of(names->get(NMH_THIS))})));
	names->set(GET_NEP, $$new($LambdaForm$Name, $NativeMethodHandle$Lazy::NF_internalNativeEntryPoint, $$new($ObjectArray, {$of(names->get(NMH_THIS))})));
	$var($ObjectArray, outArgs, $new($ObjectArray, $nc(linkerType)->parameterCount()));
	outArgs->set(0, names->get(GET_FALLBACK));
	$System::arraycopy(names, ARG_BASE, outArgs, 1, mtype->parameterCount());
	outArgs->set(outArgs->length - 1, names->get(GET_NEP));
	names->set(LINKER_CALL, $$new($LambdaForm$Name, linker, outArgs));
	$var($LambdaForm, lform, $new($LambdaForm, ARG_LIMIT, names, -2));
	lform->compileToBytecode();
	return lform;
}

$MethodHandle* NativeMethodHandle::copyWith($MethodType* mt, $LambdaForm* lf) {
	if (!NativeMethodHandle::$assertionsDisabled && !($of(this)->getClass() == NativeMethodHandle::class$)) {
		$throwNew($AssertionError);
	}
	return $new(NativeMethodHandle, mt, lf, this->fallback, this->nep);
}

$BoundMethodHandle* NativeMethodHandle::rebind() {
	return $BoundMethodHandle::makeReinvoker(this);
}

$Object* NativeMethodHandle::internalNativeEntryPoint(Object$* mh) {
	$init(NativeMethodHandle);
	return $of($nc(($cast(NativeMethodHandle, mh)))->nep);
}

$MethodHandle* NativeMethodHandle::internalFallback(Object$* mh) {
	$init(NativeMethodHandle);
	return $nc(($cast(NativeMethodHandle, mh)))->fallback;
}

void clinit$NativeMethodHandle($Class* class$) {
	NativeMethodHandle::$assertionsDisabled = !NativeMethodHandle::class$->desiredAssertionStatus();
	$assignStatic(NativeMethodHandle::IMPL_NAMES, $MemberName::getFactory());
}

NativeMethodHandle::NativeMethodHandle() {
}

$Class* NativeMethodHandle::load$($String* name, bool initialize) {
	$loadClass(NativeMethodHandle, name, initialize, &_NativeMethodHandle_ClassInfo_, clinit$NativeMethodHandle, allocate$NativeMethodHandle);
	return class$;
}

$Class* NativeMethodHandle::class$ = nullptr;

		} // invoke
	} // lang
} // java