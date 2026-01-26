#include <java/util/JumboEnumSet.h>

#include <java/lang/ClassCastException.h>
#include <java/lang/Enum.h>
#include <java/util/AbstractCollection.h>
#include <java/util/AbstractSet.h>
#include <java/util/Arrays.h>
#include <java/util/Collection.h>
#include <java/util/EnumSet.h>
#include <java/util/Iterator.h>
#include <java/util/JumboEnumSet$EnumSetIterator.h>
#include <jcpp.h>

using $EnumArray = $Array<::java::lang::Enum>;
using $ClassCastException = ::java::lang::ClassCastException;
using $ClassInfo = ::java::lang::ClassInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Long = ::java::lang::Long;
using $MethodInfo = ::java::lang::MethodInfo;
using $Arrays = ::java::util::Arrays;
using $Collection = ::java::util::Collection;
using $EnumSet = ::java::util::EnumSet;
using $Iterator = ::java::util::Iterator;
using $JumboEnumSet$EnumSetIterator = ::java::util::JumboEnumSet$EnumSetIterator;

namespace java {
	namespace util {

$FieldInfo _JumboEnumSet_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(JumboEnumSet, serialVersionUID)},
	{"elements", "[J", nullptr, $PRIVATE, $field(JumboEnumSet, elements)},
	{"size", "I", nullptr, $PRIVATE, $field(JumboEnumSet, size$)},
	{}
};

$MethodInfo _JumboEnumSet_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/Class;[Ljava/lang/Enum;)V", "(Ljava/lang/Class<TE;>;[Ljava/lang/Enum<*>;)V", 0, $method(JumboEnumSet, init$, void, $Class*, $EnumArray*)},
	{"add", "(Ljava/lang/Enum;)Z", "(TE;)Z", $PUBLIC, $virtualMethod(JumboEnumSet, add, bool, $Enum*)},
	{"add", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(JumboEnumSet, add, bool, Object$*)},
	{"addAll", "()V", nullptr, 0, $virtualMethod(JumboEnumSet, addAll, void)},
	{"addAll", "(Ljava/util/Collection;)Z", "(Ljava/util/Collection<+TE;>;)Z", $PUBLIC, $virtualMethod(JumboEnumSet, addAll, bool, $Collection*)},
	{"addRange", "(Ljava/lang/Enum;Ljava/lang/Enum;)V", "(TE;TE;)V", 0, $virtualMethod(JumboEnumSet, addRange, void, $Enum*, $Enum*)},
	{"clear", "()V", nullptr, $PUBLIC, $virtualMethod(JumboEnumSet, clear, void)},
	{"clone", "()Ljava/util/EnumSet;", "()Ljava/util/EnumSet<TE;>;", $PUBLIC, $virtualMethod(JumboEnumSet, clone, $Object*)},
	{"complement", "()V", nullptr, 0, $virtualMethod(JumboEnumSet, complement, void)},
	{"contains", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC, $virtualMethod(JumboEnumSet, contains, bool, Object$*)},
	{"containsAll", "(Ljava/util/Collection;)Z", "(Ljava/util/Collection<*>;)Z", $PUBLIC, $virtualMethod(JumboEnumSet, containsAll, bool, $Collection*)},
	{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC, $virtualMethod(JumboEnumSet, equals, bool, Object$*)},
	{"isEmpty", "()Z", nullptr, $PUBLIC, $virtualMethod(JumboEnumSet, isEmpty, bool)},
	{"iterator", "()Ljava/util/Iterator;", "()Ljava/util/Iterator<TE;>;", $PUBLIC, $virtualMethod(JumboEnumSet, iterator, $Iterator*)},
	{"recalculateSize", "()Z", nullptr, $PRIVATE, $method(JumboEnumSet, recalculateSize, bool)},
	{"remove", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC, $virtualMethod(JumboEnumSet, remove, bool, Object$*)},
	{"removeAll", "(Ljava/util/Collection;)Z", "(Ljava/util/Collection<*>;)Z", $PUBLIC, $virtualMethod(JumboEnumSet, removeAll, bool, $Collection*)},
	{"retainAll", "(Ljava/util/Collection;)Z", "(Ljava/util/Collection<*>;)Z", $PUBLIC, $virtualMethod(JumboEnumSet, retainAll, bool, $Collection*)},
	{"size", "()I", nullptr, $PUBLIC, $virtualMethod(JumboEnumSet, size, int32_t)},
	{}
};

$InnerClassInfo _JumboEnumSet_InnerClassesInfo_[] = {
	{"java.util.JumboEnumSet$EnumSetIterator", "java.util.JumboEnumSet", "EnumSetIterator", $PRIVATE},
	{}
};

$ClassInfo _JumboEnumSet_ClassInfo_ = {
	$ACC_SUPER,
	"java.util.JumboEnumSet",
	"java.util.EnumSet",
	nullptr,
	_JumboEnumSet_FieldInfo_,
	_JumboEnumSet_MethodInfo_,
	"<E:Ljava/lang/Enum<TE;>;>Ljava/util/EnumSet<TE;>;",
	nullptr,
	_JumboEnumSet_InnerClassesInfo_,
	nullptr,
	nullptr,
	"java.util.JumboEnumSet$EnumSetIterator"
};

$Object* allocate$JumboEnumSet($Class* clazz) {
	return $of($alloc(JumboEnumSet));
}

void JumboEnumSet::init$($Class* elementType, $EnumArray* universe) {
	$EnumSet::init$(elementType, universe);
	this->size$ = 0;
	$set(this, elements, $new($longs, (int32_t)((uint32_t)($nc(universe)->length + 63) >> 6)));
}

void JumboEnumSet::addRange($Enum* from, $Enum* to) {
	int32_t fromIndex = (int32_t)((uint32_t)$nc(from)->ordinal() >> 6);
	int32_t toIndex = (int32_t)((uint32_t)$nc(to)->ordinal() >> 6);
	if (fromIndex == toIndex) {
		int32_t var$1 = from->ordinal();
		int64_t var$0 = ($usr((int64_t)-1, var$1 - to->ordinal() - 1));
		$nc(this->elements)->set(fromIndex, $sl(var$0, from->ordinal()));
	} else {
		$nc(this->elements)->set(fromIndex, ($sl((int64_t)-1, from->ordinal())));
		for (int32_t i = fromIndex + 1; i < toIndex; ++i) {
			$nc(this->elements)->set(i, -1);
		}
		$nc(this->elements)->set(toIndex, $usr((int64_t)-1, 63 - to->ordinal()));
	}
	int32_t var$2 = to->ordinal();
	this->size$ = var$2 - from->ordinal() + 1;
}

void JumboEnumSet::addAll() {
	for (int32_t i = 0; i < $nc(this->elements)->length; ++i) {
		$nc(this->elements)->set(i, -1);
	}
	$usrAssign((*$nc(this->elements))[$nc(this->elements)->length - 1], -$nc(this->universe)->length);
	this->size$ = $nc(this->universe)->length;
}

void JumboEnumSet::complement() {
	for (int32_t i = 0; i < $nc(this->elements)->length; ++i) {
		$nc(this->elements)->set(i, ~$nc(this->elements)->get(i));
	}
	(*$nc(this->elements))[$nc(this->elements)->length - 1] &= (uint64_t)($usr((int64_t)-1, -$nc(this->universe)->length));
	this->size$ = $nc(this->universe)->length - this->size$;
}

$Iterator* JumboEnumSet::iterator() {
	return $new($JumboEnumSet$EnumSetIterator, this);
}

int32_t JumboEnumSet::size() {
	return this->size$;
}

bool JumboEnumSet::isEmpty() {
	return this->size$ == 0;
}

bool JumboEnumSet::contains(Object$* e) {
	if (e == nullptr) {
		return false;
	}
	$Class* eClass = $nc($of(e))->getClass();
	if (eClass != this->elementType && $nc(eClass)->getSuperclass() != this->elementType) {
		return false;
	}
	int32_t eOrdinal = $nc(($cast($Enum, e)))->ordinal();
	return ((int64_t)($nc(this->elements)->get((int32_t)((uint32_t)eOrdinal >> 6)) & (uint64_t)($sl((int64_t)1, eOrdinal)))) != 0;
}

bool JumboEnumSet::add($Enum* e) {
	typeCheck(e);
	int32_t eOrdinal = $nc(e)->ordinal();
	int32_t eWordNum = (int32_t)((uint32_t)eOrdinal >> 6);
	int64_t oldElements = $nc(this->elements)->get(eWordNum);
	(*$nc(this->elements))[eWordNum] |= ($sl((int64_t)1, eOrdinal));
	bool result = ($nc(this->elements)->get(eWordNum) != oldElements);
	if (result) {
		++this->size$;
	}
	return result;
}

bool JumboEnumSet::remove(Object$* e) {
	if (e == nullptr) {
		return false;
	}
	$Class* eClass = $nc($of(e))->getClass();
	if (eClass != this->elementType && $nc(eClass)->getSuperclass() != this->elementType) {
		return false;
	}
	int32_t eOrdinal = $nc(($cast($Enum, e)))->ordinal();
	int32_t eWordNum = (int32_t)((uint32_t)eOrdinal >> 6);
	int64_t oldElements = $nc(this->elements)->get(eWordNum);
	(*$nc(this->elements))[eWordNum] &= (uint64_t)~($sl((int64_t)1, eOrdinal));
	bool result = ($nc(this->elements)->get(eWordNum) != oldElements);
	if (result) {
		--this->size$;
	}
	return result;
}

bool JumboEnumSet::containsAll($Collection* c) {
	$var(JumboEnumSet, es, nullptr);
	bool var$0 = $instanceOf(JumboEnumSet, c);
	if (var$0) {
		$assign(es, $cast(JumboEnumSet, c));
		var$0 = true;
	}
	if (!(var$0)) {
		return $EnumSet::containsAll(c);
	}
	if ($nc(es)->elementType != this->elementType) {
		return es->isEmpty();
	}
	for (int32_t i = 0; i < $nc(this->elements)->length; ++i) {
		if (((int64_t)($nc($nc(es)->elements)->get(i) & (uint64_t)~$nc(this->elements)->get(i))) != 0) {
			return false;
		}
	}
	return true;
}

bool JumboEnumSet::addAll($Collection* c) {
	$useLocalCurrentObjectStackCache();
	$var(JumboEnumSet, es, nullptr);
	bool var$0 = $instanceOf(JumboEnumSet, c);
	if (var$0) {
		$assign(es, $cast(JumboEnumSet, c));
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
	for (int32_t i = 0; i < $nc(this->elements)->length; ++i) {
		(*$nc(this->elements))[i] |= $nc($nc(es)->elements)->get(i);
	}
	return recalculateSize();
}

bool JumboEnumSet::removeAll($Collection* c) {
	$var(JumboEnumSet, es, nullptr);
	bool var$0 = $instanceOf(JumboEnumSet, c);
	if (var$0) {
		$assign(es, $cast(JumboEnumSet, c));
		var$0 = true;
	}
	if (!(var$0)) {
		return $EnumSet::removeAll(c);
	}
	if ($nc(es)->elementType != this->elementType) {
		return false;
	}
	for (int32_t i = 0; i < $nc(this->elements)->length; ++i) {
		(*$nc(this->elements))[i] &= (uint64_t)~$nc($nc(es)->elements)->get(i);
	}
	return recalculateSize();
}

bool JumboEnumSet::retainAll($Collection* c) {
	$var(JumboEnumSet, es, nullptr);
	bool var$0 = $instanceOf(JumboEnumSet, c);
	if (var$0) {
		$assign(es, $cast(JumboEnumSet, c));
		var$0 = true;
	}
	if (!(var$0)) {
		return $EnumSet::retainAll(c);
	}
	if ($nc(es)->elementType != this->elementType) {
		bool changed = (this->size$ != 0);
		clear();
		return changed;
	}
	for (int32_t i = 0; i < $nc(this->elements)->length; ++i) {
		(*$nc(this->elements))[i] &= (uint64_t)$nc($nc(es)->elements)->get(i);
	}
	return recalculateSize();
}

void JumboEnumSet::clear() {
	$Arrays::fill(this->elements, (int64_t)0);
	this->size$ = 0;
}

bool JumboEnumSet::equals(Object$* o) {
	$var(JumboEnumSet, es, nullptr);
	bool var$0 = $instanceOf(JumboEnumSet, o);
	if (var$0) {
		$assign(es, $cast(JumboEnumSet, o));
		var$0 = true;
	}
	if (!(var$0)) {
		return $EnumSet::equals(o);
	}
	if ($nc(es)->elementType != this->elementType) {
		return this->size$ == 0 && es->size$ == 0;
	}
	return $Arrays::equals($nc(es)->elements, this->elements);
}

bool JumboEnumSet::recalculateSize() {
	int32_t oldSize = this->size$;
	this->size$ = 0;
	{
		$var($longs, arr$, this->elements);
		int32_t len$ = $nc(arr$)->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			int64_t elt = arr$->get(i$);
			this->size$ += $Long::bitCount(elt);
		}
	}
	return this->size$ != oldSize;
}

$Object* JumboEnumSet::clone() {
	$var(JumboEnumSet, result, $cast(JumboEnumSet, $cast($EnumSet, $EnumSet::clone())));
	$set($nc(result), elements, $cast($longs, $nc(result->elements)->clone()));
	return $of(result);
}

bool JumboEnumSet::add(Object$* e) {
	return this->add($cast($Enum, e));
}

JumboEnumSet::JumboEnumSet() {
}

$Class* JumboEnumSet::load$($String* name, bool initialize) {
	$loadClass(JumboEnumSet, name, initialize, &_JumboEnumSet_ClassInfo_, allocate$JumboEnumSet);
	return class$;
}

$Class* JumboEnumSet::class$ = nullptr;

	} // util
} // java