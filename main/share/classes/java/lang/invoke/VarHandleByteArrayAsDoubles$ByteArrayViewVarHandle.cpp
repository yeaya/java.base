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

namespace java {
	namespace lang {
		namespace invoke {

void VarHandleByteArrayAsDoubles$ByteArrayViewVarHandle::init$($VarForm* form, bool be, bool exact) {
	$VarHandle::init$(form, exact);
	this->be = be;
}

VarHandleByteArrayAsDoubles$ByteArrayViewVarHandle::VarHandleByteArrayAsDoubles$ByteArrayViewVarHandle() {
}

$Class* VarHandleByteArrayAsDoubles$ByteArrayViewVarHandle::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"be", "Z", nullptr, $FINAL, $field(VarHandleByteArrayAsDoubles$ByteArrayViewVarHandle, be)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/invoke/VarForm;ZZ)V", nullptr, 0, $method(VarHandleByteArrayAsDoubles$ByteArrayViewVarHandle, init$, void, $VarForm*, bool, bool)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.lang.invoke.VarHandleByteArrayAsDoubles$ByteArrayViewVarHandle", "java.lang.invoke.VarHandleByteArrayAsDoubles", "ByteArrayViewVarHandle", $PRIVATE | $STATIC | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER | $ABSTRACT,
		"java.lang.invoke.VarHandleByteArrayAsDoubles$ByteArrayViewVarHandle",
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
		"java.lang.invoke.VarHandleByteArrayAsDoubles"
	};
	$loadClass(VarHandleByteArrayAsDoubles$ByteArrayViewVarHandle, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(VarHandleByteArrayAsDoubles$ByteArrayViewVarHandle);
	});
	return class$;
}

$Class* VarHandleByteArrayAsDoubles$ByteArrayViewVarHandle::class$ = nullptr;

		} // invoke
	} // lang
} // java