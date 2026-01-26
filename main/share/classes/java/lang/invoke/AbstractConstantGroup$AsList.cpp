#include <java/lang/invoke/AbstractConstantGroup$AsList.h>

#include <java/lang/invoke/AbstractConstantGroup$AsIterator.h>
#include <java/lang/invoke/AbstractConstantGroup.h>
#include <java/lang/invoke/ConstantGroup.h>
#include <java/lang/invoke/MethodHandleStatics.h>
#include <java/util/AbstractList.h>
#include <java/util/Arrays.h>
#include <java/util/Iterator.h>
#include <java/util/List.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractConstantGroup$AsIterator = ::java::lang::invoke::AbstractConstantGroup$AsIterator;
using $ConstantGroup = ::java::lang::invoke::ConstantGroup;
using $MethodHandleStatics = ::java::lang::invoke::MethodHandleStatics;
using $AbstractList = ::java::util::AbstractList;
using $Arrays = ::java::util::Arrays;
using $Iterator = ::java::util::Iterator;
using $List = ::java::util::List;

namespace java {
	namespace lang {
		namespace invoke {

$FieldInfo _AbstractConstantGroup$AsList_FieldInfo_[] = {
	{"self", "Ljava/lang/invoke/ConstantGroup;", nullptr, $PRIVATE | $FINAL, $field(AbstractConstantGroup$AsList, self)},
	{"size", "I", nullptr, $PRIVATE | $FINAL, $field(AbstractConstantGroup$AsList, size$)},
	{"offset", "I", nullptr, $PRIVATE | $FINAL, $field(AbstractConstantGroup$AsList, offset)},
	{"resolving", "Z", nullptr, $PRIVATE | $FINAL, $field(AbstractConstantGroup$AsList, resolving)},
	{"ifNotPresent", "Ljava/lang/Object;", nullptr, $PRIVATE | $FINAL, $field(AbstractConstantGroup$AsList, ifNotPresent)},
	{}
};

$MethodInfo _AbstractConstantGroup$AsList_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/invoke/ConstantGroup;IIZLjava/lang/Object;)V", nullptr, $PRIVATE, $method(AbstractConstantGroup$AsList, init$, void, $ConstantGroup*, int32_t, int32_t, bool, Object$*)},
	{"<init>", "(Ljava/lang/invoke/ConstantGroup;II)V", nullptr, 0, $method(AbstractConstantGroup$AsList, init$, void, $ConstantGroup*, int32_t, int32_t)},
	{"<init>", "(Ljava/lang/invoke/ConstantGroup;IILjava/lang/Object;)V", nullptr, 0, $method(AbstractConstantGroup$AsList, init$, void, $ConstantGroup*, int32_t, int32_t, Object$*)},
	{"get", "(I)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(AbstractConstantGroup$AsList, get, $Object*, int32_t)},
	{"iterator", "()Ljava/util/Iterator;", "()Ljava/util/Iterator<Ljava/lang/Object;>;", $PUBLIC, $virtualMethod(AbstractConstantGroup$AsList, iterator, $Iterator*)},
	{"mapIndex", "(I)I", nullptr, $PRIVATE, $method(AbstractConstantGroup$AsList, mapIndex, int32_t, int32_t)},
	{"size", "()I", nullptr, $PUBLIC | $FINAL, $virtualMethod(AbstractConstantGroup$AsList, size, int32_t)},
	{"subList", "(II)Ljava/util/List;", "(II)Ljava/util/List<Ljava/lang/Object;>;", $PUBLIC, $virtualMethod(AbstractConstantGroup$AsList, subList, $List*, int32_t, int32_t)},
	{"toArray", "()[Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(AbstractConstantGroup$AsList, toArray, $ObjectArray*)},
	{"toArray", "([Ljava/lang/Object;)[Ljava/lang/Object;", "<T:Ljava/lang/Object;>([TT;)[TT;", $PUBLIC, $virtualMethod(AbstractConstantGroup$AsList, toArray, $ObjectArray*, $ObjectArray*)},
	{}
};

$InnerClassInfo _AbstractConstantGroup$AsList_InnerClassesInfo_[] = {
	{"java.lang.invoke.AbstractConstantGroup$AsList", "java.lang.invoke.AbstractConstantGroup", "AsList", $STATIC},
	{}
};

$ClassInfo _AbstractConstantGroup$AsList_ClassInfo_ = {
	$ACC_SUPER,
	"java.lang.invoke.AbstractConstantGroup$AsList",
	"java.util.AbstractList",
	nullptr,
	_AbstractConstantGroup$AsList_FieldInfo_,
	_AbstractConstantGroup$AsList_MethodInfo_,
	"Ljava/util/AbstractList<Ljava/lang/Object;>;",
	nullptr,
	_AbstractConstantGroup$AsList_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.lang.invoke.AbstractConstantGroup"
};

$Object* allocate$AbstractConstantGroup$AsList($Class* clazz) {
	return $of($alloc(AbstractConstantGroup$AsList));
}

void AbstractConstantGroup$AsList::init$($ConstantGroup* self, int32_t start, int32_t end, bool resolving, Object$* ifNotPresent) {
	$AbstractList::init$();
	$set(this, self, self);
	this->size$ = end - start;
	this->offset = start;
	this->resolving = resolving;
	$set(this, ifNotPresent, ifNotPresent);
	$MethodHandleStatics::rangeCheck2(start, end, $nc(self)->size());
}

void AbstractConstantGroup$AsList::init$($ConstantGroup* self, int32_t start, int32_t end) {
	AbstractConstantGroup$AsList::init$(self, start, end, true, nullptr);
}

void AbstractConstantGroup$AsList::init$($ConstantGroup* self, int32_t start, int32_t end, Object$* ifNotPresent) {
	AbstractConstantGroup$AsList::init$(self, start, end, false, ifNotPresent);
}

int32_t AbstractConstantGroup$AsList::mapIndex(int32_t index) {
	return $MethodHandleStatics::rangeCheck1(index, this->size$) + this->offset;
}

int32_t AbstractConstantGroup$AsList::size() {
	return this->size$;
}

$Object* AbstractConstantGroup$AsList::get(int32_t index) {
	if (this->resolving) {
		return $of($nc(this->self)->get(mapIndex(index)));
	} else {
		return $of($nc(this->self)->get(mapIndex(index), this->ifNotPresent));
	}
}

$Iterator* AbstractConstantGroup$AsList::iterator() {
	if (this->resolving) {
		return $new($AbstractConstantGroup$AsIterator, this->self, this->offset, this->offset + this->size$);
	} else {
		return $new($AbstractConstantGroup$AsIterator, this->self, this->offset, this->offset + this->size$, this->ifNotPresent);
	}
}

$List* AbstractConstantGroup$AsList::subList(int32_t start, int32_t end) {
	$MethodHandleStatics::rangeCheck2(start, end, this->size$);
	return $new(AbstractConstantGroup$AsList, this->self, this->offset + start, this->offset + end, this->resolving, this->ifNotPresent);
}

$ObjectArray* AbstractConstantGroup$AsList::toArray() {
	return toArray($$new($ObjectArray, this->size$));
}

$ObjectArray* AbstractConstantGroup$AsList::toArray($ObjectArray* a$renamed) {
	$var($ObjectArray, a, a$renamed);
	int32_t pad = $nc(a)->length - this->size$;
	if (pad < 0) {
		pad = 0;
		$assign(a, $Arrays::copyOf(a, this->size$));
	}
	if (this->resolving) {
		$nc(this->self)->copyConstants(this->offset, this->offset + this->size$, a, 0);
	} else {
		$nc(this->self)->copyConstants(this->offset, this->offset + this->size$, a, 0, this->ifNotPresent);
	}
	if (pad > 0) {
		a->set(this->size$, nullptr);
	}
	return a;
}

AbstractConstantGroup$AsList::AbstractConstantGroup$AsList() {
}

$Class* AbstractConstantGroup$AsList::load$($String* name, bool initialize) {
	$loadClass(AbstractConstantGroup$AsList, name, initialize, &_AbstractConstantGroup$AsList_ClassInfo_, allocate$AbstractConstantGroup$AsList);
	return class$;
}

$Class* AbstractConstantGroup$AsList::class$ = nullptr;

		} // invoke
	} // lang
} // java