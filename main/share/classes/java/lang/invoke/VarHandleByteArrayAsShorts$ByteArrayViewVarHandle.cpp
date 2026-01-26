#include <java/lang/invoke/VarHandleByteArrayAsShorts$ByteArrayViewVarHandle.h>

#include <java/lang/invoke/VarForm.h>
#include <java/lang/invoke/VarHandle.h>
#include <java/lang/invoke/VarHandleByteArrayAsShorts.h>
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

$FieldInfo _VarHandleByteArrayAsShorts$ByteArrayViewVarHandle_FieldInfo_[] = {
	{"be", "Z", nullptr, $FINAL, $field(VarHandleByteArrayAsShorts$ByteArrayViewVarHandle, be)},
	{}
};

$MethodInfo _VarHandleByteArrayAsShorts$ByteArrayViewVarHandle_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/invoke/VarForm;ZZ)V", nullptr, 0, $method(VarHandleByteArrayAsShorts$ByteArrayViewVarHandle, init$, void, $VarForm*, bool, bool)},
	{}
};

$InnerClassInfo _VarHandleByteArrayAsShorts$ByteArrayViewVarHandle_InnerClassesInfo_[] = {
	{"java.lang.invoke.VarHandleByteArrayAsShorts$ByteArrayViewVarHandle", "java.lang.invoke.VarHandleByteArrayAsShorts", "ByteArrayViewVarHandle", $PRIVATE | $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _VarHandleByteArrayAsShorts$ByteArrayViewVarHandle_ClassInfo_ = {
	$ACC_SUPER | $ABSTRACT,
	"java.lang.invoke.VarHandleByteArrayAsShorts$ByteArrayViewVarHandle",
	"java.lang.invoke.VarHandle",
	nullptr,
	_VarHandleByteArrayAsShorts$ByteArrayViewVarHandle_FieldInfo_,
	_VarHandleByteArrayAsShorts$ByteArrayViewVarHandle_MethodInfo_,
	nullptr,
	nullptr,
	_VarHandleByteArrayAsShorts$ByteArrayViewVarHandle_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.lang.invoke.VarHandleByteArrayAsShorts"
};

$Object* allocate$VarHandleByteArrayAsShorts$ByteArrayViewVarHandle($Class* clazz) {
	return $of($alloc(VarHandleByteArrayAsShorts$ByteArrayViewVarHandle));
}

void VarHandleByteArrayAsShorts$ByteArrayViewVarHandle::init$($VarForm* form, bool be, bool exact) {
	$VarHandle::init$(form, exact);
	this->be = be;
}

VarHandleByteArrayAsShorts$ByteArrayViewVarHandle::VarHandleByteArrayAsShorts$ByteArrayViewVarHandle() {
}

$Class* VarHandleByteArrayAsShorts$ByteArrayViewVarHandle::load$($String* name, bool initialize) {
	$loadClass(VarHandleByteArrayAsShorts$ByteArrayViewVarHandle, name, initialize, &_VarHandleByteArrayAsShorts$ByteArrayViewVarHandle_ClassInfo_, allocate$VarHandleByteArrayAsShorts$ByteArrayViewVarHandle);
	return class$;
}

$Class* VarHandleByteArrayAsShorts$ByteArrayViewVarHandle::class$ = nullptr;

		} // invoke
	} // lang
} // java