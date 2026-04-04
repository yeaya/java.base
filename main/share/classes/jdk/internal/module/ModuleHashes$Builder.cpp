#include <jdk/internal/module/ModuleHashes$Builder.h>
#include <java/util/HashMap.h>
#include <java/util/Map.h>
#include <java/util/Objects.h>
#include <jdk/internal/module/ModuleHashes.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $HashMap = ::java::util::HashMap;
using $Objects = ::java::util::Objects;
using $ModuleHashes = ::jdk::internal::module::ModuleHashes;

namespace jdk {
	namespace internal {
		namespace module {

void ModuleHashes$Builder::init$($String* algorithm, int32_t initialCapacity) {
	$set(this, nameToHash, $new($HashMap, initialCapacity));
	$set(this, algorithm, $cast($String, $Objects::requireNonNull(algorithm)));
}

ModuleHashes$Builder* ModuleHashes$Builder::hashForModule($String* mn, $bytes* hash) {
	$nc(this->nameToHash)->put(mn, hash);
	return this;
}

$ModuleHashes* ModuleHashes$Builder::build() {
	if (!$nc(this->nameToHash)->isEmpty()) {
		return $new($ModuleHashes, this->algorithm, this->nameToHash);
	} else {
		return nullptr;
	}
}

ModuleHashes$Builder::ModuleHashes$Builder() {
}

$Class* ModuleHashes$Builder::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"algorithm", "Ljava/lang/String;", nullptr, $FINAL, $field(ModuleHashes$Builder, algorithm)},
		{"nameToHash", "Ljava/util/Map;", "Ljava/util/Map<Ljava/lang/String;[B>;", $FINAL, $field(ModuleHashes$Builder, nameToHash)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/String;I)V", nullptr, 0, $method(ModuleHashes$Builder, init$, void, $String*, int32_t)},
		{"build", "()Ljdk/internal/module/ModuleHashes;", nullptr, $PUBLIC, $virtualMethod(ModuleHashes$Builder, build, $ModuleHashes*)},
		{"hashForModule", "(Ljava/lang/String;[B)Ljdk/internal/module/ModuleHashes$Builder;", nullptr, $PUBLIC, $virtualMethod(ModuleHashes$Builder, hashForModule, ModuleHashes$Builder*, $String*, $bytes*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"jdk.internal.module.ModuleHashes$Builder", "jdk.internal.module.ModuleHashes", "Builder", $PUBLIC | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"jdk.internal.module.ModuleHashes$Builder",
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
		"jdk.internal.module.ModuleHashes"
	};
	$loadClass(ModuleHashes$Builder, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ModuleHashes$Builder);
	});
	return class$;
}

$Class* ModuleHashes$Builder::class$ = nullptr;

		} // module
	} // internal
} // jdk