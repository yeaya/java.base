#include <jdk/internal/module/Builder.h>

#include <java/lang/AssertionError.h>
#include <java/lang/module/ModuleDescriptor$Exports.h>
#include <java/lang/module/ModuleDescriptor$Modifier.h>
#include <java/lang/module/ModuleDescriptor$Opens.h>
#include <java/lang/module/ModuleDescriptor$Provides.h>
#include <java/lang/module/ModuleDescriptor$Requires.h>
#include <java/lang/module/ModuleDescriptor$Version.h>
#include <java/lang/module/ModuleDescriptor.h>
#include <java/util/List.h>
#include <java/util/Set.h>
#include <jdk/internal/access/JavaLangModuleAccess.h>
#include <jdk/internal/access/SharedSecrets.h>
#include <jcpp.h>

#undef JLMA
#undef MANDATED
#undef OPEN
#undef SYNTHETIC

using $ModuleDescriptor$ExportsArray = $Array<::java::lang::module::ModuleDescriptor$Exports>;
using $ModuleDescriptor$ModifierArray = $Array<::java::lang::module::ModuleDescriptor$Modifier>;
using $ModuleDescriptor$OpensArray = $Array<::java::lang::module::ModuleDescriptor$Opens>;
using $ModuleDescriptor$ProvidesArray = $Array<::java::lang::module::ModuleDescriptor$Provides>;
using $ModuleDescriptor$RequiresArray = $Array<::java::lang::module::ModuleDescriptor$Requires>;
using $AssertionError = ::java::lang::AssertionError;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ModuleDescriptor = ::java::lang::module::ModuleDescriptor;
using $ModuleDescriptor$Exports = ::java::lang::module::ModuleDescriptor$Exports;
using $ModuleDescriptor$Modifier = ::java::lang::module::ModuleDescriptor$Modifier;
using $ModuleDescriptor$Opens = ::java::lang::module::ModuleDescriptor$Opens;
using $ModuleDescriptor$Provides = ::java::lang::module::ModuleDescriptor$Provides;
using $ModuleDescriptor$Requires = ::java::lang::module::ModuleDescriptor$Requires;
using $ModuleDescriptor$Version = ::java::lang::module::ModuleDescriptor$Version;
using $List = ::java::util::List;
using $Set = ::java::util::Set;
using $JavaLangModuleAccess = ::jdk::internal::access::JavaLangModuleAccess;
using $SharedSecrets = ::jdk::internal::access::SharedSecrets;

namespace jdk {
	namespace internal {
		namespace module {

$FieldInfo _Builder_FieldInfo_[] = {
	{"$assertionsDisabled", "Z", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(Builder, $assertionsDisabled)},
	{"JLMA", "Ljdk/internal/access/JavaLangModuleAccess;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(Builder, JLMA)},
	{"cachedVersion", "Ljava/lang/module/ModuleDescriptor$Version;", nullptr, $STATIC, $staticField(Builder, cachedVersion)},
	{"name", "Ljava/lang/String;", nullptr, $FINAL, $field(Builder, name)},
	{"open", "Z", nullptr, 0, $field(Builder, open$)},
	{"synthetic", "Z", nullptr, 0, $field(Builder, synthetic$)},
	{"mandated", "Z", nullptr, 0, $field(Builder, mandated$)},
	{"requires", "Ljava/util/Set;", "Ljava/util/Set<Ljava/lang/module/ModuleDescriptor$Requires;>;", 0, $field(Builder, requires$)},
	{"exports", "Ljava/util/Set;", "Ljava/util/Set<Ljava/lang/module/ModuleDescriptor$Exports;>;", 0, $field(Builder, exports$)},
	{"opens", "Ljava/util/Set;", "Ljava/util/Set<Ljava/lang/module/ModuleDescriptor$Opens;>;", 0, $field(Builder, opens$)},
	{"packages", "Ljava/util/Set;", "Ljava/util/Set<Ljava/lang/String;>;", 0, $field(Builder, packages$)},
	{"uses", "Ljava/util/Set;", "Ljava/util/Set<Ljava/lang/String;>;", 0, $field(Builder, uses$)},
	{"provides", "Ljava/util/Set;", "Ljava/util/Set<Ljava/lang/module/ModuleDescriptor$Provides;>;", 0, $field(Builder, provides$)},
	{"version", "Ljava/lang/module/ModuleDescriptor$Version;", nullptr, 0, $field(Builder, version$)},
	{"mainClass", "Ljava/lang/String;", nullptr, 0, $field(Builder, mainClass$)},
	{}
};

$MethodInfo _Builder_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;)V", nullptr, 0, $method(Builder, init$, void, $String*)},
	{"build", "(I)Ljava/lang/module/ModuleDescriptor;", nullptr, $PUBLIC, $method(Builder, build, $ModuleDescriptor*, int32_t)},
	{"exports", "([Ljava/lang/module/ModuleDescriptor$Exports;)Ljdk/internal/module/Builder;", nullptr, $PUBLIC, $method(Builder, exports, Builder*, $ModuleDescriptor$ExportsArray*)},
	{"mainClass", "(Ljava/lang/String;)Ljdk/internal/module/Builder;", nullptr, $PUBLIC, $method(Builder, mainClass, Builder*, $String*)},
	{"mandated", "(Z)Ljdk/internal/module/Builder;", nullptr, 0, $method(Builder, mandated, Builder*, bool)},
	{"modifiers", "()Ljava/util/Set;", "()Ljava/util/Set<Ljava/lang/module/ModuleDescriptor$Modifier;>;", $PRIVATE, $method(Builder, modifiers, $Set*)},
	{"newExports", "(Ljava/util/Set;Ljava/lang/String;Ljava/util/Set;)Ljava/lang/module/ModuleDescriptor$Exports;", "(Ljava/util/Set<Ljava/lang/module/ModuleDescriptor$Exports$Modifier;>;Ljava/lang/String;Ljava/util/Set<Ljava/lang/String;>;)Ljava/lang/module/ModuleDescriptor$Exports;", $PUBLIC | $STATIC, $staticMethod(Builder, newExports, $ModuleDescriptor$Exports*, $Set*, $String*, $Set*)},
	{"newExports", "(Ljava/util/Set;Ljava/lang/String;)Ljava/lang/module/ModuleDescriptor$Exports;", "(Ljava/util/Set<Ljava/lang/module/ModuleDescriptor$Exports$Modifier;>;Ljava/lang/String;)Ljava/lang/module/ModuleDescriptor$Exports;", $PUBLIC | $STATIC, $staticMethod(Builder, newExports, $ModuleDescriptor$Exports*, $Set*, $String*)},
	{"newOpens", "(Ljava/util/Set;Ljava/lang/String;)Ljava/lang/module/ModuleDescriptor$Opens;", "(Ljava/util/Set<Ljava/lang/module/ModuleDescriptor$Opens$Modifier;>;Ljava/lang/String;)Ljava/lang/module/ModuleDescriptor$Opens;", $PUBLIC | $STATIC, $staticMethod(Builder, newOpens, $ModuleDescriptor$Opens*, $Set*, $String*)},
	{"newOpens", "(Ljava/util/Set;Ljava/lang/String;Ljava/util/Set;)Ljava/lang/module/ModuleDescriptor$Opens;", "(Ljava/util/Set<Ljava/lang/module/ModuleDescriptor$Opens$Modifier;>;Ljava/lang/String;Ljava/util/Set<Ljava/lang/String;>;)Ljava/lang/module/ModuleDescriptor$Opens;", $PUBLIC | $STATIC, $staticMethod(Builder, newOpens, $ModuleDescriptor$Opens*, $Set*, $String*, $Set*)},
	{"newProvides", "(Ljava/lang/String;Ljava/util/List;)Ljava/lang/module/ModuleDescriptor$Provides;", "(Ljava/lang/String;Ljava/util/List<Ljava/lang/String;>;)Ljava/lang/module/ModuleDescriptor$Provides;", $PUBLIC | $STATIC, $staticMethod(Builder, newProvides, $ModuleDescriptor$Provides*, $String*, $List*)},
	{"newRequires", "(Ljava/util/Set;Ljava/lang/String;Ljava/lang/String;)Ljava/lang/module/ModuleDescriptor$Requires;", "(Ljava/util/Set<Ljava/lang/module/ModuleDescriptor$Requires$Modifier;>;Ljava/lang/String;Ljava/lang/String;)Ljava/lang/module/ModuleDescriptor$Requires;", $PUBLIC | $STATIC, $staticMethod(Builder, newRequires, $ModuleDescriptor$Requires*, $Set*, $String*, $String*)},
	{"newRequires", "(Ljava/util/Set;Ljava/lang/String;)Ljava/lang/module/ModuleDescriptor$Requires;", "(Ljava/util/Set<Ljava/lang/module/ModuleDescriptor$Requires$Modifier;>;Ljava/lang/String;)Ljava/lang/module/ModuleDescriptor$Requires;", $PUBLIC | $STATIC, $staticMethod(Builder, newRequires, $ModuleDescriptor$Requires*, $Set*, $String*)},
	{"open", "(Z)Ljdk/internal/module/Builder;", nullptr, 0, $method(Builder, open, Builder*, bool)},
	{"opens", "([Ljava/lang/module/ModuleDescriptor$Opens;)Ljdk/internal/module/Builder;", nullptr, $PUBLIC, $method(Builder, opens, Builder*, $ModuleDescriptor$OpensArray*)},
	{"packages", "(Ljava/util/Set;)Ljdk/internal/module/Builder;", "(Ljava/util/Set<Ljava/lang/String;>;)Ljdk/internal/module/Builder;", $PUBLIC, $method(Builder, packages, Builder*, $Set*)},
	{"provides", "([Ljava/lang/module/ModuleDescriptor$Provides;)Ljdk/internal/module/Builder;", nullptr, $PUBLIC, $method(Builder, provides, Builder*, $ModuleDescriptor$ProvidesArray*)},
	{"requires", "([Ljava/lang/module/ModuleDescriptor$Requires;)Ljdk/internal/module/Builder;", nullptr, $PUBLIC, $method(Builder, requires, Builder*, $ModuleDescriptor$RequiresArray*)},
	{"synthetic", "(Z)Ljdk/internal/module/Builder;", nullptr, 0, $method(Builder, synthetic, Builder*, bool)},
	{"uses", "(Ljava/util/Set;)Ljdk/internal/module/Builder;", "(Ljava/util/Set<Ljava/lang/String;>;)Ljdk/internal/module/Builder;", $PUBLIC, $method(Builder, uses, Builder*, $Set*)},
	{"version", "(Ljava/lang/String;)Ljdk/internal/module/Builder;", nullptr, $PUBLIC, $method(Builder, version, Builder*, $String*)},
	{}
};

$ClassInfo _Builder_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"jdk.internal.module.Builder",
	"java.lang.Object",
	nullptr,
	_Builder_FieldInfo_,
	_Builder_MethodInfo_
};

$Object* allocate$Builder($Class* clazz) {
	return $of($alloc(Builder));
}

bool Builder::$assertionsDisabled = false;
$JavaLangModuleAccess* Builder::JLMA = nullptr;
$ModuleDescriptor$Version* Builder::cachedVersion = nullptr;

$ModuleDescriptor$Requires* Builder::newRequires($Set* mods, $String* mn, $String* compiledVersion) {
	$init(Builder);
	$useLocalCurrentObjectStackCache();
	$var($ModuleDescriptor$Version, version, nullptr);
	if (compiledVersion != nullptr) {
		$var($ModuleDescriptor$Version, ver, Builder::cachedVersion);
		if (ver != nullptr && compiledVersion->equals($(ver->toString()))) {
			$assign(version, ver);
		} else {
			$assign(version, $ModuleDescriptor$Version::parse(compiledVersion));
		}
	}
	return $nc(Builder::JLMA)->newRequires(mods, mn, version);
}

$ModuleDescriptor$Requires* Builder::newRequires($Set* mods, $String* mn) {
	$init(Builder);
	return newRequires(mods, mn, nullptr);
}

$ModuleDescriptor$Exports* Builder::newExports($Set* ms, $String* pn, $Set* targets) {
	$init(Builder);
	return $nc(Builder::JLMA)->newExports(ms, pn, targets);
}

$ModuleDescriptor$Opens* Builder::newOpens($Set* ms, $String* pn) {
	$init(Builder);
	return $nc(Builder::JLMA)->newOpens(ms, pn);
}

$ModuleDescriptor$Opens* Builder::newOpens($Set* ms, $String* pn, $Set* targets) {
	$init(Builder);
	return $nc(Builder::JLMA)->newOpens(ms, pn, targets);
}

$ModuleDescriptor$Exports* Builder::newExports($Set* ms, $String* pn) {
	$init(Builder);
	return $nc(Builder::JLMA)->newExports(ms, pn);
}

$ModuleDescriptor$Provides* Builder::newProvides($String* st, $List* pcs) {
	$init(Builder);
	return $nc(Builder::JLMA)->newProvides(st, pcs);
}

void Builder::init$($String* name) {
	$set(this, name, name);
	$set(this, requires$, $Set::of());
	$set(this, exports$, $Set::of());
	$set(this, opens$, $Set::of());
	$set(this, provides$, $Set::of());
	$set(this, uses$, $Set::of());
}

Builder* Builder::open(bool value) {
	this->open$ = value;
	return this;
}

Builder* Builder::synthetic(bool value) {
	this->synthetic$ = value;
	return this;
}

Builder* Builder::mandated(bool value) {
	this->mandated$ = value;
	return this;
}

Builder* Builder::exports($ModuleDescriptor$ExportsArray* exports) {
	$set(this, exports$, $Set::of(exports));
	return this;
}

Builder* Builder::opens($ModuleDescriptor$OpensArray* opens) {
	$set(this, opens$, $Set::of(opens));
	return this;
}

Builder* Builder::requires($ModuleDescriptor$RequiresArray* requires) {
	$set(this, requires$, $Set::of(requires));
	return this;
}

Builder* Builder::packages($Set* packages) {
	$set(this, packages$, packages);
	return this;
}

Builder* Builder::uses($Set* uses) {
	$set(this, uses$, uses);
	return this;
}

Builder* Builder::provides($ModuleDescriptor$ProvidesArray* provides) {
	$set(this, provides$, $Set::of(provides));
	return this;
}

Builder* Builder::version($String* v) {
	$useLocalCurrentObjectStackCache();
	$var($ModuleDescriptor$Version, ver, Builder::cachedVersion);
	if (ver != nullptr && $nc(v)->equals($(ver->toString()))) {
		$set(this, version$, ver);
	} else {
		$assignStatic(Builder::cachedVersion, ($set(this, version$, $ModuleDescriptor$Version::parse(v))));
	}
	return this;
}

Builder* Builder::mainClass($String* mc) {
	$set(this, mainClass$, mc);
	return this;
}

$Set* Builder::modifiers() {
	int32_t n = 0;
	if (this->open$) {
		++n;
	}
	if (this->synthetic$) {
		++n;
	}
	if (this->mandated$) {
		++n;
	}
	if (n == 0) {
		return $Set::of();
	} else {
		$var($ModuleDescriptor$ModifierArray, mods, $new($ModuleDescriptor$ModifierArray, n));
		if (this->open$) {
			$init($ModuleDescriptor$Modifier);
			mods->set(--n, $ModuleDescriptor$Modifier::OPEN);
		}
		if (this->synthetic$) {
			$init($ModuleDescriptor$Modifier);
			mods->set(--n, $ModuleDescriptor$Modifier::SYNTHETIC);
		}
		if (this->mandated$) {
			$init($ModuleDescriptor$Modifier);
			mods->set(--n, $ModuleDescriptor$Modifier::MANDATED);
		}
		return $Set::of(mods);
	}
}

$ModuleDescriptor* Builder::build(int32_t hashCode) {
	if (!Builder::$assertionsDisabled && !(this->name != nullptr)) {
		$throwNew($AssertionError);
	}
	return $nc(Builder::JLMA)->newModuleDescriptor(this->name, this->version$, $(modifiers()), this->requires$, this->exports$, this->opens$, this->uses$, this->provides$, this->packages$, this->mainClass$, hashCode);
}

void clinit$Builder($Class* class$) {
	Builder::$assertionsDisabled = !Builder::class$->desiredAssertionStatus();
	$assignStatic(Builder::JLMA, $SharedSecrets::getJavaLangModuleAccess());
}

Builder::Builder() {
}

$Class* Builder::load$($String* name, bool initialize) {
	$loadClass(Builder, name, initialize, &_Builder_ClassInfo_, clinit$Builder, allocate$Builder);
	return class$;
}

$Class* Builder::class$ = nullptr;

		} // module
	} // internal
} // jdk