#include <java/lang/invoke/DirectMethodHandle$StaticAccessor.h>

#include <java/lang/AssertionError.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
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

$FieldInfo _DirectMethodHandle$StaticAccessor_FieldInfo_[] = {
	{"$assertionsDisabled", "Z", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(DirectMethodHandle$StaticAccessor, $assertionsDisabled)},
	{"fieldType", "Ljava/lang/Class;", "Ljava/lang/Class<*>;", $PRIVATE | $FINAL, $field(DirectMethodHandle$StaticAccessor, fieldType)},
	{"staticBase", "Ljava/lang/Object;", nullptr, $PRIVATE | $FINAL, $field(DirectMethodHandle$StaticAccessor, staticBase)},
	{"staticOffset", "J", nullptr, $PRIVATE | $FINAL, $field(DirectMethodHandle$StaticAccessor, staticOffset)},
	{}
};

$MethodInfo _DirectMethodHandle$StaticAccessor_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/invoke/MethodType;Ljava/lang/invoke/LambdaForm;Ljava/lang/invoke/MemberName;ZLjava/lang/Object;J)V", nullptr, $PRIVATE, $method(static_cast<void(DirectMethodHandle$StaticAccessor::*)($MethodType*,$LambdaForm*,$MemberName*,bool,Object$*,int64_t)>(&DirectMethodHandle$StaticAccessor::init$))},
	{"checkCast", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, 0},
	{"copyWith", "(Ljava/lang/invoke/MethodType;Ljava/lang/invoke/LambdaForm;)Ljava/lang/invoke/MethodHandle;", nullptr, 0},
	{"internalProperties", "()Ljava/lang/Object;", nullptr, $VOLATILE | $SYNTHETIC},
	{"viewAsType", "(Ljava/lang/invoke/MethodType;Z)Ljava/lang/invoke/MethodHandle;", nullptr, 0},
	{}
};

$InnerClassInfo _DirectMethodHandle$StaticAccessor_InnerClassesInfo_[] = {
	{"java.lang.invoke.DirectMethodHandle$StaticAccessor", "java.lang.invoke.DirectMethodHandle", "StaticAccessor", $STATIC},
	{}
};

$ClassInfo _DirectMethodHandle$StaticAccessor_ClassInfo_ = {
	$ACC_SUPER,
	"java.lang.invoke.DirectMethodHandle$StaticAccessor",
	"java.lang.invoke.DirectMethodHandle",
	nullptr,
	_DirectMethodHandle$StaticAccessor_FieldInfo_,
	_DirectMethodHandle$StaticAccessor_MethodInfo_,
	nullptr,
	nullptr,
	_DirectMethodHandle$StaticAccessor_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.lang.invoke.DirectMethodHandle"
};

$Object* allocate$DirectMethodHandle$StaticAccessor($Class* clazz) {
	return $of($alloc(DirectMethodHandle$StaticAccessor));
}

bool DirectMethodHandle$StaticAccessor::$assertionsDisabled = false;

void DirectMethodHandle$StaticAccessor::init$($MethodType* mtype, $LambdaForm* form, $MemberName* member, bool crackable, Object$* staticBase, int64_t staticOffset) {
	$DirectMethodHandle::init$(mtype, form, member, crackable);
	$set(this, fieldType, $nc(member)->getFieldType());
	$set(this, staticBase, staticBase);
	this->staticOffset = staticOffset;
}

$Object* DirectMethodHandle$StaticAccessor::checkCast(Object$* obj) {
	return $of($nc(this->fieldType)->cast(obj));
}

$MethodHandle* DirectMethodHandle$StaticAccessor::copyWith($MethodType* mt, $LambdaForm* lf) {
	return $new(DirectMethodHandle$StaticAccessor, mt, lf, this->member, this->crackable, this->staticBase, this->staticOffset);
}

$MethodHandle* DirectMethodHandle$StaticAccessor::viewAsType($MethodType* newType, bool strict) {
	if (!DirectMethodHandle$StaticAccessor::$assertionsDisabled && !(viewAsTypeChecks(newType, strict))) {
		$throwNew($AssertionError);
	}
	return $new(DirectMethodHandle$StaticAccessor, newType, this->form, this->member, false, this->staticBase, this->staticOffset);
}

$Object* DirectMethodHandle$StaticAccessor::internalProperties() {
	return $of($DirectMethodHandle::internalProperties());
}

void clinit$DirectMethodHandle$StaticAccessor($Class* class$) {
	$load($DirectMethodHandle);
	DirectMethodHandle$StaticAccessor::$assertionsDisabled = !$DirectMethodHandle::class$->desiredAssertionStatus();
}

DirectMethodHandle$StaticAccessor::DirectMethodHandle$StaticAccessor() {
}

$Class* DirectMethodHandle$StaticAccessor::load$($String* name, bool initialize) {
	$loadClass(DirectMethodHandle$StaticAccessor, name, initialize, &_DirectMethodHandle$StaticAccessor_ClassInfo_, clinit$DirectMethodHandle$StaticAccessor, allocate$DirectMethodHandle$StaticAccessor);
	return class$;
}

$Class* DirectMethodHandle$StaticAccessor::class$ = nullptr;

		} // invoke
	} // lang
} // java