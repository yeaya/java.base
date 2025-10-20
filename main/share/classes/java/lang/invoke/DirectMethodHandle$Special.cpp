#include <java/lang/invoke/DirectMethodHandle$Special.h>

#include <java/lang/Array.h>
#include <java/lang/AssertionError.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/IncompatibleClassChangeError.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/invoke/DirectMethodHandle.h>
#include <java/lang/invoke/LambdaForm.h>
#include <java/lang/invoke/MemberName.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodType.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
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

$FieldInfo _DirectMethodHandle$Special_FieldInfo_[] = {
	{"$assertionsDisabled", "Z", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(DirectMethodHandle$Special, $assertionsDisabled)},
	{"caller", "Ljava/lang/Class;", "Ljava/lang/Class<*>;", $PRIVATE | $FINAL, $field(DirectMethodHandle$Special, caller)},
	{}
};

$MethodInfo _DirectMethodHandle$Special_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/invoke/MethodType;Ljava/lang/invoke/LambdaForm;Ljava/lang/invoke/MemberName;ZLjava/lang/Class;)V", "(Ljava/lang/invoke/MethodType;Ljava/lang/invoke/LambdaForm;Ljava/lang/invoke/MemberName;ZLjava/lang/Class<*>;)V", $PRIVATE, $method(static_cast<void(DirectMethodHandle$Special::*)($MethodType*,$LambdaForm*,$MemberName*,bool,$Class*)>(&DirectMethodHandle$Special::init$))},
	{"checkReceiver", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, 0},
	{"copyWith", "(Ljava/lang/invoke/MethodType;Ljava/lang/invoke/LambdaForm;)Ljava/lang/invoke/MethodHandle;", nullptr, 0},
	{"internalProperties", "()Ljava/lang/Object;", nullptr, $VOLATILE | $SYNTHETIC},
	{"isInvokeSpecial", "()Z", nullptr, 0},
	{"viewAsType", "(Ljava/lang/invoke/MethodType;Z)Ljava/lang/invoke/MethodHandle;", nullptr, 0},
	{}
};

$InnerClassInfo _DirectMethodHandle$Special_InnerClassesInfo_[] = {
	{"java.lang.invoke.DirectMethodHandle$Special", "java.lang.invoke.DirectMethodHandle", "Special", $STATIC},
	{}
};

$ClassInfo _DirectMethodHandle$Special_ClassInfo_ = {
	$ACC_SUPER,
	"java.lang.invoke.DirectMethodHandle$Special",
	"java.lang.invoke.DirectMethodHandle",
	nullptr,
	_DirectMethodHandle$Special_FieldInfo_,
	_DirectMethodHandle$Special_MethodInfo_,
	nullptr,
	nullptr,
	_DirectMethodHandle$Special_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.lang.invoke.DirectMethodHandle"
};

$Object* allocate$DirectMethodHandle$Special($Class* clazz) {
	return $of($alloc(DirectMethodHandle$Special));
}

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
	$useLocalCurrentObjectStackCache();
	if (!$nc(this->caller)->isInstance(recv)) {
		$var($String, msg, $String::format("Receiver class %s is not a subclass of caller class %s"_s, $$new($ObjectArray, {
			$($of($nc($of(recv))->getClass()->getName())),
			$($of($nc(this->caller)->getName()))
		})));
		$throwNew($IncompatibleClassChangeError, msg);
	}
	return $of(recv);
}

$Object* DirectMethodHandle$Special::internalProperties() {
	return $of($DirectMethodHandle::internalProperties());
}

void clinit$DirectMethodHandle$Special($Class* class$) {
	$load($DirectMethodHandle);
	DirectMethodHandle$Special::$assertionsDisabled = !$DirectMethodHandle::class$->desiredAssertionStatus();
}

DirectMethodHandle$Special::DirectMethodHandle$Special() {
}

$Class* DirectMethodHandle$Special::load$($String* name, bool initialize) {
	$loadClass(DirectMethodHandle$Special, name, initialize, &_DirectMethodHandle$Special_ClassInfo_, clinit$DirectMethodHandle$Special, allocate$DirectMethodHandle$Special);
	return class$;
}

$Class* DirectMethodHandle$Special::class$ = nullptr;

		} // invoke
	} // lang
} // java