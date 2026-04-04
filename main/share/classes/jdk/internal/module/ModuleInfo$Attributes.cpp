#include <jdk/internal/module/ModuleInfo$Attributes.h>
#include <java/lang/module/ModuleDescriptor.h>
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
using $ModuleResolution = ::jdk::internal::module::ModuleResolution;
using $ModuleTarget = ::jdk::internal::module::ModuleTarget;

namespace jdk {
	namespace internal {
		namespace module {

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
	$FieldInfo fieldInfos$$[] = {
		{"descriptor", "Ljava/lang/module/ModuleDescriptor;", nullptr, $PRIVATE | $FINAL, $field(ModuleInfo$Attributes, descriptor$)},
		{"target", "Ljdk/internal/module/ModuleTarget;", nullptr, $PRIVATE | $FINAL, $field(ModuleInfo$Attributes, target$)},
		{"recordedHashes", "Ljdk/internal/module/ModuleHashes;", nullptr, $PRIVATE | $FINAL, $field(ModuleInfo$Attributes, recordedHashes$)},
		{"moduleResolution", "Ljdk/internal/module/ModuleResolution;", nullptr, $PRIVATE | $FINAL, $field(ModuleInfo$Attributes, moduleResolution$)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/module/ModuleDescriptor;Ljdk/internal/module/ModuleTarget;Ljdk/internal/module/ModuleHashes;Ljdk/internal/module/ModuleResolution;)V", nullptr, 0, $method(ModuleInfo$Attributes, init$, void, $ModuleDescriptor*, $ModuleTarget*, $ModuleHashes*, $ModuleResolution*)},
		{"descriptor", "()Ljava/lang/module/ModuleDescriptor;", nullptr, $PUBLIC, $method(ModuleInfo$Attributes, descriptor, $ModuleDescriptor*)},
		{"moduleResolution", "()Ljdk/internal/module/ModuleResolution;", nullptr, $PUBLIC, $method(ModuleInfo$Attributes, moduleResolution, $ModuleResolution*)},
		{"recordedHashes", "()Ljdk/internal/module/ModuleHashes;", nullptr, $PUBLIC, $method(ModuleInfo$Attributes, recordedHashes, $ModuleHashes*)},
		{"target", "()Ljdk/internal/module/ModuleTarget;", nullptr, $PUBLIC, $method(ModuleInfo$Attributes, target, $ModuleTarget*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"jdk.internal.module.ModuleInfo$Attributes", "jdk.internal.module.ModuleInfo", "Attributes", $PUBLIC | $STATIC | $FINAL},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER,
		"jdk.internal.module.ModuleInfo$Attributes",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"jdk.internal.module.ModuleInfo"
	};
	$loadClass(ModuleInfo$Attributes, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ModuleInfo$Attributes);
	});
	return class$;
}

$Class* ModuleInfo$Attributes::class$ = nullptr;

		} // module
	} // internal
} // jdk