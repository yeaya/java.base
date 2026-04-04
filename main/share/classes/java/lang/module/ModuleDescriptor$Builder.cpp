#include <java/lang/module/ModuleDescriptor$Builder.h>
#include <java/io/Serializable.h>
#include <java/lang/AssertionError.h>
#include <java/lang/IllegalStateException.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/lang/module/ModuleDescriptor$Exports.h>
#include <java/lang/module/ModuleDescriptor$Modifier.h>
#include <java/lang/module/ModuleDescriptor$Opens.h>
#include <java/lang/module/ModuleDescriptor$Provides.h>
#include <java/lang/module/ModuleDescriptor$Requires$Modifier.h>
#include <java/lang/module/ModuleDescriptor$Requires.h>
#include <java/lang/module/ModuleDescriptor$Version.h>
#include <java/lang/module/ModuleDescriptor.h>
#include <java/util/ArrayList.h>
#include <java/util/Collection.h>
#include <java/util/Collections.h>
#include <java/util/EnumSet.h>
#include <java/util/HashMap.h>
#include <java/util/HashSet.h>
#include <java/util/Iterator.h>
#include <java/util/List.h>
#include <java/util/Map.h>
#include <java/util/Objects.h>
#include <java/util/Set.h>
#include <java/util/function/Consumer.h>
#include <jdk/internal/module/Checks.h>
#include <jcpp.h>

#undef AUTOMATIC
#undef MANDATED
#undef OPEN

using $Serializable = ::java::io::Serializable;
using $AssertionError = ::java::lang::AssertionError;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $IllegalStateException = ::java::lang::IllegalStateException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $ModuleDescriptor = ::java::lang::module::ModuleDescriptor;
using $ModuleDescriptor$Exports = ::java::lang::module::ModuleDescriptor$Exports;
using $ModuleDescriptor$Modifier = ::java::lang::module::ModuleDescriptor$Modifier;
using $ModuleDescriptor$Opens = ::java::lang::module::ModuleDescriptor$Opens;
using $ModuleDescriptor$Provides = ::java::lang::module::ModuleDescriptor$Provides;
using $ModuleDescriptor$Requires = ::java::lang::module::ModuleDescriptor$Requires;
using $ModuleDescriptor$Requires$Modifier = ::java::lang::module::ModuleDescriptor$Requires$Modifier;
using $ModuleDescriptor$Version = ::java::lang::module::ModuleDescriptor$Version;
using $ArrayList = ::java::util::ArrayList;
using $Collections = ::java::util::Collections;
using $EnumSet = ::java::util::EnumSet;
using $HashMap = ::java::util::HashMap;
using $HashSet = ::java::util::HashSet;
using $Iterator = ::java::util::Iterator;
using $List = ::java::util::List;
using $Objects = ::java::util::Objects;
using $Set = ::java::util::Set;
using $Consumer = ::java::util::function::Consumer;
using $Checks = ::jdk::internal::module::Checks;

namespace java {
	namespace lang {
		namespace module {

class ModuleDescriptor$Builder$$Lambda$requireModuleName : public $Consumer {
	$class(ModuleDescriptor$Builder$$Lambda$requireModuleName, $NO_CLASS_INIT, $Consumer)
public:
	void init$() {
	}
	virtual void accept(Object$* name) override {
		$Checks::requireModuleName($cast($String, name));
	}
};
$Class* ModuleDescriptor$Builder$$Lambda$requireModuleName::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(ModuleDescriptor$Builder$$Lambda$requireModuleName, init$, void)},
		{"accept", "(Ljava/lang/Object;)V", nullptr, $PUBLIC, $virtualMethod(ModuleDescriptor$Builder$$Lambda$requireModuleName, accept, void, Object$*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"java.lang.module.ModuleDescriptor$Builder$$Lambda$requireModuleName",
		"java.lang.Object",
		"java.util.function.Consumer",
		nullptr,
		methodInfos$$
	};
	$loadClass(ModuleDescriptor$Builder$$Lambda$requireModuleName, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ModuleDescriptor$Builder$$Lambda$requireModuleName);
	});
	return class$;
}
$Class* ModuleDescriptor$Builder$$Lambda$requireModuleName::class$ = nullptr;

class ModuleDescriptor$Builder$$Lambda$lambda$provides$0$1 : public $Consumer {
	$class(ModuleDescriptor$Builder$$Lambda$lambda$provides$0$1, $NO_CLASS_INIT, $Consumer)
public:
	void init$(ModuleDescriptor$Builder* inst) {
		$set(this, inst$, inst);
	}
	virtual void accept(Object$* name) override {
		$nc(inst$)->lambda$provides$0($cast($String, name));
	}
	ModuleDescriptor$Builder* inst$ = nullptr;
};
$Class* ModuleDescriptor$Builder$$Lambda$lambda$provides$0$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(ModuleDescriptor$Builder$$Lambda$lambda$provides$0$1, inst$)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/module/ModuleDescriptor$Builder;)V", nullptr, $PUBLIC, $method(ModuleDescriptor$Builder$$Lambda$lambda$provides$0$1, init$, void, ModuleDescriptor$Builder*)},
		{"accept", "(Ljava/lang/Object;)V", nullptr, $PUBLIC, $virtualMethod(ModuleDescriptor$Builder$$Lambda$lambda$provides$0$1, accept, void, Object$*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"java.lang.module.ModuleDescriptor$Builder$$Lambda$lambda$provides$0$1",
		"java.lang.Object",
		"java.util.function.Consumer",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(ModuleDescriptor$Builder$$Lambda$lambda$provides$0$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ModuleDescriptor$Builder$$Lambda$lambda$provides$0$1);
	});
	return class$;
}
$Class* ModuleDescriptor$Builder$$Lambda$lambda$provides$0$1::class$ = nullptr;

class ModuleDescriptor$Builder$$Lambda$requireServiceProviderName$2 : public $Consumer {
	$class(ModuleDescriptor$Builder$$Lambda$requireServiceProviderName$2, $NO_CLASS_INIT, $Consumer)
public:
	void init$() {
	}
	virtual void accept(Object$* name) override {
		$Checks::requireServiceProviderName($cast($String, name));
	}
};
$Class* ModuleDescriptor$Builder$$Lambda$requireServiceProviderName$2::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(ModuleDescriptor$Builder$$Lambda$requireServiceProviderName$2, init$, void)},
		{"accept", "(Ljava/lang/Object;)V", nullptr, $PUBLIC, $virtualMethod(ModuleDescriptor$Builder$$Lambda$requireServiceProviderName$2, accept, void, Object$*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"java.lang.module.ModuleDescriptor$Builder$$Lambda$requireServiceProviderName$2",
		"java.lang.Object",
		"java.util.function.Consumer",
		nullptr,
		methodInfos$$
	};
	$loadClass(ModuleDescriptor$Builder$$Lambda$requireServiceProviderName$2, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ModuleDescriptor$Builder$$Lambda$requireServiceProviderName$2);
	});
	return class$;
}
$Class* ModuleDescriptor$Builder$$Lambda$requireServiceProviderName$2::class$ = nullptr;

class ModuleDescriptor$Builder$$Lambda$requirePackageName$3 : public $Consumer {
	$class(ModuleDescriptor$Builder$$Lambda$requirePackageName$3, $NO_CLASS_INIT, $Consumer)
public:
	void init$() {
	}
	virtual void accept(Object$* name) override {
		$Checks::requirePackageName($cast($String, name));
	}
};
$Class* ModuleDescriptor$Builder$$Lambda$requirePackageName$3::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(ModuleDescriptor$Builder$$Lambda$requirePackageName$3, init$, void)},
		{"accept", "(Ljava/lang/Object;)V", nullptr, $PUBLIC, $virtualMethod(ModuleDescriptor$Builder$$Lambda$requirePackageName$3, accept, void, Object$*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"java.lang.module.ModuleDescriptor$Builder$$Lambda$requirePackageName$3",
		"java.lang.Object",
		"java.util.function.Consumer",
		nullptr,
		methodInfos$$
	};
	$loadClass(ModuleDescriptor$Builder$$Lambda$requirePackageName$3, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ModuleDescriptor$Builder$$Lambda$requirePackageName$3);
	});
	return class$;
}
$Class* ModuleDescriptor$Builder$$Lambda$requirePackageName$3::class$ = nullptr;

bool ModuleDescriptor$Builder::$assertionsDisabled = false;

void ModuleDescriptor$Builder::init$($String* name, bool strict, $Set* modifiers) {
	$set(this, packages$, $new($HashSet));
	$set(this, requires$, $new($HashMap));
	$set(this, exports$, $new($HashMap));
	$set(this, opens$, $new($HashMap));
	$set(this, uses$, $new($HashSet));
	$set(this, provides$, $new($HashMap));
	$set(this, name, (strict) ? $Checks::requireModuleName(name) : name);
	this->strict = strict;
	$set(this, modifiers, modifiers);
	$init($ModuleDescriptor$Modifier);
	this->open = $nc(modifiers)->contains($ModuleDescriptor$Modifier::OPEN);
	this->automatic = modifiers->contains($ModuleDescriptor$Modifier::AUTOMATIC);
	if (!ModuleDescriptor$Builder::$assertionsDisabled && !(!this->open || !this->automatic)) {
		$throwNew($AssertionError);
	}
}

$Set* ModuleDescriptor$Builder::packages() {
	return $Collections::unmodifiableSet(this->packages$);
}

ModuleDescriptor$Builder* ModuleDescriptor$Builder::requires($ModuleDescriptor$Requires* req) {
	$useLocalObjectStack();
	if (this->automatic) {
		$throwNew($IllegalStateException, "Automatic modules cannot declare dependences"_s);
	}
	$var($String, mn, $nc(req)->name());
	if ($nc(this->name)->equals(mn)) {
		$throwNew($IllegalArgumentException, "Dependence on self"_s);
	}
	if (this->requires$->containsKey(mn)) {
		$throwNew($IllegalStateException, $$str({"Dependence upon "_s, mn, " already declared"_s}));
	}
	this->requires$->put(mn, req);
	return this;
}

ModuleDescriptor$Builder* ModuleDescriptor$Builder::requires($Set* ms, $String* mn$renamed, $ModuleDescriptor$Version* compiledVersion) {
	$useLocalObjectStack();
	$var($String, mn, mn$renamed);
	$Objects::requireNonNull(compiledVersion);
	if (this->strict) {
		$assign(mn, $Checks::requireModuleName(mn));
	}
	return requires($$new($ModuleDescriptor$Requires, ms, mn, compiledVersion, nullptr));
}

ModuleDescriptor$Builder* ModuleDescriptor$Builder::requires($Set* ms, $String* mn, $String* rawCompiledVersion) {
	$useLocalObjectStack();
	$var($ModuleDescriptor$Requires, r, nullptr);
	try {
		$var($ModuleDescriptor$Version, v, $ModuleDescriptor$Version::parse(rawCompiledVersion));
		$assign(r, $new($ModuleDescriptor$Requires, ms, mn, v, nullptr));
	} catch ($IllegalArgumentException& e) {
		if (this->strict) {
			$throw(e);
		}
		$assign(r, $new($ModuleDescriptor$Requires, ms, mn, nullptr, rawCompiledVersion));
	}
	return requires(r);
}

ModuleDescriptor$Builder* ModuleDescriptor$Builder::requires($Set* ms, $String* mn$renamed) {
	$useLocalObjectStack();
	$var($String, mn, mn$renamed);
	if (this->strict) {
		$assign(mn, $Checks::requireModuleName(mn));
	}
	return requires($$new($ModuleDescriptor$Requires, ms, mn, nullptr, nullptr));
}

ModuleDescriptor$Builder* ModuleDescriptor$Builder::requires($String* mn) {
	$load($ModuleDescriptor$Requires$Modifier);
	return requires($($EnumSet::noneOf($ModuleDescriptor$Requires$Modifier::class$)), mn);
}

ModuleDescriptor$Builder* ModuleDescriptor$Builder::exports($ModuleDescriptor$Exports* e) {
	$useLocalObjectStack();
	if (this->automatic) {
		$throwNew($IllegalStateException, "Automatic modules cannot declare exported packages"_s);
	}
	$var($String, source, $nc(e)->source());
	if (this->exports$->containsKey(source)) {
		$throwNew($IllegalStateException, $$str({"Exported package "_s, source, " already declared"_s}));
	}
	this->exports$->put(source, e);
	this->packages$->add(source);
	return this;
}

ModuleDescriptor$Builder* ModuleDescriptor$Builder::exports($Set* ms, $String* pn, $Set* targets$renamed) {
	$useLocalObjectStack();
	$var($Set, targets, targets$renamed);
	$assign(targets, $new($HashSet, targets));
	if (targets->isEmpty()) {
		$throwNew($IllegalArgumentException, "Empty target set"_s);
	}
	if (this->strict) {
		$Checks::requirePackageName(pn);
		targets->forEach($$new(ModuleDescriptor$Builder$$Lambda$requireModuleName));
	}
	$var($ModuleDescriptor$Exports, e, $new($ModuleDescriptor$Exports, ms, pn, targets));
	return exports(e);
}

ModuleDescriptor$Builder* ModuleDescriptor$Builder::exports($Set* ms, $String* pn) {
	$useLocalObjectStack();
	if (this->strict) {
		$Checks::requirePackageName(pn);
	}
	$var($ModuleDescriptor$Exports, e, $new($ModuleDescriptor$Exports, ms, pn, $($Set::of())));
	return exports(e);
}

ModuleDescriptor$Builder* ModuleDescriptor$Builder::exports($String* pn, $Set* targets) {
	return exports($($Set::of()), pn, targets);
}

ModuleDescriptor$Builder* ModuleDescriptor$Builder::exports($String* pn) {
	return exports($($Set::of()), pn);
}

ModuleDescriptor$Builder* ModuleDescriptor$Builder::opens($ModuleDescriptor$Opens* obj) {
	$useLocalObjectStack();
	if (this->open || this->automatic) {
		$throwNew($IllegalStateException, "Open or automatic modules cannot declare open packages"_s);
	}
	$var($String, source, $nc(obj)->source());
	if (this->opens$->containsKey(source)) {
		$throwNew($IllegalStateException, $$str({"Open package "_s, source, " already declared"_s}));
	}
	this->opens$->put(source, obj);
	this->packages$->add(source);
	return this;
}

ModuleDescriptor$Builder* ModuleDescriptor$Builder::opens($Set* ms, $String* pn, $Set* targets$renamed) {
	$useLocalObjectStack();
	$var($Set, targets, targets$renamed);
	$assign(targets, $new($HashSet, targets));
	if (targets->isEmpty()) {
		$throwNew($IllegalArgumentException, "Empty target set"_s);
	}
	if (this->strict) {
		$Checks::requirePackageName(pn);
		targets->forEach($$new(ModuleDescriptor$Builder$$Lambda$requireModuleName));
	}
	$var($ModuleDescriptor$Opens, opens, $new($ModuleDescriptor$Opens, ms, pn, targets));
	return this->opens(opens);
}

ModuleDescriptor$Builder* ModuleDescriptor$Builder::opens($Set* ms, $String* pn) {
	$useLocalObjectStack();
	if (this->strict) {
		$Checks::requirePackageName(pn);
	}
	$var($ModuleDescriptor$Opens, e, $new($ModuleDescriptor$Opens, ms, pn, $($Set::of())));
	return opens(e);
}

ModuleDescriptor$Builder* ModuleDescriptor$Builder::opens($String* pn, $Set* targets) {
	return opens($($Set::of()), pn, targets);
}

ModuleDescriptor$Builder* ModuleDescriptor$Builder::opens($String* pn) {
	return opens($($Set::of()), pn);
}

ModuleDescriptor$Builder* ModuleDescriptor$Builder::uses($String* service) {
	$useLocalObjectStack();
	if (this->automatic) {
		$throwNew($IllegalStateException, "Automatic modules can not declare service dependences"_s);
	}
	if (this->uses$->contains($($Checks::requireServiceTypeName(service)))) {
		$throwNew($IllegalStateException, $$str({"Dependence upon service "_s, service, " already declared"_s}));
	}
	this->uses$->add(service);
	return this;
}

ModuleDescriptor$Builder* ModuleDescriptor$Builder::provides($ModuleDescriptor$Provides* p) {
	$useLocalObjectStack();
	$var($String, service, $nc(p)->service());
	if (this->provides$->containsKey(service)) {
		$throwNew($IllegalStateException, $$str({"Providers of service "_s, service, " already declared"_s}));
	}
	this->provides$->put(service, p);
	$$nc(p->providers())->forEach($$new(ModuleDescriptor$Builder$$Lambda$lambda$provides$0$1, this));
	return this;
}

ModuleDescriptor$Builder* ModuleDescriptor$Builder::provides($String* service, $List* providers$renamed) {
	$useLocalObjectStack();
	$var($List, providers, providers$renamed);
	$assign(providers, $new($ArrayList, providers));
	if (providers->isEmpty()) {
		$throwNew($IllegalArgumentException, "Empty providers set"_s);
	}
	if (this->strict) {
		$Checks::requireServiceTypeName(service);
		providers->forEach($$new(ModuleDescriptor$Builder$$Lambda$requireServiceProviderName$2));
	} else {
		$var($String, pn, $ModuleDescriptor::packageName(service));
		if ($nc(pn)->isEmpty()) {
			$throwNew($IllegalArgumentException, $$str({service, ": unnamed package"_s}));
		}
		{
			$var($Iterator, i$, providers->iterator());
			for (; $nc(i$)->hasNext();) {
				$var($String, name, $cast($String, i$->next()));
				{
					$assign(pn, $ModuleDescriptor::packageName(name));
					if ($nc(pn)->isEmpty()) {
						$throwNew($IllegalArgumentException, $$str({name, ": unnamed package"_s}));
					}
				}
			}
		}
	}
	$var($ModuleDescriptor$Provides, p, $new($ModuleDescriptor$Provides, service, providers));
	return provides(p);
}

ModuleDescriptor$Builder* ModuleDescriptor$Builder::packages($Set* pns$renamed) {
	$useLocalObjectStack();
	$var($Set, pns, pns$renamed);
	if (this->strict) {
		$assign(pns, $new($HashSet, pns));
		pns->forEach($$new(ModuleDescriptor$Builder$$Lambda$requirePackageName$3));
	}
	$nc(this->packages$)->addAll(pns);
	return this;
}

ModuleDescriptor$Builder* ModuleDescriptor$Builder::version($ModuleDescriptor$Version* v) {
	$set(this, version$, $cast($ModuleDescriptor$Version, $Objects::requireNonNull(v)));
	$set(this, rawVersionString, nullptr);
	return this;
}

ModuleDescriptor$Builder* ModuleDescriptor$Builder::version($String* vs) {
	try {
		$set(this, version$, $ModuleDescriptor$Version::parse(vs));
		$set(this, rawVersionString, nullptr);
	} catch ($IllegalArgumentException& e) {
		if (this->strict) {
			$throw(e);
		}
		$set(this, version$, nullptr);
		$set(this, rawVersionString, vs);
	}
	return this;
}

ModuleDescriptor$Builder* ModuleDescriptor$Builder::mainClass($String* mc$renamed) {
	$useLocalObjectStack();
	$var($String, mc, mc$renamed);
	$var($String, pn, nullptr);
	if (this->strict) {
		$assign(mc, $Checks::requireQualifiedClassName("main class name"_s, mc));
		$assign(pn, $ModuleDescriptor::packageName(mc));
		if (!ModuleDescriptor$Builder::$assertionsDisabled && ! !$nc(pn)->isEmpty()) {
			$throwNew($AssertionError);
		}
	} else {
		$assign(pn, $ModuleDescriptor::packageName(mc));
		if ($nc(pn)->isEmpty()) {
			$throwNew($IllegalArgumentException, $$str({mc, ": unnamed package"_s}));
		}
	}
	this->packages$->add(pn);
	$set(this, mainClass$, mc);
	return this;
}

$ModuleDescriptor* ModuleDescriptor$Builder::build() {
	$useLocalObjectStack();
	$var($Set, requires, $new($HashSet, $($nc(this->requires$)->values())));
	$var($Set, exports, $new($HashSet, $($nc(this->exports$)->values())));
	$var($Set, opens, $new($HashSet, $($nc(this->opens$)->values())));
	bool var$0 = this->strict && !$nc(this->name)->equals("java.base"_s);
	if (var$0 && !this->requires$->containsKey("java.base"_s)) {
		$init($ModuleDescriptor$Requires$Modifier);
		requires->add($$new($ModuleDescriptor$Requires, $($Set::of($ModuleDescriptor$Requires$Modifier::MANDATED)), "java.base"_s, nullptr, nullptr));
	}
	$var($Set, provides, $new($HashSet, $($nc(this->provides$)->values())));
	return $new($ModuleDescriptor, this->name, this->version$, this->rawVersionString, this->modifiers, requires, exports, opens, this->uses$, provides, this->packages$, this->mainClass$);
}

void ModuleDescriptor$Builder::lambda$provides$0($String* name) {
	this->packages$->add($($ModuleDescriptor::packageName(name)));
}

void ModuleDescriptor$Builder::clinit$($Class* clazz) {
	$load($ModuleDescriptor);
	ModuleDescriptor$Builder::$assertionsDisabled = !$ModuleDescriptor::class$->desiredAssertionStatus();
}

ModuleDescriptor$Builder::ModuleDescriptor$Builder() {
}

$Class* ModuleDescriptor$Builder::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals("java.lang.module.ModuleDescriptor$Builder$$Lambda$requireModuleName")) {
			return ModuleDescriptor$Builder$$Lambda$requireModuleName::load$(name, initialize);
		}
		if (name->equals("java.lang.module.ModuleDescriptor$Builder$$Lambda$lambda$provides$0$1")) {
			return ModuleDescriptor$Builder$$Lambda$lambda$provides$0$1::load$(name, initialize);
		}
		if (name->equals("java.lang.module.ModuleDescriptor$Builder$$Lambda$requireServiceProviderName$2")) {
			return ModuleDescriptor$Builder$$Lambda$requireServiceProviderName$2::load$(name, initialize);
		}
		if (name->equals("java.lang.module.ModuleDescriptor$Builder$$Lambda$requirePackageName$3")) {
			return ModuleDescriptor$Builder$$Lambda$requirePackageName$3::load$(name, initialize);
		}
	}
	$FieldInfo fieldInfos$$[] = {
		{"$assertionsDisabled", "Z", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(ModuleDescriptor$Builder, $assertionsDisabled)},
		{"name", "Ljava/lang/String;", nullptr, $FINAL, $field(ModuleDescriptor$Builder, name)},
		{"strict", "Z", nullptr, $FINAL, $field(ModuleDescriptor$Builder, strict)},
		{"modifiers", "Ljava/util/Set;", "Ljava/util/Set<Ljava/lang/module/ModuleDescriptor$Modifier;>;", $FINAL, $field(ModuleDescriptor$Builder, modifiers)},
		{"open", "Z", nullptr, $FINAL, $field(ModuleDescriptor$Builder, open)},
		{"automatic", "Z", nullptr, $FINAL, $field(ModuleDescriptor$Builder, automatic)},
		{"packages", "Ljava/util/Set;", "Ljava/util/Set<Ljava/lang/String;>;", $FINAL, $field(ModuleDescriptor$Builder, packages$)},
		{"requires", "Ljava/util/Map;", "Ljava/util/Map<Ljava/lang/String;Ljava/lang/module/ModuleDescriptor$Requires;>;", $FINAL, $field(ModuleDescriptor$Builder, requires$)},
		{"exports", "Ljava/util/Map;", "Ljava/util/Map<Ljava/lang/String;Ljava/lang/module/ModuleDescriptor$Exports;>;", $FINAL, $field(ModuleDescriptor$Builder, exports$)},
		{"opens", "Ljava/util/Map;", "Ljava/util/Map<Ljava/lang/String;Ljava/lang/module/ModuleDescriptor$Opens;>;", $FINAL, $field(ModuleDescriptor$Builder, opens$)},
		{"uses", "Ljava/util/Set;", "Ljava/util/Set<Ljava/lang/String;>;", $FINAL, $field(ModuleDescriptor$Builder, uses$)},
		{"provides", "Ljava/util/Map;", "Ljava/util/Map<Ljava/lang/String;Ljava/lang/module/ModuleDescriptor$Provides;>;", $FINAL, $field(ModuleDescriptor$Builder, provides$)},
		{"version", "Ljava/lang/module/ModuleDescriptor$Version;", nullptr, 0, $field(ModuleDescriptor$Builder, version$)},
		{"rawVersionString", "Ljava/lang/String;", nullptr, 0, $field(ModuleDescriptor$Builder, rawVersionString)},
		{"mainClass", "Ljava/lang/String;", nullptr, 0, $field(ModuleDescriptor$Builder, mainClass$)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/String;ZLjava/util/Set;)V", "(Ljava/lang/String;ZLjava/util/Set<Ljava/lang/module/ModuleDescriptor$Modifier;>;)V", 0, $method(ModuleDescriptor$Builder, init$, void, $String*, bool, $Set*)},
		{"build", "()Ljava/lang/module/ModuleDescriptor;", nullptr, $PUBLIC, $method(ModuleDescriptor$Builder, build, $ModuleDescriptor*)},
		{"exports", "(Ljava/lang/module/ModuleDescriptor$Exports;)Ljava/lang/module/ModuleDescriptor$Builder;", nullptr, $PUBLIC, $method(ModuleDescriptor$Builder, exports, ModuleDescriptor$Builder*, $ModuleDescriptor$Exports*)},
		{"exports", "(Ljava/util/Set;Ljava/lang/String;Ljava/util/Set;)Ljava/lang/module/ModuleDescriptor$Builder;", "(Ljava/util/Set<Ljava/lang/module/ModuleDescriptor$Exports$Modifier;>;Ljava/lang/String;Ljava/util/Set<Ljava/lang/String;>;)Ljava/lang/module/ModuleDescriptor$Builder;", $PUBLIC, $method(ModuleDescriptor$Builder, exports, ModuleDescriptor$Builder*, $Set*, $String*, $Set*)},
		{"exports", "(Ljava/util/Set;Ljava/lang/String;)Ljava/lang/module/ModuleDescriptor$Builder;", "(Ljava/util/Set<Ljava/lang/module/ModuleDescriptor$Exports$Modifier;>;Ljava/lang/String;)Ljava/lang/module/ModuleDescriptor$Builder;", $PUBLIC, $method(ModuleDescriptor$Builder, exports, ModuleDescriptor$Builder*, $Set*, $String*)},
		{"exports", "(Ljava/lang/String;Ljava/util/Set;)Ljava/lang/module/ModuleDescriptor$Builder;", "(Ljava/lang/String;Ljava/util/Set<Ljava/lang/String;>;)Ljava/lang/module/ModuleDescriptor$Builder;", $PUBLIC, $method(ModuleDescriptor$Builder, exports, ModuleDescriptor$Builder*, $String*, $Set*)},
		{"exports", "(Ljava/lang/String;)Ljava/lang/module/ModuleDescriptor$Builder;", nullptr, $PUBLIC, $method(ModuleDescriptor$Builder, exports, ModuleDescriptor$Builder*, $String*)},
		{"lambda$provides$0", "(Ljava/lang/String;)V", nullptr, $PRIVATE | $SYNTHETIC, $method(ModuleDescriptor$Builder, lambda$provides$0, void, $String*)},
		{"mainClass", "(Ljava/lang/String;)Ljava/lang/module/ModuleDescriptor$Builder;", nullptr, $PUBLIC, $method(ModuleDescriptor$Builder, mainClass, ModuleDescriptor$Builder*, $String*)},
		{"opens", "(Ljava/lang/module/ModuleDescriptor$Opens;)Ljava/lang/module/ModuleDescriptor$Builder;", nullptr, $PUBLIC, $method(ModuleDescriptor$Builder, opens, ModuleDescriptor$Builder*, $ModuleDescriptor$Opens*)},
		{"opens", "(Ljava/util/Set;Ljava/lang/String;Ljava/util/Set;)Ljava/lang/module/ModuleDescriptor$Builder;", "(Ljava/util/Set<Ljava/lang/module/ModuleDescriptor$Opens$Modifier;>;Ljava/lang/String;Ljava/util/Set<Ljava/lang/String;>;)Ljava/lang/module/ModuleDescriptor$Builder;", $PUBLIC, $method(ModuleDescriptor$Builder, opens, ModuleDescriptor$Builder*, $Set*, $String*, $Set*)},
		{"opens", "(Ljava/util/Set;Ljava/lang/String;)Ljava/lang/module/ModuleDescriptor$Builder;", "(Ljava/util/Set<Ljava/lang/module/ModuleDescriptor$Opens$Modifier;>;Ljava/lang/String;)Ljava/lang/module/ModuleDescriptor$Builder;", $PUBLIC, $method(ModuleDescriptor$Builder, opens, ModuleDescriptor$Builder*, $Set*, $String*)},
		{"opens", "(Ljava/lang/String;Ljava/util/Set;)Ljava/lang/module/ModuleDescriptor$Builder;", "(Ljava/lang/String;Ljava/util/Set<Ljava/lang/String;>;)Ljava/lang/module/ModuleDescriptor$Builder;", $PUBLIC, $method(ModuleDescriptor$Builder, opens, ModuleDescriptor$Builder*, $String*, $Set*)},
		{"opens", "(Ljava/lang/String;)Ljava/lang/module/ModuleDescriptor$Builder;", nullptr, $PUBLIC, $method(ModuleDescriptor$Builder, opens, ModuleDescriptor$Builder*, $String*)},
		{"packages", "()Ljava/util/Set;", "()Ljava/util/Set<Ljava/lang/String;>;", 0, $method(ModuleDescriptor$Builder, packages, $Set*)},
		{"packages", "(Ljava/util/Set;)Ljava/lang/module/ModuleDescriptor$Builder;", "(Ljava/util/Set<Ljava/lang/String;>;)Ljava/lang/module/ModuleDescriptor$Builder;", $PUBLIC, $method(ModuleDescriptor$Builder, packages, ModuleDescriptor$Builder*, $Set*)},
		{"provides", "(Ljava/lang/module/ModuleDescriptor$Provides;)Ljava/lang/module/ModuleDescriptor$Builder;", nullptr, $PUBLIC, $method(ModuleDescriptor$Builder, provides, ModuleDescriptor$Builder*, $ModuleDescriptor$Provides*)},
		{"provides", "(Ljava/lang/String;Ljava/util/List;)Ljava/lang/module/ModuleDescriptor$Builder;", "(Ljava/lang/String;Ljava/util/List<Ljava/lang/String;>;)Ljava/lang/module/ModuleDescriptor$Builder;", $PUBLIC, $method(ModuleDescriptor$Builder, provides, ModuleDescriptor$Builder*, $String*, $List*)},
		{"requires", "(Ljava/lang/module/ModuleDescriptor$Requires;)Ljava/lang/module/ModuleDescriptor$Builder;", nullptr, $PUBLIC, $method(ModuleDescriptor$Builder, requires, ModuleDescriptor$Builder*, $ModuleDescriptor$Requires*)},
		{"requires", "(Ljava/util/Set;Ljava/lang/String;Ljava/lang/module/ModuleDescriptor$Version;)Ljava/lang/module/ModuleDescriptor$Builder;", "(Ljava/util/Set<Ljava/lang/module/ModuleDescriptor$Requires$Modifier;>;Ljava/lang/String;Ljava/lang/module/ModuleDescriptor$Version;)Ljava/lang/module/ModuleDescriptor$Builder;", $PUBLIC, $method(ModuleDescriptor$Builder, requires, ModuleDescriptor$Builder*, $Set*, $String*, $ModuleDescriptor$Version*)},
		{"requires", "(Ljava/util/Set;Ljava/lang/String;Ljava/lang/String;)Ljava/lang/module/ModuleDescriptor$Builder;", "(Ljava/util/Set<Ljava/lang/module/ModuleDescriptor$Requires$Modifier;>;Ljava/lang/String;Ljava/lang/String;)Ljava/lang/module/ModuleDescriptor$Builder;", 0, $method(ModuleDescriptor$Builder, requires, ModuleDescriptor$Builder*, $Set*, $String*, $String*)},
		{"requires", "(Ljava/util/Set;Ljava/lang/String;)Ljava/lang/module/ModuleDescriptor$Builder;", "(Ljava/util/Set<Ljava/lang/module/ModuleDescriptor$Requires$Modifier;>;Ljava/lang/String;)Ljava/lang/module/ModuleDescriptor$Builder;", $PUBLIC, $method(ModuleDescriptor$Builder, requires, ModuleDescriptor$Builder*, $Set*, $String*)},
		{"requires", "(Ljava/lang/String;)Ljava/lang/module/ModuleDescriptor$Builder;", nullptr, $PUBLIC, $method(ModuleDescriptor$Builder, requires, ModuleDescriptor$Builder*, $String*)},
		{"uses", "(Ljava/lang/String;)Ljava/lang/module/ModuleDescriptor$Builder;", nullptr, $PUBLIC, $method(ModuleDescriptor$Builder, uses, ModuleDescriptor$Builder*, $String*)},
		{"version", "(Ljava/lang/module/ModuleDescriptor$Version;)Ljava/lang/module/ModuleDescriptor$Builder;", nullptr, $PUBLIC, $method(ModuleDescriptor$Builder, version, ModuleDescriptor$Builder*, $ModuleDescriptor$Version*)},
		{"version", "(Ljava/lang/String;)Ljava/lang/module/ModuleDescriptor$Builder;", nullptr, $PUBLIC, $method(ModuleDescriptor$Builder, version, ModuleDescriptor$Builder*, $String*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.lang.module.ModuleDescriptor$Builder", "java.lang.module.ModuleDescriptor", "Builder", $PUBLIC | $STATIC | $FINAL},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER,
		"java.lang.module.ModuleDescriptor$Builder",
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
		"java.lang.module.ModuleDescriptor"
	};
	$loadClass(ModuleDescriptor$Builder, name, initialize, &classInfo$$, ModuleDescriptor$Builder::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(ModuleDescriptor$Builder);
	});
	return class$;
}

$Class* ModuleDescriptor$Builder::class$ = nullptr;

		} // module
	} // lang
} // java