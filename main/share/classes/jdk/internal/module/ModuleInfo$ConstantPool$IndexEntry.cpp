#include <jdk/internal/module/ModuleInfo$ConstantPool$IndexEntry.h>
#include <jdk/internal/module/ModuleInfo$ConstantPool$Entry.h>
#include <jdk/internal/module/ModuleInfo$ConstantPool.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ModuleInfo$ConstantPool$Entry = ::jdk::internal::module::ModuleInfo$ConstantPool$Entry;

namespace jdk {
	namespace internal {
		namespace module {

void ModuleInfo$ConstantPool$IndexEntry::init$(int32_t tag, int32_t index) {
	$ModuleInfo$ConstantPool$Entry::init$(tag);
	this->index = index;
}

ModuleInfo$ConstantPool$IndexEntry::ModuleInfo$ConstantPool$IndexEntry() {
}

$Class* ModuleInfo$ConstantPool$IndexEntry::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"index", "I", nullptr, $FINAL, $field(ModuleInfo$ConstantPool$IndexEntry, index)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(II)V", nullptr, 0, $method(ModuleInfo$ConstantPool$IndexEntry, init$, void, int32_t, int32_t)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"jdk.internal.module.ModuleInfo$ConstantPool", "jdk.internal.module.ModuleInfo", "ConstantPool", $PRIVATE | $STATIC},
		{"jdk.internal.module.ModuleInfo$ConstantPool$IndexEntry", "jdk.internal.module.ModuleInfo$ConstantPool", "IndexEntry", $PRIVATE | $STATIC},
		{"jdk.internal.module.ModuleInfo$ConstantPool$Entry", "jdk.internal.module.ModuleInfo$ConstantPool", "Entry", $PRIVATE | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"jdk.internal.module.ModuleInfo$ConstantPool$IndexEntry",
		"jdk.internal.module.ModuleInfo$ConstantPool$Entry",
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
	$loadClass(ModuleInfo$ConstantPool$IndexEntry, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ModuleInfo$ConstantPool$IndexEntry);
	});
	return class$;
}

$Class* ModuleInfo$ConstantPool$IndexEntry::class$ = nullptr;

		} // module
	} // internal
} // jdk