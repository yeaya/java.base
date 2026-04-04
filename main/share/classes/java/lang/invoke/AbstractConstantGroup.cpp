#include <java/lang/invoke/AbstractConstantGroup.h>
#include <java/util/List.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace lang {
		namespace invoke {

void AbstractConstantGroup::init$(int32_t size) {
	this->size$ = size;
}

int32_t AbstractConstantGroup::size() {
	return this->size$;
}

$String* AbstractConstantGroup::toString() {
	return $$nc(asList("*"_s))->toString();
}

AbstractConstantGroup::AbstractConstantGroup() {
}

$Class* AbstractConstantGroup::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"size", "I", nullptr, $PROTECTED | $FINAL, $field(AbstractConstantGroup, size$)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"get", "(I)Ljava/lang/Object;", nullptr, $PUBLIC | $ABSTRACT},
		{"get", "(ILjava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC | $ABSTRACT},
		{"<init>", "(I)V", nullptr, 0, $method(AbstractConstantGroup, init$, void, int32_t)},
		{"isPresent", "(I)Z", nullptr, $PUBLIC | $ABSTRACT},
		{"size", "()I", nullptr, $PUBLIC | $FINAL, $virtualMethod(AbstractConstantGroup, size, int32_t)},
		{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(AbstractConstantGroup, toString, $String*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.lang.invoke.AbstractConstantGroup$BSCIWithCache", "java.lang.invoke.AbstractConstantGroup", "BSCIWithCache", $STATIC},
		{"java.lang.invoke.AbstractConstantGroup$WithCache", "java.lang.invoke.AbstractConstantGroup", "WithCache", $STATIC | $ABSTRACT},
		{"java.lang.invoke.AbstractConstantGroup$AsList", "java.lang.invoke.AbstractConstantGroup", "AsList", $STATIC},
		{"java.lang.invoke.AbstractConstantGroup$SubGroup", "java.lang.invoke.AbstractConstantGroup", "SubGroup", $STATIC},
		{"java.lang.invoke.AbstractConstantGroup$AsIterator", "java.lang.invoke.AbstractConstantGroup", "AsIterator", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER | $ABSTRACT,
		"java.lang.invoke.AbstractConstantGroup",
		"java.lang.Object",
		"java.lang.invoke.ConstantGroup",
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"java.lang.invoke.AbstractConstantGroup$BSCIWithCache,java.lang.invoke.AbstractConstantGroup$WithCache,java.lang.invoke.AbstractConstantGroup$AsList,java.lang.invoke.AbstractConstantGroup$SubGroup,java.lang.invoke.AbstractConstantGroup$AsIterator"
	};
	$loadClass(AbstractConstantGroup, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(AbstractConstantGroup);
	});
	return class$;
}

$Class* AbstractConstantGroup::class$ = nullptr;

		} // invoke
	} // lang
} // java