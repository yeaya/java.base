#include <jdk/internal/module/ModuleInfo$Attributes.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/module/ModuleDescriptor.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jdk/internal/module/ModuleHashes.h>
#include <jdk/internal/module/ModuleInfo.h>
#include <jdk/internal/module/ModuleResolution.h>
#include <jdk/internal/module/ModuleTarget.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ModuleDescriptor = ::java::lang::module::ModuleDescriptor;
using $ModuleHashes = ::jdk::internal::module::ModuleHashes;
using $ModuleInfo = ::jdk::internal::module::ModuleInfo;
using $ModuleResolution = ::jdk::internal::module::ModuleResolution;
using $ModuleTarget = ::jdk::internal::module::ModuleTarget;

namespace jdk {
	namespace internal {
		namespace module {

$FieldInfo _ModuleInfo$Attributes_FieldInfo_[] = {
	{"descriptor", "Ljava/lang/module/ModuleDescriptor;", nullptr, $PRIVATE | $FINAL, $field(ModuleInfo$Attributes, descriptor$)},
	{"target", "Ljdk/internal/module/ModuleTarget;", nullptr, $PRIVATE | $FINAL, $field(ModuleInfo$Attributes, target$)},
	{"recordedHashes", "Ljdk/internal/module/ModuleHashes;", nullptr, $PRIVATE | $FINAL, $field(ModuleInfo$Attributes, recordedHashes$)},
	{"moduleResolution", "Ljdk/internal/module/ModuleResolution;", nullptr, $PRIVATE | $FINAL, $field(ModuleInfo$Attributes, moduleResolution$)},
	{}
};

$MethodInfo _ModuleInfo$Attributes_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/module/ModuleDescriptor;Ljdk/internal/module/ModuleTarget;Ljdk/internal/module/ModuleHashes;Ljdk/internal/module/ModuleResolution;)V", nullptr, 0, $method(static_cast<void(ModuleInfo$Attributes::*)($ModuleDescriptor*,$ModuleTarget*,$ModuleHashes*,$ModuleResolution*)>(&ModuleInfo$Attributes::init$))},
	{"descriptor", "()Ljava/lang/module/ModuleDescriptor;", nullptr, $PUBLIC, $method(static_cast<$ModuleDescriptor*(ModuleInfo$Attributes::*)()>(&ModuleInfo$Attributes::descriptor))},
	{"moduleResolution", "()Ljdk/internal/module/ModuleResolution;", nullptr, $PUBLIC, $method(static_cast<$ModuleResolution*(ModuleInfo$Attributes::*)()>(&ModuleInfo$Attributes::moduleResolution))},
	{"recordedHashes", "()Ljdk/internal/module/ModuleHashes;", nullptr, $PUBLIC, $method(static_cast<$ModuleHashes*(ModuleInfo$Attributes::*)()>(&ModuleInfo$Attributes::recordedHashes))},
	{"target", "()Ljdk/internal/module/ModuleTarget;", nullptr, $PUBLIC, $method(static_cast<$ModuleTarget*(ModuleInfo$Attributes::*)()>(&ModuleInfo$Attributes::target))},
	{}
};

$InnerClassInfo _ModuleInfo$Attributes_InnerClassesInfo_[] = {
	{"jdk.internal.module.ModuleInfo$Attributes", "jdk.internal.module.ModuleInfo", "Attributes", $PUBLIC | $STATIC | $FINAL},
	{}
};

$ClassInfo _ModuleInfo$Attributes_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"jdk.internal.module.ModuleInfo$Attributes",
	"java.lang.Object",
	nullptr,
	_ModuleInfo$Attributes_FieldInfo_,
	_ModuleInfo$Attributes_MethodInfo_,
	nullptr,
	nullptr,
	_ModuleInfo$Attributes_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"jdk.internal.module.ModuleInfo"
};

$Object* allocate$ModuleInfo$Attributes($Class* clazz) {
	return $of($alloc(ModuleInfo$Attributes));
}

void ModuleInfo$Attributes::init$($ModuleDescriptor* descriptor, $ModuleTarget* target, $ModuleHashes* recordedHashes, $ModuleResolution* moduleResolution) {
	$set(this, descriptor$, descriptor);
	$set(this, target$, target);
	$set(this, recordedHashes$, recordedHashes);
	$set(this, moduleResolution$, moduleResolution);
}

$ModuleDescriptor* ModuleInfo$Attributes::descriptor() {
	return this->descriptor$;
}

$ModuleTarget* ModuleInfo$Attributes::target() {
	return this->target$;
}

$ModuleHashes* ModuleInfo$Attributes::recordedHashes() {
	return this->recordedHashes$;
}

$ModuleResolution* ModuleInfo$Attributes::moduleResolution() {
	return this->moduleResolution$;
}

ModuleInfo$Attributes::ModuleInfo$Attributes() {
}

$Class* ModuleInfo$Attributes::load$($String* name, bool initialize) {
	$loadClass(ModuleInfo$Attributes, name, initialize, &_ModuleInfo$Attributes_ClassInfo_, allocate$ModuleInfo$Attributes);
	return class$;
}

$Class* ModuleInfo$Attributes::class$ = nullptr;

		} // module
	} // internal
} // jdk