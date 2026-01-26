#include <jdk/internal/access/JavaLangModuleAccess.h>

#include <java/lang/module/Configuration.h>
#include <java/lang/module/ModuleDescriptor$Builder.h>
#include <java/lang/module/ModuleDescriptor$Exports.h>
#include <java/lang/module/ModuleDescriptor$Opens.h>
#include <java/lang/module/ModuleDescriptor$Provides.h>
#include <java/lang/module/ModuleDescriptor$Requires.h>
#include <java/lang/module/ModuleDescriptor$Version.h>
#include <java/lang/module/ModuleDescriptor.h>
#include <java/lang/module/ModuleFinder.h>
#include <java/util/Collection.h>
#include <java/util/List.h>
#include <java/util/Map.h>
#include <java/util/Set.h>
#include <jcpp.h>

using $PrintStream = ::java::io::PrintStream;
using $ClassInfo = ::java::lang::ClassInfo;
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

namespace jdk {
	namespace internal {
		namespace access {

$MethodInfo _JavaLangModuleAccess_MethodInfo_[] = {
	{"newConfiguration", "(Ljava/lang/module/ModuleFinder;Ljava/util/Map;)Ljava/lang/module/Configuration;", "(Ljava/lang/module/ModuleFinder;Ljava/util/Map<Ljava/lang/String;Ljava/util/Set<Ljava/lang/String;>;>;)Ljava/lang/module/Configuration;", $PUBLIC | $ABSTRACT, $virtualMethod(JavaLangModuleAccess, newConfiguration, $Configuration*, $ModuleFinder*, $Map*)},
	{"newExports", "(Ljava/util/Set;Ljava/lang/String;)Ljava/lang/module/ModuleDescriptor$Exports;", "(Ljava/util/Set<Ljava/lang/module/ModuleDescriptor$Exports$Modifier;>;Ljava/lang/String;)Ljava/lang/module/ModuleDescriptor$Exports;", $PUBLIC | $ABSTRACT, $virtualMethod(JavaLangModuleAccess, newExports, $ModuleDescriptor$Exports*, $Set*, $String*)},
	{"newExports", "(Ljava/util/Set;Ljava/lang/String;Ljava/util/Set;)Ljava/lang/module/ModuleDescriptor$Exports;", "(Ljava/util/Set<Ljava/lang/module/ModuleDescriptor$Exports$Modifier;>;Ljava/lang/String;Ljava/util/Set<Ljava/lang/String;>;)Ljava/lang/module/ModuleDescriptor$Exports;", $PUBLIC | $ABSTRACT, $virtualMethod(JavaLangModuleAccess, newExports, $ModuleDescriptor$Exports*, $Set*, $String*, $Set*)},
	{"newModuleBuilder", "(Ljava/lang/String;ZLjava/util/Set;)Ljava/lang/module/ModuleDescriptor$Builder;", "(Ljava/lang/String;ZLjava/util/Set<Ljava/lang/module/ModuleDescriptor$Modifier;>;)Ljava/lang/module/ModuleDescriptor$Builder;", $PUBLIC | $ABSTRACT, $virtualMethod(JavaLangModuleAccess, newModuleBuilder, $ModuleDescriptor$Builder*, $String*, bool, $Set*)},
	{"newModuleDescriptor", "(Ljava/lang/String;Ljava/lang/module/ModuleDescriptor$Version;Ljava/util/Set;Ljava/util/Set;Ljava/util/Set;Ljava/util/Set;Ljava/util/Set;Ljava/util/Set;Ljava/util/Set;Ljava/lang/String;I)Ljava/lang/module/ModuleDescriptor;", "(Ljava/lang/String;Ljava/lang/module/ModuleDescriptor$Version;Ljava/util/Set<Ljava/lang/module/ModuleDescriptor$Modifier;>;Ljava/util/Set<Ljava/lang/module/ModuleDescriptor$Requires;>;Ljava/util/Set<Ljava/lang/module/ModuleDescriptor$Exports;>;Ljava/util/Set<Ljava/lang/module/ModuleDescriptor$Opens;>;Ljava/util/Set<Ljava/lang/String;>;Ljava/util/Set<Ljava/lang/module/ModuleDescriptor$Provides;>;Ljava/util/Set<Ljava/lang/String;>;Ljava/lang/String;I)Ljava/lang/module/ModuleDescriptor;", $PUBLIC | $ABSTRACT, $virtualMethod(JavaLangModuleAccess, newModuleDescriptor, $ModuleDescriptor*, $String*, $ModuleDescriptor$Version*, $Set*, $Set*, $Set*, $Set*, $Set*, $Set*, $Set*, $String*, int32_t)},
	{"newOpens", "(Ljava/util/Set;Ljava/lang/String;)Ljava/lang/module/ModuleDescriptor$Opens;", "(Ljava/util/Set<Ljava/lang/module/ModuleDescriptor$Opens$Modifier;>;Ljava/lang/String;)Ljava/lang/module/ModuleDescriptor$Opens;", $PUBLIC | $ABSTRACT, $virtualMethod(JavaLangModuleAccess, newOpens, $ModuleDescriptor$Opens*, $Set*, $String*)},
	{"newOpens", "(Ljava/util/Set;Ljava/lang/String;Ljava/util/Set;)Ljava/lang/module/ModuleDescriptor$Opens;", "(Ljava/util/Set<Ljava/lang/module/ModuleDescriptor$Opens$Modifier;>;Ljava/lang/String;Ljava/util/Set<Ljava/lang/String;>;)Ljava/lang/module/ModuleDescriptor$Opens;", $PUBLIC | $ABSTRACT, $virtualMethod(JavaLangModuleAccess, newOpens, $ModuleDescriptor$Opens*, $Set*, $String*, $Set*)},
	{"newProvides", "(Ljava/lang/String;Ljava/util/List;)Ljava/lang/module/ModuleDescriptor$Provides;", "(Ljava/lang/String;Ljava/util/List<Ljava/lang/String;>;)Ljava/lang/module/ModuleDescriptor$Provides;", $PUBLIC | $ABSTRACT, $virtualMethod(JavaLangModuleAccess, newProvides, $ModuleDescriptor$Provides*, $String*, $List*)},
	{"newRequires", "(Ljava/util/Set;Ljava/lang/String;Ljava/lang/module/ModuleDescriptor$Version;)Ljava/lang/module/ModuleDescriptor$Requires;", "(Ljava/util/Set<Ljava/lang/module/ModuleDescriptor$Requires$Modifier;>;Ljava/lang/String;Ljava/lang/module/ModuleDescriptor$Version;)Ljava/lang/module/ModuleDescriptor$Requires;", $PUBLIC | $ABSTRACT, $virtualMethod(JavaLangModuleAccess, newRequires, $ModuleDescriptor$Requires*, $Set*, $String*, $ModuleDescriptor$Version*)},
	{"packages", "(Ljava/lang/module/ModuleDescriptor$Builder;)Ljava/util/Set;", "(Ljava/lang/module/ModuleDescriptor$Builder;)Ljava/util/Set<Ljava/lang/String;>;", $PUBLIC | $ABSTRACT, $virtualMethod(JavaLangModuleAccess, packages, $Set*, $ModuleDescriptor$Builder*)},
	{"requires", "(Ljava/lang/module/ModuleDescriptor$Builder;Ljava/util/Set;Ljava/lang/String;Ljava/lang/String;)V", "(Ljava/lang/module/ModuleDescriptor$Builder;Ljava/util/Set<Ljava/lang/module/ModuleDescriptor$Requires$Modifier;>;Ljava/lang/String;Ljava/lang/String;)V", $PUBLIC | $ABSTRACT, $virtualMethod(JavaLangModuleAccess, requires, void, $ModuleDescriptor$Builder*, $Set*, $String*, $String*)},
	{"resolveAndBind", "(Ljava/lang/module/ModuleFinder;Ljava/util/Collection;Ljava/io/PrintStream;)Ljava/lang/module/Configuration;", "(Ljava/lang/module/ModuleFinder;Ljava/util/Collection<Ljava/lang/String;>;Ljava/io/PrintStream;)Ljava/lang/module/Configuration;", $PUBLIC | $ABSTRACT, $virtualMethod(JavaLangModuleAccess, resolveAndBind, $Configuration*, $ModuleFinder*, $Collection*, $PrintStream*)},
	{}
};

$ClassInfo _JavaLangModuleAccess_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"jdk.internal.access.JavaLangModuleAccess",
	nullptr,
	nullptr,
	nullptr,
	_JavaLangModuleAccess_MethodInfo_
};

$Object* allocate$JavaLangModuleAccess($Class* clazz) {
	return $of($alloc(JavaLangModuleAccess));
}

$Class* JavaLangModuleAccess::load$($String* name, bool initialize) {
	$loadClass(JavaLangModuleAccess, name, initialize, &_JavaLangModuleAccess_ClassInfo_, allocate$JavaLangModuleAccess);
	return class$;
}

$Class* JavaLangModuleAccess::class$ = nullptr;

		} // access
	} // internal
} // jdk