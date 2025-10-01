#include <java/lang/invoke/MethodHandleImpl$WrappedMember.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/invoke/DelegatingMethodHandle.h>
#include <java/lang/invoke/MemberName.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandleImpl.h>
#include <java/lang/invoke/MethodType.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $DelegatingMethodHandle = ::java::lang::invoke::DelegatingMethodHandle;
using $MemberName = ::java::lang::invoke::MemberName;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $MethodHandleImpl = ::java::lang::invoke::MethodHandleImpl;
using $MethodType = ::java::lang::invoke::MethodType;

namespace java {
	namespace lang {
		namespace invoke {

$FieldInfo _MethodHandleImpl$WrappedMember_FieldInfo_[] = {
	{"target", "Ljava/lang/invoke/MethodHandle;", nullptr, $PRIVATE | $FINAL, $field(MethodHandleImpl$WrappedMember, target)},
	{"member", "Ljava/lang/invoke/MemberName;", nullptr, $PRIVATE | $FINAL, $field(MethodHandleImpl$WrappedMember, member)},
	{"callerClass", "Ljava/lang/Class;", "Ljava/lang/Class<*>;", $PRIVATE | $FINAL, $field(MethodHandleImpl$WrappedMember, callerClass)},
	{"isInvokeSpecial", "Z", nullptr, $PRIVATE | $FINAL, $field(MethodHandleImpl$WrappedMember, isInvokeSpecial$)},
	{}
};

$MethodInfo _MethodHandleImpl$WrappedMember_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/invoke/MethodHandle;Ljava/lang/invoke/MethodType;Ljava/lang/invoke/MemberName;ZLjava/lang/Class;)V", "(Ljava/lang/invoke/MethodHandle;Ljava/lang/invoke/MethodType;Ljava/lang/invoke/MemberName;ZLjava/lang/Class<*>;)V", $PRIVATE, $method(static_cast<void(MethodHandleImpl$WrappedMember::*)($MethodHandle*,$MethodType*,$MemberName*,bool,$Class*)>(&MethodHandleImpl$WrappedMember::init$))},
	{"asTypeUncached", "(Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/MethodHandle;", nullptr, $PUBLIC},
	{"getTarget", "()Ljava/lang/invoke/MethodHandle;", nullptr, $PROTECTED},
	{"internalCallerClass", "()Ljava/lang/Class;", "()Ljava/lang/Class<*>;", 0},
	{"internalMemberName", "()Ljava/lang/invoke/MemberName;", nullptr, 0},
	{"isInvokeSpecial", "()Z", nullptr, 0},
	{}
};

$InnerClassInfo _MethodHandleImpl$WrappedMember_InnerClassesInfo_[] = {
	{"java.lang.invoke.MethodHandleImpl$WrappedMember", "java.lang.invoke.MethodHandleImpl", "WrappedMember", $PRIVATE | $STATIC | $FINAL},
	{}
};

$ClassInfo _MethodHandleImpl$WrappedMember_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"java.lang.invoke.MethodHandleImpl$WrappedMember",
	"java.lang.invoke.DelegatingMethodHandle",
	nullptr,
	_MethodHandleImpl$WrappedMember_FieldInfo_,
	_MethodHandleImpl$WrappedMember_MethodInfo_,
	nullptr,
	nullptr,
	_MethodHandleImpl$WrappedMember_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.lang.invoke.MethodHandleImpl"
};

$Object* allocate$MethodHandleImpl$WrappedMember($Class* clazz) {
	return $of($alloc(MethodHandleImpl$WrappedMember));
}

void MethodHandleImpl$WrappedMember::init$($MethodHandle* target, $MethodType* type, $MemberName* member, bool isInvokeSpecial, $Class* callerClass) {
	$DelegatingMethodHandle::init$(type, target);
	$set(this, target, target);
	$set(this, member, member);
	$set(this, callerClass, callerClass);
	this->isInvokeSpecial$ = isInvokeSpecial;
}

$MemberName* MethodHandleImpl$WrappedMember::internalMemberName() {
	return this->member;
}

$Class* MethodHandleImpl$WrappedMember::internalCallerClass() {
	return this->callerClass;
}

bool MethodHandleImpl$WrappedMember::isInvokeSpecial() {
	return this->isInvokeSpecial$;
}

$MethodHandle* MethodHandleImpl$WrappedMember::getTarget() {
	return this->target;
}

$MethodHandle* MethodHandleImpl$WrappedMember::asTypeUncached($MethodType* newType) {
	return $assignField(this, asTypeCache, $nc(this->target)->asType(newType));
}

MethodHandleImpl$WrappedMember::MethodHandleImpl$WrappedMember() {
}

$Class* MethodHandleImpl$WrappedMember::load$($String* name, bool initialize) {
	$loadClass(MethodHandleImpl$WrappedMember, name, initialize, &_MethodHandleImpl$WrappedMember_ClassInfo_, allocate$MethodHandleImpl$WrappedMember);
	return class$;
}

$Class* MethodHandleImpl$WrappedMember::class$ = nullptr;

		} // invoke
	} // lang
} // java