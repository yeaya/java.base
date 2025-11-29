#include <java/lang/invoke/VarHandleByteArrayAsChars$ByteArrayViewVarHandle.h>

#include <java/lang/invoke/VarForm.h>
#include <java/lang/invoke/VarHandle.h>
#include <java/lang/invoke/VarHandleByteArrayAsChars.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $VarForm = ::java::lang::invoke::VarForm;
using $VarHandle = ::java::lang::invoke::VarHandle;

namespace java {
	namespace lang {
		namespace invoke {

$FieldInfo _VarHandleByteArrayAsChars$ByteArrayViewVarHandle_FieldInfo_[] = {
	{"be", "Z", nullptr, $FINAL, $field(VarHandleByteArrayAsChars$ByteArrayViewVarHandle, be)},
	{}
};

$MethodInfo _VarHandleByteArrayAsChars$ByteArrayViewVarHandle_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/invoke/VarForm;ZZ)V", nullptr, 0, $method(static_cast<void(VarHandleByteArrayAsChars$ByteArrayViewVarHandle::*)($VarForm*,bool,bool)>(&VarHandleByteArrayAsChars$ByteArrayViewVarHandle::init$))},
	{}
};

$InnerClassInfo _VarHandleByteArrayAsChars$ByteArrayViewVarHandle_InnerClassesInfo_[] = {
	{"java.lang.invoke.VarHandleByteArrayAsChars$ByteArrayViewVarHandle", "java.lang.invoke.VarHandleByteArrayAsChars", "ByteArrayViewVarHandle", $PRIVATE | $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _VarHandleByteArrayAsChars$ByteArrayViewVarHandle_ClassInfo_ = {
	$ACC_SUPER | $ABSTRACT,
	"java.lang.invoke.VarHandleByteArrayAsChars$ByteArrayViewVarHandle",
	"java.lang.invoke.VarHandle",
	nullptr,
	_VarHandleByteArrayAsChars$ByteArrayViewVarHandle_FieldInfo_,
	_VarHandleByteArrayAsChars$ByteArrayViewVarHandle_MethodInfo_,
	nullptr,
	nullptr,
	_VarHandleByteArrayAsChars$ByteArrayViewVarHandle_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.lang.invoke.VarHandleByteArrayAsChars"
};

$Object* allocate$VarHandleByteArrayAsChars$ByteArrayViewVarHandle($Class* clazz) {
	return $of($alloc(VarHandleByteArrayAsChars$ByteArrayViewVarHandle));
}

void VarHandleByteArrayAsChars$ByteArrayViewVarHandle::init$($VarForm* form, bool be, bool exact) {
	$VarHandle::init$(form, exact);
	this->be = be;
}

VarHandleByteArrayAsChars$ByteArrayViewVarHandle::VarHandleByteArrayAsChars$ByteArrayViewVarHandle() {
}

$Class* VarHandleByteArrayAsChars$ByteArrayViewVarHandle::load$($String* name, bool initialize) {
	$loadClass(VarHandleByteArrayAsChars$ByteArrayViewVarHandle, name, initialize, &_VarHandleByteArrayAsChars$ByteArrayViewVarHandle_ClassInfo_, allocate$VarHandleByteArrayAsChars$ByteArrayViewVarHandle);
	return class$;
}

$Class* VarHandleByteArrayAsChars$ByteArrayViewVarHandle::class$ = nullptr;

		} // invoke
	} // lang
} // java