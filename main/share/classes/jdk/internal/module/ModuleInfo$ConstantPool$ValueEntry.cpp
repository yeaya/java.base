#include <jdk/internal/module/ModuleInfo$ConstantPool$ValueEntry.h>
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

void ModuleInfo$ConstantPool$ValueEntry::init$(int32_t tag, Object$* value) {
	$ModuleInfo$ConstantPool$Entry::init$(tag);
	$set(this, value, value);
}

ModuleInfo$ConstantPool$ValueEntry::ModuleInfo$ConstantPool$ValueEntry() {
}

$Class* ModuleInfo$ConstantPool$ValueEntry::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"value", "Ljava/lang/Object;", nullptr, $FINAL, $field(ModuleInfo$ConstantPool$ValueEntry, value)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(ILjava/lang/Object;)V", nullptr, 0, $method(ModuleInfo$ConstantPool$ValueEntry, init$, void, int32_t, Object$*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"jdk.internal.module.ModuleInfo$ConstantPool", "jdk.internal.module.ModuleInfo", "ConstantPool", $PRIVATE | $STATIC},
		{"jdk.internal.module.ModuleInfo$ConstantPool$ValueEntry", "jdk.internal.module.ModuleInfo$ConstantPool", "ValueEntry", $PRIVATE | $STATIC},
		{"jdk.internal.module.ModuleInfo$ConstantPool$Entry", "jdk.internal.module.ModuleInfo$ConstantPool", "Entry", $PRIVATE | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"jdk.internal.module.ModuleInfo$ConstantPool$ValueEntry",
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
	$loadClass(ModuleInfo$ConstantPool$ValueEntry, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ModuleInfo$ConstantPool$ValueEntry);
	});
	return class$;
}

$Class* ModuleInfo$ConstantPool$ValueEntry::class$ = nullptr;

		} // module
	} // internal
} // jdk