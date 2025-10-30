#include <java/lang/invoke/VarHandleByteArrayAsDoubles$ByteArrayViewVarHandle.h>

#include <java/lang/invoke/VarForm.h>
#include <java/lang/invoke/VarHandle.h>
#include <java/lang/invoke/VarHandleByteArrayAsDoubles.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $VarForm = ::java::lang::invoke::VarForm;
using $VarHandle = ::java::lang::invoke::VarHandle;
using $VarHandleByteArrayAsDoubles = ::java::lang::invoke::VarHandleByteArrayAsDoubles;

namespace java {
	namespace lang {
		namespace invoke {

$FieldInfo _VarHandleByteArrayAsDoubles$ByteArrayViewVarHandle_FieldInfo_[] = {
	{"be", "Z", nullptr, $FINAL, $field(VarHandleByteArrayAsDoubles$ByteArrayViewVarHandle, be)},
	{}
};

$MethodInfo _VarHandleByteArrayAsDoubles$ByteArrayViewVarHandle_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/invoke/VarForm;ZZ)V", nullptr, 0, $method(static_cast<void(VarHandleByteArrayAsDoubles$ByteArrayViewVarHandle::*)($VarForm*,bool,bool)>(&VarHandleByteArrayAsDoubles$ByteArrayViewVarHandle::init$))},
	{}
};

$InnerClassInfo _VarHandleByteArrayAsDoubles$ByteArrayViewVarHandle_InnerClassesInfo_[] = {
	{"java.lang.invoke.VarHandleByteArrayAsDoubles$ByteArrayViewVarHandle", "java.lang.invoke.VarHandleByteArrayAsDoubles", "ByteArrayViewVarHandle", $PRIVATE | $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _VarHandleByteArrayAsDoubles$ByteArrayViewVarHandle_ClassInfo_ = {
	$ACC_SUPER | $ABSTRACT,
	"java.lang.invoke.VarHandleByteArrayAsDoubles$ByteArrayViewVarHandle",
	"java.lang.invoke.VarHandle",
	nullptr,
	_VarHandleByteArrayAsDoubles$ByteArrayViewVarHandle_FieldInfo_,
	_VarHandleByteArrayAsDoubles$ByteArrayViewVarHandle_MethodInfo_,
	nullptr,
	nullptr,
	_VarHandleByteArrayAsDoubles$ByteArrayViewVarHandle_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.lang.invoke.VarHandleByteArrayAsDoubles"
};

$Object* allocate$VarHandleByteArrayAsDoubles$ByteArrayViewVarHandle($Class* clazz) {
	return $of($alloc(VarHandleByteArrayAsDoubles$ByteArrayViewVarHandle));
}

void VarHandleByteArrayAsDoubles$ByteArrayViewVarHandle::init$($VarForm* form, bool be, bool exact) {
	$VarHandle::init$(form, exact);
	this->be = be;
}

VarHandleByteArrayAsDoubles$ByteArrayViewVarHandle::VarHandleByteArrayAsDoubles$ByteArrayViewVarHandle() {
}

$Class* VarHandleByteArrayAsDoubles$ByteArrayViewVarHandle::load$($String* name, bool initialize) {
	$loadClass(VarHandleByteArrayAsDoubles$ByteArrayViewVarHandle, name, initialize, &_VarHandleByteArrayAsDoubles$ByteArrayViewVarHandle_ClassInfo_, allocate$VarHandleByteArrayAsDoubles$ByteArrayViewVarHandle);
	return class$;
}

$Class* VarHandleByteArrayAsDoubles$ByteArrayViewVarHandle::class$ = nullptr;

		} // invoke
	} // lang
} // java