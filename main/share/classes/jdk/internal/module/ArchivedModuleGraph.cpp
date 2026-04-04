#include <jdk/internal/module/ArchivedModuleGraph.h>
#include <java/lang/module/Configuration.h>
#include <java/lang/module/ModuleFinder.h>
#include <java/util/function/Function.h>
#include <jdk/internal/misc/CDS.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Configuration = ::java::lang::module::Configuration;
using $ModuleFinder = ::java::lang::module::ModuleFinder;
using $Function = ::java::util::function::Function;
using $CDS = ::jdk::internal::misc::CDS;

namespace jdk {
	namespace internal {
		namespace module {

ArchivedModuleGraph* ArchivedModuleGraph::archivedModuleGraph = nullptr;

void ArchivedModuleGraph::init$(bool hasSplitPackages, bool hasIncubatorModules, $ModuleFinder* finder, $Configuration* configuration, $Function* classLoaderFunction) {
	this->hasSplitPackages$ = hasSplitPackages;
	this->hasIncubatorModules$ = hasIncubatorModules;
	$set(this, finder$, finder);
	$set(this, configuration$, configuration);
	$set(this, classLoaderFunction$, classLoaderFunction);
}

$ModuleFinder* ArchivedModuleGraph::finder() {
	return this->finder$;
}

$Configuration* ArchivedModuleGraph::configuration() {
	return this->configuration$;
}

$Function* ArchivedModuleGraph::classLoaderFunction() {
	return this->classLoaderFunction$;
}

bool ArchivedModuleGraph::hasSplitPackages() {
	return this->hasSplitPackages$;
}

bool ArchivedModuleGraph::hasIncubatorModules() {
	return this->hasIncubatorModules$;
}

ArchivedModuleGraph* ArchivedModuleGraph::get($String* mainModule) {
	$init(ArchivedModuleGraph);
	$var(ArchivedModuleGraph, graph, ArchivedModuleGraph::archivedModuleGraph);
	if (mainModule == nullptr) {
		return graph;
	} else {
		return nullptr;
	}
}

void ArchivedModuleGraph::archive(bool hasSplitPackages, bool hasIncubatorModules, $ModuleFinder* finder, $Configuration* configuration, $Function* classLoaderFunction) {
	$init(ArchivedModuleGraph);
	$assignStatic(ArchivedModuleGraph::archivedModuleGraph, $new(ArchivedModuleGraph, hasSplitPackages, hasIncubatorModules, finder, configuration, classLoaderFunction));
}

void ArchivedModuleGraph::clinit$($Class* clazz) {
	{
		$CDS::initializeFromArchive(ArchivedModuleGraph::class$);
	}
}

ArchivedModuleGraph::ArchivedModuleGraph() {
}

$Class* ArchivedModuleGraph::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"archivedModuleGraph", "Ljdk/internal/module/ArchivedModuleGraph;", nullptr, $PRIVATE | $STATIC, $staticField(ArchivedModuleGraph, archivedModuleGraph)},
		{"hasSplitPackages", "Z", nullptr, $PRIVATE | $FINAL, $field(ArchivedModuleGraph, hasSplitPackages$)},
		{"hasIncubatorModules", "Z", nullptr, $PRIVATE | $FINAL, $field(ArchivedModuleGraph, hasIncubatorModules$)},
		{"finder", "Ljava/lang/module/ModuleFinder;", nullptr, $PRIVATE | $FINAL, $field(ArchivedModuleGraph, finder$)},
		{"configuration", "Ljava/lang/module/Configuration;", nullptr, $PRIVATE | $FINAL, $field(ArchivedModuleGraph, configuration$)},
		{"classLoaderFunction", "Ljava/util/function/Function;", "Ljava/util/function/Function<Ljava/lang/String;Ljava/lang/ClassLoader;>;", $PRIVATE | $FINAL, $field(ArchivedModuleGraph, classLoaderFunction$)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(ZZLjava/lang/module/ModuleFinder;Ljava/lang/module/Configuration;Ljava/util/function/Function;)V", "(ZZLjava/lang/module/ModuleFinder;Ljava/lang/module/Configuration;Ljava/util/function/Function<Ljava/lang/String;Ljava/lang/ClassLoader;>;)V", $PRIVATE, $method(ArchivedModuleGraph, init$, void, bool, bool, $ModuleFinder*, $Configuration*, $Function*)},
		{"archive", "(ZZLjava/lang/module/ModuleFinder;Ljava/lang/module/Configuration;Ljava/util/function/Function;)V", "(ZZLjava/lang/module/ModuleFinder;Ljava/lang/module/Configuration;Ljava/util/function/Function<Ljava/lang/String;Ljava/lang/ClassLoader;>;)V", $STATIC, $staticMethod(ArchivedModuleGraph, archive, void, bool, bool, $ModuleFinder*, $Configuration*, $Function*)},
		{"classLoaderFunction", "()Ljava/util/function/Function;", "()Ljava/util/function/Function<Ljava/lang/String;Ljava/lang/ClassLoader;>;", 0, $virtualMethod(ArchivedModuleGraph, classLoaderFunction, $Function*)},
		{"configuration", "()Ljava/lang/module/Configuration;", nullptr, 0, $virtualMethod(ArchivedModuleGraph, configuration, $Configuration*)},
		{"finder", "()Ljava/lang/module/ModuleFinder;", nullptr, 0, $virtualMethod(ArchivedModuleGraph, finder, $ModuleFinder*)},
		{"get", "(Ljava/lang/String;)Ljdk/internal/module/ArchivedModuleGraph;", nullptr, $STATIC, $staticMethod(ArchivedModuleGraph, get, ArchivedModuleGraph*, $String*)},
		{"hasIncubatorModules", "()Z", nullptr, 0, $virtualMethod(ArchivedModuleGraph, hasIncubatorModules, bool)},
		{"hasSplitPackages", "()Z", nullptr, 0, $virtualMethod(ArchivedModuleGraph, hasSplitPackages, bool)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"jdk.internal.module.ArchivedModuleGraph",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(ArchivedModuleGraph, name, initialize, &classInfo$$, ArchivedModuleGraph::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(ArchivedModuleGraph);
	});
	return class$;
}

$Class* ArchivedModuleGraph::class$ = nullptr;

		} // module
	} // internal
} // jdk