#include <jdk/internal/reflect/Label$PatchInfo.h>
#include <jdk/internal/reflect/ClassFileAssembler.h>
#include <jdk/internal/reflect/Label.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ClassFileAssembler = ::jdk::internal::reflect::ClassFileAssembler;

namespace jdk {
	namespace internal {
		namespace reflect {

void Label$PatchInfo::init$($ClassFileAssembler* asm$, int16_t instrBCI, int16_t patchBCI, int32_t stackDepth) {
	$set(this, asm$, asm$);
	this->instrBCI = instrBCI;
	this->patchBCI = patchBCI;
	this->stackDepth = stackDepth;
}

Label$PatchInfo::Label$PatchInfo() {
}

$Class* Label$PatchInfo::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"asm", "Ljdk/internal/reflect/ClassFileAssembler;", nullptr, $FINAL, $field(Label$PatchInfo, asm$)},
		{"instrBCI", "S", nullptr, $FINAL, $field(Label$PatchInfo, instrBCI)},
		{"patchBCI", "S", nullptr, $FINAL, $field(Label$PatchInfo, patchBCI)},
		{"stackDepth", "I", nullptr, $FINAL, $field(Label$PatchInfo, stackDepth)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljdk/internal/reflect/ClassFileAssembler;SSI)V", nullptr, 0, $method(Label$PatchInfo, init$, void, $ClassFileAssembler*, int16_t, int16_t, int32_t)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"jdk.internal.reflect.Label$PatchInfo", "jdk.internal.reflect.Label", "PatchInfo", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"jdk.internal.reflect.Label$PatchInfo",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"jdk.internal.reflect.Label"
	};
	$loadClass(Label$PatchInfo, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Label$PatchInfo);
	});
	return class$;
}

$Class* Label$PatchInfo::class$ = nullptr;

		} // reflect
	} // internal
} // jdk