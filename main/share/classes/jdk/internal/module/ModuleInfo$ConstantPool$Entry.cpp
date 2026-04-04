#include <jdk/internal/module/ModuleInfo$ConstantPool$Entry.h>
#include <jdk/internal/module/ModuleInfo$ConstantPool.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace jdk {
	namespace internal {
		namespace module {

void ModuleInfo$ConstantPool$Entry::init$(int32_t tag) {
	this->tag = tag;
}

ModuleInfo$ConstantPool$Entry::ModuleInfo$ConstantPool$Entry() {
}

$Class* ModuleInfo$ConstantPool$Entry::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"tag", "I", nullptr, $FINAL, $field(ModuleInfo$ConstantPool$Entry, tag)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(I)V", nullptr, $PROTECTED, $method(ModuleInfo$ConstantPool$Entry, init$, void, int32_t)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"jdk.internal.module.ModuleInfo$ConstantPool", "jdk.internal.module.ModuleInfo", "ConstantPool", $PRIVATE | $STATIC},
		{"jdk.internal.module.ModuleInfo$ConstantPool$Entry", "jdk.internal.module.ModuleInfo$ConstantPool", "Entry", $PRIVATE | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"jdk.internal.module.ModuleInfo$ConstantPool$Entry",
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
		"jdk.internal.module.ModuleInfo"
	};
	$loadClass(ModuleInfo$ConstantPool$Entry, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ModuleInfo$ConstantPool$Entry);
	});
	return class$;
}

$Class* ModuleInfo$ConstantPool$Entry::class$ = nullptr;

		} // module
	} // internal
} // jdk