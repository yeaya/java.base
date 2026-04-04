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

void Module$1DummyModuleInfo::init$($Module* this$0) {
	$set(this, this$0, this$0);
}

Module$1DummyModuleInfo::Module$1DummyModuleInfo() {
}

$Class* Module$1DummyModuleInfo::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Ljava/lang/Module;", nullptr, $FINAL | $SYNTHETIC, $field(Module$1DummyModuleInfo, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/Module;)V", nullptr, 0, $method(Module$1DummyModuleInfo, init$, void, $Module*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"java.lang.Module",
		"moduleInfoClass",
		"()Ljava/lang/Class;"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.lang.Module$1DummyModuleInfo", nullptr, "DummyModuleInfo", 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"java.lang.Module$1DummyModuleInfo",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.lang.Module"
	};
	$loadClass(Module$1DummyModuleInfo, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Module$1DummyModuleInfo);
	});
	return class$;
}

$Class* Module$1DummyModuleInfo::class$ = nullptr;

	} // lang
} // java