#include <java/lang/invoke/AbstractConstantGroup$SubGroup.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/invoke/AbstractConstantGroup$AsList.h>
#include <java/lang/invoke/AbstractConstantGroup.h>
#include <java/lang/invoke/ConstantGroup.h>
#include <java/lang/invoke/MethodHandleStatics.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/AbstractList.h>
#include <java/util/List.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractConstantGroup = ::java::lang::invoke::AbstractConstantGroup;
using $AbstractConstantGroup$AsList = ::java::lang::invoke::AbstractConstantGroup$AsList;
using $ConstantGroup = ::java::lang::invoke::ConstantGroup;
using $MethodHandleStatics = ::java::lang::invoke::MethodHandleStatics;
using $AbstractList = ::java::util::AbstractList;
using $List = ::java::util::List;

namespace java {
	namespace lang {
		namespace invoke {

$FieldInfo _AbstractConstantGroup$SubGroup_FieldInfo_[] = {
	{"self", "Ljava/lang/invoke/ConstantGroup;", nullptr, $PRIVATE | $FINAL, $field(AbstractConstantGroup$SubGroup, self)},
	{"offset", "I", nullptr, $PRIVATE | $FINAL, $field(AbstractConstantGroup$SubGroup, offset)},
	{}
};

$MethodInfo _AbstractConstantGroup$SubGroup_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/invoke/ConstantGroup;II)V", nullptr, 0, $method(static_cast<void(AbstractConstantGroup$SubGroup::*)($ConstantGroup*,int32_t,int32_t)>(&AbstractConstantGroup$SubGroup::init$))},
	{"asList", "()Ljava/util/List;", "()Ljava/util/List<Ljava/lang/Object;>;", $PUBLIC},
	{"asList", "(Ljava/lang/Object;)Ljava/util/List;", "(Ljava/lang/Object;)Ljava/util/List<Ljava/lang/Object;>;", $PUBLIC},
	{"copyConstants", "(II[Ljava/lang/Object;I)I", nullptr, $PUBLIC, nullptr, "java.lang.LinkageError"},
	{"copyConstants", "(II[Ljava/lang/Object;ILjava/lang/Object;)I", nullptr, $PUBLIC},
	{"get", "(I)Ljava/lang/Object;", nullptr, $PUBLIC},
	{"get", "(ILjava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{"isPresent", "(I)Z", nullptr, $PUBLIC},
	{"mapIndex", "(I)I", nullptr, $PRIVATE, $method(static_cast<int32_t(AbstractConstantGroup$SubGroup::*)(int32_t)>(&AbstractConstantGroup$SubGroup::mapIndex))},
	{"subGroup", "(II)Ljava/lang/invoke/ConstantGroup;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _AbstractConstantGroup$SubGroup_InnerClassesInfo_[] = {
	{"java.lang.invoke.AbstractConstantGroup$SubGroup", "java.lang.invoke.AbstractConstantGroup", "SubGroup", $STATIC},
	{}
};

$ClassInfo _AbstractConstantGroup$SubGroup_ClassInfo_ = {
	$ACC_SUPER,
	"java.lang.invoke.AbstractConstantGroup$SubGroup",
	"java.lang.invoke.AbstractConstantGroup",
	nullptr,
	_AbstractConstantGroup$SubGroup_FieldInfo_,
	_AbstractConstantGroup$SubGroup_MethodInfo_,
	nullptr,
	nullptr,
	_AbstractConstantGroup$SubGroup_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.lang.invoke.AbstractConstantGroup"
};

$Object* allocate$AbstractConstantGroup$SubGroup($Class* clazz) {
	return $of($alloc(AbstractConstantGroup$SubGroup));
}

void AbstractConstantGroup$SubGroup::init$($ConstantGroup* self, int32_t start, int32_t end) {
	$AbstractConstantGroup::init$(end - start);
	$set(this, self, self);
	this->offset = start;
	$MethodHandleStatics::rangeCheck2(start, end, this->size$);
}

int32_t AbstractConstantGroup$SubGroup::mapIndex(int32_t index) {
	return $MethodHandleStatics::rangeCheck1(index, this->size$) + this->offset;
}

$Object* AbstractConstantGroup$SubGroup::get(int32_t index) {
	return $of($nc(this->self)->get(mapIndex(index)));
}

$Object* AbstractConstantGroup$SubGroup::get(int32_t index, Object$* ifNotPresent) {
	return $of($nc(this->self)->get(mapIndex(index), ifNotPresent));
}

bool AbstractConstantGroup$SubGroup::isPresent(int32_t index) {
	return $nc(this->self)->isPresent(mapIndex(index));
}

$ConstantGroup* AbstractConstantGroup$SubGroup::subGroup(int32_t start, int32_t end) {
	$MethodHandleStatics::rangeCheck2(start, end, this->size$);
	return $new(AbstractConstantGroup$SubGroup, this->self, this->offset + start, this->offset + end);
}

$List* AbstractConstantGroup$SubGroup::asList() {
	return $new($AbstractConstantGroup$AsList, this->self, this->offset, this->offset + this->size$);
}

$List* AbstractConstantGroup$SubGroup::asList(Object$* ifNotPresent) {
	return $new($AbstractConstantGroup$AsList, this->self, this->offset, this->offset + this->size$, ifNotPresent);
}

int32_t AbstractConstantGroup$SubGroup::copyConstants(int32_t start, int32_t end, $ObjectArray* buf, int32_t pos) {
	$MethodHandleStatics::rangeCheck2(start, end, this->size$);
	return $nc(this->self)->copyConstants(this->offset + start, this->offset + end, buf, pos);
}

int32_t AbstractConstantGroup$SubGroup::copyConstants(int32_t start, int32_t end, $ObjectArray* buf, int32_t pos, Object$* ifNotPresent) {
	$MethodHandleStatics::rangeCheck2(start, end, this->size$);
	return $nc(this->self)->copyConstants(this->offset + start, this->offset + end, buf, pos, ifNotPresent);
}

AbstractConstantGroup$SubGroup::AbstractConstantGroup$SubGroup() {
}

$Class* AbstractConstantGroup$SubGroup::load$($String* name, bool initialize) {
	$loadClass(AbstractConstantGroup$SubGroup, name, initialize, &_AbstractConstantGroup$SubGroup_ClassInfo_, allocate$AbstractConstantGroup$SubGroup);
	return class$;
}

$Class* AbstractConstantGroup$SubGroup::class$ = nullptr;

		} // invoke
	} // lang
} // java