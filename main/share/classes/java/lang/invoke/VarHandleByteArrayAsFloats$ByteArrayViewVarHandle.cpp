#include <java/lang/invoke/VarHandleByteArrayAsFloats$ByteArrayViewVarHandle.h>

#include <java/lang/invoke/VarForm.h>
#include <java/lang/invoke/VarHandle.h>
#include <java/lang/invoke/VarHandleByteArrayAsFloats.h>
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

$FieldInfo _VarHandleByteArrayAsFloats$ByteArrayViewVarHandle_FieldInfo_[] = {
	{"be", "Z", nullptr, $FINAL, $field(VarHandleByteArrayAsFloats$ByteArrayViewVarHandle, be)},
	{}
};

$MethodInfo _VarHandleByteArrayAsFloats$ByteArrayViewVarHandle_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/invoke/VarForm;ZZ)V", nullptr, 0, $method(VarHandleByteArrayAsFloats$ByteArrayViewVarHandle, init$, void, $VarForm*, bool, bool)},
	{}
};

$InnerClassInfo _VarHandleByteArrayAsFloats$ByteArrayViewVarHandle_InnerClassesInfo_[] = {
	{"java.lang.invoke.VarHandleByteArrayAsFloats$ByteArrayViewVarHandle", "java.lang.invoke.VarHandleByteArrayAsFloats", "ByteArrayViewVarHandle", $PRIVATE | $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _VarHandleByteArrayAsFloats$ByteArrayViewVarHandle_ClassInfo_ = {
	$ACC_SUPER | $ABSTRACT,
	"java.lang.invoke.VarHandleByteArrayAsFloats$ByteArrayViewVarHandle",
	"java.lang.invoke.VarHandle",
	nullptr,
	_VarHandleByteArrayAsFloats$ByteArrayViewVarHandle_FieldInfo_,
	_VarHandleByteArrayAsFloats$ByteArrayViewVarHandle_MethodInfo_,
	nullptr,
	nullptr,
	_VarHandleByteArrayAsFloats$ByteArrayViewVarHandle_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.lang.invoke.VarHandleByteArrayAsFloats"
};

$Object* allocate$VarHandleByteArrayAsFloats$ByteArrayViewVarHandle($Class* clazz) {
	return $of($alloc(VarHandleByteArrayAsFloats$ByteArrayViewVarHandle));
}

void VarHandleByteArrayAsFloats$ByteArrayViewVarHandle::init$($VarForm* form, bool be, bool exact) {
	$VarHandle::init$(form, exact);
	this->be = be;
}

VarHandleByteArrayAsFloats$ByteArrayViewVarHandle::VarHandleByteArrayAsFloats$ByteArrayViewVarHandle() {
}

$Class* VarHandleByteArrayAsFloats$ByteArrayViewVarHandle::load$($String* name, bool initialize) {
	$loadClass(VarHandleByteArrayAsFloats$ByteArrayViewVarHandle, name, initialize, &_VarHandleByteArrayAsFloats$ByteArrayViewVarHandle_ClassInfo_, allocate$VarHandleByteArrayAsFloats$ByteArrayViewVarHandle);
	return class$;
}

$Class* VarHandleByteArrayAsFloats$ByteArrayViewVarHandle::class$ = nullptr;

		} // invoke
	} // lang
} // java