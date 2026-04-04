#include <jdk/internal/module/ModuleInfoExtender$1$1.h>
#include <java/util/Set.h>
#include <jdk/internal/module/ModuleInfoExtender$1.h>
#include <jdk/internal/module/ModuleInfoExtender.h>
#include <jdk/internal/org/objectweb/asm/ModuleVisitor.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ModuleInfoExtender$1 = ::jdk::internal::module::ModuleInfoExtender$1;
using $ModuleVisitor = ::jdk::internal::org::objectweb::asm$::ModuleVisitor;

namespace jdk {
	namespace internal {
		namespace module {

void ModuleInfoExtender$1$1::init$($ModuleInfoExtender$1* this$1, int32_t api, $ModuleVisitor* moduleVisitor) {
	$set(this, this$1, this$1);
	$ModuleVisitor::init$(api, moduleVisitor);
}

void ModuleInfoExtender$1$1::visitMainClass($String* existingMainClass) {
	if ($nc(this->this$1->this$0)->mainClass$ == nullptr) {
		$ModuleVisitor::visitMainClass(existingMainClass);
	}
}

void ModuleInfoExtender$1$1::visitPackage($String* existingPackage) {
	if ($nc(this->this$1->this$0)->packages$ == nullptr) {
		$ModuleVisitor::visitPackage(existingPackage);
	}
}

ModuleInfoExtender$1$1::ModuleInfoExtender$1$1() {
}

$Class* ModuleInfoExtender$1$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$1", "Ljdk/internal/module/ModuleInfoExtender$1;", nullptr, $FINAL | $SYNTHETIC, $field(ModuleInfoExtender$1$1, this$1)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljdk/internal/module/ModuleInfoExtender$1;ILjdk/internal/org/objectweb/asm/ModuleVisitor;)V", nullptr, 0, $method(ModuleInfoExtender$1$1, init$, void, $ModuleInfoExtender$1*, int32_t, $ModuleVisitor*)},
		{"visitMainClass", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(ModuleInfoExtender$1$1, visitMainClass, void, $String*)},
		{"visitPackage", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(ModuleInfoExtender$1$1, visitPackage, void, $String*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"jdk.internal.module.ModuleInfoExtender$1",
		"visitModule",
		"(Ljava/lang/String;ILjava/lang/String;)Ljdk/internal/org/objectweb/asm/ModuleVisitor;"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"jdk.internal.module.ModuleInfoExtender$1", nullptr, nullptr, 0},
		{"jdk.internal.module.ModuleInfoExtender$1$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"jdk.internal.module.ModuleInfoExtender$1$1",
		"jdk.internal.org.objectweb.asm.ModuleVisitor",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"jdk.internal.module.ModuleInfoExtender"
	};
	$loadClass(ModuleInfoExtender$1$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ModuleInfoExtender$1$1);
	});
	return class$;
}

$Class* ModuleInfoExtender$1$1::class$ = nullptr;

		} // module
	} // internal
} // jdk