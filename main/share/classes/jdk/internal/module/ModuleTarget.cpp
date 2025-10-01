#include <jdk/internal/module/ModuleTarget.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace jdk {
	namespace internal {
		namespace module {

$FieldInfo _ModuleTarget_FieldInfo_[] = {
	{"targetPlatform", "Ljava/lang/String;", nullptr, $PRIVATE | $FINAL, $field(ModuleTarget, targetPlatform$)},
	{}
};

$MethodInfo _ModuleTarget_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(ModuleTarget::*)($String*)>(&ModuleTarget::init$))},
	{"targetPlatform", "()Ljava/lang/String;", nullptr, $PUBLIC, $method(static_cast<$String*(ModuleTarget::*)()>(&ModuleTarget::targetPlatform))},
	{}
};

$ClassInfo _ModuleTarget_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"jdk.internal.module.ModuleTarget",
	"java.lang.Object",
	nullptr,
	_ModuleTarget_FieldInfo_,
	_ModuleTarget_MethodInfo_
};

$Object* allocate$ModuleTarget($Class* clazz) {
	return $of($alloc(ModuleTarget));
}

void ModuleTarget::init$($String* targetPlatform) {
	$set(this, targetPlatform$, targetPlatform);
}

$String* ModuleTarget::targetPlatform() {
	return this->targetPlatform$;
}

ModuleTarget::ModuleTarget() {
}

$Class* ModuleTarget::load$($String* name, bool initialize) {
	$loadClass(ModuleTarget, name, initialize, &_ModuleTarget_ClassInfo_, allocate$ModuleTarget);
	return class$;
}

$Class* ModuleTarget::class$ = nullptr;

		} // module
	} // internal
} // jdk