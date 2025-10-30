#include <java/lang/invoke/MemoryAccessVarHandleBase.h>

#include <java/lang/IllegalStateException.h>
#include <java/lang/invoke/VarForm.h>
#include <java/lang/invoke/VarHandle.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalStateException = ::java::lang::IllegalStateException;
using $MethodInfo = ::java::lang::MethodInfo;
using $VarForm = ::java::lang::invoke::VarForm;
using $VarHandle = ::java::lang::invoke::VarHandle;

namespace java {
	namespace lang {
		namespace invoke {

$FieldInfo _MemoryAccessVarHandleBase_FieldInfo_[] = {
	{"be", "Z", nullptr, $FINAL, $field(MemoryAccessVarHandleBase, be)},
	{"length", "J", nullptr, $FINAL, $field(MemoryAccessVarHandleBase, length)},
	{"alignmentMask", "J", nullptr, $FINAL, $field(MemoryAccessVarHandleBase, alignmentMask)},
	{"skipAlignmentMaskCheck", "Z", nullptr, $FINAL, $field(MemoryAccessVarHandleBase, skipAlignmentMaskCheck)},
	{}
};

$MethodInfo _MemoryAccessVarHandleBase_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/invoke/VarForm;ZZJJZ)V", nullptr, 0, $method(static_cast<void(MemoryAccessVarHandleBase::*)($VarForm*,bool,bool,int64_t,int64_t,bool)>(&MemoryAccessVarHandleBase::init$))},
	{"newIllegalStateExceptionForMisalignedAccess", "(J)Ljava/lang/IllegalStateException;", nullptr, $STATIC, $method(static_cast<$IllegalStateException*(*)(int64_t)>(&MemoryAccessVarHandleBase::newIllegalStateExceptionForMisalignedAccess))},
	{}
};

$ClassInfo _MemoryAccessVarHandleBase_ClassInfo_ = {
	$ACC_SUPER | $ABSTRACT,
	"java.lang.invoke.MemoryAccessVarHandleBase",
	"java.lang.invoke.VarHandle",
	nullptr,
	_MemoryAccessVarHandleBase_FieldInfo_,
	_MemoryAccessVarHandleBase_MethodInfo_
};

$Object* allocate$MemoryAccessVarHandleBase($Class* clazz) {
	return $of($alloc(MemoryAccessVarHandleBase));
}

void MemoryAccessVarHandleBase::init$($VarForm* form, bool skipAlignmentMaskCheck, bool be, int64_t length, int64_t alignmentMask, bool exact) {
	$VarHandle::init$(form, exact);
	this->skipAlignmentMaskCheck = skipAlignmentMaskCheck;
	this->be = be;
	this->length = length;
	this->alignmentMask = alignmentMask;
}

$IllegalStateException* MemoryAccessVarHandleBase::newIllegalStateExceptionForMisalignedAccess(int64_t address) {
	$init(MemoryAccessVarHandleBase);
	$useLocalCurrentObjectStackCache();
	return $new($IllegalStateException, $$str({"Misaligned access at address: "_s, $$str(address)}));
}

MemoryAccessVarHandleBase::MemoryAccessVarHandleBase() {
}

$Class* MemoryAccessVarHandleBase::load$($String* name, bool initialize) {
	$loadClass(MemoryAccessVarHandleBase, name, initialize, &_MemoryAccessVarHandleBase_ClassInfo_, allocate$MemoryAccessVarHandleBase);
	return class$;
}

$Class* MemoryAccessVarHandleBase::class$ = nullptr;

		} // invoke
	} // lang
} // java