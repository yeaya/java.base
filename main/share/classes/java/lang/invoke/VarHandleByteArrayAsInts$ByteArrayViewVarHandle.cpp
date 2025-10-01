#include <java/lang/invoke/VarHandleByteArrayAsInts$ByteArrayViewVarHandle.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/invoke/VarForm.h>
#include <java/lang/invoke/VarHandle.h>
#include <java/lang/invoke/VarHandleByteArrayAsInts.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $VarForm = ::java::lang::invoke::VarForm;
using $VarHandle = ::java::lang::invoke::VarHandle;
using $VarHandleByteArrayAsInts = ::java::lang::invoke::VarHandleByteArrayAsInts;

namespace java {
	namespace lang {
		namespace invoke {

$FieldInfo _VarHandleByteArrayAsInts$ByteArrayViewVarHandle_FieldInfo_[] = {
	{"be", "Z", nullptr, $FINAL, $field(VarHandleByteArrayAsInts$ByteArrayViewVarHandle, be)},
	{}
};

$MethodInfo _VarHandleByteArrayAsInts$ByteArrayViewVarHandle_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/invoke/VarForm;ZZ)V", nullptr, 0, $method(static_cast<void(VarHandleByteArrayAsInts$ByteArrayViewVarHandle::*)($VarForm*,bool,bool)>(&VarHandleByteArrayAsInts$ByteArrayViewVarHandle::init$))},
	{}
};

$InnerClassInfo _VarHandleByteArrayAsInts$ByteArrayViewVarHandle_InnerClassesInfo_[] = {
	{"java.lang.invoke.VarHandleByteArrayAsInts$ByteArrayViewVarHandle", "java.lang.invoke.VarHandleByteArrayAsInts", "ByteArrayViewVarHandle", $PRIVATE | $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _VarHandleByteArrayAsInts$ByteArrayViewVarHandle_ClassInfo_ = {
	$ACC_SUPER | $ABSTRACT,
	"java.lang.invoke.VarHandleByteArrayAsInts$ByteArrayViewVarHandle",
	"java.lang.invoke.VarHandle",
	nullptr,
	_VarHandleByteArrayAsInts$ByteArrayViewVarHandle_FieldInfo_,
	_VarHandleByteArrayAsInts$ByteArrayViewVarHandle_MethodInfo_,
	nullptr,
	nullptr,
	_VarHandleByteArrayAsInts$ByteArrayViewVarHandle_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.lang.invoke.VarHandleByteArrayAsInts"
};

$Object* allocate$VarHandleByteArrayAsInts$ByteArrayViewVarHandle($Class* clazz) {
	return $of($alloc(VarHandleByteArrayAsInts$ByteArrayViewVarHandle));
}

void VarHandleByteArrayAsInts$ByteArrayViewVarHandle::init$($VarForm* form, bool be, bool exact) {
	$VarHandle::init$(form, exact);
	this->be = be;
}

VarHandleByteArrayAsInts$ByteArrayViewVarHandle::VarHandleByteArrayAsInts$ByteArrayViewVarHandle() {
}

$Class* VarHandleByteArrayAsInts$ByteArrayViewVarHandle::load$($String* name, bool initialize) {
	$loadClass(VarHandleByteArrayAsInts$ByteArrayViewVarHandle, name, initialize, &_VarHandleByteArrayAsInts$ByteArrayViewVarHandle_ClassInfo_, allocate$VarHandleByteArrayAsInts$ByteArrayViewVarHandle);
	return class$;
}

$Class* VarHandleByteArrayAsInts$ByteArrayViewVarHandle::class$ = nullptr;

		} // invoke
	} // lang
} // java