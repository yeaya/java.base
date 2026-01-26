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

$FieldInfo _ModuleInfoExtender$1$1_FieldInfo_[] = {
	{"this$1", "Ljdk/internal/module/ModuleInfoExtender$1;", nullptr, $FINAL | $SYNTHETIC, $field(ModuleInfoExtender$1$1, this$1)},
	{}
};

$MethodInfo _ModuleInfoExtender$1$1_MethodInfo_[] = {
	{"<init>", "(Ljdk/internal/module/ModuleInfoExtender$1;ILjdk/internal/org/objectweb/asm/ModuleVisitor;)V", nullptr, 0, $method(ModuleInfoExtender$1$1, init$, void, $ModuleInfoExtender$1*, int32_t, $ModuleVisitor*)},
	{"visitMainClass", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(ModuleInfoExtender$1$1, visitMainClass, void, $String*)},
	{"visitPackage", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(ModuleInfoExtender$1$1, visitPackage, void, $String*)},
	{}
};

$EnclosingMethodInfo _ModuleInfoExtender$1$1_EnclosingMethodInfo_ = {
	"jdk.internal.module.ModuleInfoExtender$1",
	"visitModule",
	"(Ljava/lang/String;ILjava/lang/String;)Ljdk/internal/org/objectweb/asm/ModuleVisitor;"
};

$InnerClassInfo _ModuleInfoExtender$1$1_InnerClassesInfo_[] = {
	{"jdk.internal.module.ModuleInfoExtender$1", nullptr, nullptr, 0},
	{"jdk.internal.module.ModuleInfoExtender$1$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _ModuleInfoExtender$1$1_ClassInfo_ = {
	$ACC_SUPER,
	"jdk.internal.module.ModuleInfoExtender$1$1",
	"jdk.internal.org.objectweb.asm.ModuleVisitor",
	nullptr,
	_ModuleInfoExtender$1$1_FieldInfo_,
	_ModuleInfoExtender$1$1_MethodInfo_,
	nullptr,
	&_ModuleInfoExtender$1$1_EnclosingMethodInfo_,
	_ModuleInfoExtender$1$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"jdk.internal.module.ModuleInfoExtender"
};

$Object* allocate$ModuleInfoExtender$1$1($Class* clazz) {
	return $of($alloc(ModuleInfoExtender$1$1));
}

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
	$loadClass(ModuleInfoExtender$1$1, name, initialize, &_ModuleInfoExtender$1$1_ClassInfo_, allocate$ModuleInfoExtender$1$1);
	return class$;
}

$Class* ModuleInfoExtender$1$1::class$ = nullptr;

		} // module
	} // internal
} // jdk