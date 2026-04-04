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

void VarHandleByteArrayAsChars$ByteArrayViewVarHandle::init$($VarForm* form, bool be, bool exact) {
	$VarHandle::init$(form, exact);
	this->be = be;
}

VarHandleByteArrayAsChars$ByteArrayViewVarHandle::VarHandleByteArrayAsChars$ByteArrayViewVarHandle() {
}

$Class* VarHandleByteArrayAsChars$ByteArrayViewVarHandle::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"be", "Z", nullptr, $FINAL, $field(VarHandleByteArrayAsChars$ByteArrayViewVarHandle, be)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/invoke/VarForm;ZZ)V", nullptr, 0, $method(VarHandleByteArrayAsChars$ByteArrayViewVarHandle, init$, void, $VarForm*, bool, bool)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.lang.invoke.VarHandleByteArrayAsChars$ByteArrayViewVarHandle", "java.lang.invoke.VarHandleByteArrayAsChars", "ByteArrayViewVarHandle", $PRIVATE | $STATIC | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER | $ABSTRACT,
		"java.lang.invoke.VarHandleByteArrayAsChars$ByteArrayViewVarHandle",
		"java.lang.invoke.VarHandle",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.lang.invoke.VarHandleByteArrayAsChars"
	};
	$loadClass(VarHandleByteArrayAsChars$ByteArrayViewVarHandle, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(VarHandleByteArrayAsChars$ByteArrayViewVarHandle);
	});
	return class$;
}

$Class* VarHandleByteArrayAsChars$ByteArrayViewVarHandle::class$ = nullptr;

		} // invoke
	} // lang
} // java