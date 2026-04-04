#include <java/lang/invoke/LambdaForm$NamedFunction.h>
#include <java/lang/AssertionError.h>
#include <java/lang/InternalError.h>
#include <java/lang/invoke/DirectMethodHandle.h>
#include <java/lang/invoke/InvokerBytecodeGenerator.h>
#include <java/lang/invoke/Invokers.h>
#include <java/lang/invoke/LambdaForm$BasicType.h>
#include <java/lang/invoke/LambdaForm.h>
#include <java/lang/invoke/MemberName.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandleImpl$Intrinsic.h>
#include <java/lang/invoke/MethodHandleStatics.h>
#include <java/lang/invoke/MethodType.h>
#include <java/lang/invoke/MethodTypeForm.h>
#include <java/lang/invoke/TypeDescriptor$OfField.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

#undef INVOKER_METHOD_TYPE
#undef MAX_MH_INVOKER_ARITY
#undef MH_NF_INV
#undef NONE
#undef TRACE_INTERPRETER

using $AssertionError = ::java::lang::AssertionError;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $DirectMethodHandle = ::java::lang::invoke::DirectMethodHandle;
using $InvokerBytecodeGenerator = ::java::lang::invoke::InvokerBytecodeGenerator;
using $Invokers = ::java::lang::invoke::Invokers;
using $LambdaForm = ::java::lang::invoke::LambdaForm;
using $LambdaForm$BasicType = ::java::lang::invoke::LambdaForm$BasicType;
using $MemberName = ::java::lang::invoke::MemberName;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $MethodHandleImpl$Intrinsic = ::java::lang::invoke::MethodHandleImpl$Intrinsic;
using $MethodHandleStatics = ::java::lang::invoke::MethodHandleStatics;
using $MethodType = ::java::lang::invoke::MethodType;
using $MethodTypeForm = ::java::lang::invoke::MethodTypeForm;
using $Method = ::java::lang::reflect::Method;

namespace java {
	namespace lang {
		namespace invoke {

bool LambdaForm$NamedFunction::$assertionsDisabled = false;
$MethodType* LambdaForm$NamedFunction::INVOKER_METHOD_TYPE = nullptr;

void LambdaForm$NamedFunction::init$($MethodHandle* resolvedHandle) {
	LambdaForm$NamedFunction::init$($($nc(resolvedHandle)->internalMemberName()), resolvedHandle);
}

void LambdaForm$NamedFunction::init$($MemberName* member, $MethodHandle* resolvedHandle) {
	$set(this, member$, member);
	$set(this, resolvedHandle$, resolvedHandle);
}

void LambdaForm$NamedFunction::init$($MethodType* basicInvokerType) {
	if (!LambdaForm$NamedFunction::$assertionsDisabled && !(basicInvokerType == $nc(basicInvokerType)->basicType())) {
		$throwNew($AssertionError, basicInvokerType);
	}
	if ($nc(basicInvokerType)->parameterSlotCount() < $MethodType::MAX_MH_INVOKER_ARITY) {
		$set(this, resolvedHandle$, $$nc(basicInvokerType->invokers())->basicInvoker());
		$set(this, member$, $nc(this->resolvedHandle$)->internalMemberName());
	} else {
		$set(this, member$, $Invokers::invokeBasicMethod(basicInvokerType));
	}
	if (!LambdaForm$NamedFunction::$assertionsDisabled && !(isInvokeBasic(this->member$))) {
		$throwNew($AssertionError);
	}
}

bool LambdaForm$NamedFunction::isInvokeBasic($MemberName* member) {
	$init(LambdaForm$NamedFunction);
	$load($MethodHandle);
	bool var$0 = member != nullptr && member->getDeclaringClass() == $MethodHandle::class$;
	return var$0 && "invokeBasic"_s->equals($(member->getName()));
}

void LambdaForm$NamedFunction::init$($Method* method) {
	LambdaForm$NamedFunction::init$($$new($MemberName, method));
}

void LambdaForm$NamedFunction::init$($MemberName* member) {
	LambdaForm$NamedFunction::init$(member, nullptr);
}

$MethodHandle* LambdaForm$NamedFunction::resolvedHandle() {
	if (this->resolvedHandle$ == nullptr) {
		resolve();
	}
	return this->resolvedHandle$;
}

void LambdaForm$NamedFunction::resolve() {
	$synchronized(this) {
		if (this->resolvedHandle$ == nullptr) {
			$set(this, resolvedHandle$, $DirectMethodHandle::make(this->member$));
		}
	}
}

bool LambdaForm$NamedFunction::equals(Object$* other) {
	if ($equals(this, other)) {
		return true;
	}
	if (other == nullptr) {
		return false;
	}
	$var(LambdaForm$NamedFunction, that, nullptr);
	bool var$1 = $instanceOf(LambdaForm$NamedFunction, other);
	if (var$1) {
		$assign(that, $cast(LambdaForm$NamedFunction, other));
		var$1 = true;
	}
	bool var$0 = (var$1) && this->member$ != nullptr;
	return var$0 && this->member$->equals($nc(that)->member$);
}

int32_t LambdaForm$NamedFunction::hashCode() {
	if (this->member$ != nullptr) {
		return this->member$->hashCode();
	}
	return $Object::hashCode();
}

$MethodHandle* LambdaForm$NamedFunction::computeInvoker($MethodTypeForm* typeForm$renamed) {
	$init(LambdaForm$NamedFunction);
	$useLocalObjectStack();
	$var($MethodTypeForm, typeForm, typeForm$renamed);
	$assign(typeForm, $$nc($nc(typeForm)->basicType())->form());
	$var($MethodHandle, mh, $nc(typeForm)->cachedMethodHandle($MethodTypeForm::MH_NF_INV));
	if (mh != nullptr) {
		return mh;
	}
	$var($MemberName, invoker, $InvokerBytecodeGenerator::generateNamedFunctionInvoker(typeForm));
	$assign(mh, $DirectMethodHandle::make(invoker));
	$var($MethodHandle, mh2, typeForm->cachedMethodHandle($MethodTypeForm::MH_NF_INV));
	if (mh2 != nullptr) {
		return mh2;
	}
	if (!$$nc($nc(mh)->type())->equals($of(LambdaForm$NamedFunction::INVOKER_METHOD_TYPE))) {
		$throw($($MethodHandleStatics::newInternalError($(mh->debugString()))));
	}
	return typeForm->setCachedMethodHandle($MethodTypeForm::MH_NF_INV, mh);
}

$Object* LambdaForm$NamedFunction::invokeWithArguments($ObjectArray* arguments) {
	$useLocalObjectStack();
	$init($LambdaForm);
	if ($LambdaForm::TRACE_INTERPRETER) {
		return invokeWithArgumentsTracing(arguments);
	}
	return $$nc(invoker())->invokeBasic($$new($ObjectArray, {$(resolvedHandle()), arguments}));
}

$Object* LambdaForm$NamedFunction::invokeWithArgumentsTracing($ObjectArray* arguments) {
	$useLocalObjectStack();
	$var($Object, rval, nullptr);
	try {
		$LambdaForm::traceInterpreter("[ call"_s, this, arguments);
		if (this->invoker$ == nullptr) {
			$LambdaForm::traceInterpreter("| getInvoker"_s, this);
			invoker();
		}
		if (this->resolvedHandle$ == nullptr) {
			$LambdaForm::traceInterpreter("| resolve"_s, this);
			resolvedHandle();
		}
		$assign(rval, $$nc(invoker())->invokeBasic($$new($ObjectArray, {$(resolvedHandle()), arguments})));
	} catch ($Throwable& ex) {
		$LambdaForm::traceInterpreter("] throw =>"_s, ex);
		$throw(ex);
	}
	$LambdaForm::traceInterpreter("] return =>"_s, rval);
	return rval;
}

$MethodHandle* LambdaForm$NamedFunction::invoker() {
	$useLocalObjectStack();
	if (this->invoker$ != nullptr) {
		return this->invoker$;
	}
	return $set(this, invoker$, computeInvoker($($$nc(methodType())->form())));
}

$MethodType* LambdaForm$NamedFunction::methodType() {
	if (this->resolvedHandle$ != nullptr) {
		return this->resolvedHandle$->type();
	} else {
		return $nc(this->member$)->getInvocationType();
	}
}

$MemberName* LambdaForm$NamedFunction::member() {
	if (!LambdaForm$NamedFunction::$assertionsDisabled && !(assertMemberIsConsistent())) {
		$throwNew($AssertionError);
	}
	return this->member$;
}

bool LambdaForm$NamedFunction::assertMemberIsConsistent() {
	if ($instanceOf($DirectMethodHandle, this->resolvedHandle$)) {
		$var($MemberName, m, this->resolvedHandle$->internalMemberName());
		if (!LambdaForm$NamedFunction::$assertionsDisabled && !($nc(m)->equals(this->member$))) {
			$throwNew($AssertionError);
		}
	}
	return true;
}

$Class* LambdaForm$NamedFunction::memberDeclaringClassOrNull() {
	return (this->member$ == nullptr) ? ($Class*)nullptr : this->member$->getDeclaringClass();
}

$LambdaForm$BasicType* LambdaForm$NamedFunction::returnType() {
	$useLocalObjectStack();
	return $LambdaForm$BasicType::basicType($$cast($Class, $$nc(methodType())->returnType()));
}

$LambdaForm$BasicType* LambdaForm$NamedFunction::parameterType(int32_t n) {
	$useLocalObjectStack();
	return $LambdaForm$BasicType::basicType($$cast($Class, $$nc(methodType())->parameterType(n)));
}

int32_t LambdaForm$NamedFunction::arity() {
	return $$nc(methodType())->parameterCount();
}

$String* LambdaForm$NamedFunction::toString() {
	$useLocalObjectStack();
	if (this->member$ == nullptr) {
		return $String::valueOf(this->resolvedHandle$);
	}
	$var($StringBuilder, var$0, $new($StringBuilder));
	var$0->append($($nc($nc(this->member$)->getDeclaringClass())->getSimpleName()));
	var$0->append("."_s);
	var$0->append($(this->member$->getName()));
	return $str(var$0);
}

bool LambdaForm$NamedFunction::isIdentity() {
	$useLocalObjectStack();
	return this->equals($($LambdaForm::identity($(returnType()))));
}

bool LambdaForm$NamedFunction::isConstantZero() {
	$useLocalObjectStack();
	return this->equals($($LambdaForm::constantZero($(returnType()))));
}

$MethodHandleImpl$Intrinsic* LambdaForm$NamedFunction::intrinsicName() {
	$init($MethodHandleImpl$Intrinsic);
	return this->resolvedHandle$ != nullptr ? this->resolvedHandle$->intrinsicName() : $MethodHandleImpl$Intrinsic::NONE;
}

$Object* LambdaForm$NamedFunction::intrinsicData() {
	return this->resolvedHandle$ != nullptr ? this->resolvedHandle$->intrinsicData() : ($Object*)nullptr;
}

void LambdaForm$NamedFunction::clinit$($Class* clazz) {
	$load($LambdaForm);
	LambdaForm$NamedFunction::$assertionsDisabled = !$LambdaForm::class$->desiredAssertionStatus();
	$load($MethodHandle);
	$assignStatic(LambdaForm$NamedFunction::INVOKER_METHOD_TYPE, $MethodType::methodType($Object::class$, $MethodHandle::class$, $$new($ClassArray, {$getClass($ObjectArray)})));
}

LambdaForm$NamedFunction::LambdaForm$NamedFunction() {
}

$Class* LambdaForm$NamedFunction::load$($String* name, bool initialize) {
	$CompoundAttribute resolvedHandlefieldAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/Stable;", nullptr},
		{}
	};
	$CompoundAttribute invokerfieldAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/Stable;", nullptr},
		{}
	};
	$FieldInfo fieldInfos$$[] = {
		{"$assertionsDisabled", "Z", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(LambdaForm$NamedFunction, $assertionsDisabled)},
		{"member", "Ljava/lang/invoke/MemberName;", nullptr, $FINAL, $field(LambdaForm$NamedFunction, member$)},
		{"resolvedHandle", "Ljava/lang/invoke/MethodHandle;", nullptr, $PRIVATE, $field(LambdaForm$NamedFunction, resolvedHandle$), resolvedHandlefieldAnnotations$$},
		{"invoker", "Ljava/lang/invoke/MethodHandle;", nullptr, 0, $field(LambdaForm$NamedFunction, invoker$), invokerfieldAnnotations$$},
		{"INVOKER_METHOD_TYPE", "Ljava/lang/invoke/MethodType;", nullptr, $STATIC | $FINAL, $staticField(LambdaForm$NamedFunction, INVOKER_METHOD_TYPE)},
		{}
	};
	$CompoundAttribute invokeWithArgumentsmethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/Hidden;", nullptr},
		{}
	};
	$CompoundAttribute invokeWithArgumentsTracingmethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/Hidden;", nullptr},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/invoke/MethodHandle;)V", nullptr, 0, $method(LambdaForm$NamedFunction, init$, void, $MethodHandle*)},
		{"<init>", "(Ljava/lang/invoke/MemberName;Ljava/lang/invoke/MethodHandle;)V", nullptr, 0, $method(LambdaForm$NamedFunction, init$, void, $MemberName*, $MethodHandle*)},
		{"<init>", "(Ljava/lang/invoke/MethodType;)V", nullptr, 0, $method(LambdaForm$NamedFunction, init$, void, $MethodType*)},
		{"<init>", "(Ljava/lang/reflect/Method;)V", nullptr, 0, $method(LambdaForm$NamedFunction, init$, void, $Method*)},
		{"<init>", "(Ljava/lang/invoke/MemberName;)V", nullptr, 0, $method(LambdaForm$NamedFunction, init$, void, $MemberName*)},
		{"arity", "()I", nullptr, 0, $virtualMethod(LambdaForm$NamedFunction, arity, int32_t)},
		{"assertMemberIsConsistent", "()Z", nullptr, $PRIVATE, $method(LambdaForm$NamedFunction, assertMemberIsConsistent, bool)},
		{"computeInvoker", "(Ljava/lang/invoke/MethodTypeForm;)Ljava/lang/invoke/MethodHandle;", nullptr, $PRIVATE | $STATIC, $staticMethod(LambdaForm$NamedFunction, computeInvoker, $MethodHandle*, $MethodTypeForm*)},
		{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC, $virtualMethod(LambdaForm$NamedFunction, equals, bool, Object$*)},
		{"hashCode", "()I", nullptr, $PUBLIC, $virtualMethod(LambdaForm$NamedFunction, hashCode, int32_t)},
		{"intrinsicData", "()Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(LambdaForm$NamedFunction, intrinsicData, $Object*)},
		{"intrinsicName", "()Ljava/lang/invoke/MethodHandleImpl$Intrinsic;", nullptr, $PUBLIC, $virtualMethod(LambdaForm$NamedFunction, intrinsicName, $MethodHandleImpl$Intrinsic*)},
		{"invokeWithArguments", "([Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $TRANSIENT, $virtualMethod(LambdaForm$NamedFunction, invokeWithArguments, $Object*, $ObjectArray*), "java.lang.Throwable", nullptr, invokeWithArgumentsmethodAnnotations$$},
		{"invokeWithArgumentsTracing", "([Ljava/lang/Object;)Ljava/lang/Object;", nullptr, 0, $virtualMethod(LambdaForm$NamedFunction, invokeWithArgumentsTracing, $Object*, $ObjectArray*), "java.lang.Throwable", nullptr, invokeWithArgumentsTracingmethodAnnotations$$},
		{"invoker", "()Ljava/lang/invoke/MethodHandle;", nullptr, $PRIVATE, $method(LambdaForm$NamedFunction, invoker, $MethodHandle*)},
		{"isConstantZero", "()Z", nullptr, $PUBLIC, $virtualMethod(LambdaForm$NamedFunction, isConstantZero, bool)},
		{"isIdentity", "()Z", nullptr, $PUBLIC, $virtualMethod(LambdaForm$NamedFunction, isIdentity, bool)},
		{"isInvokeBasic", "(Ljava/lang/invoke/MemberName;)Z", nullptr, $PRIVATE | $STATIC, $staticMethod(LambdaForm$NamedFunction, isInvokeBasic, bool, $MemberName*)},
		{"member", "()Ljava/lang/invoke/MemberName;", nullptr, 0, $virtualMethod(LambdaForm$NamedFunction, member, $MemberName*)},
		{"memberDeclaringClassOrNull", "()Ljava/lang/Class;", "()Ljava/lang/Class<*>;", 0, $virtualMethod(LambdaForm$NamedFunction, memberDeclaringClassOrNull, $Class*)},
		{"methodType", "()Ljava/lang/invoke/MethodType;", nullptr, 0, $virtualMethod(LambdaForm$NamedFunction, methodType, $MethodType*)},
		{"parameterType", "(I)Ljava/lang/invoke/LambdaForm$BasicType;", nullptr, 0, $virtualMethod(LambdaForm$NamedFunction, parameterType, $LambdaForm$BasicType*, int32_t)},
		{"resolve", "()V", nullptr, $SYNCHRONIZED, $virtualMethod(LambdaForm$NamedFunction, resolve, void)},
		{"resolvedHandle", "()Ljava/lang/invoke/MethodHandle;", nullptr, 0, $virtualMethod(LambdaForm$NamedFunction, resolvedHandle, $MethodHandle*)},
		{"returnType", "()Ljava/lang/invoke/LambdaForm$BasicType;", nullptr, 0, $virtualMethod(LambdaForm$NamedFunction, returnType, $LambdaForm$BasicType*)},
		{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(LambdaForm$NamedFunction, toString, $String*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.lang.invoke.LambdaForm$NamedFunction", "java.lang.invoke.LambdaForm", "NamedFunction", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"java.lang.invoke.LambdaForm$NamedFunction",
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
		"java.lang.invoke.LambdaForm"
	};
	$loadClass(LambdaForm$NamedFunction, name, initialize, &classInfo$$, LambdaForm$NamedFunction::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(LambdaForm$NamedFunction);
	});
	return class$;
}

$Class* LambdaForm$NamedFunction::class$ = nullptr;

		} // invoke
	} // lang
} // java