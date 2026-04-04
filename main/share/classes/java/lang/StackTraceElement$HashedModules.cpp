#include <java/lang/StackTraceElement$HashedModules.h>
#include <java/lang/AssertionError.h>
#include <java/lang/Module.h>
#include <java/lang/ModuleLayer.h>
#include <java/lang/StackTraceElement.h>
#include <java/lang/module/Configuration.h>
#include <java/lang/module/ModuleReference.h>
#include <java/lang/module/ResolvedModule.h>
#include <java/util/HashSet.h>
#include <java/util/Optional.h>
#include <java/util/Set.h>
#include <jdk/internal/module/ModuleHashes.h>
#include <jdk/internal/module/ModuleReferenceImpl.h>
#include <jcpp.h>

#undef HASHED_MODULES

using $AssertionError = ::java::lang::AssertionError;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Module = ::java::lang::Module;
using $ModuleLayer = ::java::lang::ModuleLayer;
using $StackTraceElement = ::java::lang::StackTraceElement;
using $ModuleReference = ::java::lang::module::ModuleReference;
using $ResolvedModule = ::java::lang::module::ResolvedModule;
using $HashSet = ::java::util::HashSet;
using $Optional = ::java::util::Optional;
using $Set = ::java::util::Set;
using $ModuleHashes = ::jdk::internal::module::ModuleHashes;
using $ModuleReferenceImpl = ::jdk::internal::module::ModuleReferenceImpl;

namespace java {
	namespace lang {

bool StackTraceElement$HashedModules::$assertionsDisabled = false;
$Set* StackTraceElement$HashedModules::HASHED_MODULES = nullptr;

void StackTraceElement$HashedModules::init$() {
}

$Set* StackTraceElement$HashedModules::hashedModules() {
	$init(StackTraceElement$HashedModules);
	$useLocalObjectStack();
	$var($Optional, resolvedModule, $$nc($$nc($ModuleLayer::boot())->configuration())->findModule("java.base"_s));
	if (!StackTraceElement$HashedModules::$assertionsDisabled && !$nc(resolvedModule)->isPresent()) {
		$throwNew($AssertionError);
	}
	$var($ModuleReference, mref, $$sure($ResolvedModule, $nc(resolvedModule)->get())->reference());
	if (!StackTraceElement$HashedModules::$assertionsDisabled && !$instanceOf($ModuleReferenceImpl, mref)) {
		$throwNew($AssertionError);
	}
	$var($ModuleHashes, hashes, $nc($cast($ModuleReferenceImpl, mref))->recordedHashes());
	if (hashes != nullptr) {
		$var($Set, names, $new($HashSet, $(hashes->names())));
		names->add("java.base"_s);
		return names;
	}
	return $Set::of();
}

bool StackTraceElement$HashedModules::contains($Module* m) {
	$init(StackTraceElement$HashedModules);
	return $nc(StackTraceElement$HashedModules::HASHED_MODULES)->contains($($nc(m)->getName()));
}

void StackTraceElement$HashedModules::clinit$($Class* clazz) {
	$load($StackTraceElement);
	StackTraceElement$HashedModules::$assertionsDisabled = !$StackTraceElement::class$->desiredAssertionStatus();
	$assignStatic(StackTraceElement$HashedModules::HASHED_MODULES, StackTraceElement$HashedModules::hashedModules());
}

StackTraceElement$HashedModules::StackTraceElement$HashedModules() {
}

$Class* StackTraceElement$HashedModules::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"$assertionsDisabled", "Z", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(StackTraceElement$HashedModules, $assertionsDisabled)},
		{"HASHED_MODULES", "Ljava/util/Set;", "Ljava/util/Set<Ljava/lang/String;>;", $STATIC, $staticField(StackTraceElement$HashedModules, HASHED_MODULES)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PRIVATE, $method(StackTraceElement$HashedModules, init$, void)},
		{"contains", "(Ljava/lang/Module;)Z", nullptr, $STATIC, $staticMethod(StackTraceElement$HashedModules, contains, bool, $Module*)},
		{"hashedModules", "()Ljava/util/Set;", "()Ljava/util/Set<Ljava/lang/String;>;", $STATIC, $staticMethod(StackTraceElement$HashedModules, hashedModules, $Set*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.lang.StackTraceElement$HashedModules", "java.lang.StackTraceElement", "HashedModules", $PRIVATE | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"java.lang.StackTraceElement$HashedModules",
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
		"java.lang.StackTraceElement"
	};
	$loadClass(StackTraceElement$HashedModules, name, initialize, &classInfo$$, StackTraceElement$HashedModules::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(StackTraceElement$HashedModules);
	});
	return class$;
}

$Class* StackTraceElement$HashedModules::class$ = nullptr;

	} // lang
} // java