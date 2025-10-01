#include <java/lang/module/ModuleDescriptor$1.h>

#include <java/io/PrintStream.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/module/Configuration.h>
#include <java/lang/module/ModuleDescriptor$Builder.h>
#include <java/lang/module/ModuleDescriptor$Exports.h>
#include <java/lang/module/ModuleDescriptor$Opens.h>
#include <java/lang/module/ModuleDescriptor$Provides.h>
#include <java/lang/module/ModuleDescriptor$Requires.h>
#include <java/lang/module/ModuleDescriptor$Version.h>
#include <java/lang/module/ModuleDescriptor.h>
#include <java/lang/module/ModuleFinder.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/Collection.h>
#include <java/util/List.h>
#include <java/util/Map.h>
#include <java/util/Set.h>
#include <jcpp.h>

using $PrintStream = ::java::io::PrintStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Configuration = ::java::lang::module::Configuration;
using $ModuleDescriptor = ::java::lang::module::ModuleDescriptor;
using $ModuleDescriptor$Builder = ::java::lang::module::ModuleDescriptor$Builder;
using $ModuleDescriptor$Exports = ::java::lang::module::ModuleDescriptor$Exports;
using $ModuleDescriptor$Opens = ::java::lang::module::ModuleDescriptor$Opens;
using $ModuleDescriptor$Provides = ::java::lang::module::ModuleDescriptor$Provides;
using $ModuleDescriptor$Requires = ::java::lang::module::ModuleDescriptor$Requires;
using $ModuleDescriptor$Version = ::java::lang::module::ModuleDescriptor$Version;
using $ModuleFinder = ::java::lang::module::ModuleFinder;
using $Collection = ::java::util::Collection;
using $List = ::java::util::List;
using $Map = ::java::util::Map;
using $Set = ::java::util::Set;
using $JavaLangModuleAccess = ::jdk::internal::access::JavaLangModuleAccess;

namespace java {
	namespace lang {
		namespace module {

$MethodInfo _ModuleDescriptor$1_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(ModuleDescriptor$1::*)()>(&ModuleDescriptor$1::init$))},
	{"newConfiguration", "(Ljava/lang/module/ModuleFinder;Ljava/util/Map;)Ljava/lang/module/Configuration;", "(Ljava/lang/module/ModuleFinder;Ljava/util/Map<Ljava/lang/String;Ljava/util/Set<Ljava/lang/String;>;>;)Ljava/lang/module/Configuration;", $PUBLIC},
	{"newExports", "(Ljava/util/Set;Ljava/lang/String;)Ljava/lang/module/ModuleDescriptor$Exports;", "(Ljava/util/Set<Ljava/lang/module/ModuleDescriptor$Exports$Modifier;>;Ljava/lang/String;)Ljava/lang/module/ModuleDescriptor$Exports;", $PUBLIC},
	{"newExports", "(Ljava/util/Set;Ljava/lang/String;Ljava/util/Set;)Ljava/lang/module/ModuleDescriptor$Exports;", "(Ljava/util/Set<Ljava/lang/module/ModuleDescriptor$Exports$Modifier;>;Ljava/lang/String;Ljava/util/Set<Ljava/lang/String;>;)Ljava/lang/module/ModuleDescriptor$Exports;", $PUBLIC},
	{"newModuleBuilder", "(Ljava/lang/String;ZLjava/util/Set;)Ljava/lang/module/ModuleDescriptor$Builder;", "(Ljava/lang/String;ZLjava/util/Set<Ljava/lang/module/ModuleDescriptor$Modifier;>;)Ljava/lang/module/ModuleDescriptor$Builder;", $PUBLIC},
	{"newModuleDescriptor", "(Ljava/lang/String;Ljava/lang/module/ModuleDescriptor$Version;Ljava/util/Set;Ljava/util/Set;Ljava/util/Set;Ljava/util/Set;Ljava/util/Set;Ljava/util/Set;Ljava/util/Set;Ljava/lang/String;I)Ljava/lang/module/ModuleDescriptor;", "(Ljava/lang/String;Ljava/lang/module/ModuleDescriptor$Version;Ljava/util/Set<Ljava/lang/module/ModuleDescriptor$Modifier;>;Ljava/util/Set<Ljava/lang/module/ModuleDescriptor$Requires;>;Ljava/util/Set<Ljava/lang/module/ModuleDescriptor$Exports;>;Ljava/util/Set<Ljava/lang/module/ModuleDescriptor$Opens;>;Ljava/util/Set<Ljava/lang/String;>;Ljava/util/Set<Ljava/lang/module/ModuleDescriptor$Provides;>;Ljava/util/Set<Ljava/lang/String;>;Ljava/lang/String;I)Ljava/lang/module/ModuleDescriptor;", $PUBLIC},
	{"newOpens", "(Ljava/util/Set;Ljava/lang/String;Ljava/util/Set;)Ljava/lang/module/ModuleDescriptor$Opens;", "(Ljava/util/Set<Ljava/lang/module/ModuleDescriptor$Opens$Modifier;>;Ljava/lang/String;Ljava/util/Set<Ljava/lang/String;>;)Ljava/lang/module/ModuleDescriptor$Opens;", $PUBLIC},
	{"newOpens", "(Ljava/util/Set;Ljava/lang/String;)Ljava/lang/module/ModuleDescriptor$Opens;", "(Ljava/util/Set<Ljava/lang/module/ModuleDescriptor$Opens$Modifier;>;Ljava/lang/String;)Ljava/lang/module/ModuleDescriptor$Opens;", $PUBLIC},
	{"newProvides", "(Ljava/lang/String;Ljava/util/List;)Ljava/lang/module/ModuleDescriptor$Provides;", "(Ljava/lang/String;Ljava/util/List<Ljava/lang/String;>;)Ljava/lang/module/ModuleDescriptor$Provides;", $PUBLIC},
	{"newRequires", "(Ljava/util/Set;Ljava/lang/String;Ljava/lang/module/ModuleDescriptor$Version;)Ljava/lang/module/ModuleDescriptor$Requires;", "(Ljava/util/Set<Ljava/lang/module/ModuleDescriptor$Requires$Modifier;>;Ljava/lang/String;Ljava/lang/module/ModuleDescriptor$Version;)Ljava/lang/module/ModuleDescriptor$Requires;", $PUBLIC},
	{"packages", "(Ljava/lang/module/ModuleDescriptor$Builder;)Ljava/util/Set;", "(Ljava/lang/module/ModuleDescriptor$Builder;)Ljava/util/Set<Ljava/lang/String;>;", $PUBLIC},
	{"requires", "(Ljava/lang/module/ModuleDescriptor$Builder;Ljava/util/Set;Ljava/lang/String;Ljava/lang/String;)V", "(Ljava/lang/module/ModuleDescriptor$Builder;Ljava/util/Set<Ljava/lang/module/ModuleDescriptor$Requires$Modifier;>;Ljava/lang/String;Ljava/lang/String;)V", $PUBLIC},
	{"resolveAndBind", "(Ljava/lang/module/ModuleFinder;Ljava/util/Collection;Ljava/io/PrintStream;)Ljava/lang/module/Configuration;", "(Ljava/lang/module/ModuleFinder;Ljava/util/Collection<Ljava/lang/String;>;Ljava/io/PrintStream;)Ljava/lang/module/Configuration;", $PUBLIC},
	{}
};

$EnclosingMethodInfo _ModuleDescriptor$1_EnclosingMethodInfo_ = {
	"java.lang.module.ModuleDescriptor",
	nullptr,
	nullptr
};

$InnerClassInfo _ModuleDescriptor$1_InnerClassesInfo_[] = {
	{"java.lang.module.ModuleDescriptor$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _ModuleDescriptor$1_ClassInfo_ = {
	$ACC_SUPER,
	"java.lang.module.ModuleDescriptor$1",
	"java.lang.Object",
	"jdk.internal.access.JavaLangModuleAccess",
	nullptr,
	_ModuleDescriptor$1_MethodInfo_,
	nullptr,
	&_ModuleDescriptor$1_EnclosingMethodInfo_,
	_ModuleDescriptor$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.lang.module.ModuleDescriptor"
};

$Object* allocate$ModuleDescriptor$1($Class* clazz) {
	return $of($alloc(ModuleDescriptor$1));
}

void ModuleDescriptor$1::init$() {
}

$ModuleDescriptor$Builder* ModuleDescriptor$1::newModuleBuilder($String* mn, bool strict, $Set* modifiers) {
	return $new($ModuleDescriptor$Builder, mn, strict, modifiers);
}

$Set* ModuleDescriptor$1::packages($ModuleDescriptor$Builder* builder) {
	return $nc(builder)->packages();
}

void ModuleDescriptor$1::requires($ModuleDescriptor$Builder* builder, $Set* ms, $String* mn, $String* rawCompiledVersion) {
	$nc(builder)->requires(ms, mn, rawCompiledVersion);
}

$ModuleDescriptor$Requires* ModuleDescriptor$1::newRequires($Set* ms, $String* mn, $ModuleDescriptor$Version* v) {
	return $new($ModuleDescriptor$Requires, ms, mn, v, true);
}

$ModuleDescriptor$Exports* ModuleDescriptor$1::newExports($Set* ms, $String* source) {
	return $new($ModuleDescriptor$Exports, ms, source, $($Set::of()), true);
}

$ModuleDescriptor$Exports* ModuleDescriptor$1::newExports($Set* ms, $String* source, $Set* targets) {
	return $new($ModuleDescriptor$Exports, ms, source, targets, true);
}

$ModuleDescriptor$Opens* ModuleDescriptor$1::newOpens($Set* ms, $String* source, $Set* targets) {
	return $new($ModuleDescriptor$Opens, ms, source, targets, true);
}

$ModuleDescriptor$Opens* ModuleDescriptor$1::newOpens($Set* ms, $String* source) {
	return $new($ModuleDescriptor$Opens, ms, source, $($Set::of()), true);
}

$ModuleDescriptor$Provides* ModuleDescriptor$1::newProvides($String* service, $List* providers) {
	return $new($ModuleDescriptor$Provides, service, providers, true);
}

$ModuleDescriptor* ModuleDescriptor$1::newModuleDescriptor($String* name, $ModuleDescriptor$Version* version, $Set* modifiers, $Set* requires, $Set* exports, $Set* opens, $Set* uses, $Set* provides, $Set* packages, $String* mainClass, int32_t hashCode) {
	return $new($ModuleDescriptor, name, version, modifiers, requires, exports, opens, uses, provides, packages, mainClass, hashCode, false);
}

$Configuration* ModuleDescriptor$1::resolveAndBind($ModuleFinder* finder, $Collection* roots, $PrintStream* traceOutput) {
	return $Configuration::resolveAndBind(finder, roots, traceOutput);
}

$Configuration* ModuleDescriptor$1::newConfiguration($ModuleFinder* finder, $Map* graph) {
	return $new($Configuration, finder, graph);
}

ModuleDescriptor$1::ModuleDescriptor$1() {
}

$Class* ModuleDescriptor$1::load$($String* name, bool initialize) {
	$loadClass(ModuleDescriptor$1, name, initialize, &_ModuleDescriptor$1_ClassInfo_, allocate$ModuleDescriptor$1);
	return class$;
}

$Class* ModuleDescriptor$1::class$ = nullptr;

		} // module
	} // lang
} // java