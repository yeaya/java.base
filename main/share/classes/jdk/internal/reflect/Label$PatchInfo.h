#ifndef _jdk_internal_reflect_Label$PatchInfo_h_
#define _jdk_internal_reflect_Label$PatchInfo_h_
//$ class jdk.internal.reflect.Label$PatchInfo
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace jdk {
	namespace internal {
		namespace reflect {
			class ClassFileAssembler;
		}
	}
}

namespace jdk {
	namespace internal {
		namespace reflect {

class Label$PatchInfo : public ::java::lang::Object {
	$class(Label$PatchInfo, $NO_CLASS_INIT, ::java::lang::Object)
public:
	Label$PatchInfo();
	void init$(::jdk::internal::reflect::ClassFileAssembler* asm$, int16_t instrBCI, int16_t patchBCI, int32_t stackDepth);
	::jdk::internal::reflect::ClassFileAssembler* asm$ = nullptr;
	int16_t instrBCI = 0;
	int16_t patchBCI = 0;
	int32_t stackDepth = 0;
};

		} // reflect
	} // internal
} // jdk

#endif // _jdk_internal_reflect_Label$PatchInfo_h_