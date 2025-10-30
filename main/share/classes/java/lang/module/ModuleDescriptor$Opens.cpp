#include <java/lang/module/ModuleDescriptor$Opens.h>

#include <java/lang/module/ModuleDescriptor.h>
#include <java/util/Collection.h>
#include <java/util/Objects.h>
#include <java/util/Set.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $Comparable = ::java::lang::Comparable;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Long = ::java::lang::Long;
using $MethodInfo = ::java::lang::MethodInfo;
using $ModuleDescriptor = ::java::lang::module::ModuleDescriptor;
using $Collection = ::java::util::Collection;
using $Objects = ::java::util::Objects;
using $Set = ::java::util::Set;

namespace java {
	namespace lang {
		namespace module {

$FieldInfo _ModuleDescriptor$Opens_FieldInfo_[] = {
	{"mods", "Ljava/util/Set;", "Ljava/util/Set<Ljava/lang/module/ModuleDescriptor$Opens$Modifier;>;", $PRIVATE | $FINAL, $field(ModuleDescriptor$Opens, mods)},
	{"source", "Ljava/lang/String;", nullptr, $PRIVATE | $FINAL, $field(ModuleDescriptor$Opens, source$)},
	{"targets", "Ljava/util/Set;", "Ljava/util/Set<Ljava/lang/String;>;", $PRIVATE | $FINAL, $field(ModuleDescriptor$Opens, targets$)},
	{}
};

$MethodInfo _ModuleDescriptor$Opens_MethodInfo_[] = {
	{"<init>", "(Ljava/util/Set;Ljava/lang/String;Ljava/util/Set;)V", "(Ljava/util/Set<Ljava/lang/module/ModuleDescriptor$Opens$Modifier;>;Ljava/lang/String;Ljava/util/Set<Ljava/lang/String;>;)V", $PRIVATE, $method(static_cast<void(ModuleDescriptor$Opens::*)($Set*,$String*,$Set*)>(&ModuleDescriptor$Opens::init$))},
	{"<init>", "(Ljava/util/Set;Ljava/lang/String;Ljava/util/Set;Z)V", "(Ljava/util/Set<Ljava/lang/module/ModuleDescriptor$Opens$Modifier;>;Ljava/lang/String;Ljava/util/Set<Ljava/lang/String;>;Z)V", $PRIVATE, $method(static_cast<void(ModuleDescriptor$Opens::*)($Set*,$String*,$Set*,bool)>(&ModuleDescriptor$Opens::init$))},
	{"compareTo", "(Ljava/lang/module/ModuleDescriptor$Opens;)I", nullptr, $PUBLIC, $method(static_cast<int32_t(ModuleDescriptor$Opens::*)(ModuleDescriptor$Opens*)>(&ModuleDescriptor$Opens::compareTo))},
	{"compareTo", "(Ljava/lang/Object;)I", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"hashCode", "()I", nullptr, $PUBLIC},
	{"isQualified", "()Z", nullptr, $PUBLIC, $method(static_cast<bool(ModuleDescriptor$Opens::*)()>(&ModuleDescriptor$Opens::isQualified))},
	{"modifiers", "()Ljava/util/Set;", "()Ljava/util/Set<Ljava/lang/module/ModuleDescriptor$Opens$Modifier;>;", $PUBLIC, $method(static_cast<$Set*(ModuleDescriptor$Opens::*)()>(&ModuleDescriptor$Opens::modifiers))},
	{"source", "()Ljava/lang/String;", nullptr, $PUBLIC, $method(static_cast<$String*(ModuleDescriptor$Opens::*)()>(&ModuleDescriptor$Opens::source))},
	{"targets", "()Ljava/util/Set;", "()Ljava/util/Set<Ljava/lang/String;>;", $PUBLIC, $method(static_cast<$Set*(ModuleDescriptor$Opens::*)()>(&ModuleDescriptor$Opens::targets))},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _ModuleDescriptor$Opens_InnerClassesInfo_[] = {
	{"java.lang.module.ModuleDescriptor$Opens", "java.lang.module.ModuleDescriptor", "Opens", $PUBLIC | $STATIC | $FINAL},
	{"java.lang.module.ModuleDescriptor$Opens$Modifier", "java.lang.module.ModuleDescriptor$Opens", "Modifier", $PUBLIC | $STATIC | $FINAL | $ENUM},
	{}
};

$ClassInfo _ModuleDescriptor$Opens_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"java.lang.module.ModuleDescriptor$Opens",
	"java.lang.Object",
	"java.lang.Comparable",
	_ModuleDescriptor$Opens_FieldInfo_,
	_ModuleDescriptor$Opens_MethodInfo_,
	"Ljava/lang/Object;Ljava/lang/Comparable<Ljava/lang/module/ModuleDescriptor$Opens;>;",
	nullptr,
	_ModuleDescriptor$Opens_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.lang.module.ModuleDescriptor"
};

$Object* allocate$ModuleDescriptor$Opens($Class* clazz) {
	return $of($alloc(ModuleDescriptor$Opens));
}

void ModuleDescriptor$Opens::init$($Set* ms, $String* source, $Set* targets) {
	$set(this, mods, $Set::copyOf(ms));
	$set(this, source$, source);
	$set(this, targets$, $Set::copyOf(targets));
}

void ModuleDescriptor$Opens::init$($Set* ms, $String* source, $Set* targets, bool unused) {
	$set(this, mods, ms);
	$set(this, source$, source);
	$set(this, targets$, targets);
}

$Set* ModuleDescriptor$Opens::modifiers() {
	return this->mods;
}

bool ModuleDescriptor$Opens::isQualified() {
	return !$nc(this->targets$)->isEmpty();
}

$String* ModuleDescriptor$Opens::source() {
	return this->source$;
}

$Set* ModuleDescriptor$Opens::targets() {
	return this->targets$;
}

int32_t ModuleDescriptor$Opens::compareTo(ModuleDescriptor$Opens* that) {
	$useLocalCurrentObjectStackCache();
	if (this == that) {
		return 0;
	}
	int32_t c = $nc(this->source$)->compareTo($nc(that)->source$);
	if (c != 0) {
		return c;
	}
	int64_t v1 = $ModuleDescriptor::modsValue($(this->modifiers()));
	int64_t v2 = $ModuleDescriptor::modsValue($($nc(that)->modifiers()));
	c = $Long::compare(v1, v2);
	if (c != 0) {
		return c;
	}
	c = $ModuleDescriptor::compare(this->targets$, $nc(that)->targets$);
	if (c != 0) {
		return c;
	}
	return 0;
}

int32_t ModuleDescriptor$Opens::hashCode() {
	int32_t hash = $nc(this->mods)->hashCode();
	hash = hash * 43 + $nc(this->source$)->hashCode();
	return hash * 43 + $nc(this->targets$)->hashCode();
}

bool ModuleDescriptor$Opens::equals(Object$* ob) {
	$var(ModuleDescriptor$Opens, other, nullptr);
	bool var$3 = $instanceOf(ModuleDescriptor$Opens, ob);
	if (var$3) {
		$assign(other, $cast(ModuleDescriptor$Opens, ob));
		var$3 = true;
	}
	bool var$2 = (var$3);
	bool var$1 = var$2 && $Objects::equals(this->mods, $nc(other)->mods);
	bool var$0 = var$1 && $Objects::equals(this->source$, $nc(other)->source$);
	return var$0 && $Objects::equals(this->targets$, $nc(other)->targets$);
}

$String* ModuleDescriptor$Opens::toString() {
	$var($String, s, $ModuleDescriptor::toString(this->mods, this->source$));
	if ($nc(this->targets$)->isEmpty()) {
		return s;
	} else {
		return $str({s, " to "_s, this->targets$});
	}
}

int32_t ModuleDescriptor$Opens::compareTo(Object$* that) {
	return this->compareTo($cast(ModuleDescriptor$Opens, that));
}

ModuleDescriptor$Opens::ModuleDescriptor$Opens() {
}

$Class* ModuleDescriptor$Opens::load$($String* name, bool initialize) {
	$loadClass(ModuleDescriptor$Opens, name, initialize, &_ModuleDescriptor$Opens_ClassInfo_, allocate$ModuleDescriptor$Opens);
	return class$;
}

$Class* ModuleDescriptor$Opens::class$ = nullptr;

		} // module
	} // lang
} // java