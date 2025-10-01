#include <java/lang/module/ResolvedModule.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/System.h>
#include <java/lang/module/Configuration.h>
#include <java/lang/module/ModuleDescriptor.h>
#include <java/lang/module/ModuleReference.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/Objects.h>
#include <java/util/Set.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Configuration = ::java::lang::module::Configuration;
using $ModuleDescriptor = ::java::lang::module::ModuleDescriptor;
using $ModuleReference = ::java::lang::module::ModuleReference;
using $Objects = ::java::util::Objects;
using $Set = ::java::util::Set;

namespace java {
	namespace lang {
		namespace module {

$FieldInfo _ResolvedModule_FieldInfo_[] = {
	{"cf", "Ljava/lang/module/Configuration;", nullptr, $PRIVATE | $FINAL, $field(ResolvedModule, cf)},
	{"mref", "Ljava/lang/module/ModuleReference;", nullptr, $PRIVATE | $FINAL, $field(ResolvedModule, mref)},
	{}
};

$MethodInfo _ResolvedModule_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/module/Configuration;Ljava/lang/module/ModuleReference;)V", nullptr, 0, $method(static_cast<void(ResolvedModule::*)($Configuration*,$ModuleReference*)>(&ResolvedModule::init$))},
	{"configuration", "()Ljava/lang/module/Configuration;", nullptr, $PUBLIC, $method(static_cast<$Configuration*(ResolvedModule::*)()>(&ResolvedModule::configuration))},
	{"descriptor", "()Ljava/lang/module/ModuleDescriptor;", nullptr, 0, $method(static_cast<$ModuleDescriptor*(ResolvedModule::*)()>(&ResolvedModule::descriptor))},
	{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"hashCode", "()I", nullptr, $PUBLIC},
	{"name", "()Ljava/lang/String;", nullptr, $PUBLIC, $method(static_cast<$String*(ResolvedModule::*)()>(&ResolvedModule::name))},
	{"reads", "()Ljava/util/Set;", "()Ljava/util/Set<Ljava/lang/module/ResolvedModule;>;", $PUBLIC, $method(static_cast<$Set*(ResolvedModule::*)()>(&ResolvedModule::reads))},
	{"reference", "()Ljava/lang/module/ModuleReference;", nullptr, $PUBLIC, $method(static_cast<$ModuleReference*(ResolvedModule::*)()>(&ResolvedModule::reference))},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _ResolvedModule_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"java.lang.module.ResolvedModule",
	"java.lang.Object",
	nullptr,
	_ResolvedModule_FieldInfo_,
	_ResolvedModule_MethodInfo_
};

$Object* allocate$ResolvedModule($Class* clazz) {
	return $of($alloc(ResolvedModule));
}

void ResolvedModule::init$($Configuration* cf, $ModuleReference* mref) {
	$set(this, cf, $cast($Configuration, $Objects::requireNonNull(cf)));
	$set(this, mref, $cast($ModuleReference, $Objects::requireNonNull(mref)));
}

$Configuration* ResolvedModule::configuration() {
	return this->cf;
}

$ModuleReference* ResolvedModule::reference() {
	return this->mref;
}

$ModuleDescriptor* ResolvedModule::descriptor() {
	return $nc(this->mref)->descriptor();
}

$String* ResolvedModule::name() {
	return $nc($($nc(this->mref)->descriptor()))->name();
}

$Set* ResolvedModule::reads() {
	return $nc(this->cf)->reads(this);
}

int32_t ResolvedModule::hashCode() {
	int32_t var$0 = $nc($of(this->cf))->hashCode();
	return var$0 ^ $nc($of(this->mref))->hashCode();
}

bool ResolvedModule::equals(Object$* ob) {
	$var(ResolvedModule, that, nullptr);
	bool var$2 = $instanceOf(ResolvedModule, ob);
	if (var$2) {
		$assign(that, $cast(ResolvedModule, ob));
		var$2 = true;
	}
	bool var$1 = (var$2);
	bool var$0 = var$1 && $Objects::equals(this->cf, $nc(that)->cf);
	return var$0 && $Objects::equals(this->mref, $nc(that)->mref);
}

$String* ResolvedModule::toString() {
	$var($String, var$0, $$str({$$str($System::identityHashCode(this->cf)), "/"_s}));
	return $concat(var$0, $(name()));
}

ResolvedModule::ResolvedModule() {
}

$Class* ResolvedModule::load$($String* name, bool initialize) {
	$loadClass(ResolvedModule, name, initialize, &_ResolvedModule_ClassInfo_, allocate$ResolvedModule);
	return class$;
}

$Class* ResolvedModule::class$ = nullptr;

		} // module
	} // lang
} // java