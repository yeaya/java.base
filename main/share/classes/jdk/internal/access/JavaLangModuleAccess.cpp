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
	{"newConfiguration", "(Ljava/lang/module/ModuleFinder;Ljava/util/Map;)Ljava/lang/module/Configuration;", "(Ljava/lang/module/ModuleFinder;Ljava/util/Map<Ljava/lang/String;Ljava/util/Set<Ljava/lang/String;>;>;)Ljava/lang/module/Configuration;", $PUBLIC | $ABSTRACT},
	{"newExports", "(Ljava/util/Set;Ljava/lang/String;)Ljava/lang/module/ModuleDescriptor$Exports;", "(Ljava/util/Set<Ljava/lang/module/ModuleDescriptor$Exports$Modifier;>;Ljava/lang/String;)Ljava/lang/module/ModuleDescriptor$Exports;", $PUBLIC | $ABSTRACT},
	{"newExports", "(Ljava/util/Set;Ljava/lang/String;Ljava/util/Set;)Ljava/lang/module/ModuleDescriptor$Exports;", "(Ljava/util/Set<Ljava/lang/module/ModuleDescriptor$Exports$Modifier;>;Ljava/lang/String;Ljava/util/Set<Ljava/lang/String;>;)Ljava/lang/module/ModuleDescriptor$Exports;", $PUBLIC | $ABSTRACT},
	{"newModuleBuilder", "(Ljava/lang/String;ZLjava/util/Set;)Ljava/lang/module/ModuleDescriptor$Builder;", "(Ljava/lang/String;ZLjava/util/Set<Ljava/lang/module/ModuleDescriptor$Modifier;>;)Ljava/lang/module/ModuleDescriptor$Builder;", $PUBLIC | $ABSTRACT},
	{"newModuleDescriptor", "(Ljava/lang/String;Ljava/lang/module/ModuleDescriptor$Version;Ljava/util/Set;Ljava/util/Set;Ljava/util/Set;Ljava/util/Set;Ljava/util/Set;Ljava/util/Set;Ljava/util/Set;Ljava/lang/String;I)Ljava/lang/module/ModuleDescriptor;", "(Ljava/lang/String;Ljava/lang/module/ModuleDescriptor$Version;Ljava/util/Set<Ljava/lang/module/ModuleDescriptor$Modifier;>;Ljava/util/Set<Ljava/lang/module/ModuleDescriptor$Requires;>;Ljava/util/Set<Ljava/lang/module/ModuleDescriptor$Exports;>;Ljava/util/Set<Ljava/lang/module/ModuleDescriptor$Opens;>;Ljava/util/Set<Ljava/lang/String;>;Ljava/util/Set<Ljava/lang/module/ModuleDescriptor$Provides;>;Ljava/util/Set<Ljava/lang/String;>;Ljava/lang/String;I)Ljava/lang/module/ModuleDescriptor;", $PUBLIC | $ABSTRACT},
	{"newOpens", "(Ljava/util/Set;Ljava/lang/String;)Ljava/lang/module/ModuleDescriptor$Opens;", "(Ljava/util/Set<Ljava/lang/module/ModuleDescriptor$Opens$Modifier;>;Ljava/lang/String;)Ljava/lang/module/ModuleDescriptor$Opens;", $PUBLIC | $ABSTRACT},
	{"newOpens", "(Ljava/util/Set;Ljava/lang/String;Ljava/util/Set;)Ljava/lang/module/ModuleDescriptor$Opens;", "(Ljava/util/Set<Ljava/lang/module/ModuleDescriptor$Opens$Modifier;>;Ljava/lang/String;Ljava/util/Set<Ljava/lang/String;>;)Ljava/lang/module/ModuleDescriptor$Opens;", $PUBLIC | $ABSTRACT},
	{"newProvides", "(Ljava/lang/String;Ljava/util/List;)Ljava/lang/module/ModuleDescriptor$Provides;", "(Ljava/lang/String;Ljava/util/List<Ljava/lang/String;>;)Ljava/lang/module/ModuleDescriptor$Provides;", $PUBLIC | $ABSTRACT},
	{"newRequires", "(Ljava/util/Set;Ljava/lang/String;Ljava/lang/module/ModuleDescriptor$Version;)Ljava/lang/module/ModuleDescriptor$Requires;", "(Ljava/util/Set<Ljava/lang/module/ModuleDescriptor$Requires$Modifier;>;Ljava/lang/String;Ljava/lang/module/ModuleDescriptor$Version;)Ljava/lang/module/ModuleDescriptor$Requires;", $PUBLIC | $ABSTRACT},
	{"packages", "(Ljava/lang/module/ModuleDescriptor$Builder;)Ljava/util/Set;", "(Ljava/lang/module/ModuleDescriptor$Builder;)Ljava/util/Set<Ljava/lang/String;>;", $PUBLIC | $ABSTRACT},
	{"requires", "(Ljava/lang/module/ModuleDescriptor$Builder;Ljava/util/Set;Ljava/lang/String;Ljava/lang/String;)V", "(Ljava/lang/module/ModuleDescriptor$Builder;Ljava/util/Set<Ljava/lang/module/ModuleDescriptor$Requires$Modifier;>;Ljava/lang/String;Ljava/lang/String;)V", $PUBLIC | $ABSTRACT},
	{"resolveAndBind", "(Ljava/lang/module/ModuleFinder;Ljava/util/Collection;Ljava/io/PrintStream;)Ljava/lang/module/Configuration;", "(Ljava/lang/module/ModuleFinder;Ljava/util/Collection<Ljava/lang/String;>;Ljava/io/PrintStream;)Ljava/lang/module/Configuration;", $PUBLIC | $ABSTRACT},
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