#include <jdk/internal/module/ModuleInfo$ConstantPool$Entry.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jdk/internal/module/ModuleInfo$ConstantPool.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ModuleInfo$ConstantPool = ::jdk::internal::module::ModuleInfo$ConstantPool;

namespace jdk {
	namespace internal {
		namespace module {

$FieldInfo _ModuleInfo$ConstantPool$Entry_FieldInfo_[] = {
	{"tag", "I", nullptr, $FINAL, $field(ModuleInfo$ConstantPool$Entry, tag)},
	{}
};

$MethodInfo _ModuleInfo$ConstantPool$Entry_MethodInfo_[] = {
	{"<init>", "(I)V", nullptr, $PROTECTED, $method(static_cast<void(ModuleInfo$ConstantPool$Entry::*)(int32_t)>(&ModuleInfo$ConstantPool$Entry::init$))},
	{}
};

$InnerClassInfo _ModuleInfo$ConstantPool$Entry_InnerClassesInfo_[] = {
	{"jdk.internal.module.ModuleInfo$ConstantPool", "jdk.internal.module.ModuleInfo", "ConstantPool", $PRIVATE | $STATIC},
	{"jdk.internal.module.ModuleInfo$ConstantPool$Entry", "jdk.internal.module.ModuleInfo$ConstantPool", "Entry", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _ModuleInfo$ConstantPool$Entry_ClassInfo_ = {
	$ACC_SUPER,
	"jdk.internal.module.ModuleInfo$ConstantPool$Entry",
	"java.lang.Object",
	nullptr,
	_ModuleInfo$ConstantPool$Entry_FieldInfo_,
	_ModuleInfo$ConstantPool$Entry_MethodInfo_,
	nullptr,
	nullptr,
	_ModuleInfo$ConstantPool$Entry_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"jdk.internal.module.ModuleInfo"
};

$Object* allocate$ModuleInfo$ConstantPool$Entry($Class* clazz) {
	return $of($alloc(ModuleInfo$ConstantPool$Entry));
}

void ModuleInfo$ConstantPool$Entry::init$(int32_t tag) {
	this->tag = tag;
}

ModuleInfo$ConstantPool$Entry::ModuleInfo$ConstantPool$Entry() {
}

$Class* ModuleInfo$ConstantPool$Entry::load$($String* name, bool initialize) {
	$loadClass(ModuleInfo$ConstantPool$Entry, name, initialize, &_ModuleInfo$ConstantPool$Entry_ClassInfo_, allocate$ModuleInfo$ConstantPool$Entry);
	return class$;
}

$Class* ModuleInfo$ConstantPool$Entry::class$ = nullptr;

		} // module
	} // internal
} // jdk