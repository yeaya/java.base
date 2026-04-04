#include <jdk/internal/module/ModuleLoaderMap$Modules.h>
#include <java/util/Set.h>
#include <jdk/internal/module/ModuleLoaderMap.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Set = ::java::util::Set;

namespace jdk {
	namespace internal {
		namespace module {

$Set* ModuleLoaderMap$Modules::bootModules = nullptr;
$Set* ModuleLoaderMap$Modules::platformModules = nullptr;

void ModuleLoaderMap$Modules::init$() {
}

void ModuleLoaderMap$Modules::clinit$($Class* clazz) {
	$useLocalObjectStack();
	$assignStatic(ModuleLoaderMap$Modules::bootModules, $Set::of($$new($StringArray, {
		"java.base"_s,
		"java.datatransfer"_s,
		"java.desktop"_s,
		"java.instrument"_s,
		"java.logging"_s,
		"java.management"_s,
		"java.management.rmi"_s,
		"java.naming"_s,
		"java.prefs"_s,
		"java.rmi"_s,
		"java.security.sasl"_s,
		"java.xml"_s,
		"jdk.incubator.foreign"_s,
		"jdk.incubator.vector"_s,
		"jdk.internal.vm.ci"_s,
		"jdk.jfr"_s,
		"jdk.management"_s,
		"jdk.management.agent"_s,
		"jdk.management.jfr"_s,
		"jdk.naming.rmi"_s,
		"jdk.net"_s,
		"jdk.nio.mapmode"_s,
		"jdk.sctp"_s,
		"jdk.unsupported"_s
	})));
	$assignStatic(ModuleLoaderMap$Modules::platformModules, $Set::of($$new($StringArray, {
		"java.compiler"_s,
		"java.net.http"_s,
		"java.scripting"_s,
		"java.se"_s,
		"java.security.jgss"_s,
		"java.smartcardio"_s,
		"java.sql"_s,
		"java.sql.rowset"_s,
		"java.transaction.xa"_s,
		"java.xml.crypto"_s,
		"jdk.accessibility"_s,
		"jdk.charsets"_s,
		"jdk.crypto.cryptoki"_s,
		"jdk.crypto.ec"_s,
		"jdk.dynalink"_s,
		"jdk.httpserver"_s,
		"jdk.internal.vm.compiler"_s,
		"jdk.internal.vm.compiler.management"_s,
		"jdk.jsobject"_s,
		"jdk.localedata"_s,
		"jdk.naming.dns"_s,
		"jdk.security.auth"_s,
		"jdk.security.jgss"_s,
		"jdk.xml.dom"_s,
		"jdk.zipfs"_s
	})));
}

ModuleLoaderMap$Modules::ModuleLoaderMap$Modules() {
}

$Class* ModuleLoaderMap$Modules::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"bootModules", "Ljava/util/Set;", "Ljava/util/Set<Ljava/lang/String;>;", $PRIVATE | $STATIC | $FINAL, $staticField(ModuleLoaderMap$Modules, bootModules)},
		{"platformModules", "Ljava/util/Set;", "Ljava/util/Set<Ljava/lang/String;>;", $PRIVATE | $STATIC | $FINAL, $staticField(ModuleLoaderMap$Modules, platformModules)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PRIVATE, $method(ModuleLoaderMap$Modules, init$, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"jdk.internal.module.ModuleLoaderMap$Modules", "jdk.internal.module.ModuleLoaderMap", "Modules", $PRIVATE | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"jdk.internal.module.ModuleLoaderMap$Modules",
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
		"jdk.internal.module.ModuleLoaderMap"
	};
	$loadClass(ModuleLoaderMap$Modules, name, initialize, &classInfo$$, ModuleLoaderMap$Modules::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(ModuleLoaderMap$Modules);
	});
	return class$;
}

$Class* ModuleLoaderMap$Modules::class$ = nullptr;

		} // module
	} // internal
} // jdk