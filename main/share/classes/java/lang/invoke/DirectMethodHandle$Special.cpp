#include <java/lang/invoke/DirectMethodHandle$Special.h>
#include <java/lang/AssertionError.h>
#include <java/lang/IncompatibleClassChangeError.h>
#include <java/lang/invoke/DirectMethodHandle.h>
#include <java/lang/invoke/LambdaForm.h>
#include <java/lang/invoke/MemberName.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodType.h>
#include <jcpp.h>

using $AssertionError = ::java::lang::AssertionError;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IncompatibleClassChangeError = ::java::lang::IncompatibleClassChangeError;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $DirectMethodHandle = ::java::lang::invoke::DirectMethodHandle;
using $LambdaForm = ::java::lang::invoke::LambdaForm;
using $MemberName = ::java::lang::invoke::MemberName;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $MethodType = ::java::lang::invoke::MethodType;

namespace java {
	namespace lang {
		namespace invoke {

bool DirectMethodHandle$Special::$assertionsDisabled = false;

void DirectMethodHandle$Special::init$($MethodType* mtype, $LambdaForm* form, $MemberName* member, bool crackable, $Class* caller) {
	$DirectMethodHandle::init$(mtype, form, member, crackable);
	$set(this, caller, caller);
}

bool DirectMethodHandle$Special::isInvokeSpecial() {
	return true;
}

$MethodHandle* DirectMethodHandle$Special::copyWith($MethodType* mt, $LambdaForm* lf) {
	return $new(DirectMethodHandle$Special, mt, lf, this->member, this->crackable, this->caller);
}

$MethodHandle* DirectMethodHandle$Special::viewAsType($MethodType* newType, bool strict) {
	if (!DirectMethodHandle$Special::$assertionsDisabled && !(viewAsTypeChecks(newType, strict))) {
		$throwNew($AssertionError);
	}
	return $new(DirectMethodHandle$Special, newType, this->form, this->member, false, this->caller);
}

$Object* DirectMethodHandle$Special::checkReceiver(Object$* recv) {
	$useLocalObjectStack();
	if (!$nc(this->caller)->isInstance(recv)) {
		$var($String, msg, $String::format("Receiver class %s is not a subclass of caller class %s"_s, $$new($ObjectArray, {
			$($nc($of(recv))->getClass()->getName()),
			$(this->caller->getName())
		})));
		$throwNew($IncompatibleClassChangeError, msg);
	}
	return $of(recv);
}

$Object* DirectMethodHandle$Special::internalProperties() {
	return $DirectMethodHandle::internalProperties();
}

void DirectMethodHandle$Special::clinit$($Class* clazz) {
	$load($DirectMethodHandle);
	DirectMethodHandle$Special::$assertionsDisabled = !$DirectMethodHandle::class$->desiredAssertionStatus();
}

DirectMethodHandle$Special::DirectMethodHandle$Special() {
}

$Class* DirectMethodHandle$Special::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"$assertionsDisabled", "Z", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(DirectMethodHandle$Special, $assertionsDisabled)},
		{"caller", "Ljava/lang/Class;", "Ljava/lang/Class<*>;", $PRIVATE | $FINAL, $field(DirectMethodHandle$Special, caller)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/invoke/MethodType;Ljava/lang/invoke/LambdaForm;Ljava/lang/invoke/MemberName;ZLjava/lang/Class;)V", "(Ljava/lang/invoke/MethodType;Ljava/lang/invoke/LambdaForm;Ljava/lang/invoke/MemberName;ZLjava/lang/Class<*>;)V", $PRIVATE, $method(DirectMethodHandle$Special, init$, void, $MethodType*, $LambdaForm*, $MemberName*, bool, $Class*)},
		{"checkReceiver", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, 0, $virtualMethod(DirectMethodHandle$Special, checkReceiver, $Object*, Object$*)},
		{"copyWith", "(Ljava/lang/invoke/MethodType;Ljava/lang/invoke/LambdaForm;)Ljava/lang/invoke/MethodHandle;", nullptr, 0, $virtualMethod(DirectMethodHandle$Special, copyWith, $MethodHandle*, $MethodType*, $LambdaForm*)},
		{"internalProperties", "()Ljava/lang/Object;", nullptr, $VOLATILE | $SYNTHETIC, $virtualMethod(DirectMethodHandle$Special, internalProperties, $Object*)},
		{"isInvokeSpecial", "()Z", nullptr, 0, $virtualMethod(DirectMethodHandle$Special, isInvokeSpecial, bool)},
		{"viewAsType", "(Ljava/lang/invoke/MethodType;Z)Ljava/lang/invoke/MethodHandle;", nullptr, 0, $virtualMethod(DirectMethodHandle$Special, viewAsType, $MethodHandle*, $MethodType*, bool)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.lang.invoke.DirectMethodHandle$Special", "java.lang.invoke.DirectMethodHandle", "Special", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"java.lang.invoke.DirectMethodHandle$Special",
		"java.lang.invoke.DirectMethodHandle",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.lang.invoke.DirectMethodHandle"
	};
	$loadClass(DirectMethodHandle$Special, name, initialize, &classInfo$$, DirectMethodHandle$Special::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(DirectMethodHandle$Special);
	});
	return class$;
}

$Class* DirectMethodHandle$Special::class$ = nullptr;

		} // invoke
	} // lang
} // java