#include <java/lang/Module$1DummyModuleInfo.h>

#include <java/lang/Module.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Module = ::java::lang::Module;

namespace java {
	namespace lang {

$FieldInfo _Module$1DummyModuleInfo_FieldInfo_[] = {
	{"this$0", "Ljava/lang/Module;", nullptr, $FINAL | $SYNTHETIC, $field(Module$1DummyModuleInfo, this$0)},
	{}
};

$MethodInfo _Module$1DummyModuleInfo_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/Module;)V", nullptr, 0, $method(static_cast<void(Module$1DummyModuleInfo::*)($Module*)>(&Module$1DummyModuleInfo::init$))},
	{}
};

$EnclosingMethodInfo _Module$1DummyModuleInfo_EnclosingMethodInfo_ = {
	"java.lang.Module",
	"moduleInfoClass",
	"()Ljava/lang/Class;"
};

$InnerClassInfo _Module$1DummyModuleInfo_InnerClassesInfo_[] = {
	{"java.lang.Module$1DummyModuleInfo", nullptr, "DummyModuleInfo", 0},
	{}
};

$ClassInfo _Module$1DummyModuleInfo_ClassInfo_ = {
	$ACC_SUPER,
	"java.lang.Module$1DummyModuleInfo",
	"java.lang.Object",
	nullptr,
	_Module$1DummyModuleInfo_FieldInfo_,
	_Module$1DummyModuleInfo_MethodInfo_,
	nullptr,
	&_Module$1DummyModuleInfo_EnclosingMethodInfo_,
	_Module$1DummyModuleInfo_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.lang.Module"
};

$Object* allocate$Module$1DummyModuleInfo($Class* clazz) {
	return $of($alloc(Module$1DummyModuleInfo));
}

void Module$1DummyModuleInfo::init$($Module* this$0) {
	$set(this, this$0, this$0);
}

Module$1DummyModuleInfo::Module$1DummyModuleInfo() {
}

$Class* Module$1DummyModuleInfo::load$($String* name, bool initialize) {
	$loadClass(Module$1DummyModuleInfo, name, initialize, &_Module$1DummyModuleInfo_ClassInfo_, allocate$Module$1DummyModuleInfo);
	return class$;
}

$Class* Module$1DummyModuleInfo::class$ = nullptr;

	} // lang
} // java