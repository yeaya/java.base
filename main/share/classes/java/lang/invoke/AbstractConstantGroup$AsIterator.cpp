#include <java/lang/invoke/AbstractConstantGroup$AsIterator.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/invoke/AbstractConstantGroup.h>
#include <java/lang/invoke/ConstantGroup.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/NoSuchElementException.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractConstantGroup = ::java::lang::invoke::AbstractConstantGroup;
using $ConstantGroup = ::java::lang::invoke::ConstantGroup;
using $Iterator = ::java::util::Iterator;
using $NoSuchElementException = ::java::util::NoSuchElementException;

namespace java {
	namespace lang {
		namespace invoke {

$FieldInfo _AbstractConstantGroup$AsIterator_FieldInfo_[] = {
	{"self", "Ljava/lang/invoke/ConstantGroup;", nullptr, $PRIVATE | $FINAL, $field(AbstractConstantGroup$AsIterator, self)},
	{"end", "I", nullptr, $PRIVATE | $FINAL, $field(AbstractConstantGroup$AsIterator, end)},
	{"resolving", "Z", nullptr, $PRIVATE | $FINAL, $field(AbstractConstantGroup$AsIterator, resolving)},
	{"ifNotPresent", "Ljava/lang/Object;", nullptr, $PRIVATE | $FINAL, $field(AbstractConstantGroup$AsIterator, ifNotPresent)},
	{"index", "I", nullptr, $PRIVATE, $field(AbstractConstantGroup$AsIterator, index)},
	{}
};

$MethodInfo _AbstractConstantGroup$AsIterator_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/invoke/ConstantGroup;IIZLjava/lang/Object;)V", nullptr, $PRIVATE, $method(static_cast<void(AbstractConstantGroup$AsIterator::*)($ConstantGroup*,int32_t,int32_t,bool,Object$*)>(&AbstractConstantGroup$AsIterator::init$))},
	{"<init>", "(Ljava/lang/invoke/ConstantGroup;II)V", nullptr, 0, $method(static_cast<void(AbstractConstantGroup$AsIterator::*)($ConstantGroup*,int32_t,int32_t)>(&AbstractConstantGroup$AsIterator::init$))},
	{"<init>", "(Ljava/lang/invoke/ConstantGroup;IILjava/lang/Object;)V", nullptr, 0, $method(static_cast<void(AbstractConstantGroup$AsIterator::*)($ConstantGroup*,int32_t,int32_t,Object$*)>(&AbstractConstantGroup$AsIterator::init$))},
	{"bumpIndex", "()I", nullptr, $PRIVATE, $method(static_cast<int32_t(AbstractConstantGroup$AsIterator::*)()>(&AbstractConstantGroup$AsIterator::bumpIndex))},
	{"hasNext", "()Z", nullptr, $PUBLIC},
	{"next", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _AbstractConstantGroup$AsIterator_InnerClassesInfo_[] = {
	{"java.lang.invoke.AbstractConstantGroup$AsIterator", "java.lang.invoke.AbstractConstantGroup", "AsIterator", $STATIC},
	{}
};

$ClassInfo _AbstractConstantGroup$AsIterator_ClassInfo_ = {
	$ACC_SUPER,
	"java.lang.invoke.AbstractConstantGroup$AsIterator",
	"java.lang.Object",
	"java.util.Iterator",
	_AbstractConstantGroup$AsIterator_FieldInfo_,
	_AbstractConstantGroup$AsIterator_MethodInfo_,
	"Ljava/lang/Object;Ljava/util/Iterator<Ljava/lang/Object;>;",
	nullptr,
	_AbstractConstantGroup$AsIterator_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.lang.invoke.AbstractConstantGroup"
};

$Object* allocate$AbstractConstantGroup$AsIterator($Class* clazz) {
	return $of($alloc(AbstractConstantGroup$AsIterator));
}

void AbstractConstantGroup$AsIterator::init$($ConstantGroup* self, int32_t start, int32_t end, bool resolving, Object$* ifNotPresent) {
	$set(this, self, self);
	this->end = end;
	this->index = start;
	this->resolving = resolving;
	$set(this, ifNotPresent, ifNotPresent);
}

void AbstractConstantGroup$AsIterator::init$($ConstantGroup* self, int32_t start, int32_t end) {
	AbstractConstantGroup$AsIterator::init$(self, start, end, true, nullptr);
}

void AbstractConstantGroup$AsIterator::init$($ConstantGroup* self, int32_t start, int32_t end, Object$* ifNotPresent) {
	AbstractConstantGroup$AsIterator::init$(self, start, end, false, ifNotPresent);
}

bool AbstractConstantGroup$AsIterator::hasNext() {
	return this->index < this->end;
}

$Object* AbstractConstantGroup$AsIterator::next() {
	int32_t i = bumpIndex();
	if (this->resolving) {
		return $of($nc(this->self)->get(i));
	} else {
		return $of($nc(this->self)->get(i, this->ifNotPresent));
	}
}

int32_t AbstractConstantGroup$AsIterator::bumpIndex() {
	int32_t i = this->index;
	if (i >= this->end) {
		$throwNew($NoSuchElementException);
	}
	this->index = i + 1;
	return i;
}

AbstractConstantGroup$AsIterator::AbstractConstantGroup$AsIterator() {
}

$Class* AbstractConstantGroup$AsIterator::load$($String* name, bool initialize) {
	$loadClass(AbstractConstantGroup$AsIterator, name, initialize, &_AbstractConstantGroup$AsIterator_ClassInfo_, allocate$AbstractConstantGroup$AsIterator);
	return class$;
}

$Class* AbstractConstantGroup$AsIterator::class$ = nullptr;

		} // invoke
	} // lang
} // java