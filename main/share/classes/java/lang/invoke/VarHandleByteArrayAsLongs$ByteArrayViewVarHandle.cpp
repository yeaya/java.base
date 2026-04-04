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

namespace java {
	namespace lang {
		namespace invoke {

void VarHandleByteArrayAsLongs$ByteArrayViewVarHandle::init$($VarForm* form, bool be, bool exact) {
	$VarHandle::init$(form, exact);
	this->be = be;
}

VarHandleByteArrayAsLongs$ByteArrayViewVarHandle::VarHandleByteArrayAsLongs$ByteArrayViewVarHandle() {
}

$Class* VarHandleByteArrayAsLongs$ByteArrayViewVarHandle::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"be", "Z", nullptr, $FINAL, $field(VarHandleByteArrayAsLongs$ByteArrayViewVarHandle, be)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/invoke/VarForm;ZZ)V", nullptr, 0, $method(VarHandleByteArrayAsLongs$ByteArrayViewVarHandle, init$, void, $VarForm*, bool, bool)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.lang.invoke.VarHandleByteArrayAsLongs$ByteArrayViewVarHandle", "java.lang.invoke.VarHandleByteArrayAsLongs", "ByteArrayViewVarHandle", $PRIVATE | $STATIC | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER | $ABSTRACT,
		"java.lang.invoke.VarHandleByteArrayAsLongs$ByteArrayViewVarHandle",
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
		"java.lang.invoke.VarHandleByteArrayAsLongs"
	};
	$loadClass(VarHandleByteArrayAsLongs$ByteArrayViewVarHandle, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(VarHandleByteArrayAsLongs$ByteArrayViewVarHandle);
	});
	return class$;
}

$Class* VarHandleByteArrayAsLongs$ByteArrayViewVarHandle::class$ = nullptr;

		} // invoke
	} // lang
} // java