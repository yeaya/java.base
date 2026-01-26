#include <java/util/ImmutableCollections$SubList.h>

#include <java/lang/AssertionError.h>
#include <java/lang/IndexOutOfBoundsException.h>
#include <java/lang/reflect/Array.h>
#include <java/util/ImmutableCollections$AbstractImmutableList.h>
#include <java/util/ImmutableCollections$List12.h>
#include <java/util/ImmutableCollections$ListItr.h>
#include <java/util/ImmutableCollections$ListN.h>
#include <java/util/ImmutableCollections.h>
#include <java/util/Iterator.h>
#include <java/util/List.h>
#include <java/util/ListIterator.h>
#include <java/util/Objects.h>
#include <jcpp.h>

using $AssertionError = ::java::lang::AssertionError;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $1Array = ::java::lang::reflect::Array;
using $ImmutableCollections = ::java::util::ImmutableCollections;
using $ImmutableCollections$AbstractImmutableList = ::java::util::ImmutableCollections$AbstractImmutableList;
using $ImmutableCollections$List12 = ::java::util::ImmutableCollections$List12;
using $ImmutableCollections$ListItr = ::java::util::ImmutableCollections$ListItr;
using $ImmutableCollections$ListN = ::java::util::ImmutableCollections$ListN;
using $Iterator = ::java::util::Iterator;
using $List = ::java::util::List;
using $ListIterator = ::java::util::ListIterator;
using $Objects = ::java::util::Objects;

namespace java {
	namespace util {

$CompoundAttribute _ImmutableCollections$SubList_FieldAnnotations_root[] = {
	{"Ljdk/internal/vm/annotation/Stable;", nullptr},
	{}
};

$CompoundAttribute _ImmutableCollections$SubList_FieldAnnotations_offset[] = {
	{"Ljdk/internal/vm/annotation/Stable;", nullptr},
	{}
};

$CompoundAttribute _ImmutableCollections$SubList_FieldAnnotations_size[] = {
	{"Ljdk/internal/vm/annotation/Stable;", nullptr},
	{}
};

$FieldInfo _ImmutableCollections$SubList_FieldInfo_[] = {
	{"$assertionsDisabled", "Z", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(ImmutableCollections$SubList, $assertionsDisabled)},
	{"root", "Ljava/util/ImmutableCollections$AbstractImmutableList;", "Ljava/util/ImmutableCollections$AbstractImmutableList<TE;>;", $PRIVATE | $FINAL, $field(ImmutableCollections$SubList, root), _ImmutableCollections$SubList_FieldAnnotations_root},
	{"offset", "I", nullptr, $PRIVATE | $FINAL, $field(ImmutableCollections$SubList, offset), _ImmutableCollections$SubList_FieldAnnotations_offset},
	{"size", "I", nullptr, $PRIVATE | $FINAL, $field(ImmutableCollections$SubList, size$), _ImmutableCollections$SubList_FieldAnnotations_size},
	{}
};

$MethodInfo _ImmutableCollections$SubList_MethodInfo_[] = {
	{"<init>", "(Ljava/util/ImmutableCollections$AbstractImmutableList;II)V", "(Ljava/util/ImmutableCollections$AbstractImmutableList<TE;>;II)V", $PRIVATE, $method(ImmutableCollections$SubList, init$, void, $ImmutableCollections$AbstractImmutableList*, int32_t, int32_t)},
	{"allowNulls", "()Z", nullptr, $PRIVATE, $method(ImmutableCollections$SubList, allowNulls, bool)},
	{"fromList", "(Ljava/util/ImmutableCollections$AbstractImmutableList;II)Ljava/util/ImmutableCollections$SubList;", "<E:Ljava/lang/Object;>(Ljava/util/ImmutableCollections$AbstractImmutableList<TE;>;II)Ljava/util/ImmutableCollections$SubList<TE;>;", $STATIC, $staticMethod(ImmutableCollections$SubList, fromList, ImmutableCollections$SubList*, $ImmutableCollections$AbstractImmutableList*, int32_t, int32_t)},
	{"fromSubList", "(Ljava/util/ImmutableCollections$SubList;II)Ljava/util/ImmutableCollections$SubList;", "<E:Ljava/lang/Object;>(Ljava/util/ImmutableCollections$SubList<TE;>;II)Ljava/util/ImmutableCollections$SubList<TE;>;", $STATIC, $staticMethod(ImmutableCollections$SubList, fromSubList, ImmutableCollections$SubList*, ImmutableCollections$SubList*, int32_t, int32_t)},
	{"get", "(I)Ljava/lang/Object;", "(I)TE;", $PUBLIC, $virtualMethod(ImmutableCollections$SubList, get, $Object*, int32_t)},
	{"indexOf", "(Ljava/lang/Object;)I", nullptr, $PUBLIC, $virtualMethod(ImmutableCollections$SubList, indexOf, int32_t, Object$*)},
	{"iterator", "()Ljava/util/Iterator;", "()Ljava/util/Iterator<TE;>;", $PUBLIC, $virtualMethod(ImmutableCollections$SubList, iterator, $Iterator*)},
	{"lastIndexOf", "(Ljava/lang/Object;)I", nullptr, $PUBLIC, $virtualMethod(ImmutableCollections$SubList, lastIndexOf, int32_t, Object$*)},
	{"listIterator", "(I)Ljava/util/ListIterator;", "(I)Ljava/util/ListIterator<TE;>;", $PUBLIC, $virtualMethod(ImmutableCollections$SubList, listIterator, $ListIterator*, int32_t)},
	{"rangeCheck", "(I)V", nullptr, $PRIVATE, $method(ImmutableCollections$SubList, rangeCheck, void, int32_t)},
	{"size", "()I", nullptr, $PUBLIC, $virtualMethod(ImmutableCollections$SubList, size, int32_t)},
	{"subList", "(II)Ljava/util/List;", "(II)Ljava/util/List<TE;>;", $PUBLIC, $virtualMethod(ImmutableCollections$SubList, subList, $List*, int32_t, int32_t)},
	{"toArray", "()[Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(ImmutableCollections$SubList, toArray, $ObjectArray*)},
	{"toArray", "([Ljava/lang/Object;)[Ljava/lang/Object;", "<T:Ljava/lang/Object;>([TT;)[TT;", $PUBLIC, $virtualMethod(ImmutableCollections$SubList, toArray, $ObjectArray*, $ObjectArray*)},
	{}
};

$InnerClassInfo _ImmutableCollections$SubList_InnerClassesInfo_[] = {
	{"java.util.ImmutableCollections$SubList", "java.util.ImmutableCollections", "SubList", $STATIC | $FINAL},
	{"java.util.ImmutableCollections$AbstractImmutableList", "java.util.ImmutableCollections", "AbstractImmutableList", $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _ImmutableCollections$SubList_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"java.util.ImmutableCollections$SubList",
	"java.util.ImmutableCollections$AbstractImmutableList",
	nullptr,
	_ImmutableCollections$SubList_FieldInfo_,
	_ImmutableCollections$SubList_MethodInfo_,
	"<E:Ljava/lang/Object;>Ljava/util/ImmutableCollections$AbstractImmutableList<TE;>;Ljava/util/RandomAccess;",
	nullptr,
	_ImmutableCollections$SubList_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.ImmutableCollections"
};

$Object* allocate$ImmutableCollections$SubList($Class* clazz) {
	return $of($alloc(ImmutableCollections$SubList));
}

bool ImmutableCollections$SubList::$assertionsDisabled = false;

void ImmutableCollections$SubList::init$($ImmutableCollections$AbstractImmutableList* root, int32_t offset, int32_t size) {
	$ImmutableCollections$AbstractImmutableList::init$();
	if (!ImmutableCollections$SubList::$assertionsDisabled && !($instanceOf($ImmutableCollections$List12, root) || $instanceOf($ImmutableCollections$ListN, root))) {
		$throwNew($AssertionError);
	}
	$set(this, root, root);
	this->offset = offset;
	this->size$ = size;
}

ImmutableCollections$SubList* ImmutableCollections$SubList::fromSubList(ImmutableCollections$SubList* parent, int32_t fromIndex, int32_t toIndex) {
	$init(ImmutableCollections$SubList);
	return $new(ImmutableCollections$SubList, $nc(parent)->root, parent->offset + fromIndex, toIndex - fromIndex);
}

ImmutableCollections$SubList* ImmutableCollections$SubList::fromList($ImmutableCollections$AbstractImmutableList* list, int32_t fromIndex, int32_t toIndex) {
	$init(ImmutableCollections$SubList);
	return $new(ImmutableCollections$SubList, list, fromIndex, toIndex - fromIndex);
}

$Object* ImmutableCollections$SubList::get(int32_t index) {
	$Objects::checkIndex(index, this->size$);
	return $of($nc(this->root)->get(this->offset + index));
}

int32_t ImmutableCollections$SubList::size() {
	return this->size$;
}

$Iterator* ImmutableCollections$SubList::iterator() {
	return $new($ImmutableCollections$ListItr, this, size());
}

$ListIterator* ImmutableCollections$SubList::listIterator(int32_t index) {
	rangeCheck(index);
	return $new($ImmutableCollections$ListItr, this, size(), index);
}

$List* ImmutableCollections$SubList::subList(int32_t fromIndex, int32_t toIndex) {
	subListRangeCheck(fromIndex, toIndex, this->size$);
	return ImmutableCollections$SubList::fromSubList(this, fromIndex, toIndex);
}

void ImmutableCollections$SubList::rangeCheck(int32_t index) {
	if (index < 0 || index > this->size$) {
		$throw($(outOfBounds(index)));
	}
}

bool ImmutableCollections$SubList::allowNulls() {
	return $instanceOf($ImmutableCollections$ListN, this->root) && $nc(($cast($ImmutableCollections$ListN, this->root)))->allowNulls;
}

int32_t ImmutableCollections$SubList::indexOf(Object$* o) {
	$useLocalCurrentObjectStackCache();
	if (!allowNulls() && o == nullptr) {
		$throwNew($NullPointerException);
	}
	{
		int32_t i = 0;
		int32_t s = size();
		for (; i < s; ++i) {
			if ($Objects::equals(o, $(get(i)))) {
				return i;
			}
		}
	}
	return -1;
}

int32_t ImmutableCollections$SubList::lastIndexOf(Object$* o) {
	$useLocalCurrentObjectStackCache();
	if (!allowNulls() && o == nullptr) {
		$throwNew($NullPointerException);
	}
	for (int32_t i = size() - 1; i >= 0; --i) {
		if ($Objects::equals(o, $(get(i)))) {
			return i;
		}
	}
	return -1;
}

$ObjectArray* ImmutableCollections$SubList::toArray() {
	$useLocalCurrentObjectStackCache();
	$var($ObjectArray, array, $new($ObjectArray, this->size$));
	for (int32_t i = 0; i < this->size$; ++i) {
		array->set(i, $(get(i)));
	}
	return array;
}

$ObjectArray* ImmutableCollections$SubList::toArray($ObjectArray* a) {
	$useLocalCurrentObjectStackCache();
	$var($ObjectArray, array, $nc(a)->length >= this->size$ ? a : $cast($ObjectArray, $1Array::newInstance($nc($of(a))->getClass()->getComponentType(), this->size$)));
	for (int32_t i = 0; i < this->size$; ++i) {
		$nc(array)->set(i, $(get(i)));
	}
	if ($nc(array)->length > this->size$) {
		array->set(this->size$, nullptr);
	}
	return array;
}

void clinit$ImmutableCollections$SubList($Class* class$) {
	$load($ImmutableCollections);
	ImmutableCollections$SubList::$assertionsDisabled = !$ImmutableCollections::class$->desiredAssertionStatus();
}

ImmutableCollections$SubList::ImmutableCollections$SubList() {
}

$Class* ImmutableCollections$SubList::load$($String* name, bool initialize) {
	$loadClass(ImmutableCollections$SubList, name, initialize, &_ImmutableCollections$SubList_ClassInfo_, clinit$ImmutableCollections$SubList, allocate$ImmutableCollections$SubList);
	return class$;
}

$Class* ImmutableCollections$SubList::class$ = nullptr;

	} // util
} // java