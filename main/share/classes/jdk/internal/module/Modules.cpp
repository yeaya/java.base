#include <jdk/internal/module/Modules.h>

#include <java/io/Serializable.h>
#include <java/lang/AssertionError.h>
#include <java/lang/ClassLoader.h>
#include <java/lang/InternalError.h>
#include <java/lang/Module.h>
#include <java/lang/ModuleLayer.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/lang/module/Configuration.h>
#include <java/lang/module/ModuleDescriptor$Exports.h>
#include <java/lang/module/ModuleDescriptor$Opens.h>
#include <java/lang/module/ModuleDescriptor.h>
#include <java/lang/module/ModuleFinder.h>
#include <java/lang/module/ModuleReference.h>
#include <java/lang/module/ResolvedModule.h>
#include <java/net/URI.h>
#include <java/nio/file/Path.h>
#include <java/security/AccessController.h>
#include <java/security/PrivilegedAction.h>
#include <java/util/Collection.h>
#include <java/util/Iterator.h>
#include <java/util/List.h>
#include <java/util/Map.h>
#include <java/util/Optional.h>
#include <java/util/Set.h>
#include <java/util/function/Consumer.h>
#include <java/util/function/Function.h>
#include <java/util/function/Predicate.h>
#include <java/util/function/Supplier.h>
#include <java/util/stream/Collector.h>
#include <java/util/stream/Collectors.h>
#include <java/util/stream/Stream.h>
#include <jdk/internal/access/JavaLangAccess.h>
#include <jdk/internal/access/JavaLangModuleAccess.h>
#include <jdk/internal/access/SharedSecrets.h>
#include <jdk/internal/loader/BootLoader.h>
#include <jdk/internal/loader/BuiltinClassLoader.h>
#include <jdk/internal/loader/ClassLoaders.h>
#include <jdk/internal/module/ModuleBootstrap.h>
#include <jdk/internal/module/ModuleLoaderMap.h>
#include <jdk/internal/module/ServicesCatalog.h>
#include <jcpp.h>

#undef JLA
#undef JLMA

using $PathArray = $Array<::java::nio::file::Path>;
using $PrintStream = ::java::io::PrintStream;
using $Serializable = ::java::io::Serializable;
using $AssertionError = ::java::lang::AssertionError;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $ClassLoader = ::java::lang::ClassLoader;
using $FieldInfo = ::java::lang::FieldInfo;
using $InternalError = ::java::lang::InternalError;
using $Iterable = ::java::lang::Iterable;
using $MethodInfo = ::java::lang::MethodInfo;
using $Module = ::java::lang::Module;
using $ModuleLayer = ::java::lang::ModuleLayer;
using $Void = ::java::lang::Void;
using $CallSite = ::java::lang::invoke::CallSite;
using $LambdaMetafactory = ::java::lang::invoke::LambdaMetafactory;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $MethodHandles$Lookup = ::java::lang::invoke::MethodHandles$Lookup;
using $MethodType = ::java::lang::invoke::MethodType;
using $Configuration = ::java::lang::module::Configuration;
using $ModuleDescriptor = ::java::lang::module::ModuleDescriptor;
using $ModuleDescriptor$Exports = ::java::lang::module::ModuleDescriptor$Exports;
using $ModuleDescriptor$Opens = ::java::lang::module::ModuleDescriptor$Opens;
using $ModuleFinder = ::java::lang::module::ModuleFinder;
using $ModuleReference = ::java::lang::module::ModuleReference;
using $ResolvedModule = ::java::lang::module::ResolvedModule;
using $URI = ::java::net::URI;
using $Path = ::java::nio::file::Path;
using $AccessController = ::java::security::AccessController;
using $PrivilegedAction = ::java::security::PrivilegedAction;
using $Collection = ::java::util::Collection;
using $Iterator = ::java::util::Iterator;
using $List = ::java::util::List;
using $Map = ::java::util::Map;
using $Optional = ::java::util::Optional;
using $Set = ::java::util::Set;
using $Consumer = ::java::util::function::Consumer;
using $Function = ::java::util::function::Function;
using $Predicate = ::java::util::function::Predicate;
using $Supplier = ::java::util::function::Supplier;
using $Collector = ::java::util::stream::Collector;
using $Collectors = ::java::util::stream::Collectors;
using $Stream = ::java::util::stream::Stream;
using $JavaLangAccess = ::jdk::internal::access::JavaLangAccess;
using $JavaLangModuleAccess = ::jdk::internal::access::JavaLangModuleAccess;
using $SharedSecrets = ::jdk::internal::access::SharedSecrets;
using $BootLoader = ::jdk::internal::loader::BootLoader;
using $BuiltinClassLoader = ::jdk::internal::loader::BuiltinClassLoader;
using $ClassLoaders = ::jdk::internal::loader::ClassLoaders;
using $ModuleBootstrap = ::jdk::internal::module::ModuleBootstrap;
using $ModuleLoaderMap = ::jdk::internal::module::ModuleLoaderMap;
using $ServicesCatalog = ::jdk::internal::module::ServicesCatalog;

namespace jdk {
	namespace internal {
		namespace module {

class Modules$$Lambda$getClassLoader : public $PrivilegedAction {
	$class(Modules$$Lambda$getClassLoader, $NO_CLASS_INIT, $PrivilegedAction)
public:
	void init$($Module* inst) {
		$set(this, inst$, inst);
	}
	virtual $Object* run() override {
		 return $of($nc(inst$)->getClassLoader());
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<Modules$$Lambda$getClassLoader>());
	}
	$Module* inst$ = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo Modules$$Lambda$getClassLoader::fieldInfos[2] = {
	{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(Modules$$Lambda$getClassLoader, inst$)},
	{}
};
$MethodInfo Modules$$Lambda$getClassLoader::methodInfos[3] = {
	{"<init>", "(Ljava/lang/Module;)V", nullptr, $PUBLIC, $method(static_cast<void(Modules$$Lambda$getClassLoader::*)($Module*)>(&Modules$$Lambda$getClassLoader::init$))},
	{"run", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo Modules$$Lambda$getClassLoader::classInfo$ = {
	$PUBLIC | $FINAL,
	"jdk.internal.module.Modules$$Lambda$getClassLoader",
	"java.lang.Object",
	"java.security.PrivilegedAction",
	fieldInfos,
	methodInfos
};
$Class* Modules$$Lambda$getClassLoader::load$($String* name, bool initialize) {
	$loadClass(Modules$$Lambda$getClassLoader, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* Modules$$Lambda$getClassLoader::class$ = nullptr;

class Modules$$Lambda$getName$1 : public $Function {
	$class(Modules$$Lambda$getName$1, $NO_CLASS_INIT, $Function)
public:
	void init$() {
	}
	virtual $Object* apply(Object$* inst$) override {
		 return $of($sure($Module, inst$)->getName());
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<Modules$$Lambda$getName$1>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo Modules$$Lambda$getName$1::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(Modules$$Lambda$getName$1::*)()>(&Modules$$Lambda$getName$1::init$))},
	{"apply", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo Modules$$Lambda$getName$1::classInfo$ = {
	$PUBLIC | $FINAL,
	"jdk.internal.module.Modules$$Lambda$getName$1",
	"java.lang.Object",
	"java.util.function.Function",
	nullptr,
	methodInfos
};
$Class* Modules$$Lambda$getName$1::load$($String* name, bool initialize) {
	$loadClass(Modules$$Lambda$getName$1, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* Modules$$Lambda$getName$1::class$ = nullptr;

class Modules$$Lambda$isQualified$2 : public $Predicate {
	$class(Modules$$Lambda$isQualified$2, $NO_CLASS_INIT, $Predicate)
public:
	void init$() {
	}
	virtual bool test(Object$* inst$) override {
		 return $sure($ModuleDescriptor$Exports, inst$)->isQualified();
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<Modules$$Lambda$isQualified$2>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo Modules$$Lambda$isQualified$2::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(Modules$$Lambda$isQualified$2::*)()>(&Modules$$Lambda$isQualified$2::init$))},
	{"test", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{}
};
$ClassInfo Modules$$Lambda$isQualified$2::classInfo$ = {
	$PUBLIC | $FINAL,
	"jdk.internal.module.Modules$$Lambda$isQualified$2",
	"java.lang.Object",
	"java.util.function.Predicate",
	nullptr,
	methodInfos
};
$Class* Modules$$Lambda$isQualified$2::load$($String* name, bool initialize) {
	$loadClass(Modules$$Lambda$isQualified$2, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* Modules$$Lambda$isQualified$2::class$ = nullptr;

class Modules$$Lambda$lambda$loadModule$1$3 : public $Consumer {
	$class(Modules$$Lambda$lambda$loadModule$1$3, $NO_CLASS_INIT, $Consumer)
public:
	void init$($Map* map, $Module* m) {
		$set(this, map, map);
		$set(this, m, m);
	}
	virtual void accept(Object$* e) override {
		Modules::lambda$loadModule$1(map, m, $cast($ModuleDescriptor$Exports, e));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<Modules$$Lambda$lambda$loadModule$1$3>());
	}
	$Map* map = nullptr;
	$Module* m = nullptr;
	static $FieldInfo fieldInfos[3];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo Modules$$Lambda$lambda$loadModule$1$3::fieldInfos[3] = {
	{"map", "Ljava/util/Map;", nullptr, $PUBLIC, $field(Modules$$Lambda$lambda$loadModule$1$3, map)},
	{"m", "Ljava/lang/Module;", nullptr, $PUBLIC, $field(Modules$$Lambda$lambda$loadModule$1$3, m)},
	{}
};
$MethodInfo Modules$$Lambda$lambda$loadModule$1$3::methodInfos[3] = {
	{"<init>", "(Ljava/util/Map;Ljava/lang/Module;)V", nullptr, $PUBLIC, $method(static_cast<void(Modules$$Lambda$lambda$loadModule$1$3::*)($Map*,$Module*)>(&Modules$$Lambda$lambda$loadModule$1$3::init$))},
	{"accept", "(Ljava/lang/Object;)V", nullptr, $PUBLIC},
	{}
};
$ClassInfo Modules$$Lambda$lambda$loadModule$1$3::classInfo$ = {
	$PUBLIC | $FINAL,
	"jdk.internal.module.Modules$$Lambda$lambda$loadModule$1$3",
	"java.lang.Object",
	"java.util.function.Consumer",
	fieldInfos,
	methodInfos
};
$Class* Modules$$Lambda$lambda$loadModule$1$3::load$($String* name, bool initialize) {
	$loadClass(Modules$$Lambda$lambda$loadModule$1$3, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* Modules$$Lambda$lambda$loadModule$1$3::class$ = nullptr;

class Modules$$Lambda$isQualified$4 : public $Predicate {
	$class(Modules$$Lambda$isQualified$4, $NO_CLASS_INIT, $Predicate)
public:
	void init$() {
	}
	virtual bool test(Object$* inst$) override {
		 return $sure($ModuleDescriptor$Opens, inst$)->isQualified();
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<Modules$$Lambda$isQualified$4>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo Modules$$Lambda$isQualified$4::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(Modules$$Lambda$isQualified$4::*)()>(&Modules$$Lambda$isQualified$4::init$))},
	{"test", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{}
};
$ClassInfo Modules$$Lambda$isQualified$4::classInfo$ = {
	$PUBLIC | $FINAL,
	"jdk.internal.module.Modules$$Lambda$isQualified$4",
	"java.lang.Object",
	"java.util.function.Predicate",
	nullptr,
	methodInfos
};
$Class* Modules$$Lambda$isQualified$4::load$($String* name, bool initialize) {
	$loadClass(Modules$$Lambda$isQualified$4, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* Modules$$Lambda$isQualified$4::class$ = nullptr;

class Modules$$Lambda$lambda$loadModule$3$5 : public $Consumer {
	$class(Modules$$Lambda$lambda$loadModule$3$5, $NO_CLASS_INIT, $Consumer)
public:
	void init$($Map* map, $Module* m) {
		$set(this, map, map);
		$set(this, m, m);
	}
	virtual void accept(Object$* o) override {
		Modules::lambda$loadModule$3(map, m, $cast($ModuleDescriptor$Opens, o));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<Modules$$Lambda$lambda$loadModule$3$5>());
	}
	$Map* map = nullptr;
	$Module* m = nullptr;
	static $FieldInfo fieldInfos[3];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo Modules$$Lambda$lambda$loadModule$3$5::fieldInfos[3] = {
	{"map", "Ljava/util/Map;", nullptr, $PUBLIC, $field(Modules$$Lambda$lambda$loadModule$3$5, map)},
	{"m", "Ljava/lang/Module;", nullptr, $PUBLIC, $field(Modules$$Lambda$lambda$loadModule$3$5, m)},
	{}
};
$MethodInfo Modules$$Lambda$lambda$loadModule$3$5::methodInfos[3] = {
	{"<init>", "(Ljava/util/Map;Ljava/lang/Module;)V", nullptr, $PUBLIC, $method(static_cast<void(Modules$$Lambda$lambda$loadModule$3$5::*)($Map*,$Module*)>(&Modules$$Lambda$lambda$loadModule$3$5::init$))},
	{"accept", "(Ljava/lang/Object;)V", nullptr, $PUBLIC},
	{}
};
$ClassInfo Modules$$Lambda$lambda$loadModule$3$5::classInfo$ = {
	$PUBLIC | $FINAL,
	"jdk.internal.module.Modules$$Lambda$lambda$loadModule$3$5",
	"java.lang.Object",
	"java.util.function.Consumer",
	fieldInfos,
	methodInfos
};
$Class* Modules$$Lambda$lambda$loadModule$3$5::load$($String* name, bool initialize) {
	$loadClass(Modules$$Lambda$lambda$loadModule$3$5, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* Modules$$Lambda$lambda$loadModule$3$5::class$ = nullptr;

class Modules$$Lambda$lambda$loadModule$4$6 : public $Supplier {
	$class(Modules$$Lambda$lambda$loadModule$4$6, $NO_CLASS_INIT, $Supplier)
public:
	void init$() {
	}
	virtual $Object* get() override {
		 return $of(Modules::lambda$loadModule$4());
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<Modules$$Lambda$lambda$loadModule$4$6>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo Modules$$Lambda$lambda$loadModule$4$6::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(Modules$$Lambda$lambda$loadModule$4$6::*)()>(&Modules$$Lambda$lambda$loadModule$4$6::init$))},
	{"get", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo Modules$$Lambda$lambda$loadModule$4$6::classInfo$ = {
	$PUBLIC | $FINAL,
	"jdk.internal.module.Modules$$Lambda$lambda$loadModule$4$6",
	"java.lang.Object",
	"java.util.function.Supplier",
	nullptr,
	methodInfos
};
$Class* Modules$$Lambda$lambda$loadModule$4$6::load$($String* name, bool initialize) {
	$loadClass(Modules$$Lambda$lambda$loadModule$4$6, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* Modules$$Lambda$lambda$loadModule$4$6::class$ = nullptr;

class Modules$$Lambda$lambda$loadModule$2$7 : public $Consumer {
	$class(Modules$$Lambda$lambda$loadModule$2$7, $NO_CLASS_INIT, $Consumer)
public:
	void init$($Map* map, $Module* m, $ModuleDescriptor$Opens* o) {
		$set(this, map, map);
		$set(this, m, m);
		$set(this, o, o);
	}
	virtual void accept(Object$* target) override {
		Modules::lambda$loadModule$2(map, m, o, $cast($String, target));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<Modules$$Lambda$lambda$loadModule$2$7>());
	}
	$Map* map = nullptr;
	$Module* m = nullptr;
	$ModuleDescriptor$Opens* o = nullptr;
	static $FieldInfo fieldInfos[4];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo Modules$$Lambda$lambda$loadModule$2$7::fieldInfos[4] = {
	{"map", "Ljava/util/Map;", nullptr, $PUBLIC, $field(Modules$$Lambda$lambda$loadModule$2$7, map)},
	{"m", "Ljava/lang/Module;", nullptr, $PUBLIC, $field(Modules$$Lambda$lambda$loadModule$2$7, m)},
	{"o", "Ljava/lang/module/ModuleDescriptor$Opens;", nullptr, $PUBLIC, $field(Modules$$Lambda$lambda$loadModule$2$7, o)},
	{}
};
$MethodInfo Modules$$Lambda$lambda$loadModule$2$7::methodInfos[3] = {
	{"<init>", "(Ljava/util/Map;Ljava/lang/Module;Ljava/lang/module/ModuleDescriptor$Opens;)V", nullptr, $PUBLIC, $method(static_cast<void(Modules$$Lambda$lambda$loadModule$2$7::*)($Map*,$Module*,$ModuleDescriptor$Opens*)>(&Modules$$Lambda$lambda$loadModule$2$7::init$))},
	{"accept", "(Ljava/lang/Object;)V", nullptr, $PUBLIC},
	{}
};
$ClassInfo Modules$$Lambda$lambda$loadModule$2$7::classInfo$ = {
	$PUBLIC | $FINAL,
	"jdk.internal.module.Modules$$Lambda$lambda$loadModule$2$7",
	"java.lang.Object",
	"java.util.function.Consumer",
	fieldInfos,
	methodInfos
};
$Class* Modules$$Lambda$lambda$loadModule$2$7::load$($String* name, bool initialize) {
	$loadClass(Modules$$Lambda$lambda$loadModule$2$7, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* Modules$$Lambda$lambda$loadModule$2$7::class$ = nullptr;

class Modules$$Lambda$lambda$loadModule$0$8 : public $Consumer {
	$class(Modules$$Lambda$lambda$loadModule$0$8, $NO_CLASS_INIT, $Consumer)
public:
	void init$($Map* map, $Module* m, $ModuleDescriptor$Exports* e) {
		$set(this, map, map);
		$set(this, m, m);
		$set(this, e, e);
	}
	virtual void accept(Object$* target) override {
		Modules::lambda$loadModule$0(map, m, e, $cast($String, target));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<Modules$$Lambda$lambda$loadModule$0$8>());
	}
	$Map* map = nullptr;
	$Module* m = nullptr;
	$ModuleDescriptor$Exports* e = nullptr;
	static $FieldInfo fieldInfos[4];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo Modules$$Lambda$lambda$loadModule$0$8::fieldInfos[4] = {
	{"map", "Ljava/util/Map;", nullptr, $PUBLIC, $field(Modules$$Lambda$lambda$loadModule$0$8, map)},
	{"m", "Ljava/lang/Module;", nullptr, $PUBLIC, $field(Modules$$Lambda$lambda$loadModule$0$8, m)},
	{"e", "Ljava/lang/module/ModuleDescriptor$Exports;", nullptr, $PUBLIC, $field(Modules$$Lambda$lambda$loadModule$0$8, e)},
	{}
};
$MethodInfo Modules$$Lambda$lambda$loadModule$0$8::methodInfos[3] = {
	{"<init>", "(Ljava/util/Map;Ljava/lang/Module;Ljava/lang/module/ModuleDescriptor$Exports;)V", nullptr, $PUBLIC, $method(static_cast<void(Modules$$Lambda$lambda$loadModule$0$8::*)($Map*,$Module*,$ModuleDescriptor$Exports*)>(&Modules$$Lambda$lambda$loadModule$0$8::init$))},
	{"accept", "(Ljava/lang/Object;)V", nullptr, $PUBLIC},
	{}
};
$ClassInfo Modules$$Lambda$lambda$loadModule$0$8::classInfo$ = {
	$PUBLIC | $FINAL,
	"jdk.internal.module.Modules$$Lambda$lambda$loadModule$0$8",
	"java.lang.Object",
	"java.util.function.Consumer",
	fieldInfos,
	methodInfos
};
$Class* Modules$$Lambda$lambda$loadModule$0$8::load$($String* name, bool initialize) {
	$loadClass(Modules$$Lambda$lambda$loadModule$0$8, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* Modules$$Lambda$lambda$loadModule$0$8::class$ = nullptr;

$FieldInfo _Modules_FieldInfo_[] = {
	{"$assertionsDisabled", "Z", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(Modules, $assertionsDisabled)},
	{"JLA", "Ljdk/internal/access/JavaLangAccess;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(Modules, JLA)},
	{"JLMA", "Ljdk/internal/access/JavaLangModuleAccess;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(Modules, JLMA)},
	{"topLayer", "Ljava/lang/ModuleLayer;", nullptr, $PRIVATE | $STATIC | $VOLATILE, $staticField(Modules, topLayer)},
	{}
};

$MethodInfo _Modules_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(Modules::*)()>(&Modules::init$))},
	{"addExports", "(Ljava/lang/Module;Ljava/lang/String;Ljava/lang/Module;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($Module*,$String*,$Module*)>(&Modules::addExports))},
	{"addExports", "(Ljava/lang/Module;Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($Module*,$String*)>(&Modules::addExports))},
	{"addExportsToAllUnnamed", "(Ljava/lang/Module;Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($Module*,$String*)>(&Modules::addExportsToAllUnnamed))},
	{"addOpens", "(Ljava/lang/Module;Ljava/lang/String;Ljava/lang/Module;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($Module*,$String*,$Module*)>(&Modules::addOpens))},
	{"addOpensToAllUnnamed", "(Ljava/lang/Module;Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($Module*,$String*)>(&Modules::addOpensToAllUnnamed))},
	{"addProvides", "(Ljava/lang/Module;Ljava/lang/Class;Ljava/lang/Class;)V", "(Ljava/lang/Module;Ljava/lang/Class<*>;Ljava/lang/Class<*>;)V", $PUBLIC | $STATIC, $method(static_cast<void(*)($Module*,$Class*,$Class*)>(&Modules::addProvides))},
	{"addReads", "(Ljava/lang/Module;Ljava/lang/Module;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($Module*,$Module*)>(&Modules::addReads))},
	{"addReadsAllUnnamed", "(Ljava/lang/Module;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($Module*)>(&Modules::addReadsAllUnnamed))},
	{"addUses", "(Ljava/lang/Module;Ljava/lang/Class;)V", "(Ljava/lang/Module;Ljava/lang/Class<*>;)V", $PUBLIC | $STATIC, $method(static_cast<void(*)($Module*,$Class*)>(&Modules::addUses))},
	{"defineModule", "(Ljava/lang/ClassLoader;Ljava/lang/module/ModuleDescriptor;Ljava/net/URI;)Ljava/lang/Module;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$Module*(*)($ClassLoader*,$ModuleDescriptor*,$URI*)>(&Modules::defineModule))},
	{"findLoadedModule", "(Ljava/lang/String;)Ljava/util/Optional;", "(Ljava/lang/String;)Ljava/util/Optional<Ljava/lang/Module;>;", $PUBLIC | $STATIC, $method(static_cast<$Optional*(*)($String*)>(&Modules::findLoadedModule))},
	{"lambda$loadModule$0", "(Ljava/util/Map;Ljava/lang/Module;Ljava/lang/module/ModuleDescriptor$Exports;Ljava/lang/String;)V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<void(*)($Map*,$Module*,$ModuleDescriptor$Exports*,$String*)>(&Modules::lambda$loadModule$0))},
	{"lambda$loadModule$1", "(Ljava/util/Map;Ljava/lang/Module;Ljava/lang/module/ModuleDescriptor$Exports;)V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<void(*)($Map*,$Module*,$ModuleDescriptor$Exports*)>(&Modules::lambda$loadModule$1))},
	{"lambda$loadModule$2", "(Ljava/util/Map;Ljava/lang/Module;Ljava/lang/module/ModuleDescriptor$Opens;Ljava/lang/String;)V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<void(*)($Map*,$Module*,$ModuleDescriptor$Opens*,$String*)>(&Modules::lambda$loadModule$2))},
	{"lambda$loadModule$3", "(Ljava/util/Map;Ljava/lang/Module;Ljava/lang/module/ModuleDescriptor$Opens;)V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<void(*)($Map*,$Module*,$ModuleDescriptor$Opens*)>(&Modules::lambda$loadModule$3))},
	{"lambda$loadModule$4", "()Ljava/lang/InternalError;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$InternalError*(*)()>(&Modules::lambda$loadModule$4))},
	{"loadModule", "(Ljava/lang/String;)Ljava/lang/Module;", nullptr, $PUBLIC | $STATIC | $SYNCHRONIZED, $method(static_cast<$Module*(*)($String*)>(&Modules::loadModule))},
	{"newBootLayerConfiguration", "(Ljava/lang/module/ModuleFinder;Ljava/util/Collection;Ljava/io/PrintStream;)Ljava/lang/module/Configuration;", "(Ljava/lang/module/ModuleFinder;Ljava/util/Collection<Ljava/lang/String;>;Ljava/io/PrintStream;)Ljava/lang/module/Configuration;", $PUBLIC | $STATIC, $method(static_cast<$Configuration*(*)($ModuleFinder*,$Collection*,$PrintStream*)>(&Modules::newBootLayerConfiguration))},
	{"transformedByAgent", "(Ljava/lang/Module;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($Module*)>(&Modules::transformedByAgent))},
	{}
};

$ClassInfo _Modules_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"jdk.internal.module.Modules",
	"java.lang.Object",
	nullptr,
	_Modules_FieldInfo_,
	_Modules_MethodInfo_
};

$Object* allocate$Modules($Class* clazz) {
	return $of($alloc(Modules));
}

bool Modules::$assertionsDisabled = false;
$JavaLangAccess* Modules::JLA = nullptr;
$JavaLangModuleAccess* Modules::JLMA = nullptr;
$volatile($ModuleLayer*) Modules::topLayer = nullptr;

void Modules::init$() {
}

$Module* Modules::defineModule($ClassLoader* loader, $ModuleDescriptor* descriptor, $URI* uri) {
	$init(Modules);
	return $nc(Modules::JLA)->defineModule(loader, descriptor, uri);
}

void Modules::addReads($Module* m1, $Module* m2) {
	$init(Modules);
	$nc(Modules::JLA)->addReads(m1, m2);
}

void Modules::addReadsAllUnnamed($Module* m) {
	$init(Modules);
	$nc(Modules::JLA)->addReadsAllUnnamed(m);
}

void Modules::addExports($Module* m1, $String* pn, $Module* m2) {
	$init(Modules);
	$nc(Modules::JLA)->addExports(m1, pn, m2);
}

void Modules::addExports($Module* m, $String* pn) {
	$init(Modules);
	$nc(Modules::JLA)->addExports(m, pn);
}

void Modules::addExportsToAllUnnamed($Module* m, $String* pn) {
	$init(Modules);
	$nc(Modules::JLA)->addExportsToAllUnnamed(m, pn);
}

void Modules::addOpens($Module* m1, $String* pn, $Module* m2) {
	$init(Modules);
	$nc(Modules::JLA)->addOpens(m1, pn, m2);
}

void Modules::addOpensToAllUnnamed($Module* m, $String* pn) {
	$init(Modules);
	$nc(Modules::JLA)->addOpensToAllUnnamed(m, pn);
}

void Modules::addUses($Module* m, $Class* service) {
	$init(Modules);
	$nc(Modules::JLA)->addUses(m, service);
}

void Modules::addProvides($Module* m, $Class* service, $Class* impl) {
	$init(Modules);
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	$var($ModuleLayer, layer, $nc(m)->getLayer());
	$var($PrivilegedAction, pa, static_cast<$PrivilegedAction*>($new(Modules$$Lambda$getClassLoader, static_cast<$Module*>(m))));
	$var($ClassLoader, loader, $cast($ClassLoader, $AccessController::doPrivileged(pa)));
	$var($ClassLoader, platformClassLoader, $ClassLoaders::platformClassLoader());
	if (layer == nullptr || loader == nullptr || loader == platformClassLoader) {
		$var($ServicesCatalog, catalog, nullptr);
		if (loader == nullptr) {
			$assign(catalog, $BootLoader::getServicesCatalog());
		} else {
			$assign(catalog, $ServicesCatalog::getServicesCatalog(loader));
		}
		$nc(catalog)->addProvider(m, service, impl);
	}
	if (layer != nullptr) {
		$nc($($nc(Modules::JLA)->getServicesCatalog(layer)))->addProvider(m, service, impl);
	}
}

$Configuration* Modules::newBootLayerConfiguration($ModuleFinder* finder, $Collection* roots, $PrintStream* traceOutput) {
	$init(Modules);
	return $nc(Modules::JLMA)->resolveAndBind(finder, roots, traceOutput);
}

void Modules::transformedByAgent($Module* m) {
	$init(Modules);
	$useLocalCurrentObjectStackCache();
	addReads(m, $($BootLoader::getUnnamedModule()));
	addReads(m, $($nc($($ClassLoaders::appClassLoader()))->getUnnamedModule()));
}

$Module* Modules::loadModule($String* name) {
	$load(Modules);
	$synchronized(class$) {
		$init(Modules);
		$useLocalCurrentObjectStackCache();
		$var($ModuleLayer, top, Modules::topLayer);
		if (top == nullptr) {
			$assign(top, $ModuleLayer::boot());
		}
		$var($Module, module, $cast($Module, $nc($($nc(top)->findModule(name)))->orElse(nullptr)));
		if (module != nullptr) {
			return module;
		}
		$var($ModuleFinder, empty, $ModuleFinder::of($$new($PathArray, 0)));
		$var($ModuleFinder, finder, $ModuleBootstrap::unlimitedFinder());
		$var($Set, roots, $Set::of($of(name)));
		$var($Configuration, cf, $nc($(top->configuration()))->resolveAndBind(empty, finder, static_cast<$Collection*>(roots)));
		$var($Function, clf, $ModuleLoaderMap::mappingFunction(cf));
		$var($ModuleLayer, newLayer, top->defineModules(cf, clf));
		$var($Function, var$0, static_cast<$Function*>($new(Modules$$Lambda$getName$1)));
		$var($Map, map, $cast($Map, $nc($($nc($($nc(newLayer)->modules()))->stream()))->collect($($Collectors::toMap(var$0, $($Function::identity()))))));
		$var($ModuleLayer, layer, top);
		while (layer != nullptr) {
			{
				$var($Iterator, i$, $nc($(layer->modules()))->iterator());
				for (; $nc(i$)->hasNext();) {
					$var($Module, m, $cast($Module, i$->next()));
					{
						$nc($($nc($($nc($($nc($($nc(m)->getDescriptor()))->exports()))->stream()))->filter(static_cast<$Predicate*>($$new(Modules$$Lambda$isQualified$2)))))->forEach(static_cast<$Consumer*>($$new(Modules$$Lambda$lambda$loadModule$1$3, map, m)));
						$nc($($nc($($nc($($nc($(m->getDescriptor()))->opens()))->stream()))->filter(static_cast<$Predicate*>($$new(Modules$$Lambda$isQualified$4)))))->forEach(static_cast<$Consumer*>($$new(Modules$$Lambda$lambda$loadModule$3$5, map, m)));
					}
				}
			}
			$var($List, parents, layer->parents());
			if (!Modules::$assertionsDisabled && !($nc(parents)->size() <= 1)) {
				$throwNew($AssertionError);
			}
			$assign(layer, $nc(parents)->isEmpty() ? ($ModuleLayer*)nullptr : $cast($ModuleLayer, $nc(parents)->get(0)));
		}
		$nc(Modules::JLA)->addNonExportedPackages(newLayer);
		{
			$var($Iterator, i$, $nc($($nc(cf)->modules()))->iterator());
			for (; $nc(i$)->hasNext();) {
				$var($ResolvedModule, resolvedModule, $cast($ResolvedModule, i$->next()));
				{
					$var($ModuleReference, mref, $nc(resolvedModule)->reference());
					$var($String, mn, $nc($($nc(mref)->descriptor()))->name());
					$var($ClassLoader, cl, $cast($ClassLoader, $nc(clf)->apply(mn)));
					if (cl == nullptr) {
						$BootLoader::loadModule(mref);
					} else {
						$nc(($cast($BuiltinClassLoader, cl)))->loadModule(mref);
					}
				}
			}
		}
		$assignStatic(Modules::topLayer, newLayer);
		return $cast($Module, $nc($(newLayer->findModule(name)))->orElseThrow(static_cast<$Supplier*>($$new(Modules$$Lambda$lambda$loadModule$4$6))));
	}
}

$Optional* Modules::findLoadedModule($String* name) {
	$init(Modules);
	$var($ModuleLayer, top, Modules::topLayer);
	if (top == nullptr) {
		$assign(top, $ModuleLayer::boot());
	}
	return $nc(top)->findModule(name);
}

$InternalError* Modules::lambda$loadModule$4() {
	$init(Modules);
	return $new($InternalError, "module not loaded"_s);
}

void Modules::lambda$loadModule$3($Map* map, $Module* m, $ModuleDescriptor$Opens* o) {
	$init(Modules);
	$useLocalCurrentObjectStackCache();
	$nc($($nc(o)->targets()))->forEach(static_cast<$Consumer*>($$new(Modules$$Lambda$lambda$loadModule$2$7, map, m, o)));
}

void Modules::lambda$loadModule$2($Map* map, $Module* m, $ModuleDescriptor$Opens* o, $String* target) {
	$init(Modules);
	$useLocalCurrentObjectStackCache();
	$var($Module, other, $cast($Module, $nc(map)->get(target)));
	if (other != nullptr) {
		addOpens(m, $($nc(o)->source()), other);
	}
}

void Modules::lambda$loadModule$1($Map* map, $Module* m, $ModuleDescriptor$Exports* e) {
	$init(Modules);
	$useLocalCurrentObjectStackCache();
	$nc($($nc(e)->targets()))->forEach(static_cast<$Consumer*>($$new(Modules$$Lambda$lambda$loadModule$0$8, map, m, e)));
}

void Modules::lambda$loadModule$0($Map* map, $Module* m, $ModuleDescriptor$Exports* e, $String* target) {
	$init(Modules);
	$useLocalCurrentObjectStackCache();
	$var($Module, other, $cast($Module, $nc(map)->get(target)));
	if (other != nullptr) {
		addExports(m, $($nc(e)->source()), other);
	}
}

void clinit$Modules($Class* class$) {
	Modules::$assertionsDisabled = !Modules::class$->desiredAssertionStatus();
	$assignStatic(Modules::JLA, $SharedSecrets::getJavaLangAccess());
	$assignStatic(Modules::JLMA, $SharedSecrets::getJavaLangModuleAccess());
}

Modules::Modules() {
}

$Class* Modules::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(Modules$$Lambda$getClassLoader::classInfo$.name)) {
			return Modules$$Lambda$getClassLoader::load$(name, initialize);
		}
		if (name->equals(Modules$$Lambda$getName$1::classInfo$.name)) {
			return Modules$$Lambda$getName$1::load$(name, initialize);
		}
		if (name->equals(Modules$$Lambda$isQualified$2::classInfo$.name)) {
			return Modules$$Lambda$isQualified$2::load$(name, initialize);
		}
		if (name->equals(Modules$$Lambda$lambda$loadModule$1$3::classInfo$.name)) {
			return Modules$$Lambda$lambda$loadModule$1$3::load$(name, initialize);
		}
		if (name->equals(Modules$$Lambda$isQualified$4::classInfo$.name)) {
			return Modules$$Lambda$isQualified$4::load$(name, initialize);
		}
		if (name->equals(Modules$$Lambda$lambda$loadModule$3$5::classInfo$.name)) {
			return Modules$$Lambda$lambda$loadModule$3$5::load$(name, initialize);
		}
		if (name->equals(Modules$$Lambda$lambda$loadModule$4$6::classInfo$.name)) {
			return Modules$$Lambda$lambda$loadModule$4$6::load$(name, initialize);
		}
		if (name->equals(Modules$$Lambda$lambda$loadModule$2$7::classInfo$.name)) {
			return Modules$$Lambda$lambda$loadModule$2$7::load$(name, initialize);
		}
		if (name->equals(Modules$$Lambda$lambda$loadModule$0$8::classInfo$.name)) {
			return Modules$$Lambda$lambda$loadModule$0$8::load$(name, initialize);
		}
	}
	$loadClass(Modules, name, initialize, &_Modules_ClassInfo_, clinit$Modules, allocate$Modules);
	return class$;
}

$Class* Modules::class$ = nullptr;

		} // module
	} // internal
} // jdk