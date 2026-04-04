#include <java/lang/invoke/DelegatingMethodHandle.h>
#include <java/lang/AssertionError.h>
#include <java/lang/InternalError.h>
#include <java/lang/NoSuchMethodException.h>
#include <java/lang/ReflectiveOperationException.h>
#include <java/lang/invoke/BoundMethodHandle.h>
#include <java/lang/invoke/DelegatingMethodHandle$Holder.h>
#include <java/lang/invoke/LambdaForm$Kind.h>
#include <java/lang/invoke/LambdaForm$Name.h>
#include <java/lang/invoke/LambdaForm$NamedFunction.h>
#include <java/lang/invoke/LambdaForm.h>
#include <java/lang/invoke/MemberName$Factory.h>
#include <java/lang/invoke/MemberName.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandleStatics.h>
#include <java/lang/invoke/MethodType.h>
#include <java/lang/invoke/MethodTypeForm.h>
#include <java/lang/invoke/SimpleMethodHandle.h>
#include <java/util/Arrays.h>
#include <jdk/internal/misc/Unsafe.h>
#include <jcpp.h>

#undef ARG_BASE
#undef ARG_LIMIT
#undef BOUND_REINVOKER
#undef DELEGATE
#undef LF_DELEGATE
#undef LF_REBIND
#undef MAX_MH_INVOKER_ARITY
#undef NEXT_MH
#undef PRE_ACTION
#undef REINVOKE
#undef REINVOKER
#undef THIS_DMH
#undef UNSAFE

using $LambdaForm$NameArray = $Array<::java::lang::invoke::LambdaForm$Name>;
using $AssertionError = ::java::lang::AssertionError;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NoSuchMethodException = ::java::lang::NoSuchMethodException;
using $ReflectiveOperationException = ::java::lang::ReflectiveOperationException;
using $BoundMethodHandle = ::java::lang::invoke::BoundMethodHandle;
using $DelegatingMethodHandle$Holder = ::java::lang::invoke::DelegatingMethodHandle$Holder;
using $LambdaForm = ::java::lang::invoke::LambdaForm;
using $LambdaForm$Kind = ::java::lang::invoke::LambdaForm$Kind;
using $LambdaForm$Name = ::java::lang::invoke::LambdaForm$Name;
using $LambdaForm$NamedFunction = ::java::lang::invoke::LambdaForm$NamedFunction;
using $MemberName = ::java::lang::invoke::MemberName;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $MethodHandleStatics = ::java::lang::invoke::MethodHandleStatics;
using $MethodType = ::java::lang::invoke::MethodType;
using $MethodTypeForm = ::java::lang::invoke::MethodTypeForm;
using $SimpleMethodHandle = ::java::lang::invoke::SimpleMethodHandle;
using $Arrays = ::java::util::Arrays;

namespace java {
	namespace lang {
		namespace invoke {

$MethodHandle* DelegatingMethodHandle::asTypeUncached($MethodType* newType) {
	 return this->$MethodHandle::asTypeUncached(newType);
}

bool DelegatingMethodHandle::$assertionsDisabled = false;
$LambdaForm$NamedFunction* DelegatingMethodHandle::NF_getTarget = nullptr;

void DelegatingMethodHandle::init$($MethodHandle* target) {
	DelegatingMethodHandle::init$($($nc(target)->type()), target);
}

void DelegatingMethodHandle::init$($MethodType* type, $MethodHandle* target) {
	$MethodHandle::init$(type, $(chooseDelegatingForm(target)));
}

void DelegatingMethodHandle::init$($MethodType* type, $LambdaForm* form) {
	$MethodHandle::init$(type, form);
}

$MemberName* DelegatingMethodHandle::internalMemberName() {
	return $$nc(getTarget())->internalMemberName();
}

bool DelegatingMethodHandle::isCrackable() {
	$var($MemberName, member, internalMemberName());
	bool var$0 = member != nullptr;
	if (var$0) {
		bool var$2 = member->isResolved();
		bool var$1 = var$2 || member->isMethodHandleInvoke();
		var$0 = var$1 || member->isVarHandleMethodInvoke();
	}
	return var$0;
}

$MethodHandle* DelegatingMethodHandle::viewAsType($MethodType* newType, bool strict) {
	return $$nc(getTarget())->viewAsType(newType, strict);
}

bool DelegatingMethodHandle::isInvokeSpecial() {
	return $$nc(getTarget())->isInvokeSpecial();
}

$Class* DelegatingMethodHandle::internalCallerClass() {
	return $$nc(getTarget())->internalCallerClass();
}

$MethodHandle* DelegatingMethodHandle::copyWith($MethodType* mt, $LambdaForm* lf) {
	$throw($($MethodHandleStatics::newIllegalArgumentException("do not use this"_s)));
	$shouldNotReachHere();
}

$Object* DelegatingMethodHandle::internalProperties() {
	$useLocalObjectStack();
	$var($StringBuilder, var$0, $new($StringBuilder));
	var$0->append("\n& Class="_s);
	var$0->append($($of(this)->getClass()->getSimpleName()));
	var$0->append("\n& Target="_s);
	var$0->append($($$nc(getTarget())->debugString()));
	return $of($str(var$0));
}

$BoundMethodHandle* DelegatingMethodHandle::rebind() {
	return $$nc(getTarget())->rebind();
}

$LambdaForm* DelegatingMethodHandle::chooseDelegatingForm($MethodHandle* target) {
	$init(DelegatingMethodHandle);
	if ($instanceOf($SimpleMethodHandle, target)) {
		return target->internalForm();
	}
	return makeReinvokerForm(target, $MethodTypeForm::LF_DELEGATE, DelegatingMethodHandle::class$, DelegatingMethodHandle::NF_getTarget);
}

$LambdaForm* DelegatingMethodHandle::makeReinvokerForm($MethodHandle* target, int32_t whichCache, Object$* constraint, $LambdaForm$NamedFunction* getTargetFn) {
	$init(DelegatingMethodHandle);
	return makeReinvokerForm(target, whichCache, constraint, true, getTargetFn, nullptr);
}

$LambdaForm* DelegatingMethodHandle::makeReinvokerForm($MethodHandle* target, int32_t whichCache, Object$* constraint, bool forceInline, $LambdaForm$NamedFunction* getTargetFn, $LambdaForm$NamedFunction* preActionFn) {
	$init(DelegatingMethodHandle);
	$useLocalObjectStack();
	$var($MethodType, mtype, $$nc($nc(target)->type())->basicType());
	$LambdaForm$Kind* kind = whichKind(whichCache);
	bool customized = (whichCache < 0 || $nc(mtype)->parameterSlotCount() > $MethodType::MAX_MH_INVOKER_ARITY);
	bool hasPreAction = (preActionFn != nullptr);
	$var($LambdaForm, form, nullptr);
	if (!customized) {
		$assign(form, $$nc($nc(mtype)->form())->cachedLambdaForm(whichCache));
		if (form != nullptr) {
			return form;
		}
	}
	int32_t THIS_DMH = 0;
	int32_t ARG_BASE = 1;
	int32_t ARG_LIMIT = ARG_BASE + $nc(mtype)->parameterCount();
	int32_t nameCursor = ARG_LIMIT;
	int32_t PRE_ACTION = hasPreAction ? nameCursor++ : -1;
	int32_t NEXT_MH = customized ? -1 : nameCursor++;
	int32_t REINVOKE = nameCursor++;
	$var($LambdaForm$NameArray, names, $LambdaForm::arguments(nameCursor - ARG_LIMIT, $(mtype->invokerType())));
	if (!DelegatingMethodHandle::$assertionsDisabled && !($nc(names)->length == nameCursor)) {
		$throwNew($AssertionError);
	}
	$nc(names)->set(THIS_DMH, $($nc($nc(names)->get(THIS_DMH))->withConstraint(constraint)));
	$var($ObjectArray, targetArgs, nullptr);
	if (hasPreAction) {
		names->set(PRE_ACTION, $$new($LambdaForm$Name, preActionFn, $$new($ObjectArray, {names->get(THIS_DMH)})));
	}
	if (customized) {
		$assign(targetArgs, $Arrays::copyOfRange(names, ARG_BASE, ARG_LIMIT, $getClass($ObjectArray)));
		names->set(REINVOKE, $$new($LambdaForm$Name, target, targetArgs));
	} else {
		names->set(NEXT_MH, $$new($LambdaForm$Name, getTargetFn, $$new($ObjectArray, {names->get(THIS_DMH)})));
		$assign(targetArgs, $Arrays::copyOfRange(names, THIS_DMH, ARG_LIMIT, $getClass($ObjectArray)));
		targetArgs->set(0, names->get(NEXT_MH));
		names->set(REINVOKE, $$new($LambdaForm$Name, mtype, targetArgs));
	}
	$assign(form, $new($LambdaForm, ARG_LIMIT, names, forceInline, kind));
	if (!customized) {
		$assign(form, $$nc(mtype->form())->setCachedLambdaForm(whichCache, form));
	}
	return form;
}

$LambdaForm$Kind* DelegatingMethodHandle::whichKind(int32_t whichCache) {
	$init(DelegatingMethodHandle);
	$var($LambdaForm$Kind, var$0, nullptr);
	switch (whichCache) {
	case $MethodTypeForm::LF_REBIND:
		$init($LambdaForm$Kind);
		$assign(var$0, $LambdaForm$Kind::BOUND_REINVOKER);
		break;
	case $MethodTypeForm::LF_DELEGATE:
		$init($LambdaForm$Kind);
		$assign(var$0, $LambdaForm$Kind::DELEGATE);
		break;
	default:
		$init($LambdaForm$Kind);
		$assign(var$0, $LambdaForm$Kind::REINVOKER);
		break;
	}
	return var$0;
}

void DelegatingMethodHandle::clinit$($Class* clazz) {
	$useLocalObjectStack();
	DelegatingMethodHandle::$assertionsDisabled = !DelegatingMethodHandle::class$->desiredAssertionStatus();
	{
		try {
			$load($MethodHandle);
			$var($MemberName, member, $new($MemberName, DelegatingMethodHandle::class$, "getTarget"_s, $($MethodType::methodType($MethodHandle::class$)), 5));
			$load($NoSuchMethodException);
			$assignStatic(DelegatingMethodHandle::NF_getTarget, $new($LambdaForm$NamedFunction, $($$nc($MemberName::getFactory())->resolveOrFail(5, member, DelegatingMethodHandle::class$, -1, $NoSuchMethodException::class$))));
		} catch ($ReflectiveOperationException& ex) {
			$throw($($MethodHandleStatics::newInternalError(ex)));
		}
		$init($MethodHandleStatics);
		$load($DelegatingMethodHandle$Holder);
		$nc($MethodHandleStatics::UNSAFE)->ensureClassInitialized($DelegatingMethodHandle$Holder::class$);
	}
}

DelegatingMethodHandle::DelegatingMethodHandle() {
}

$Class* DelegatingMethodHandle::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"$assertionsDisabled", "Z", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(DelegatingMethodHandle, $assertionsDisabled)},
		{"NF_getTarget", "Ljava/lang/invoke/LambdaForm$NamedFunction;", nullptr, $STATIC | $FINAL, $staticField(DelegatingMethodHandle, NF_getTarget)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"asTypeUncached", "(Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/MethodHandle;", nullptr, $ABSTRACT},
		{"<init>", "(Ljava/lang/invoke/MethodHandle;)V", nullptr, $PROTECTED, $method(DelegatingMethodHandle, init$, void, $MethodHandle*)},
		{"<init>", "(Ljava/lang/invoke/MethodType;Ljava/lang/invoke/MethodHandle;)V", nullptr, $PROTECTED, $method(DelegatingMethodHandle, init$, void, $MethodType*, $MethodHandle*)},
		{"<init>", "(Ljava/lang/invoke/MethodType;Ljava/lang/invoke/LambdaForm;)V", nullptr, $PROTECTED, $method(DelegatingMethodHandle, init$, void, $MethodType*, $LambdaForm*)},
		{"chooseDelegatingForm", "(Ljava/lang/invoke/MethodHandle;)Ljava/lang/invoke/LambdaForm;", nullptr, $PRIVATE | $STATIC, $staticMethod(DelegatingMethodHandle, chooseDelegatingForm, $LambdaForm*, $MethodHandle*)},
		{"copyWith", "(Ljava/lang/invoke/MethodType;Ljava/lang/invoke/LambdaForm;)Ljava/lang/invoke/MethodHandle;", nullptr, 0, $virtualMethod(DelegatingMethodHandle, copyWith, $MethodHandle*, $MethodType*, $LambdaForm*)},
		{"getTarget", "()Ljava/lang/invoke/MethodHandle;", nullptr, $PROTECTED | $ABSTRACT, $virtualMethod(DelegatingMethodHandle, getTarget, $MethodHandle*)},
		{"internalCallerClass", "()Ljava/lang/Class;", "()Ljava/lang/Class<*>;", 0, $virtualMethod(DelegatingMethodHandle, internalCallerClass, $Class*)},
		{"internalMemberName", "()Ljava/lang/invoke/MemberName;", nullptr, 0, $virtualMethod(DelegatingMethodHandle, internalMemberName, $MemberName*)},
		{"internalProperties", "()Ljava/lang/String;", nullptr, 0, $virtualMethod(DelegatingMethodHandle, internalProperties, $Object*)},
		{"isCrackable", "()Z", nullptr, 0, $virtualMethod(DelegatingMethodHandle, isCrackable, bool)},
		{"isInvokeSpecial", "()Z", nullptr, 0, $virtualMethod(DelegatingMethodHandle, isInvokeSpecial, bool)},
		{"makeReinvokerForm", "(Ljava/lang/invoke/MethodHandle;ILjava/lang/Object;Ljava/lang/invoke/LambdaForm$NamedFunction;)Ljava/lang/invoke/LambdaForm;", nullptr, $STATIC, $staticMethod(DelegatingMethodHandle, makeReinvokerForm, $LambdaForm*, $MethodHandle*, int32_t, Object$*, $LambdaForm$NamedFunction*)},
		{"makeReinvokerForm", "(Ljava/lang/invoke/MethodHandle;ILjava/lang/Object;ZLjava/lang/invoke/LambdaForm$NamedFunction;Ljava/lang/invoke/LambdaForm$NamedFunction;)Ljava/lang/invoke/LambdaForm;", nullptr, $STATIC, $staticMethod(DelegatingMethodHandle, makeReinvokerForm, $LambdaForm*, $MethodHandle*, int32_t, Object$*, bool, $LambdaForm$NamedFunction*, $LambdaForm$NamedFunction*)},
		{"rebind", "()Ljava/lang/invoke/BoundMethodHandle;", nullptr, 0, $virtualMethod(DelegatingMethodHandle, rebind, $BoundMethodHandle*)},
		{"viewAsType", "(Ljava/lang/invoke/MethodType;Z)Ljava/lang/invoke/MethodHandle;", nullptr, 0, $virtualMethod(DelegatingMethodHandle, viewAsType, $MethodHandle*, $MethodType*, bool)},
		{"whichKind", "(I)Ljava/lang/invoke/LambdaForm$Kind;", nullptr, $PRIVATE | $STATIC, $staticMethod(DelegatingMethodHandle, whichKind, $LambdaForm$Kind*, int32_t)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.lang.invoke.DelegatingMethodHandle$Holder", "java.lang.invoke.DelegatingMethodHandle", "Holder", $FINAL},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER | $ABSTRACT,
		"java.lang.invoke.DelegatingMethodHandle",
		"java.lang.invoke.MethodHandle",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"java.lang.invoke.DelegatingMethodHandle$Holder"
	};
	$loadClass(DelegatingMethodHandle, name, initialize, &classInfo$$, DelegatingMethodHandle::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(DelegatingMethodHandle);
	});
	return class$;
}

$Class* DelegatingMethodHandle::class$ = nullptr;

		} // invoke
	} // lang
} // java