#ifndef _java_lang_invoke_MemoryAccessVarHandleBase_h_
#define _java_lang_invoke_MemoryAccessVarHandleBase_h_
//$ class java.lang.invoke.MemoryAccessVarHandleBase
//$ extends java.lang.invoke.VarHandle

#include <java/lang/invoke/VarHandle.h>

namespace java {
	namespace lang {
		class IllegalStateException;
	}
}
namespace java {
	namespace lang {
		namespace invoke {
			class VarForm;
		}
	}
}

namespace java {
	namespace lang {
		namespace invoke {

class MemoryAccessVarHandleBase : public ::java::lang::invoke::VarHandle {
	$class(MemoryAccessVarHandleBase, $NO_CLASS_INIT, ::java::lang::invoke::VarHandle)
public:
	MemoryAccessVarHandleBase();
	void init$(::java::lang::invoke::VarForm* form, bool skipAlignmentMaskCheck, bool be, int64_t length, int64_t alignmentMask, bool exact);
	static ::java::lang::IllegalStateException* newIllegalStateExceptionForMisalignedAccess(int64_t address);
	bool be = false;
	int64_t length = 0;
	int64_t alignmentMask = 0;
	bool skipAlignmentMaskCheck = false;
};

		} // invoke
	} // lang
} // java

#endif // _java_lang_invoke_MemoryAccessVarHandleBase_h_