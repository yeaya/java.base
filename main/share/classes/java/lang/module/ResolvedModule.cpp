#include <java/lang/module/ResolvedModule.h>
#include <java/lang/module/Configuration.h>
#include <java/lang/module/ModuleDescriptor.h>
#include <java/lang/module/ModuleReference.h>
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
	return $$nc($nc(this->mref)->descriptor())->name();
}

$Set* ResolvedModule::reads() {
	return $nc(this->cf)->reads(this);
}

int32_t ResolvedModule::hashCode() {
	int32_t var$0 = $nc(this->cf)->hashCode();
	return var$0 ^ $nc(this->mref)->hashCode();
}

bool ResolvedModule::equals(Object$* ob) {
	$var(ResolvedModule, that, nullptr);
	bool var$2 = $instanceOf(ResolvedModule, ob);
	if (var$2) {
		$assign(that, $cast(ResolvedModule, ob));
		var$2 = true;
	}
	bool var$1 = var$2;
	bool var$0 = var$1 && $Objects::equals(this->cf, $nc(that)->cf);
	return var$0 && $Objects::equals(this->mref, that->mref);
}

$String* ResolvedModule::toString() {
	$useLocalObjectStack();
	$var($StringBuilder, var$0, $new($StringBuilder));
	var$0->append($System::identityHashCode(this->cf));
	var$0->append("/"_s);
	var$0->append($(name()));
	return $str(var$0);
}

ResolvedModule::ResolvedModule() {
}

$Class* ResolvedModule::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"cf", "Ljava/lang/module/Configuration;", nullptr, $PRIVATE | $FINAL, $field(ResolvedModule, cf)},
		{"mref", "Ljava/lang/module/ModuleReference;", nullptr, $PRIVATE | $FINAL, $field(ResolvedModule, mref)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/module/Configuration;Ljava/lang/module/ModuleReference;)V", nullptr, 0, $method(ResolvedModule, init$, void, $Configuration*, $ModuleReference*)},
		{"configuration", "()Ljava/lang/module/Configuration;", nullptr, $PUBLIC, $method(ResolvedModule, configuration, $Configuration*)},
		{"descriptor", "()Ljava/lang/module/ModuleDescriptor;", nullptr, 0, $method(ResolvedModule, descriptor, $ModuleDescriptor*)},
		{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC, $virtualMethod(ResolvedModule, equals, bool, Object$*)},
		{"hashCode", "()I", nullptr, $PUBLIC, $virtualMethod(ResolvedModule, hashCode, int32_t)},
		{"name", "()Ljava/lang/String;", nullptr, $PUBLIC, $method(ResolvedModule, name, $String*)},
		{"reads", "()Ljava/util/Set;", "()Ljava/util/Set<Ljava/lang/module/ResolvedModule;>;", $PUBLIC, $method(ResolvedModule, reads, $Set*)},
		{"reference", "()Ljava/lang/module/ModuleReference;", nullptr, $PUBLIC, $method(ResolvedModule, reference, $ModuleReference*)},
		{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(ResolvedModule, toString, $String*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER,
		"java.lang.module.ResolvedModule",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(ResolvedModule, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ResolvedModule);
	});
	return class$;
}

$Class* ResolvedModule::class$ = nullptr;

		} // module
	} // lang
} // java