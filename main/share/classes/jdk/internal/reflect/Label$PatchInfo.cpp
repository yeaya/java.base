#include <jdk/internal/reflect/Label$PatchInfo.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jdk/internal/reflect/ClassFileAssembler.h>
#include <jdk/internal/reflect/Label.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ClassFileAssembler = ::jdk::internal::reflect::ClassFileAssembler;
using $Label = ::jdk::internal::reflect::Label;

namespace jdk {
	namespace internal {
		namespace reflect {

$FieldInfo _Label$PatchInfo_FieldInfo_[] = {
	{"asm", "Ljdk/internal/reflect/ClassFileAssembler;", nullptr, $FINAL, $field(Label$PatchInfo, asm$)},
	{"instrBCI", "S", nullptr, $FINAL, $field(Label$PatchInfo, instrBCI)},
	{"patchBCI", "S", nullptr, $FINAL, $field(Label$PatchInfo, patchBCI)},
	{"stackDepth", "I", nullptr, $FINAL, $field(Label$PatchInfo, stackDepth)},
	{}
};

$MethodInfo _Label$PatchInfo_MethodInfo_[] = {
	{"<init>", "(Ljdk/internal/reflect/ClassFileAssembler;SSI)V", nullptr, 0, $method(static_cast<void(Label$PatchInfo::*)($ClassFileAssembler*,int16_t,int16_t,int32_t)>(&Label$PatchInfo::init$))},
	{}
};

$InnerClassInfo _Label$PatchInfo_InnerClassesInfo_[] = {
	{"jdk.internal.reflect.Label$PatchInfo", "jdk.internal.reflect.Label", "PatchInfo", $STATIC},
	{}
};

$ClassInfo _Label$PatchInfo_ClassInfo_ = {
	$ACC_SUPER,
	"jdk.internal.reflect.Label$PatchInfo",
	"java.lang.Object",
	nullptr,
	_Label$PatchInfo_FieldInfo_,
	_Label$PatchInfo_MethodInfo_,
	nullptr,
	nullptr,
	_Label$PatchInfo_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"jdk.internal.reflect.Label"
};

$Object* allocate$Label$PatchInfo($Class* clazz) {
	return $of($alloc(Label$PatchInfo));
}

void Label$PatchInfo::init$($ClassFileAssembler* asm$, int16_t instrBCI, int16_t patchBCI, int32_t stackDepth) {
	$set(this, asm$, asm$);
	this->instrBCI = instrBCI;
	this->patchBCI = patchBCI;
	this->stackDepth = stackDepth;
}

Label$PatchInfo::Label$PatchInfo() {
}

$Class* Label$PatchInfo::load$($String* name, bool initialize) {
	$loadClass(Label$PatchInfo, name, initialize, &_Label$PatchInfo_ClassInfo_, allocate$Label$PatchInfo);
	return class$;
}

$Class* Label$PatchInfo::class$ = nullptr;

		} // reflect
	} // internal
} // jdk