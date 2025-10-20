#include <java/lang/invoke/DirectMethodHandle$Interface.h>

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

$FieldInfo _DirectMethodHandle$Interface_FieldInfo_[] = {
	{"$assertionsDisabled", "Z", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(DirectMethodHandle$Interface, $assertionsDisabled)},
	{"refc", "Ljava/lang/Class;", "Ljava/lang/Class<*>;", $PRIVATE | $FINAL, $field(DirectMethodHandle$Interface, refc)},
	{}
};

$MethodInfo _DirectMethodHandle$Interface_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/invoke/MethodType;Ljava/lang/invoke/LambdaForm;Ljava/lang/invoke/MemberName;ZLjava/lang/Class;)V", "(Ljava/lang/invoke/MethodType;Ljava/lang/invoke/LambdaForm;Ljava/lang/invoke/MemberName;ZLjava/lang/Class<*>;)V", $PRIVATE, $method(static_cast<void(DirectMethodHandle$Interface::*)($MethodType*,$LambdaForm*,$MemberName*,bool,$Class*)>(&DirectMethodHandle$Interface::init$))},
	{"checkReceiver", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, 0},
	{"copyWith", "(Ljava/lang/invoke/MethodType;Ljava/lang/invoke/LambdaForm;)Ljava/lang/invoke/MethodHandle;", nullptr, 0},
	{"internalProperties", "()Ljava/lang/Object;", nullptr, $VOLATILE | $SYNTHETIC},
	{"viewAsType", "(Ljava/lang/invoke/MethodType;Z)Ljava/lang/invoke/MethodHandle;", nullptr, 0},
	{}
};

$InnerClassInfo _DirectMethodHandle$Interface_InnerClassesInfo_[] = {
	{"java.lang.invoke.DirectMethodHandle$Interface", "java.lang.invoke.DirectMethodHandle", "Interface", $STATIC},
	{}
};

$ClassInfo _DirectMethodHandle$Interface_ClassInfo_ = {
	$ACC_SUPER,
	"java.lang.invoke.DirectMethodHandle$Interface",
	"java.lang.invoke.DirectMethodHandle",
	nullptr,
	_DirectMethodHandle$Interface_FieldInfo_,
	_DirectMethodHandle$Interface_MethodInfo_,
	nullptr,
	nullptr,
	_DirectMethodHandle$Interface_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.lang.invoke.DirectMethodHandle"
};

$Object* allocate$DirectMethodHandle$Interface($Class* clazz) {
	return $of($alloc(DirectMethodHandle$Interface));
}

bool DirectMethodHandle$Interface::$assertionsDisabled = false;

void DirectMethodHandle$Interface::init$($MethodType* mtype, $LambdaForm* form, $MemberName* member, bool crackable, $Class* refc) {
	$DirectMethodHandle::init$(mtype, form, member, crackable);
	if (!DirectMethodHandle$Interface::$assertionsDisabled && !($nc(refc)->isInterface())) {
		$throwNew($AssertionError, $of(refc));
	}
	$set(this, refc, refc);
}

$MethodHandle* DirectMethodHandle$Interface::copyWith($MethodType* mt, $LambdaForm* lf) {
	return $new(DirectMethodHandle$Interface, mt, lf, this->member, this->crackable, this->refc);
}

$MethodHandle* DirectMethodHandle$Interface::viewAsType($MethodType* newType, bool strict) {
	if (!DirectMethodHandle$Interface::$assertionsDisabled && !(viewAsTypeChecks(newType, strict))) {
		$throwNew($AssertionError);
	}
	return $new(DirectMethodHandle$Interface, newType, this->form, this->member, false, this->refc);
}

$Object* DirectMethodHandle$Interface::checkReceiver(Object$* recv) {
	$useLocalCurrentObjectStackCache();
	if (!$nc(this->refc)->isInstance(recv)) {
		$var($String, msg, $String::format("Receiver class %s does not implement the requested interface %s"_s, $$new($ObjectArray, {
			$($of($nc($of(recv))->getClass()->getName())),
			$($of($nc(this->refc)->getName()))
		})));
		$throwNew($IncompatibleClassChangeError, msg);
	}
	return $of(recv);
}

$Object* DirectMethodHandle$Interface::internalProperties() {
	return $of($DirectMethodHandle::internalProperties());
}

void clinit$DirectMethodHandle$Interface($Class* class$) {
	$load($DirectMethodHandle);
	DirectMethodHandle$Interface::$assertionsDisabled = !$DirectMethodHandle::class$->desiredAssertionStatus();
}

DirectMethodHandle$Interface::DirectMethodHandle$Interface() {
}

$Class* DirectMethodHandle$Interface::load$($String* name, bool initialize) {
	$loadClass(DirectMethodHandle$Interface, name, initialize, &_DirectMethodHandle$Interface_ClassInfo_, clinit$DirectMethodHandle$Interface, allocate$DirectMethodHandle$Interface);
	return class$;
}

$Class* DirectMethodHandle$Interface::class$ = nullptr;

		} // invoke
	} // lang
} // java