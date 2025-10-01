#include <java/util/RegularEnumSet.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassCastException.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Enum.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/Long.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/AbstractCollection.h>
#include <java/util/AbstractSet.h>
#include <java/util/Collection.h>
#include <java/util/EnumSet.h>
#include <java/util/Iterator.h>
#include <java/util/RegularEnumSet$EnumSetIterator.h>
#include <jcpp.h>

using $EnumArray = $Array<::java::lang::Enum>;
using $ClassCastException = ::java::lang::ClassCastException;
using $ClassInfo = ::java::lang::ClassInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Long = ::java::lang::Long;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractCollection = ::java::util::AbstractCollection;
using $AbstractSet = ::java::util::AbstractSet;
using $Collection = ::java::util::Collection;
using $EnumSet = ::java::util::EnumSet;
using $Iterator = ::java::util::Iterator;
using $RegularEnumSet$EnumSetIterator = ::java::util::RegularEnumSet$EnumSetIterator;

namespace java {
	namespace util {

$FieldInfo _RegularEnumSet_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(RegularEnumSet, serialVersionUID)},
	{"elements", "J", nullptr, $PRIVATE, $field(RegularEnumSet, elements)},
	{}
};

$MethodInfo _RegularEnumSet_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/Class;[Ljava/lang/Enum;)V", "(Ljava/lang/Class<TE;>;[Ljava/lang/Enum<*>;)V", 0, $method(static_cast<void(RegularEnumSet::*)($Class*,$EnumArray*)>(&RegularEnumSet::init$))},
	{"add", "(Ljava/lang/Enum;)Z", "(TE;)Z", $PUBLIC},
	{"add", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"addAll", "()V", nullptr, 0},
	{"addAll", "(Ljava/util/Collection;)Z", "(Ljava/util/Collection<+TE;>;)Z", $PUBLIC},
	{"addRange", "(Ljava/lang/Enum;Ljava/lang/Enum;)V", "(TE;TE;)V", 0},
	{"clear", "()V", nullptr, $PUBLIC},
	{"complement", "()V", nullptr, 0},
	{"contains", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"containsAll", "(Ljava/util/Collection;)Z", "(Ljava/util/Collection<*>;)Z", $PUBLIC},
	{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"isEmpty", "()Z", nullptr, $PUBLIC},
	{"iterator", "()Ljava/util/Iterator;", "()Ljava/util/Iterator<TE;>;", $PUBLIC},
	{"remove", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"removeAll", "(Ljava/util/Collection;)Z", "(Ljava/util/Collection<*>;)Z", $PUBLIC},
	{"retainAll", "(Ljava/util/Collection;)Z", "(Ljava/util/Collection<*>;)Z", $PUBLIC},
	{"size", "()I", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _RegularEnumSet_InnerClassesInfo_[] = {
	{"java.util.RegularEnumSet$EnumSetIterator", "java.util.RegularEnumSet", "EnumSetIterator", $PRIVATE},
	{}
};

$ClassInfo _RegularEnumSet_ClassInfo_ = {
	$ACC_SUPER,
	"java.util.RegularEnumSet",
	"java.util.EnumSet",
	nullptr,
	_RegularEnumSet_FieldInfo_,
	_RegularEnumSet_MethodInfo_,
	"<E:Ljava/lang/Enum<TE;>;>Ljava/util/EnumSet<TE;>;",
	nullptr,
	_RegularEnumSet_InnerClassesInfo_,
	nullptr,
	nullptr,
	"java.util.RegularEnumSet$EnumSetIterator"
};

$Object* allocate$RegularEnumSet($Class* clazz) {
	return $of($alloc(RegularEnumSet));
}

void RegularEnumSet::init$($Class* elementType, $EnumArray* universe) {
	$EnumSet::init$(elementType, universe);
	this->elements = 0;
}

void RegularEnumSet::addRange($Enum* from, $Enum* to) {
	int32_t var$1 = $nc(from)->ordinal();
	int64_t var$0 = ($usr((int64_t)-1, var$1 - $nc(to)->ordinal() - 1));
	this->elements = $sl(var$0, from->ordinal());
}

void RegularEnumSet::addAll() {
	if ($nc(this->universe)->length != 0) {
		this->elements = $usr((int64_t)-1, -$nc(this->universe)->length);
	}
}

void RegularEnumSet::complement() {
	if ($nc(this->universe)->length != 0) {
		this->elements = ~this->elements;
		this->elements &= (uint64_t)$usr((int64_t)-1, -$nc(this->universe)->length);
	}
}

$Iterator* RegularEnumSet::iterator() {
	return $new($RegularEnumSet$EnumSetIterator, this);
}

int32_t RegularEnumSet::size() {
	return $Long::bitCount(this->elements);
}

bool RegularEnumSet::isEmpty() {
	return this->elements == 0;
}

bool RegularEnumSet::contains(Object$* e) {
	if (e == nullptr) {
		return false;
	}
	$Class* eClass = $nc($of(e))->getClass();
	if (eClass != this->elementType && $nc(eClass)->getSuperclass() != this->elementType) {
		return false;
	}
	return ((int64_t)(this->elements & (uint64_t)($sl((int64_t)1, $nc(($cast($Enum, e)))->ordinal())))) != 0;
}

bool RegularEnumSet::add($Enum* e) {
	typeCheck(e);
	int64_t oldElements = this->elements;
	this->elements |= ($sl((int64_t)1, $nc((e))->ordinal()));
	return this->elements != oldElements;
}

bool RegularEnumSet::remove(Object$* e) {
	if (e == nullptr) {
		return false;
	}
	$Class* eClass = $nc($of(e))->getClass();
	if (eClass != this->elementType && $nc(eClass)->getSuperclass() != this->elementType) {
		return false;
	}
	int64_t oldElements = this->elements;
	this->elements &= (uint64_t)~($sl((int64_t)1, $nc(($cast($Enum, e)))->ordinal()));
	return this->elements != oldElements;
}

bool RegularEnumSet::containsAll($Collection* c) {
	$var(RegularEnumSet, es, nullptr);
	bool var$0 = $instanceOf(RegularEnumSet, c);
	if (var$0) {
		$assign(es, $cast(RegularEnumSet, c));
		var$0 = true;
	}
	if (!(var$0)) {
		return $EnumSet::containsAll(c);
	}
	if ($nc(es)->elementType != this->elementType) {
		return es->isEmpty();
	}
	return ((int64_t)($nc(es)->elements & (uint64_t)~this->elements)) == 0;
}

bool RegularEnumSet::addAll($Collection* c) {
	$var(RegularEnumSet, es, nullptr);
	bool var$0 = $instanceOf(RegularEnumSet, c);
	if (var$0) {
		$assign(es, $cast(RegularEnumSet, c));
		var$0 = true;
	}
	if (!(var$0)) {
		return $EnumSet::addAll(c);
	}
	if ($nc(es)->elementType != this->elementType) {
		if (es->isEmpty()) {
			return false;
		} else {
			$throwNew($ClassCastException, $$str({es->elementType, " != "_s, this->elementType}));
		}
	}
	int64_t oldElements = this->elements;
	this->elements |= $nc(es)->elements;
	return this->elements != oldElements;
}

bool RegularEnumSet::removeAll($Collection* c) {
	$var(RegularEnumSet, es, nullptr);
	bool var$0 = $instanceOf(RegularEnumSet, c);
	if (var$0) {
		$assign(es, $cast(RegularEnumSet, c));
		var$0 = true;
	}
	if (!(var$0)) {
		return $EnumSet::removeAll(c);
	}
	if ($nc(es)->elementType != this->elementType) {
		return false;
	}
	int64_t oldElements = this->elements;
	this->elements = (int64_t)(this->elements & (uint64_t)~$nc(es)->elements);
	return this->elements != oldElements;
}

bool RegularEnumSet::retainAll($Collection* c) {
	$var(RegularEnumSet, es, nullptr);
	bool var$0 = $instanceOf(RegularEnumSet, c);
	if (var$0) {
		$assign(es, $cast(RegularEnumSet, c));
		var$0 = true;
	}
	if (!(var$0)) {
		return $EnumSet::retainAll(c);
	}
	if ($nc(es)->elementType != this->elementType) {
		bool changed = (this->elements != 0);
		this->elements = 0;
		return changed;
	}
	int64_t oldElements = this->elements;
	this->elements &= (uint64_t)$nc(es)->elements;
	return this->elements != oldElements;
}

void RegularEnumSet::clear() {
	this->elements = 0;
}

bool RegularEnumSet::equals(Object$* o) {
	$var(RegularEnumSet, es, nullptr);
	bool var$0 = $instanceOf(RegularEnumSet, o);
	if (var$0) {
		$assign(es, $cast(RegularEnumSet, o));
		var$0 = true;
	}
	if (!(var$0)) {
		return $EnumSet::equals(o);
	}
	if ($nc(es)->elementType != this->elementType) {
		return this->elements == 0 && es->elements == 0;
	}
	return $nc(es)->elements == this->elements;
}

bool RegularEnumSet::add(Object$* e) {
	return this->add($cast($Enum, e));
}

RegularEnumSet::RegularEnumSet() {
}

$Class* RegularEnumSet::load$($String* name, bool initialize) {
	$loadClass(RegularEnumSet, name, initialize, &_RegularEnumSet_ClassInfo_, allocate$RegularEnumSet);
	return class$;
}

$Class* RegularEnumSet::class$ = nullptr;

	} // util
} // java