#include <java/lang/invoke/DirectMethodHandle$Constructor.h>
#include <java/lang/AssertionError.h>
#include <java/lang/invoke/DirectMethodHandle.h>
#include <java/lang/invoke/LambdaForm.h>
#include <java/lang/invoke/MemberName.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodType.h>
#include <jcpp.h>

using $AssertionError = ::java::lang::AssertionError;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
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

bool DirectMethodHandle$Constructor::$assertionsDisabled = false;

void DirectMethodHandle$Constructor::init$($MethodType* mtype, $LambdaForm* form, $MemberName* constructor, bool crackable, $MemberName* initMethod, $Class* instanceClass) {
	$DirectMethodHandle::init$(mtype, form, constructor, crackable);
	$set(this, initMethod, initMethod);
	$set(this, instanceClass, instanceClass);
	if (!DirectMethodHandle$Constructor::$assertionsDisabled && !($nc(initMethod)->isResolved())) {
		$throwNew($AssertionError);
	}
}

$MethodHandle* DirectMethodHandle$Constructor::copyWith($MethodType* mt, $LambdaForm* lf) {
	return $new(DirectMethodHandle$Constructor, mt, lf, this->member, this->crackable, this->initMethod, this->instanceClass);
}

$MethodHandle* DirectMethodHandle$Constructor::viewAsType($MethodType* newType, bool strict) {
	if (!DirectMethodHandle$Constructor::$assertionsDisabled && !(viewAsTypeChecks(newType, strict))) {
		$throwNew($AssertionError);
	}
	return $new(DirectMethodHandle$Constructor, newType, this->form, this->member, false, this->initMethod, this->instanceClass);
}

$Object* DirectMethodHandle$Constructor::internalProperties() {
	return $DirectMethodHandle::internalProperties();
}

void DirectMethodHandle$Constructor::clinit$($Class* clazz) {
	$load($DirectMethodHandle);
	DirectMethodHandle$Constructor::$assertionsDisabled = !$DirectMethodHandle::class$->desiredAssertionStatus();
}

DirectMethodHandle$Constructor::DirectMethodHandle$Constructor() {
}

$Class* DirectMethodHandle$Constructor::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"$assertionsDisabled", "Z", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(DirectMethodHandle$Constructor, $assertionsDisabled)},
		{"initMethod", "Ljava/lang/invoke/MemberName;", nullptr, $FINAL, $field(DirectMethodHandle$Constructor, initMethod)},
		{"instanceClass", "Ljava/lang/Class;", "Ljava/lang/Class<*>;", $FINAL, $field(DirectMethodHandle$Constructor, instanceClass)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/invoke/MethodType;Ljava/lang/invoke/LambdaForm;Ljava/lang/invoke/MemberName;ZLjava/lang/invoke/MemberName;Ljava/lang/Class;)V", "(Ljava/lang/invoke/MethodType;Ljava/lang/invoke/LambdaForm;Ljava/lang/invoke/MemberName;ZLjava/lang/invoke/MemberName;Ljava/lang/Class<*>;)V", $PRIVATE, $method(DirectMethodHandle$Constructor, init$, void, $MethodType*, $LambdaForm*, $MemberName*, bool, $MemberName*, $Class*)},
		{"copyWith", "(Ljava/lang/invoke/MethodType;Ljava/lang/invoke/LambdaForm;)Ljava/lang/invoke/MethodHandle;", nullptr, 0, $virtualMethod(DirectMethodHandle$Constructor, copyWith, $MethodHandle*, $MethodType*, $LambdaForm*)},
		{"internalProperties", "()Ljava/lang/Object;", nullptr, $VOLATILE | $SYNTHETIC, $virtualMethod(DirectMethodHandle$Constructor, internalProperties, $Object*)},
		{"viewAsType", "(Ljava/lang/invoke/MethodType;Z)Ljava/lang/invoke/MethodHandle;", nullptr, 0, $virtualMethod(DirectMethodHandle$Constructor, viewAsType, $MethodHandle*, $MethodType*, bool)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.lang.invoke.DirectMethodHandle$Constructor", "java.lang.invoke.DirectMethodHandle", "Constructor", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"java.lang.invoke.DirectMethodHandle$Constructor",
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
	$loadClass(DirectMethodHandle$Constructor, name, initialize, &classInfo$$, DirectMethodHandle$Constructor::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(DirectMethodHandle$Constructor);
	});
	return class$;
}

$Class* DirectMethodHandle$Constructor::class$ = nullptr;

		} // invoke
	} // lang
} // java