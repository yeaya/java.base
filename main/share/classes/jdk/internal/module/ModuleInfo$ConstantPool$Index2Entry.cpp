#include <jdk/internal/module/ModuleInfo$ConstantPool$Index2Entry.h>

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

$FieldInfo _ModuleInfo$ConstantPool$Index2Entry_FieldInfo_[] = {
	{"index1", "I", nullptr, $FINAL, $field(ModuleInfo$ConstantPool$Index2Entry, index1)},
	{"index2", "I", nullptr, $FINAL, $field(ModuleInfo$ConstantPool$Index2Entry, index2)},
	{}
};

$MethodInfo _ModuleInfo$ConstantPool$Index2Entry_MethodInfo_[] = {
	{"<init>", "(III)V", nullptr, 0, $method(ModuleInfo$ConstantPool$Index2Entry, init$, void, int32_t, int32_t, int32_t)},
	{}
};

$InnerClassInfo _ModuleInfo$ConstantPool$Index2Entry_InnerClassesInfo_[] = {
	{"jdk.internal.module.ModuleInfo$ConstantPool", "jdk.internal.module.ModuleInfo", "ConstantPool", $PRIVATE | $STATIC},
	{"jdk.internal.module.ModuleInfo$ConstantPool$Index2Entry", "jdk.internal.module.ModuleInfo$ConstantPool", "Index2Entry", $PRIVATE | $STATIC},
	{"jdk.internal.module.ModuleInfo$ConstantPool$Entry", "jdk.internal.module.ModuleInfo$ConstantPool", "Entry", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _ModuleInfo$ConstantPool$Index2Entry_ClassInfo_ = {
	$ACC_SUPER,
	"jdk.internal.module.ModuleInfo$ConstantPool$Index2Entry",
	"jdk.internal.module.ModuleInfo$ConstantPool$Entry",
	nullptr,
	_ModuleInfo$ConstantPool$Index2Entry_FieldInfo_,
	_ModuleInfo$ConstantPool$Index2Entry_MethodInfo_,
	nullptr,
	nullptr,
	_ModuleInfo$ConstantPool$Index2Entry_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"jdk.internal.module.ModuleInfo"
};

$Object* allocate$ModuleInfo$ConstantPool$Index2Entry($Class* clazz) {
	return $of($alloc(ModuleInfo$ConstantPool$Index2Entry));
}

void ModuleInfo$ConstantPool$Index2Entry::init$(int32_t tag, int32_t index1, int32_t index2) {
	$ModuleInfo$ConstantPool$Entry::init$(tag);
	this->index1 = index1;
	this->index2 = index2;
}

ModuleInfo$ConstantPool$Index2Entry::ModuleInfo$ConstantPool$Index2Entry() {
}

$Class* ModuleInfo$ConstantPool$Index2Entry::load$($String* name, bool initialize) {
	$loadClass(ModuleInfo$ConstantPool$Index2Entry, name, initialize, &_ModuleInfo$ConstantPool$Index2Entry_ClassInfo_, allocate$ModuleInfo$ConstantPool$Index2Entry);
	return class$;
}

$Class* ModuleInfo$ConstantPool$Index2Entry::class$ = nullptr;

		} // module
	} // internal
} // jdk