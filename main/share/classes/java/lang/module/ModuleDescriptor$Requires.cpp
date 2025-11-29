#include <java/lang/module/ModuleDescriptor$Requires.h>

#include <java/lang/AssertionError.h>
#include <java/lang/module/ModuleDescriptor$Version.h>
#include <java/lang/module/ModuleDescriptor.h>
#include <java/util/Collection.h>
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
using $Collection = ::java::util::Collection;
using $Objects = ::java::util::Objects;
using $Optional = ::java::util::Optional;
using $Set = ::java::util::Set;

namespace java {
	namespace lang {
		namespace module {

$FieldInfo _ModuleDescriptor$Requires_FieldInfo_[] = {
	{"$assertionsDisabled", "Z", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(ModuleDescriptor$Requires, $assertionsDisabled)},
	{"mods", "Ljava/util/Set;", "Ljava/util/Set<Ljava/lang/module/ModuleDescriptor$Requires$Modifier;>;", $PRIVATE | $FINAL, $field(ModuleDescriptor$Requires, mods)},
	{"name", "Ljava/lang/String;", nullptr, $PRIVATE | $FINAL, $field(ModuleDescriptor$Requires, name$)},
	{"compiledVersion", "Ljava/lang/module/ModuleDescriptor$Version;", nullptr, $PRIVATE | $FINAL, $field(ModuleDescriptor$Requires, compiledVersion$)},
	{"rawCompiledVersion", "Ljava/lang/String;", nullptr, $PRIVATE | $FINAL, $field(ModuleDescriptor$Requires, rawCompiledVersion$)},
	{}
};

$MethodInfo _ModuleDescriptor$Requires_MethodInfo_[] = {
	{"<init>", "(Ljava/util/Set;Ljava/lang/String;Ljava/lang/module/ModuleDescriptor$Version;Ljava/lang/String;)V", "(Ljava/util/Set<Ljava/lang/module/ModuleDescriptor$Requires$Modifier;>;Ljava/lang/String;Ljava/lang/module/ModuleDescriptor$Version;Ljava/lang/String;)V", $PRIVATE, $method(static_cast<void(ModuleDescriptor$Requires::*)($Set*,$String*,$ModuleDescriptor$Version*,$String*)>(&ModuleDescriptor$Requires::init$))},
	{"<init>", "(Ljava/util/Set;Ljava/lang/String;Ljava/lang/module/ModuleDescriptor$Version;Z)V", "(Ljava/util/Set<Ljava/lang/module/ModuleDescriptor$Requires$Modifier;>;Ljava/lang/String;Ljava/lang/module/ModuleDescriptor$Version;Z)V", $PRIVATE, $method(static_cast<void(ModuleDescriptor$Requires::*)($Set*,$String*,$ModuleDescriptor$Version*,bool)>(&ModuleDescriptor$Requires::init$))},
	{"compareTo", "(Ljava/lang/module/ModuleDescriptor$Requires;)I", nullptr, $PUBLIC, $method(static_cast<int32_t(ModuleDescriptor$Requires::*)(ModuleDescriptor$Requires*)>(&ModuleDescriptor$Requires::compareTo))},
	{"compareTo", "(Ljava/lang/Object;)I", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"compiledVersion", "()Ljava/util/Optional;", "()Ljava/util/Optional<Ljava/lang/module/ModuleDescriptor$Version;>;", $PUBLIC, $method(static_cast<$Optional*(ModuleDescriptor$Requires::*)()>(&ModuleDescriptor$Requires::compiledVersion))},
	{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"hashCode", "()I", nullptr, $PUBLIC},
	{"modifiers", "()Ljava/util/Set;", "()Ljava/util/Set<Ljava/lang/module/ModuleDescriptor$Requires$Modifier;>;", $PUBLIC, $method(static_cast<$Set*(ModuleDescriptor$Requires::*)()>(&ModuleDescriptor$Requires::modifiers))},
	{"name", "()Ljava/lang/String;", nullptr, $PUBLIC, $method(static_cast<$String*(ModuleDescriptor$Requires::*)()>(&ModuleDescriptor$Requires::name))},
	{"rawCompiledVersion", "()Ljava/util/Optional;", "()Ljava/util/Optional<Ljava/lang/String;>;", $PUBLIC, $method(static_cast<$Optional*(ModuleDescriptor$Requires::*)()>(&ModuleDescriptor$Requires::rawCompiledVersion))},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _ModuleDescriptor$Requires_InnerClassesInfo_[] = {
	{"java.lang.module.ModuleDescriptor$Requires", "java.lang.module.ModuleDescriptor", "Requires", $PUBLIC | $STATIC | $FINAL},
	{"java.lang.module.ModuleDescriptor$Requires$Modifier", "java.lang.module.ModuleDescriptor$Requires", "Modifier", $PUBLIC | $STATIC | $FINAL | $ENUM},
	{}
};

$ClassInfo _ModuleDescriptor$Requires_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"java.lang.module.ModuleDescriptor$Requires",
	"java.lang.Object",
	"java.lang.Comparable",
	_ModuleDescriptor$Requires_FieldInfo_,
	_ModuleDescriptor$Requires_MethodInfo_,
	"Ljava/lang/Object;Ljava/lang/Comparable<Ljava/lang/module/ModuleDescriptor$Requires;>;",
	nullptr,
	_ModuleDescriptor$Requires_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.lang.module.ModuleDescriptor"
};

$Object* allocate$ModuleDescriptor$Requires($Class* clazz) {
	return $of($alloc(ModuleDescriptor$Requires));
}

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
		return $Optional::of($($nc(this->compiledVersion$)->toString()));
	} else {
		return $Optional::ofNullable(this->rawCompiledVersion$);
	}
}

int32_t ModuleDescriptor$Requires::compareTo(ModuleDescriptor$Requires* that) {
	$useLocalCurrentObjectStackCache();
	if (this == that) {
		return 0;
	}
	int32_t c = $nc($(this->name()))->compareTo($($nc(that)->name()));
	if (c != 0) {
		return c;
	}
	int64_t v1 = $ModuleDescriptor::modsValue($(this->modifiers()));
	int64_t v2 = $ModuleDescriptor::modsValue($($nc(that)->modifiers()));
	c = $Long::compare(v1, v2);
	if (c != 0) {
		return c;
	}
	c = $ModuleDescriptor::compare($of(this->compiledVersion$), $of($nc(that)->compiledVersion$));
	if (c != 0) {
		return c;
	}
	c = $ModuleDescriptor::compare($of(this->rawCompiledVersion$), $of($nc(that)->rawCompiledVersion$));
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
	bool var$3 = (var$4);
	bool var$2 = var$3 && $nc(this->name$)->equals($nc(that)->name$);
	bool var$1 = var$2 && $nc(this->mods)->equals($nc(that)->mods);
	bool var$0 = var$1 && $Objects::equals(this->compiledVersion$, $nc(that)->compiledVersion$);
	return var$0 && $Objects::equals(this->rawCompiledVersion$, $nc(that)->rawCompiledVersion$);
}

int32_t ModuleDescriptor$Requires::hashCode() {
	int32_t var$0 = $nc(this->name$)->hashCode() * 43;
	int32_t hash = var$0 + $nc(this->mods)->hashCode();
	if (this->compiledVersion$ != nullptr) {
		hash = hash * 43 + $nc(this->compiledVersion$)->hashCode();
	}
	if (this->rawCompiledVersion$ != nullptr) {
		hash = hash * 43 + $nc(this->rawCompiledVersion$)->hashCode();
	}
	return hash;
}

$String* ModuleDescriptor$Requires::toString() {
	$useLocalCurrentObjectStackCache();
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

void clinit$ModuleDescriptor$Requires($Class* class$) {
	$load($ModuleDescriptor);
	ModuleDescriptor$Requires::$assertionsDisabled = !$ModuleDescriptor::class$->desiredAssertionStatus();
}

ModuleDescriptor$Requires::ModuleDescriptor$Requires() {
}

$Class* ModuleDescriptor$Requires::load$($String* name, bool initialize) {
	$loadClass(ModuleDescriptor$Requires, name, initialize, &_ModuleDescriptor$Requires_ClassInfo_, clinit$ModuleDescriptor$Requires, allocate$ModuleDescriptor$Requires);
	return class$;
}

$Class* ModuleDescriptor$Requires::class$ = nullptr;

		} // module
	} // lang
} // java