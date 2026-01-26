#include <sun/reflect/annotation/TypeAnnotation$TypeAnnotationTargetInfo.h>

#include <sun/reflect/annotation/TypeAnnotation$TypeAnnotationTarget.h>
#include <sun/reflect/annotation/TypeAnnotation.h>
#include <jcpp.h>

#undef UNUSED_INDEX

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $TypeAnnotation$TypeAnnotationTarget = ::sun::reflect::annotation::TypeAnnotation$TypeAnnotationTarget;

namespace sun {
	namespace reflect {
		namespace annotation {

$FieldInfo _TypeAnnotation$TypeAnnotationTargetInfo_FieldInfo_[] = {
	{"target", "Lsun/reflect/annotation/TypeAnnotation$TypeAnnotationTarget;", nullptr, $PRIVATE | $FINAL, $field(TypeAnnotation$TypeAnnotationTargetInfo, target)},
	{"count", "I", nullptr, $PRIVATE | $FINAL, $field(TypeAnnotation$TypeAnnotationTargetInfo, count)},
	{"secondaryIndex", "I", nullptr, $PRIVATE | $FINAL, $field(TypeAnnotation$TypeAnnotationTargetInfo, secondaryIndex)},
	{"UNUSED_INDEX", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(TypeAnnotation$TypeAnnotationTargetInfo, UNUSED_INDEX)},
	{}
};

$MethodInfo _TypeAnnotation$TypeAnnotationTargetInfo_MethodInfo_[] = {
	{"<init>", "(Lsun/reflect/annotation/TypeAnnotation$TypeAnnotationTarget;)V", nullptr, $PUBLIC, $method(TypeAnnotation$TypeAnnotationTargetInfo, init$, void, $TypeAnnotation$TypeAnnotationTarget*)},
	{"<init>", "(Lsun/reflect/annotation/TypeAnnotation$TypeAnnotationTarget;I)V", nullptr, $PUBLIC, $method(TypeAnnotation$TypeAnnotationTargetInfo, init$, void, $TypeAnnotation$TypeAnnotationTarget*, int32_t)},
	{"<init>", "(Lsun/reflect/annotation/TypeAnnotation$TypeAnnotationTarget;II)V", nullptr, $PUBLIC, $method(TypeAnnotation$TypeAnnotationTargetInfo, init$, void, $TypeAnnotation$TypeAnnotationTarget*, int32_t, int32_t)},
	{"getCount", "()I", nullptr, $PUBLIC, $method(TypeAnnotation$TypeAnnotationTargetInfo, getCount, int32_t)},
	{"getSecondaryIndex", "()I", nullptr, $PUBLIC, $method(TypeAnnotation$TypeAnnotationTargetInfo, getSecondaryIndex, int32_t)},
	{"getTarget", "()Lsun/reflect/annotation/TypeAnnotation$TypeAnnotationTarget;", nullptr, $PUBLIC, $method(TypeAnnotation$TypeAnnotationTargetInfo, getTarget, $TypeAnnotation$TypeAnnotationTarget*)},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(TypeAnnotation$TypeAnnotationTargetInfo, toString, $String*)},
	{}
};

$InnerClassInfo _TypeAnnotation$TypeAnnotationTargetInfo_InnerClassesInfo_[] = {
	{"sun.reflect.annotation.TypeAnnotation$TypeAnnotationTargetInfo", "sun.reflect.annotation.TypeAnnotation", "TypeAnnotationTargetInfo", $PUBLIC | $STATIC | $FINAL},
	{}
};

$ClassInfo _TypeAnnotation$TypeAnnotationTargetInfo_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"sun.reflect.annotation.TypeAnnotation$TypeAnnotationTargetInfo",
	"java.lang.Object",
	nullptr,
	_TypeAnnotation$TypeAnnotationTargetInfo_FieldInfo_,
	_TypeAnnotation$TypeAnnotationTargetInfo_MethodInfo_,
	nullptr,
	nullptr,
	_TypeAnnotation$TypeAnnotationTargetInfo_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.reflect.annotation.TypeAnnotation"
};

$Object* allocate$TypeAnnotation$TypeAnnotationTargetInfo($Class* clazz) {
	return $of($alloc(TypeAnnotation$TypeAnnotationTargetInfo));
}

void TypeAnnotation$TypeAnnotationTargetInfo::init$($TypeAnnotation$TypeAnnotationTarget* target) {
	TypeAnnotation$TypeAnnotationTargetInfo::init$(target, TypeAnnotation$TypeAnnotationTargetInfo::UNUSED_INDEX, TypeAnnotation$TypeAnnotationTargetInfo::UNUSED_INDEX);
}

void TypeAnnotation$TypeAnnotationTargetInfo::init$($TypeAnnotation$TypeAnnotationTarget* target, int32_t count) {
	TypeAnnotation$TypeAnnotationTargetInfo::init$(target, count, TypeAnnotation$TypeAnnotationTargetInfo::UNUSED_INDEX);
}

void TypeAnnotation$TypeAnnotationTargetInfo::init$($TypeAnnotation$TypeAnnotationTarget* target, int32_t count, int32_t secondaryIndex) {
	$set(this, target, target);
	this->count = count;
	this->secondaryIndex = secondaryIndex;
}

$TypeAnnotation$TypeAnnotationTarget* TypeAnnotation$TypeAnnotationTargetInfo::getTarget() {
	return this->target;
}

int32_t TypeAnnotation$TypeAnnotationTargetInfo::getCount() {
	return this->count;
}

int32_t TypeAnnotation$TypeAnnotationTargetInfo::getSecondaryIndex() {
	return this->secondaryIndex;
}

$String* TypeAnnotation$TypeAnnotationTargetInfo::toString() {
	$useLocalCurrentObjectStackCache();
	return $str({""_s, this->target, ": "_s, $$str(this->count), ", "_s, $$str(this->secondaryIndex)});
}

TypeAnnotation$TypeAnnotationTargetInfo::TypeAnnotation$TypeAnnotationTargetInfo() {
}

$Class* TypeAnnotation$TypeAnnotationTargetInfo::load$($String* name, bool initialize) {
	$loadClass(TypeAnnotation$TypeAnnotationTargetInfo, name, initialize, &_TypeAnnotation$TypeAnnotationTargetInfo_ClassInfo_, allocate$TypeAnnotation$TypeAnnotationTargetInfo);
	return class$;
}

$Class* TypeAnnotation$TypeAnnotationTargetInfo::class$ = nullptr;

		} // annotation
	} // reflect
} // sun