#include <java/lang/invoke/DirectMethodHandle$Interface.h>
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

bool DirectMethodHandle$Interface::$assertionsDisabled = false;

void DirectMethodHandle$Interface::init$($MethodType* mtype, $LambdaForm* form, $MemberName* member, bool crackable, $Class* refc) {
	$DirectMethodHandle::init$(mtype, form, member, crackable);
	if (!DirectMethodHandle$Interface::$assertionsDisabled && !($nc(refc)->isInterface())) {
		$throwNew($AssertionError, refc);
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
	$useLocalObjectStack();
	if (!$nc(this->refc)->isInstance(recv)) {
		$var($String, msg, $String::format("Receiver class %s does not implement the requested interface %s"_s, $$new($ObjectArray, {
			$($nc($of(recv))->getClass()->getName()),
			$(this->refc->getName())
		})));
		$throwNew($IncompatibleClassChangeError, msg);
	}
	return $of(recv);
}

$Object* DirectMethodHandle$Interface::internalProperties() {
	return $DirectMethodHandle::internalProperties();
}

void DirectMethodHandle$Interface::clinit$($Class* clazz) {
	$load($DirectMethodHandle);
	DirectMethodHandle$Interface::$assertionsDisabled = !$DirectMethodHandle::class$->desiredAssertionStatus();
}

DirectMethodHandle$Interface::DirectMethodHandle$Interface() {
}

$Class* DirectMethodHandle$Interface::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"$assertionsDisabled", "Z", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(DirectMethodHandle$Interface, $assertionsDisabled)},
		{"refc", "Ljava/lang/Class;", "Ljava/lang/Class<*>;", $PRIVATE | $FINAL, $field(DirectMethodHandle$Interface, refc)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/invoke/MethodType;Ljava/lang/invoke/LambdaForm;Ljava/lang/invoke/MemberName;ZLjava/lang/Class;)V", "(Ljava/lang/invoke/MethodType;Ljava/lang/invoke/LambdaForm;Ljava/lang/invoke/MemberName;ZLjava/lang/Class<*>;)V", $PRIVATE, $method(DirectMethodHandle$Interface, init$, void, $MethodType*, $LambdaForm*, $MemberName*, bool, $Class*)},
		{"checkReceiver", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, 0, $virtualMethod(DirectMethodHandle$Interface, checkReceiver, $Object*, Object$*)},
		{"copyWith", "(Ljava/lang/invoke/MethodType;Ljava/lang/invoke/LambdaForm;)Ljava/lang/invoke/MethodHandle;", nullptr, 0, $virtualMethod(DirectMethodHandle$Interface, copyWith, $MethodHandle*, $MethodType*, $LambdaForm*)},
		{"internalProperties", "()Ljava/lang/Object;", nullptr, $VOLATILE | $SYNTHETIC, $virtualMethod(DirectMethodHandle$Interface, internalProperties, $Object*)},
		{"viewAsType", "(Ljava/lang/invoke/MethodType;Z)Ljava/lang/invoke/MethodHandle;", nullptr, 0, $virtualMethod(DirectMethodHandle$Interface, viewAsType, $MethodHandle*, $MethodType*, bool)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.lang.invoke.DirectMethodHandle$Interface", "java.lang.invoke.DirectMethodHandle", "Interface", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"java.lang.invoke.DirectMethodHandle$Interface",
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
	$loadClass(DirectMethodHandle$Interface, name, initialize, &classInfo$$, DirectMethodHandle$Interface::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(DirectMethodHandle$Interface);
	});
	return class$;
}

$Class* DirectMethodHandle$Interface::class$ = nullptr;

		} // invoke
	} // lang
} // java