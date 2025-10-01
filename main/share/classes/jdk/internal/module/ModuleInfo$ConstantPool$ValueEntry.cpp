#include <jdk/internal/module/ModuleInfo$ConstantPool$ValueEntry.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jdk/internal/module/ModuleInfo$ConstantPool$Entry.h>
#include <jdk/internal/module/ModuleInfo$ConstantPool.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ModuleInfo$ConstantPool = ::jdk::internal::module::ModuleInfo$ConstantPool;
using $ModuleInfo$ConstantPool$Entry = ::jdk::internal::module::ModuleInfo$ConstantPool$Entry;

namespace jdk {
	namespace internal {
		namespace module {

$FieldInfo _ModuleInfo$ConstantPool$ValueEntry_FieldInfo_[] = {
	{"value", "Ljava/lang/Object;", nullptr, $FINAL, $field(ModuleInfo$ConstantPool$ValueEntry, value)},
	{}
};

$MethodInfo _ModuleInfo$ConstantPool$ValueEntry_MethodInfo_[] = {
	{"<init>", "(ILjava/lang/Object;)V", nullptr, 0, $method(static_cast<void(ModuleInfo$ConstantPool$ValueEntry::*)(int32_t,Object$*)>(&ModuleInfo$ConstantPool$ValueEntry::init$))},
	{}
};

$InnerClassInfo _ModuleInfo$ConstantPool$ValueEntry_InnerClassesInfo_[] = {
	{"jdk.internal.module.ModuleInfo$ConstantPool", "jdk.internal.module.ModuleInfo", "ConstantPool", $PRIVATE | $STATIC},
	{"jdk.internal.module.ModuleInfo$ConstantPool$ValueEntry", "jdk.internal.module.ModuleInfo$ConstantPool", "ValueEntry", $PRIVATE | $STATIC},
	{"jdk.internal.module.ModuleInfo$ConstantPool$Entry", "jdk.internal.module.ModuleInfo$ConstantPool", "Entry", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _ModuleInfo$ConstantPool$ValueEntry_ClassInfo_ = {
	$ACC_SUPER,
	"jdk.internal.module.ModuleInfo$ConstantPool$ValueEntry",
	"jdk.internal.module.ModuleInfo$ConstantPool$Entry",
	nullptr,
	_ModuleInfo$ConstantPool$ValueEntry_FieldInfo_,
	_ModuleInfo$ConstantPool$ValueEntry_MethodInfo_,
	nullptr,
	nullptr,
	_ModuleInfo$ConstantPool$ValueEntry_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"jdk.internal.module.ModuleInfo"
};

$Object* allocate$ModuleInfo$ConstantPool$ValueEntry($Class* clazz) {
	return $of($alloc(ModuleInfo$ConstantPool$ValueEntry));
}

void ModuleInfo$ConstantPool$ValueEntry::init$(int32_t tag, Object$* value) {
	$ModuleInfo$ConstantPool$Entry::init$(tag);
	$set(this, value, value);
}

ModuleInfo$ConstantPool$ValueEntry::ModuleInfo$ConstantPool$ValueEntry() {
}

$Class* ModuleInfo$ConstantPool$ValueEntry::load$($String* name, bool initialize) {
	$loadClass(ModuleInfo$ConstantPool$ValueEntry, name, initialize, &_ModuleInfo$ConstantPool$ValueEntry_ClassInfo_, allocate$ModuleInfo$ConstantPool$ValueEntry);
	return class$;
}

$Class* ModuleInfo$ConstantPool$ValueEntry::class$ = nullptr;

		} // module
	} // internal
} // jdk