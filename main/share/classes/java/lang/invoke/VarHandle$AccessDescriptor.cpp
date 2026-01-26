#include <java/lang/invoke/VarHandle$AccessDescriptor.h>

#include <java/lang/invoke/MethodType.h>
#include <java/lang/invoke/TypeDescriptor$OfField.h>
#include <java/lang/invoke/VarHandle.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $MethodType = ::java::lang::invoke::MethodType;
using $VarHandle = ::java::lang::invoke::VarHandle;

namespace java {
	namespace lang {
		namespace invoke {

$FieldInfo _VarHandle$AccessDescriptor_FieldInfo_[] = {
	{"symbolicMethodTypeExact", "Ljava/lang/invoke/MethodType;", nullptr, $FINAL, $field(VarHandle$AccessDescriptor, symbolicMethodTypeExact)},
	{"symbolicMethodTypeErased", "Ljava/lang/invoke/MethodType;", nullptr, $FINAL, $field(VarHandle$AccessDescriptor, symbolicMethodTypeErased)},
	{"symbolicMethodTypeInvoker", "Ljava/lang/invoke/MethodType;", nullptr, $FINAL, $field(VarHandle$AccessDescriptor, symbolicMethodTypeInvoker)},
	{"returnType", "Ljava/lang/Class;", "Ljava/lang/Class<*>;", $FINAL, $field(VarHandle$AccessDescriptor, returnType)},
	{"type", "I", nullptr, $FINAL, $field(VarHandle$AccessDescriptor, type)},
	{"mode", "I", nullptr, $FINAL, $field(VarHandle$AccessDescriptor, mode)},
	{}
};

$MethodInfo _VarHandle$AccessDescriptor_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/invoke/MethodType;II)V", nullptr, $PUBLIC, $method(VarHandle$AccessDescriptor, init$, void, $MethodType*, int32_t, int32_t)},
	{}
};

$InnerClassInfo _VarHandle$AccessDescriptor_InnerClassesInfo_[] = {
	{"java.lang.invoke.VarHandle$AccessDescriptor", "java.lang.invoke.VarHandle", "AccessDescriptor", $STATIC | $FINAL},
	{}
};

$ClassInfo _VarHandle$AccessDescriptor_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"java.lang.invoke.VarHandle$AccessDescriptor",
	"java.lang.Object",
	nullptr,
	_VarHandle$AccessDescriptor_FieldInfo_,
	_VarHandle$AccessDescriptor_MethodInfo_,
	nullptr,
	nullptr,
	_VarHandle$AccessDescriptor_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.lang.invoke.VarHandle"
};

$Object* allocate$VarHandle$AccessDescriptor($Class* clazz) {
	return $of($alloc(VarHandle$AccessDescriptor));
}

void VarHandle$AccessDescriptor::init$($MethodType* symbolicMethodType, int32_t type, int32_t mode) {
	$set(this, symbolicMethodTypeExact, symbolicMethodType);
	$set(this, symbolicMethodTypeErased, $nc(symbolicMethodType)->erase());
	$load($VarHandle);
	$set(this, symbolicMethodTypeInvoker, symbolicMethodType->insertParameterTypes(0, $$new($ClassArray, {$VarHandle::class$})));
	$set(this, returnType, $cast($Class, symbolicMethodType->returnType()));
	this->type = type;
	this->mode = mode;
}

VarHandle$AccessDescriptor::VarHandle$AccessDescriptor() {
}

$Class* VarHandle$AccessDescriptor::load$($String* name, bool initialize) {
	$loadClass(VarHandle$AccessDescriptor, name, initialize, &_VarHandle$AccessDescriptor_ClassInfo_, allocate$VarHandle$AccessDescriptor);
	return class$;
}

$Class* VarHandle$AccessDescriptor::class$ = nullptr;

		} // invoke
	} // lang
} // java