#include <jdk/internal/module/ModuleInfoExtender$1.h>
#include <java/io/Serializable.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/lang/module/ModuleDescriptor$Version.h>
#include <java/util/Collection.h>
#include <java/util/Set.h>
#include <java/util/function/Consumer.h>
#include <java/util/stream/Stream.h>
#include <jdk/internal/module/ClassFileConstants.h>
#include <jdk/internal/module/ModuleHashes.h>
#include <jdk/internal/module/ModuleInfoExtender$1$1.h>
#include <jdk/internal/module/ModuleInfoExtender.h>
#include <jdk/internal/module/ModuleResolution.h>
#include <jdk/internal/org/objectweb/asm/Attribute.h>
#include <jdk/internal/org/objectweb/asm/ClassVisitor.h>
#include <jdk/internal/org/objectweb/asm/ModuleVisitor.h>
#include <jdk/internal/org/objectweb/asm/Opcodes.h>
#include <jcpp.h>

#undef ASM7
#undef MODULE_HASHES
#undef MODULE_RESOLUTION
#undef MODULE_TARGET

using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $ModuleDescriptor$Version = ::java::lang::module::ModuleDescriptor$Version;
using $Consumer = ::java::util::function::Consumer;
using $ClassFileConstants = ::jdk::internal::module::ClassFileConstants;
using $ModuleInfoExtender = ::jdk::internal::module::ModuleInfoExtender;
using $ModuleInfoExtender$1$1 = ::jdk::internal::module::ModuleInfoExtender$1$1;
using $Attribute = ::jdk::internal::org::objectweb::asm$::Attribute;
using $ClassVisitor = ::jdk::internal::org::objectweb::asm$::ClassVisitor;
using $ModuleVisitor = ::jdk::internal::org::objectweb::asm$::ModuleVisitor;
using $Opcodes = ::jdk::internal::org::objectweb::asm$::Opcodes;

namespace jdk {
	namespace internal {
		namespace module {

class ModuleInfoExtender$1$$Lambda$lambda$visitModule$0 : public $Consumer {
	$class(ModuleInfoExtender$1$$Lambda$lambda$visitModule$0, $NO_CLASS_INIT, $Consumer)
public:
	void init$($ModuleVisitor* mv) {
		$set(this, mv, mv);
	}
	virtual void accept(Object$* pn) override {
		ModuleInfoExtender$1::lambda$visitModule$0(mv, $cast($String, pn));
	}
	$ModuleVisitor* mv = nullptr;
};
$Class* ModuleInfoExtender$1$$Lambda$lambda$visitModule$0::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"mv", "Ljdk/internal/org/objectweb/asm/ModuleVisitor;", nullptr, $PUBLIC, $field(ModuleInfoExtender$1$$Lambda$lambda$visitModule$0, mv)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljdk/internal/org/objectweb/asm/ModuleVisitor;)V", nullptr, $PUBLIC, $method(ModuleInfoExtender$1$$Lambda$lambda$visitModule$0, init$, void, $ModuleVisitor*)},
		{"accept", "(Ljava/lang/Object;)V", nullptr, $PUBLIC, $virtualMethod(ModuleInfoExtender$1$$Lambda$lambda$visitModule$0, accept, void, Object$*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"jdk.internal.module.ModuleInfoExtender$1$$Lambda$lambda$visitModule$0",
		"java.lang.Object",
		"java.util.function.Consumer",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(ModuleInfoExtender$1$$Lambda$lambda$visitModule$0, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ModuleInfoExtender$1$$Lambda$lambda$visitModule$0);
	});
	return class$;
}
$Class* ModuleInfoExtender$1$$Lambda$lambda$visitModule$0::class$ = nullptr;

void ModuleInfoExtender$1::init$($ModuleInfoExtender* this$0, int32_t api, $ClassVisitor* classVisitor) {
	$set(this, this$0, this$0);
	$ClassVisitor::init$(api, classVisitor);
}

$ModuleVisitor* ModuleInfoExtender$1::visitModule($String* name, int32_t flags, $String* version) {
	$useLocalObjectStack();
	$var($ModuleDescriptor$Version, v, this->this$0->version$);
	$var($String, vs, (v != nullptr) ? v->toString() : version);
	$var($ModuleVisitor, mv, $ClassVisitor::visitModule(name, flags, vs));
	if (this->this$0->mainClass$ != nullptr) {
		$nc(mv)->visitMainClass($(this->this$0->mainClass$->replace(u'.', u'/')));
	}
	if (this->this$0->packages$ != nullptr) {
		$$nc($$nc(this->this$0->packages$->stream())->sorted())->forEach($$new(ModuleInfoExtender$1$$Lambda$lambda$visitModule$0, mv));
	}
	return $new($ModuleInfoExtender$1$1, this, $Opcodes::ASM7, mv);
}

void ModuleInfoExtender$1::visitAttribute($Attribute* attr) {
	$var($String, name, $nc(attr)->type);
	$init($ClassFileConstants);
	if ($nc(name)->equals($ClassFileConstants::MODULE_TARGET) && this->this$0->targetPlatform$ != nullptr) {
		return;
	}
	if (name->equals($ClassFileConstants::MODULE_RESOLUTION) && this->this$0->moduleResolution$ != nullptr) {
		return;
	}
	if (name->equals($ClassFileConstants::MODULE_HASHES) && this->this$0->hashes$ != nullptr) {
		return;
	}
	$ClassVisitor::visitAttribute(attr);
}

void ModuleInfoExtender$1::lambda$visitModule$0($ModuleVisitor* mv, $String* pn) {
	$init(ModuleInfoExtender$1);
	$nc(mv)->visitPackage($($nc(pn)->replace(u'.', u'/')));
}

ModuleInfoExtender$1::ModuleInfoExtender$1() {
}

$Class* ModuleInfoExtender$1::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals("jdk.internal.module.ModuleInfoExtender$1$$Lambda$lambda$visitModule$0")) {
			return ModuleInfoExtender$1$$Lambda$lambda$visitModule$0::load$(name, initialize);
		}
	}
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Ljdk/internal/module/ModuleInfoExtender;", nullptr, $FINAL | $SYNTHETIC, $field(ModuleInfoExtender$1, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljdk/internal/module/ModuleInfoExtender;ILjdk/internal/org/objectweb/asm/ClassVisitor;)V", nullptr, 0, $method(ModuleInfoExtender$1, init$, void, $ModuleInfoExtender*, int32_t, $ClassVisitor*)},
		{"lambda$visitModule$0", "(Ljdk/internal/org/objectweb/asm/ModuleVisitor;Ljava/lang/String;)V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(ModuleInfoExtender$1, lambda$visitModule$0, void, $ModuleVisitor*, $String*)},
		{"visitAttribute", "(Ljdk/internal/org/objectweb/asm/Attribute;)V", nullptr, $PUBLIC, $virtualMethod(ModuleInfoExtender$1, visitAttribute, void, $Attribute*)},
		{"visitModule", "(Ljava/lang/String;ILjava/lang/String;)Ljdk/internal/org/objectweb/asm/ModuleVisitor;", nullptr, $PUBLIC, $virtualMethod(ModuleInfoExtender$1, visitModule, $ModuleVisitor*, $String*, int32_t, $String*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"jdk.internal.module.ModuleInfoExtender",
		"toByteArray",
		"()[B"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"jdk.internal.module.ModuleInfoExtender$1", nullptr, nullptr, 0},
		{"jdk.internal.module.ModuleInfoExtender$1$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"jdk.internal.module.ModuleInfoExtender$1",
		"jdk.internal.org.objectweb.asm.ClassVisitor",
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
	$loadClass(ModuleInfoExtender$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ModuleInfoExtender$1);
	});
	return class$;
}

$Class* ModuleInfoExtender$1::class$ = nullptr;

		} // module
	} // internal
} // jdk