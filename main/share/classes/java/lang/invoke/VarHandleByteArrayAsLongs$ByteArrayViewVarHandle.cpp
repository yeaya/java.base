#include <java/lang/invoke/VarHandleByteArrayAsLongs$ByteArrayViewVarHandle.h>

#include <java/lang/invoke/VarForm.h>
#include <java/lang/invoke/VarHandle.h>
#include <java/lang/invoke/VarHandleByteArrayAsLongs.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $VarForm = ::java::lang::invoke::VarForm;
using $VarHandle = ::java::lang::invoke::VarHandle;
using $VarHandleByteArrayAsLongs = ::java::lang::invoke::VarHandleByteArrayAsLongs;

namespace java {
	namespace lang {
		namespace invoke {

$FieldInfo _VarHandleByteArrayAsLongs$ByteArrayViewVarHandle_FieldInfo_[] = {
	{"be", "Z", nullptr, $FINAL, $field(VarHandleByteArrayAsLongs$ByteArrayViewVarHandle, be)},
	{}
};

$MethodInfo _VarHandleByteArrayAsLongs$ByteArrayViewVarHandle_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/invoke/VarForm;ZZ)V", nullptr, 0, $method(static_cast<void(VarHandleByteArrayAsLongs$ByteArrayViewVarHandle::*)($VarForm*,bool,bool)>(&VarHandleByteArrayAsLongs$ByteArrayViewVarHandle::init$))},
	{}
};

$InnerClassInfo _VarHandleByteArrayAsLongs$ByteArrayViewVarHandle_InnerClassesInfo_[] = {
	{"java.lang.invoke.VarHandleByteArrayAsLongs$ByteArrayViewVarHandle", "java.lang.invoke.VarHandleByteArrayAsLongs", "ByteArrayViewVarHandle", $PRIVATE | $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _VarHandleByteArrayAsLongs$ByteArrayViewVarHandle_ClassInfo_ = {
	$ACC_SUPER | $ABSTRACT,
	"java.lang.invoke.VarHandleByteArrayAsLongs$ByteArrayViewVarHandle",
	"java.lang.invoke.VarHandle",
	nullptr,
	_VarHandleByteArrayAsLongs$ByteArrayViewVarHandle_FieldInfo_,
	_VarHandleByteArrayAsLongs$ByteArrayViewVarHandle_MethodInfo_,
	nullptr,
	nullptr,
	_VarHandleByteArrayAsLongs$ByteArrayViewVarHandle_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.lang.invoke.VarHandleByteArrayAsLongs"
};

$Object* allocate$VarHandleByteArrayAsLongs$ByteArrayViewVarHandle($Class* clazz) {
	return $of($alloc(VarHandleByteArrayAsLongs$ByteArrayViewVarHandle));
}

void VarHandleByteArrayAsLongs$ByteArrayViewVarHandle::init$($VarForm* form, bool be, bool exact) {
	$VarHandle::init$(form, exact);
	this->be = be;
}

VarHandleByteArrayAsLongs$ByteArrayViewVarHandle::VarHandleByteArrayAsLongs$ByteArrayViewVarHandle() {
}

$Class* VarHandleByteArrayAsLongs$ByteArrayViewVarHandle::load$($String* name, bool initialize) {
	$loadClass(VarHandleByteArrayAsLongs$ByteArrayViewVarHandle, name, initialize, &_VarHandleByteArrayAsLongs$ByteArrayViewVarHandle_ClassInfo_, allocate$VarHandleByteArrayAsLongs$ByteArrayViewVarHandle);
	return class$;
}

$Class* VarHandleByteArrayAsLongs$ByteArrayViewVarHandle::class$ = nullptr;

		} // invoke
	} // lang
} // java