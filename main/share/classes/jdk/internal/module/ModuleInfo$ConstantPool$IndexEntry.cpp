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

$FieldInfo _ModuleInfo$ConstantPool$IndexEntry_FieldInfo_[] = {
	{"index", "I", nullptr, $FINAL, $field(ModuleInfo$ConstantPool$IndexEntry, index)},
	{}
};

$MethodInfo _ModuleInfo$ConstantPool$IndexEntry_MethodInfo_[] = {
	{"<init>", "(II)V", nullptr, 0, $method(static_cast<void(ModuleInfo$ConstantPool$IndexEntry::*)(int32_t,int32_t)>(&ModuleInfo$ConstantPool$IndexEntry::init$))},
	{}
};

$InnerClassInfo _ModuleInfo$ConstantPool$IndexEntry_InnerClassesInfo_[] = {
	{"jdk.internal.module.ModuleInfo$ConstantPool", "jdk.internal.module.ModuleInfo", "ConstantPool", $PRIVATE | $STATIC},
	{"jdk.internal.module.ModuleInfo$ConstantPool$IndexEntry", "jdk.internal.module.ModuleInfo$ConstantPool", "IndexEntry", $PRIVATE | $STATIC},
	{"jdk.internal.module.ModuleInfo$ConstantPool$Entry", "jdk.internal.module.ModuleInfo$ConstantPool", "Entry", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _ModuleInfo$ConstantPool$IndexEntry_ClassInfo_ = {
	$ACC_SUPER,
	"jdk.internal.module.ModuleInfo$ConstantPool$IndexEntry",
	"jdk.internal.module.ModuleInfo$ConstantPool$Entry",
	nullptr,
	_ModuleInfo$ConstantPool$IndexEntry_FieldInfo_,
	_ModuleInfo$ConstantPool$IndexEntry_MethodInfo_,
	nullptr,
	nullptr,
	_ModuleInfo$ConstantPool$IndexEntry_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"jdk.internal.module.ModuleInfo"
};

$Object* allocate$ModuleInfo$ConstantPool$IndexEntry($Class* clazz) {
	return $of($alloc(ModuleInfo$ConstantPool$IndexEntry));
}

void ModuleInfo$ConstantPool$IndexEntry::init$(int32_t tag, int32_t index) {
	$ModuleInfo$ConstantPool$Entry::init$(tag);
	this->index = index;
}

ModuleInfo$ConstantPool$IndexEntry::ModuleInfo$ConstantPool$IndexEntry() {
}

$Class* ModuleInfo$ConstantPool$IndexEntry::load$($String* name, bool initialize) {
	$loadClass(ModuleInfo$ConstantPool$IndexEntry, name, initialize, &_ModuleInfo$ConstantPool$IndexEntry_ClassInfo_, allocate$ModuleInfo$ConstantPool$IndexEntry);
	return class$;
}

$Class* ModuleInfo$ConstantPool$IndexEntry::class$ = nullptr;

		} // module
	} // internal
} // jdk