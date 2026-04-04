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

void VarHandleByteArrayAsFloats$ByteArrayViewVarHandle::init$($VarForm* form, bool be, bool exact) {
	$VarHandle::init$(form, exact);
	this->be = be;
}

VarHandleByteArrayAsFloats$ByteArrayViewVarHandle::VarHandleByteArrayAsFloats$ByteArrayViewVarHandle() {
}

$Class* VarHandleByteArrayAsFloats$ByteArrayViewVarHandle::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"be", "Z", nullptr, $FINAL, $field(VarHandleByteArrayAsFloats$ByteArrayViewVarHandle, be)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/invoke/VarForm;ZZ)V", nullptr, 0, $method(VarHandleByteArrayAsFloats$ByteArrayViewVarHandle, init$, void, $VarForm*, bool, bool)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.lang.invoke.VarHandleByteArrayAsFloats$ByteArrayViewVarHandle", "java.lang.invoke.VarHandleByteArrayAsFloats", "ByteArrayViewVarHandle", $PRIVATE | $STATIC | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER | $ABSTRACT,
		"java.lang.invoke.VarHandleByteArrayAsFloats$ByteArrayViewVarHandle",
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
		"java.lang.invoke.VarHandleByteArrayAsFloats"
	};
	$loadClass(VarHandleByteArrayAsFloats$ByteArrayViewVarHandle, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(VarHandleByteArrayAsFloats$ByteArrayViewVarHandle);
	});
	return class$;
}

$Class* VarHandleByteArrayAsFloats$ByteArrayViewVarHandle::class$ = nullptr;

		} // invoke
	} // lang
} // java