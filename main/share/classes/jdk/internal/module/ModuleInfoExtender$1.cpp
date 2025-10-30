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
using $Void = ::java::lang::Void;
using $CallSite = ::java::lang::invoke::CallSite;
using $LambdaMetafactory = ::java::lang::invoke::LambdaMetafactory;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $MethodHandles$Lookup = ::java::lang::invoke::MethodHandles$Lookup;
using $MethodType = ::java::lang::invoke::MethodType;
using $ModuleDescriptor$Version = ::java::lang::module::ModuleDescriptor$Version;
using $Collection = ::java::util::Collection;
using $Set = ::java::util::Set;
using $Consumer = ::java::util::function::Consumer;
using $Stream = ::java::util::stream::Stream;
using $ClassFileConstants = ::jdk::internal::module::ClassFileConstants;
using $ModuleHashes = ::jdk::internal::module::ModuleHashes;
using $ModuleInfoExtender = ::jdk::internal::module::ModuleInfoExtender;
using $ModuleInfoExtender$1$1 = ::jdk::internal::module::ModuleInfoExtender$1$1;
using $ModuleResolution = ::jdk::internal::module::ModuleResolution;
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
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<ModuleInfoExtender$1$$Lambda$lambda$visitModule$0>());
	}
	$ModuleVisitor* mv = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo ModuleInfoExtender$1$$Lambda$lambda$visitModule$0::fieldInfos[2] = {
	{"mv", "Ljdk/internal/org/objectweb/asm/ModuleVisitor;", nullptr, $PUBLIC, $field(ModuleInfoExtender$1$$Lambda$lambda$visitModule$0, mv)},
	{}
};
$MethodInfo ModuleInfoExtender$1$$Lambda$lambda$visitModule$0::methodInfos[3] = {
	{"<init>", "(Ljdk/internal/org/objectweb/asm/ModuleVisitor;)V", nullptr, $PUBLIC, $method(static_cast<void(ModuleInfoExtender$1$$Lambda$lambda$visitModule$0::*)($ModuleVisitor*)>(&ModuleInfoExtender$1$$Lambda$lambda$visitModule$0::init$))},
	{"accept", "(Ljava/lang/Object;)V", nullptr, $PUBLIC},
	{}
};
$ClassInfo ModuleInfoExtender$1$$Lambda$lambda$visitModule$0::classInfo$ = {
	$PUBLIC | $FINAL,
	"jdk.internal.module.ModuleInfoExtender$1$$Lambda$lambda$visitModule$0",
	"java.lang.Object",
	"java.util.function.Consumer",
	fieldInfos,
	methodInfos
};
$Class* ModuleInfoExtender$1$$Lambda$lambda$visitModule$0::load$($String* name, bool initialize) {
	$loadClass(ModuleInfoExtender$1$$Lambda$lambda$visitModule$0, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* ModuleInfoExtender$1$$Lambda$lambda$visitModule$0::class$ = nullptr;

$FieldInfo _ModuleInfoExtender$1_FieldInfo_[] = {
	{"this$0", "Ljdk/internal/module/ModuleInfoExtender;", nullptr, $FINAL | $SYNTHETIC, $field(ModuleInfoExtender$1, this$0)},
	{}
};

$MethodInfo _ModuleInfoExtender$1_MethodInfo_[] = {
	{"<init>", "(Ljdk/internal/module/ModuleInfoExtender;ILjdk/internal/org/objectweb/asm/ClassVisitor;)V", nullptr, 0, $method(static_cast<void(ModuleInfoExtender$1::*)($ModuleInfoExtender*,int32_t,$ClassVisitor*)>(&ModuleInfoExtender$1::init$))},
	{"lambda$visitModule$0", "(Ljdk/internal/org/objectweb/asm/ModuleVisitor;Ljava/lang/String;)V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<void(*)($ModuleVisitor*,$String*)>(&ModuleInfoExtender$1::lambda$visitModule$0))},
	{"visitAttribute", "(Ljdk/internal/org/objectweb/asm/Attribute;)V", nullptr, $PUBLIC},
	{"visitModule", "(Ljava/lang/String;ILjava/lang/String;)Ljdk/internal/org/objectweb/asm/ModuleVisitor;", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _ModuleInfoExtender$1_EnclosingMethodInfo_ = {
	"jdk.internal.module.ModuleInfoExtender",
	"toByteArray",
	"()[B"
};

$InnerClassInfo _ModuleInfoExtender$1_InnerClassesInfo_[] = {
	{"jdk.internal.module.ModuleInfoExtender$1", nullptr, nullptr, 0},
	{"jdk.internal.module.ModuleInfoExtender$1$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _ModuleInfoExtender$1_ClassInfo_ = {
	$ACC_SUPER,
	"jdk.internal.module.ModuleInfoExtender$1",
	"jdk.internal.org.objectweb.asm.ClassVisitor",
	nullptr,
	_ModuleInfoExtender$1_FieldInfo_,
	_ModuleInfoExtender$1_MethodInfo_,
	nullptr,
	&_ModuleInfoExtender$1_EnclosingMethodInfo_,
	_ModuleInfoExtender$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"jdk.internal.module.ModuleInfoExtender"
};

$Object* allocate$ModuleInfoExtender$1($Class* clazz) {
	return $of($alloc(ModuleInfoExtender$1));
}

void ModuleInfoExtender$1::init$($ModuleInfoExtender* this$0, int32_t api, $ClassVisitor* classVisitor) {
	$set(this, this$0, this$0);
	$ClassVisitor::init$(api, classVisitor);
}

$ModuleVisitor* ModuleInfoExtender$1::visitModule($String* name, int32_t flags, $String* version) {
	$useLocalCurrentObjectStackCache();
	$var($ModuleDescriptor$Version, v, this->this$0->version$);
	$var($String, vs, (v != nullptr) ? $nc(v)->toString() : version);
	$var($ModuleVisitor, mv, $ClassVisitor::visitModule(name, flags, vs));
	if (this->this$0->mainClass$ != nullptr) {
		$nc(mv)->visitMainClass($($nc(this->this$0->mainClass$)->replace(u'.', u'/')));
	}
	if (this->this$0->packages$ != nullptr) {
		$nc($($nc($($nc(this->this$0->packages$)->stream()))->sorted()))->forEach(static_cast<$Consumer*>($$new(ModuleInfoExtender$1$$Lambda$lambda$visitModule$0, mv)));
	}
	return $new($ModuleInfoExtender$1$1, this, $Opcodes::ASM7, mv);
}

void ModuleInfoExtender$1::visitAttribute($Attribute* attr) {
	$var($String, name, $nc(attr)->type);
	$init($ClassFileConstants);
	if ($nc(name)->equals($ClassFileConstants::MODULE_TARGET) && this->this$0->targetPlatform$ != nullptr) {
		return;
	}
	if ($nc(name)->equals($ClassFileConstants::MODULE_RESOLUTION) && this->this$0->moduleResolution$ != nullptr) {
		return;
	}
	if ($nc(name)->equals($ClassFileConstants::MODULE_HASHES) && this->this$0->hashes$ != nullptr) {
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
		if (name->equals(ModuleInfoExtender$1$$Lambda$lambda$visitModule$0::classInfo$.name)) {
			return ModuleInfoExtender$1$$Lambda$lambda$visitModule$0::load$(name, initialize);
		}
	}
	$loadClass(ModuleInfoExtender$1, name, initialize, &_ModuleInfoExtender$1_ClassInfo_, allocate$ModuleInfoExtender$1);
	return class$;
}

$Class* ModuleInfoExtender$1::class$ = nullptr;

		} // module
	} // internal
} // jdk