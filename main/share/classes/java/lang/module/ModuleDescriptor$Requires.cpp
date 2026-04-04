#include <java/lang/module/ModuleDescriptor$Requires.h>
#include <java/lang/AssertionError.h>
#include <java/lang/module/ModuleDescriptor$Version.h>
#include <java/lang/module/ModuleDescriptor.h>
#include <java/util/Objects.h>
#include <java/util/Optional.h>
#include <java/util/Set.h>
#include <jcpp.h>

using $AssertionError = ::java::lang::AssertionError;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Long = ::java::lang::Long;
using $MethodInfo = ::java::lang::MethodInfo;
using $ModuleDescriptor = ::java::lang::module::ModuleDescriptor;
using $ModuleDescriptor$Version = ::java::lang::module::ModuleDescriptor$Version;
using $Objects = ::java::util::Objects;
using $Optional = ::java::util::Optional;
using $Set = ::java::util::Set;

namespace java {
	namespace lang {
		namespace module {

bool ModuleDescriptor$Requires::$assertionsDisabled = false;

void ModuleDescriptor$Requires::init$($Set* ms, $String* mn, $ModuleDescriptor$Version* v, $String* vs) {
	if (!ModuleDescriptor$Requires::$assertionsDisabled && !(v == nullptr || vs == nullptr)) {
		$throwNew($AssertionError);
	}
	$set(this, mods, $Set::copyOf(ms));
	$set(this, name$, mn);
	$set(this, compiledVersion$, v);
	$set(this, rawCompiledVersion$, vs);
}

void ModuleDescriptor$Requires::init$($Set* ms, $String* mn, $ModuleDescriptor$Version* v, bool unused) {
	$set(this, mods, ms);
	$set(this, name$, mn);
	$set(this, compiledVersion$, v);
	$set(this, rawCompiledVersion$, nullptr);
}

$Set* ModuleDescriptor$Requires::modifiers() {
	return this->mods;
}

$String* ModuleDescriptor$Requires::name() {
	return this->name$;
}

$Optional* ModuleDescriptor$Requires::compiledVersion() {
	return $Optional::ofNullable(this->compiledVersion$);
}

$Optional* ModuleDescriptor$Requires::rawCompiledVersion() {
	if (this->compiledVersion$ != nullptr) {
		return $Optional::of($(this->compiledVersion$->toString()));
	} else {
		return $Optional::ofNullable(this->rawCompiledVersion$);
	}
}

int32_t ModuleDescriptor$Requires::compareTo(ModuleDescriptor$Requires* that) {
	$useLocalObjectStack();
	if (this == that) {
		return 0;
	}
	int32_t c = $$nc(this->name())->compareTo($($nc(that)->name()));
	if (c != 0) {
		return c;
	}
	int64_t v1 = $ModuleDescriptor::modsValue($(this->modifiers()));
	int64_t v2 = $ModuleDescriptor::modsValue($(that->modifiers()));
	c = $Long::compare(v1, v2);
	if (c != 0) {
		return c;
	}
	c = $ModuleDescriptor::compare(this->compiledVersion$, that->compiledVersion$);
	if (c != 0) {
		return c;
	}
	c = $ModuleDescriptor::compare(this->rawCompiledVersion$, that->rawCompiledVersion$);
	if (c != 0) {
		return c;
	}
	return 0;
}

bool ModuleDescriptor$Requires::equals(Object$* ob) {
	$var(ModuleDescriptor$Requires, that, nullptr);
	bool var$4 = $instanceOf(ModuleDescriptor$Requires, ob);
	if (var$4) {
		$assign(that, $cast(ModuleDescriptor$Requires, ob));
		var$4 = true;
	}
	bool var$3 = var$4;
	bool var$2 = var$3 && $nc(this->name$)->equals($nc(that)->name$);
	bool var$1 = var$2 && $nc(this->mods)->equals(that->mods);
	bool var$0 = var$1 && $Objects::equals(this->compiledVersion$, that->compiledVersion$);
	return var$0 && $Objects::equals(this->rawCompiledVersion$, that->rawCompiledVersion$);
}

int32_t ModuleDescriptor$Requires::hashCode() {
	int32_t var$0 = $nc(this->name$)->hashCode() * 43;
	int32_t hash = var$0 + $nc(this->mods)->hashCode();
	if (this->compiledVersion$ != nullptr) {
		hash = hash * 43 + this->compiledVersion$->hashCode();
	}
	if (this->rawCompiledVersion$ != nullptr) {
		hash = hash * 43 + this->rawCompiledVersion$->hashCode();
	}
	return hash;
}

$String* ModuleDescriptor$Requires::toString() {
	$useLocalObjectStack();
	$var($String, what, nullptr);
	if (this->compiledVersion$ != nullptr) {
		$assign(what, $str({$(name()), " (@"_s, this->compiledVersion$, ")"_s}));
	} else {
		$assign(what, name());
	}
	return $ModuleDescriptor::toString(this->mods, what);
}

int32_t ModuleDescriptor$Requires::compareTo(Object$* that) {
	return this->compareTo($cast(ModuleDescriptor$Requires, that));
}

void ModuleDescriptor$Requires::clinit$($Class* clazz) {
	$load($ModuleDescriptor);
	ModuleDescriptor$Requires::$assertionsDisabled = !$ModuleDescriptor::class$->desiredAssertionStatus();
}

ModuleDescriptor$Requires::ModuleDescriptor$Requires() {
}

$Class* ModuleDescriptor$Requires::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"$assertionsDisabled", "Z", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(ModuleDescriptor$Requires, $assertionsDisabled)},
		{"mods", "Ljava/util/Set;", "Ljava/util/Set<Ljava/lang/module/ModuleDescriptor$Requires$Modifier;>;", $PRIVATE | $FINAL, $field(ModuleDescriptor$Requires, mods)},
		{"name", "Ljava/lang/String;", nullptr, $PRIVATE | $FINAL, $field(ModuleDescriptor$Requires, name$)},
		{"compiledVersion", "Ljava/lang/module/ModuleDescriptor$Version;", nullptr, $PRIVATE | $FINAL, $field(ModuleDescriptor$Requires, compiledVersion$)},
		{"rawCompiledVersion", "Ljava/lang/String;", nullptr, $PRIVATE | $FINAL, $field(ModuleDescriptor$Requires, rawCompiledVersion$)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/util/Set;Ljava/lang/String;Ljava/lang/module/ModuleDescriptor$Version;Ljava/lang/String;)V", "(Ljava/util/Set<Ljava/lang/module/ModuleDescriptor$Requires$Modifier;>;Ljava/lang/String;Ljava/lang/module/ModuleDescriptor$Version;Ljava/lang/String;)V", $PRIVATE, $method(ModuleDescriptor$Requires, init$, void, $Set*, $String*, $ModuleDescriptor$Version*, $String*)},
		{"<init>", "(Ljava/util/Set;Ljava/lang/String;Ljava/lang/module/ModuleDescriptor$Version;Z)V", "(Ljava/util/Set<Ljava/lang/module/ModuleDescriptor$Requires$Modifier;>;Ljava/lang/String;Ljava/lang/module/ModuleDescriptor$Version;Z)V", $PRIVATE, $method(ModuleDescriptor$Requires, init$, void, $Set*, $String*, $ModuleDescriptor$Version*, bool)},
		{"compareTo", "(Ljava/lang/module/ModuleDescriptor$Requires;)I", nullptr, $PUBLIC, $method(ModuleDescriptor$Requires, compareTo, int32_t, ModuleDescriptor$Requires*)},
		{"compareTo", "(Ljava/lang/Object;)I", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(ModuleDescriptor$Requires, compareTo, int32_t, Object$*)},
		{"compiledVersion", "()Ljava/util/Optional;", "()Ljava/util/Optional<Ljava/lang/module/ModuleDescriptor$Version;>;", $PUBLIC, $method(ModuleDescriptor$Requires, compiledVersion, $Optional*)},
		{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC, $virtualMethod(ModuleDescriptor$Requires, equals, bool, Object$*)},
		{"hashCode", "()I", nullptr, $PUBLIC, $virtualMethod(ModuleDescriptor$Requires, hashCode, int32_t)},
		{"modifiers", "()Ljava/util/Set;", "()Ljava/util/Set<Ljava/lang/module/ModuleDescriptor$Requires$Modifier;>;", $PUBLIC, $method(ModuleDescriptor$Requires, modifiers, $Set*)},
		{"name", "()Ljava/lang/String;", nullptr, $PUBLIC, $method(ModuleDescriptor$Requires, name, $String*)},
		{"rawCompiledVersion", "()Ljava/util/Optional;", "()Ljava/util/Optional<Ljava/lang/String;>;", $PUBLIC, $method(ModuleDescriptor$Requires, rawCompiledVersion, $Optional*)},
		{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(ModuleDescriptor$Requires, toString, $String*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.lang.module.ModuleDescriptor$Requires", "java.lang.module.ModuleDescriptor", "Requires", $PUBLIC | $STATIC | $FINAL},
		{"java.lang.module.ModuleDescriptor$Requires$Modifier", "java.lang.module.ModuleDescriptor$Requires", "Modifier", $PUBLIC | $STATIC | $FINAL | $ENUM},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER,
		"java.lang.module.ModuleDescriptor$Requires",
		"java.lang.Object",
		"java.lang.Comparable",
		fieldInfos$$,
		methodInfos$$,
		"Ljava/lang/Object;Ljava/lang/Comparable<Ljava/lang/module/ModuleDescriptor$Requires;>;",
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.lang.module.ModuleDescriptor"
	};
	$loadClass(ModuleDescriptor$Requires, name, initialize, &classInfo$$, ModuleDescriptor$Requires::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(ModuleDescriptor$Requires);
	});
	return class$;
}

$Class* ModuleDescriptor$Requires::class$ = nullptr;

		} // module
	} // lang
} // java