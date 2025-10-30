#include <java/lang/annotation/ElementType.h>

#include <java/lang/Enum.h>
#include <jcpp.h>

#undef ANNOTATION_TYPE
#undef CONSTRUCTOR
#undef FIELD
#undef LOCAL_VARIABLE
#undef METHOD
#undef MODULE
#undef PACKAGE
#undef PARAMETER
#undef RECORD_COMPONENT
#undef TYPE
#undef TYPE_PARAMETER
#undef TYPE_USE

using $ElementTypeArray = $Array<::java::lang::annotation::ElementType>;
using $ClassInfo = ::java::lang::ClassInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace lang {
		namespace annotation {

$FieldInfo _ElementType_FieldInfo_[] = {
	{"TYPE", "Ljava/lang/annotation/ElementType;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(ElementType, TYPE)},
	{"FIELD", "Ljava/lang/annotation/ElementType;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(ElementType, FIELD)},
	{"METHOD", "Ljava/lang/annotation/ElementType;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(ElementType, METHOD)},
	{"PARAMETER", "Ljava/lang/annotation/ElementType;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(ElementType, PARAMETER)},
	{"CONSTRUCTOR", "Ljava/lang/annotation/ElementType;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(ElementType, CONSTRUCTOR)},
	{"LOCAL_VARIABLE", "Ljava/lang/annotation/ElementType;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(ElementType, LOCAL_VARIABLE)},
	{"ANNOTATION_TYPE", "Ljava/lang/annotation/ElementType;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(ElementType, ANNOTATION_TYPE)},
	{"PACKAGE", "Ljava/lang/annotation/ElementType;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(ElementType, PACKAGE)},
	{"TYPE_PARAMETER", "Ljava/lang/annotation/ElementType;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(ElementType, TYPE_PARAMETER)},
	{"TYPE_USE", "Ljava/lang/annotation/ElementType;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(ElementType, TYPE_USE)},
	{"MODULE", "Ljava/lang/annotation/ElementType;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(ElementType, MODULE)},
	{"RECORD_COMPONENT", "Ljava/lang/annotation/ElementType;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(ElementType, RECORD_COMPONENT)},
	{"$VALUES", "[Ljava/lang/annotation/ElementType;", nullptr, $PRIVATE | $STATIC | $FINAL | $SYNTHETIC, $staticField(ElementType, $VALUES)},
	{}
};

$MethodInfo _ElementType_MethodInfo_[] = {
	{"$values", "()[Ljava/lang/annotation/ElementType;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$ElementTypeArray*(*)()>(&ElementType::$values))},
	{"<init>", "(Ljava/lang/String;I)V", "()V", $PRIVATE, $method(static_cast<void(ElementType::*)($String*,int32_t)>(&ElementType::init$))},
	{"valueOf", "(Ljava/lang/String;)Ljava/lang/annotation/ElementType;", nullptr, $PUBLIC | $STATIC, $method(static_cast<ElementType*(*)($String*)>(&ElementType::valueOf))},
	{"values", "()[Ljava/lang/annotation/ElementType;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$ElementTypeArray*(*)()>(&ElementType::values))},
	{}
};

$ClassInfo _ElementType_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER | $ENUM,
	"java.lang.annotation.ElementType",
	"java.lang.Enum",
	nullptr,
	_ElementType_FieldInfo_,
	_ElementType_MethodInfo_,
	"Ljava/lang/Enum<Ljava/lang/annotation/ElementType;>;"
};

$Object* allocate$ElementType($Class* clazz) {
	return $of($alloc(ElementType));
}

ElementType* ElementType::TYPE = nullptr;
ElementType* ElementType::FIELD = nullptr;
ElementType* ElementType::METHOD = nullptr;
ElementType* ElementType::PARAMETER = nullptr;
ElementType* ElementType::CONSTRUCTOR = nullptr;
ElementType* ElementType::LOCAL_VARIABLE = nullptr;
ElementType* ElementType::ANNOTATION_TYPE = nullptr;
ElementType* ElementType::PACKAGE = nullptr;
ElementType* ElementType::TYPE_PARAMETER = nullptr;
ElementType* ElementType::TYPE_USE = nullptr;
ElementType* ElementType::MODULE = nullptr;
ElementType* ElementType::RECORD_COMPONENT = nullptr;
$ElementTypeArray* ElementType::$VALUES = nullptr;

$ElementTypeArray* ElementType::$values() {
	$init(ElementType);
	return $new($ElementTypeArray, {
		ElementType::TYPE,
		ElementType::FIELD,
		ElementType::METHOD,
		ElementType::PARAMETER,
		ElementType::CONSTRUCTOR,
		ElementType::LOCAL_VARIABLE,
		ElementType::ANNOTATION_TYPE,
		ElementType::PACKAGE,
		ElementType::TYPE_PARAMETER,
		ElementType::TYPE_USE,
		ElementType::MODULE,
		ElementType::RECORD_COMPONENT
	});
}

$ElementTypeArray* ElementType::values() {
	$init(ElementType);
	return $cast($ElementTypeArray, ElementType::$VALUES->clone());
}

ElementType* ElementType::valueOf($String* name) {
	$init(ElementType);
	return $cast(ElementType, $Enum::valueOf(ElementType::class$, name));
}

void ElementType::init$($String* $enum$name, int32_t $enum$ordinal) {
	$Enum::init$($enum$name, $enum$ordinal);
}

void clinit$ElementType($Class* class$) {
	$assignStatic(ElementType::TYPE, $new(ElementType, "TYPE"_s, 0));
	$assignStatic(ElementType::FIELD, $new(ElementType, "FIELD"_s, 1));
	$assignStatic(ElementType::METHOD, $new(ElementType, "METHOD"_s, 2));
	$assignStatic(ElementType::PARAMETER, $new(ElementType, "PARAMETER"_s, 3));
	$assignStatic(ElementType::CONSTRUCTOR, $new(ElementType, "CONSTRUCTOR"_s, 4));
	$assignStatic(ElementType::LOCAL_VARIABLE, $new(ElementType, "LOCAL_VARIABLE"_s, 5));
	$assignStatic(ElementType::ANNOTATION_TYPE, $new(ElementType, "ANNOTATION_TYPE"_s, 6));
	$assignStatic(ElementType::PACKAGE, $new(ElementType, "PACKAGE"_s, 7));
	$assignStatic(ElementType::TYPE_PARAMETER, $new(ElementType, "TYPE_PARAMETER"_s, 8));
	$assignStatic(ElementType::TYPE_USE, $new(ElementType, "TYPE_USE"_s, 9));
	$assignStatic(ElementType::MODULE, $new(ElementType, "MODULE"_s, 10));
	$assignStatic(ElementType::RECORD_COMPONENT, $new(ElementType, "RECORD_COMPONENT"_s, 11));
	$assignStatic(ElementType::$VALUES, ElementType::$values());
}

ElementType::ElementType() {
}

$Class* ElementType::load$($String* name, bool initialize) {
	$loadClass(ElementType, name, initialize, &_ElementType_ClassInfo_, clinit$ElementType, allocate$ElementType);
	return class$;
}

$Class* ElementType::class$ = nullptr;

		} // annotation
	} // lang
} // java