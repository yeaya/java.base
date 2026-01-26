#include <java/lang/invoke/DirectMethodHandle$Accessor.h>

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

$FieldInfo _DirectMethodHandle$Accessor_FieldInfo_[] = {
	{"$assertionsDisabled", "Z", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(DirectMethodHandle$Accessor, $assertionsDisabled)},
	{"fieldType", "Ljava/lang/Class;", "Ljava/lang/Class<*>;", $FINAL, $field(DirectMethodHandle$Accessor, fieldType)},
	{"fieldOffset", "I", nullptr, $FINAL, $field(DirectMethodHandle$Accessor, fieldOffset)},
	{}
};

$MethodInfo _DirectMethodHandle$Accessor_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/invoke/MethodType;Ljava/lang/invoke/LambdaForm;Ljava/lang/invoke/MemberName;ZI)V", nullptr, $PRIVATE, $method(DirectMethodHandle$Accessor, init$, void, $MethodType*, $LambdaForm*, $MemberName*, bool, int32_t)},
	{"checkCast", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, 0, $virtualMethod(DirectMethodHandle$Accessor, checkCast, $Object*, Object$*)},
	{"copyWith", "(Ljava/lang/invoke/MethodType;Ljava/lang/invoke/LambdaForm;)Ljava/lang/invoke/MethodHandle;", nullptr, 0, $virtualMethod(DirectMethodHandle$Accessor, copyWith, $MethodHandle*, $MethodType*, $LambdaForm*)},
	{"internalProperties", "()Ljava/lang/Object;", nullptr, $VOLATILE | $SYNTHETIC, $virtualMethod(DirectMethodHandle$Accessor, internalProperties, $Object*)},
	{"viewAsType", "(Ljava/lang/invoke/MethodType;Z)Ljava/lang/invoke/MethodHandle;", nullptr, 0, $virtualMethod(DirectMethodHandle$Accessor, viewAsType, $MethodHandle*, $MethodType*, bool)},
	{}
};

$InnerClassInfo _DirectMethodHandle$Accessor_InnerClassesInfo_[] = {
	{"java.lang.invoke.DirectMethodHandle$Accessor", "java.lang.invoke.DirectMethodHandle", "Accessor", $STATIC},
	{}
};

$ClassInfo _DirectMethodHandle$Accessor_ClassInfo_ = {
	$ACC_SUPER,
	"java.lang.invoke.DirectMethodHandle$Accessor",
	"java.lang.invoke.DirectMethodHandle",
	nullptr,
	_DirectMethodHandle$Accessor_FieldInfo_,
	_DirectMethodHandle$Accessor_MethodInfo_,
	nullptr,
	nullptr,
	_DirectMethodHandle$Accessor_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.lang.invoke.DirectMethodHandle"
};

$Object* allocate$DirectMethodHandle$Accessor($Class* clazz) {
	return $of($alloc(DirectMethodHandle$Accessor));
}

bool DirectMethodHandle$Accessor::$assertionsDisabled = false;

void DirectMethodHandle$Accessor::init$($MethodType* mtype, $LambdaForm* form, $MemberName* member, bool crackable, int32_t fieldOffset) {
	$DirectMethodHandle::init$(mtype, form, member, crackable);
	$set(this, fieldType, $nc(member)->getFieldType());
	this->fieldOffset = fieldOffset;
}

$Object* DirectMethodHandle$Accessor::checkCast(Object$* obj) {
	return $of($nc(this->fieldType)->cast(obj));
}

$MethodHandle* DirectMethodHandle$Accessor::copyWith($MethodType* mt, $LambdaForm* lf) {
	return $new(DirectMethodHandle$Accessor, mt, lf, this->member, this->crackable, this->fieldOffset);
}

$MethodHandle* DirectMethodHandle$Accessor::viewAsType($MethodType* newType, bool strict) {
	if (!DirectMethodHandle$Accessor::$assertionsDisabled && !(viewAsTypeChecks(newType, strict))) {
		$throwNew($AssertionError);
	}
	return $new(DirectMethodHandle$Accessor, newType, this->form, this->member, false, this->fieldOffset);
}

$Object* DirectMethodHandle$Accessor::internalProperties() {
	return $of($DirectMethodHandle::internalProperties());
}

void clinit$DirectMethodHandle$Accessor($Class* class$) {
	$load($DirectMethodHandle);
	DirectMethodHandle$Accessor::$assertionsDisabled = !$DirectMethodHandle::class$->desiredAssertionStatus();
}

DirectMethodHandle$Accessor::DirectMethodHandle$Accessor() {
}

$Class* DirectMethodHandle$Accessor::load$($String* name, bool initialize) {
	$loadClass(DirectMethodHandle$Accessor, name, initialize, &_DirectMethodHandle$Accessor_ClassInfo_, clinit$DirectMethodHandle$Accessor, allocate$DirectMethodHandle$Accessor);
	return class$;
}

$Class* DirectMethodHandle$Accessor::class$ = nullptr;

		} // invoke
	} // lang
} // java