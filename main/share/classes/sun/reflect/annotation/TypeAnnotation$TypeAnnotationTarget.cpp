#include <sun/reflect/annotation/TypeAnnotation$TypeAnnotationTarget.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Enum.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <sun/reflect/annotation/TypeAnnotation.h>
#include <jcpp.h>

#undef METHOD_RETURN
#undef CLASS_EXTENDS
#undef CLASS_TYPE_PARAMETER_BOUND
#undef FIELD
#undef METHOD_TYPE_PARAMETER
#undef THROWS
#undef RECORD_COMPONENT
#undef CLASS_IMPLEMENTS
#undef METHOD_RECEIVER
#undef METHOD_FORMAL_PARAMETER
#undef CLASS_TYPE_PARAMETER
#undef METHOD_TYPE_PARAMETER_BOUND

using $TypeAnnotation$TypeAnnotationTargetArray = $Array<::sun::reflect::annotation::TypeAnnotation$TypeAnnotationTarget>;
using $ClassInfo = ::java::lang::ClassInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $TypeAnnotation = ::sun::reflect::annotation::TypeAnnotation;

namespace sun {
	namespace reflect {
		namespace annotation {

$FieldInfo _TypeAnnotation$TypeAnnotationTarget_FieldInfo_[] = {
	{"CLASS_TYPE_PARAMETER", "Lsun/reflect/annotation/TypeAnnotation$TypeAnnotationTarget;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(TypeAnnotation$TypeAnnotationTarget, CLASS_TYPE_PARAMETER)},
	{"METHOD_TYPE_PARAMETER", "Lsun/reflect/annotation/TypeAnnotation$TypeAnnotationTarget;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(TypeAnnotation$TypeAnnotationTarget, METHOD_TYPE_PARAMETER)},
	{"CLASS_EXTENDS", "Lsun/reflect/annotation/TypeAnnotation$TypeAnnotationTarget;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(TypeAnnotation$TypeAnnotationTarget, CLASS_EXTENDS)},
	{"CLASS_IMPLEMENTS", "Lsun/reflect/annotation/TypeAnnotation$TypeAnnotationTarget;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(TypeAnnotation$TypeAnnotationTarget, CLASS_IMPLEMENTS)},
	{"CLASS_TYPE_PARAMETER_BOUND", "Lsun/reflect/annotation/TypeAnnotation$TypeAnnotationTarget;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(TypeAnnotation$TypeAnnotationTarget, CLASS_TYPE_PARAMETER_BOUND)},
	{"METHOD_TYPE_PARAMETER_BOUND", "Lsun/reflect/annotation/TypeAnnotation$TypeAnnotationTarget;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(TypeAnnotation$TypeAnnotationTarget, METHOD_TYPE_PARAMETER_BOUND)},
	{"FIELD", "Lsun/reflect/annotation/TypeAnnotation$TypeAnnotationTarget;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(TypeAnnotation$TypeAnnotationTarget, FIELD)},
	{"METHOD_RETURN", "Lsun/reflect/annotation/TypeAnnotation$TypeAnnotationTarget;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(TypeAnnotation$TypeAnnotationTarget, METHOD_RETURN)},
	{"METHOD_RECEIVER", "Lsun/reflect/annotation/TypeAnnotation$TypeAnnotationTarget;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(TypeAnnotation$TypeAnnotationTarget, METHOD_RECEIVER)},
	{"METHOD_FORMAL_PARAMETER", "Lsun/reflect/annotation/TypeAnnotation$TypeAnnotationTarget;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(TypeAnnotation$TypeAnnotationTarget, METHOD_FORMAL_PARAMETER)},
	{"THROWS", "Lsun/reflect/annotation/TypeAnnotation$TypeAnnotationTarget;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(TypeAnnotation$TypeAnnotationTarget, THROWS)},
	{"RECORD_COMPONENT", "Lsun/reflect/annotation/TypeAnnotation$TypeAnnotationTarget;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(TypeAnnotation$TypeAnnotationTarget, RECORD_COMPONENT)},
	{"$VALUES", "[Lsun/reflect/annotation/TypeAnnotation$TypeAnnotationTarget;", nullptr, $PRIVATE | $STATIC | $FINAL | $SYNTHETIC, $staticField(TypeAnnotation$TypeAnnotationTarget, $VALUES)},
	{}
};

$MethodInfo _TypeAnnotation$TypeAnnotationTarget_MethodInfo_[] = {
	{"$values", "()[Lsun/reflect/annotation/TypeAnnotation$TypeAnnotationTarget;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$TypeAnnotation$TypeAnnotationTargetArray*(*)()>(&TypeAnnotation$TypeAnnotationTarget::$values))},
	{"<init>", "(Ljava/lang/String;I)V", "()V", $PRIVATE, $method(static_cast<void(TypeAnnotation$TypeAnnotationTarget::*)($String*,int32_t)>(&TypeAnnotation$TypeAnnotationTarget::init$))},
	{"valueOf", "(Ljava/lang/String;)Lsun/reflect/annotation/TypeAnnotation$TypeAnnotationTarget;", nullptr, $PUBLIC | $STATIC, $method(static_cast<TypeAnnotation$TypeAnnotationTarget*(*)($String*)>(&TypeAnnotation$TypeAnnotationTarget::valueOf))},
	{"values", "()[Lsun/reflect/annotation/TypeAnnotation$TypeAnnotationTarget;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$TypeAnnotation$TypeAnnotationTargetArray*(*)()>(&TypeAnnotation$TypeAnnotationTarget::values))},
	{}
};

$InnerClassInfo _TypeAnnotation$TypeAnnotationTarget_InnerClassesInfo_[] = {
	{"sun.reflect.annotation.TypeAnnotation$TypeAnnotationTarget", "sun.reflect.annotation.TypeAnnotation", "TypeAnnotationTarget", $PUBLIC | $STATIC | $FINAL | $ENUM},
	{}
};

$ClassInfo _TypeAnnotation$TypeAnnotationTarget_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER | $ENUM,
	"sun.reflect.annotation.TypeAnnotation$TypeAnnotationTarget",
	"java.lang.Enum",
	nullptr,
	_TypeAnnotation$TypeAnnotationTarget_FieldInfo_,
	_TypeAnnotation$TypeAnnotationTarget_MethodInfo_,
	"Ljava/lang/Enum<Lsun/reflect/annotation/TypeAnnotation$TypeAnnotationTarget;>;",
	nullptr,
	_TypeAnnotation$TypeAnnotationTarget_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.reflect.annotation.TypeAnnotation"
};

$Object* allocate$TypeAnnotation$TypeAnnotationTarget($Class* clazz) {
	return $of($alloc(TypeAnnotation$TypeAnnotationTarget));
}

TypeAnnotation$TypeAnnotationTarget* TypeAnnotation$TypeAnnotationTarget::CLASS_TYPE_PARAMETER = nullptr;
TypeAnnotation$TypeAnnotationTarget* TypeAnnotation$TypeAnnotationTarget::METHOD_TYPE_PARAMETER = nullptr;
TypeAnnotation$TypeAnnotationTarget* TypeAnnotation$TypeAnnotationTarget::CLASS_EXTENDS = nullptr;
TypeAnnotation$TypeAnnotationTarget* TypeAnnotation$TypeAnnotationTarget::CLASS_IMPLEMENTS = nullptr;
TypeAnnotation$TypeAnnotationTarget* TypeAnnotation$TypeAnnotationTarget::CLASS_TYPE_PARAMETER_BOUND = nullptr;
TypeAnnotation$TypeAnnotationTarget* TypeAnnotation$TypeAnnotationTarget::METHOD_TYPE_PARAMETER_BOUND = nullptr;
TypeAnnotation$TypeAnnotationTarget* TypeAnnotation$TypeAnnotationTarget::FIELD = nullptr;
TypeAnnotation$TypeAnnotationTarget* TypeAnnotation$TypeAnnotationTarget::METHOD_RETURN = nullptr;
TypeAnnotation$TypeAnnotationTarget* TypeAnnotation$TypeAnnotationTarget::METHOD_RECEIVER = nullptr;
TypeAnnotation$TypeAnnotationTarget* TypeAnnotation$TypeAnnotationTarget::METHOD_FORMAL_PARAMETER = nullptr;
TypeAnnotation$TypeAnnotationTarget* TypeAnnotation$TypeAnnotationTarget::THROWS = nullptr;

TypeAnnotation$TypeAnnotationTarget* TypeAnnotation$TypeAnnotationTarget::RECORD_COMPONENT = nullptr;
$TypeAnnotation$TypeAnnotationTargetArray* TypeAnnotation$TypeAnnotationTarget::$VALUES = nullptr;

$TypeAnnotation$TypeAnnotationTargetArray* TypeAnnotation$TypeAnnotationTarget::$values() {
	$init(TypeAnnotation$TypeAnnotationTarget);
	return $new($TypeAnnotation$TypeAnnotationTargetArray, {
		TypeAnnotation$TypeAnnotationTarget::CLASS_TYPE_PARAMETER,
		TypeAnnotation$TypeAnnotationTarget::METHOD_TYPE_PARAMETER,
		TypeAnnotation$TypeAnnotationTarget::CLASS_EXTENDS,
		TypeAnnotation$TypeAnnotationTarget::CLASS_IMPLEMENTS,
		TypeAnnotation$TypeAnnotationTarget::CLASS_TYPE_PARAMETER_BOUND,
		TypeAnnotation$TypeAnnotationTarget::METHOD_TYPE_PARAMETER_BOUND,
		TypeAnnotation$TypeAnnotationTarget::FIELD,
		TypeAnnotation$TypeAnnotationTarget::METHOD_RETURN,
		TypeAnnotation$TypeAnnotationTarget::METHOD_RECEIVER,
		TypeAnnotation$TypeAnnotationTarget::METHOD_FORMAL_PARAMETER,
		TypeAnnotation$TypeAnnotationTarget::THROWS,
		TypeAnnotation$TypeAnnotationTarget::RECORD_COMPONENT
	});
}

$TypeAnnotation$TypeAnnotationTargetArray* TypeAnnotation$TypeAnnotationTarget::values() {
	$init(TypeAnnotation$TypeAnnotationTarget);
	return $cast($TypeAnnotation$TypeAnnotationTargetArray, TypeAnnotation$TypeAnnotationTarget::$VALUES->clone());
}

TypeAnnotation$TypeAnnotationTarget* TypeAnnotation$TypeAnnotationTarget::valueOf($String* name) {
	$init(TypeAnnotation$TypeAnnotationTarget);
	return $cast(TypeAnnotation$TypeAnnotationTarget, $Enum::valueOf(TypeAnnotation$TypeAnnotationTarget::class$, name));
}

void TypeAnnotation$TypeAnnotationTarget::init$($String* $enum$name, int32_t $enum$ordinal) {
	$Enum::init$($enum$name, $enum$ordinal);
}

void clinit$TypeAnnotation$TypeAnnotationTarget($Class* class$) {
	$assignStatic(TypeAnnotation$TypeAnnotationTarget::CLASS_TYPE_PARAMETER, $new(TypeAnnotation$TypeAnnotationTarget, "CLASS_TYPE_PARAMETER"_s, 0));
	$assignStatic(TypeAnnotation$TypeAnnotationTarget::METHOD_TYPE_PARAMETER, $new(TypeAnnotation$TypeAnnotationTarget, "METHOD_TYPE_PARAMETER"_s, 1));
	$assignStatic(TypeAnnotation$TypeAnnotationTarget::CLASS_EXTENDS, $new(TypeAnnotation$TypeAnnotationTarget, "CLASS_EXTENDS"_s, 2));
	$assignStatic(TypeAnnotation$TypeAnnotationTarget::CLASS_IMPLEMENTS, $new(TypeAnnotation$TypeAnnotationTarget, "CLASS_IMPLEMENTS"_s, 3));
	$assignStatic(TypeAnnotation$TypeAnnotationTarget::CLASS_TYPE_PARAMETER_BOUND, $new(TypeAnnotation$TypeAnnotationTarget, "CLASS_TYPE_PARAMETER_BOUND"_s, 4));
	$assignStatic(TypeAnnotation$TypeAnnotationTarget::METHOD_TYPE_PARAMETER_BOUND, $new(TypeAnnotation$TypeAnnotationTarget, "METHOD_TYPE_PARAMETER_BOUND"_s, 5));
	$assignStatic(TypeAnnotation$TypeAnnotationTarget::FIELD, $new(TypeAnnotation$TypeAnnotationTarget, "FIELD"_s, 6));
	$assignStatic(TypeAnnotation$TypeAnnotationTarget::METHOD_RETURN, $new(TypeAnnotation$TypeAnnotationTarget, "METHOD_RETURN"_s, 7));
	$assignStatic(TypeAnnotation$TypeAnnotationTarget::METHOD_RECEIVER, $new(TypeAnnotation$TypeAnnotationTarget, "METHOD_RECEIVER"_s, 8));
	$assignStatic(TypeAnnotation$TypeAnnotationTarget::METHOD_FORMAL_PARAMETER, $new(TypeAnnotation$TypeAnnotationTarget, "METHOD_FORMAL_PARAMETER"_s, 9));
	$assignStatic(TypeAnnotation$TypeAnnotationTarget::THROWS, $new(TypeAnnotation$TypeAnnotationTarget, "THROWS"_s, 10));
	$assignStatic(TypeAnnotation$TypeAnnotationTarget::RECORD_COMPONENT, $new(TypeAnnotation$TypeAnnotationTarget, "RECORD_COMPONENT"_s, 11));
	$assignStatic(TypeAnnotation$TypeAnnotationTarget::$VALUES, TypeAnnotation$TypeAnnotationTarget::$values());
}

TypeAnnotation$TypeAnnotationTarget::TypeAnnotation$TypeAnnotationTarget() {
}

$Class* TypeAnnotation$TypeAnnotationTarget::load$($String* name, bool initialize) {
	$loadClass(TypeAnnotation$TypeAnnotationTarget, name, initialize, &_TypeAnnotation$TypeAnnotationTarget_ClassInfo_, clinit$TypeAnnotation$TypeAnnotationTarget, allocate$TypeAnnotation$TypeAnnotationTarget);
	return class$;
}

$Class* TypeAnnotation$TypeAnnotationTarget::class$ = nullptr;

		} // annotation
	} // reflect
} // sun