#include <java/lang/invoke/AbstractConstantGroup.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/List.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ConstantGroup = ::java::lang::invoke::ConstantGroup;
using $List = ::java::util::List;

namespace java {
	namespace lang {
		namespace invoke {

$FieldInfo _AbstractConstantGroup_FieldInfo_[] = {
	{"size", "I", nullptr, $PROTECTED | $FINAL, $field(AbstractConstantGroup, size$)},
	{}
};

$MethodInfo _AbstractConstantGroup_MethodInfo_[] = {
	{"get", "(I)Ljava/lang/Object;", nullptr, $PUBLIC | $ABSTRACT},
	{"get", "(ILjava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC | $ABSTRACT},
	{"<init>", "(I)V", nullptr, 0, $method(static_cast<void(AbstractConstantGroup::*)(int32_t)>(&AbstractConstantGroup::init$))},
	{"isPresent", "(I)Z", nullptr, $PUBLIC | $ABSTRACT},
	{"size", "()I", nullptr, $PUBLIC | $FINAL},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _AbstractConstantGroup_InnerClassesInfo_[] = {
	{"java.lang.invoke.AbstractConstantGroup$BSCIWithCache", "java.lang.invoke.AbstractConstantGroup", "BSCIWithCache", $STATIC},
	{"java.lang.invoke.AbstractConstantGroup$WithCache", "java.lang.invoke.AbstractConstantGroup", "WithCache", $STATIC | $ABSTRACT},
	{"java.lang.invoke.AbstractConstantGroup$AsList", "java.lang.invoke.AbstractConstantGroup", "AsList", $STATIC},
	{"java.lang.invoke.AbstractConstantGroup$SubGroup", "java.lang.invoke.AbstractConstantGroup", "SubGroup", $STATIC},
	{"java.lang.invoke.AbstractConstantGroup$AsIterator", "java.lang.invoke.AbstractConstantGroup", "AsIterator", $STATIC},
	{}
};

$ClassInfo _AbstractConstantGroup_ClassInfo_ = {
	$ACC_SUPER | $ABSTRACT,
	"java.lang.invoke.AbstractConstantGroup",
	"java.lang.Object",
	"java.lang.invoke.ConstantGroup",
	_AbstractConstantGroup_FieldInfo_,
	_AbstractConstantGroup_MethodInfo_,
	nullptr,
	nullptr,
	_AbstractConstantGroup_InnerClassesInfo_,
	nullptr,
	nullptr,
	"java.lang.invoke.AbstractConstantGroup$BSCIWithCache,java.lang.invoke.AbstractConstantGroup$WithCache,java.lang.invoke.AbstractConstantGroup$AsList,java.lang.invoke.AbstractConstantGroup$SubGroup,java.lang.invoke.AbstractConstantGroup$AsIterator"
};

$Object* allocate$AbstractConstantGroup($Class* clazz) {
	return $of($alloc(AbstractConstantGroup));
}

void AbstractConstantGroup::init$(int32_t size) {
	this->size$ = size;
}

int32_t AbstractConstantGroup::size() {
	return this->size$;
}

$String* AbstractConstantGroup::toString() {
	return $nc($of($(asList("*"_s))))->toString();
}

AbstractConstantGroup::AbstractConstantGroup() {
}

$Class* AbstractConstantGroup::load$($String* name, bool initialize) {
	$loadClass(AbstractConstantGroup, name, initialize, &_AbstractConstantGroup_ClassInfo_, allocate$AbstractConstantGroup);
	return class$;
}

$Class* AbstractConstantGroup::class$ = nullptr;

		} // invoke
	} // lang
} // java