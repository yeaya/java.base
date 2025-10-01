#include <java/lang/invoke/LambdaForm$BasicType.h>

#include <java/lang/Array.h>
#include <java/lang/AssertionError.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/CompoundAttribute.h>
#include <java/lang/Double.h>
#include <java/lang/Enum.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/Float.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/Integer.h>
#include <java/lang/InternalError.h>
#include <java/lang/Long.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/NullPointerException.h>
#include <java/lang/String.h>
#include <java/lang/Void.h>
#include <java/lang/invoke/LambdaForm.h>
#include <java/lang/invoke/MethodHandleStatics.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/Arrays.h>
#include <java/util/List.h>
#include <sun/invoke/util/Wrapper.h>
#include <jcpp.h>

#undef V_TYPE
#undef FLOAT
#undef ALL_TYPES
#undef I_TYPE
#undef F_TYPE
#undef J_TYPE
#undef L_TYPE_NUM
#undef TYPE_LIMIT
#undef D_TYPE_NUM
#undef OBJECT
#undef INT
#undef ARG_TYPES
#undef V_TYPE_NUM
#undef ARG_TYPE_LIMIT
#undef I_TYPE_NUM
#undef F_TYPE_NUM
#undef DOUBLE
#undef VOID
#undef TYPE
#undef D_TYPE
#undef L_TYPE
#undef J_TYPE_NUM
#undef LONG

using $LambdaForm$BasicTypeArray = $Array<::java::lang::invoke::LambdaForm$BasicType>;
using $AssertionError = ::java::lang::AssertionError;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $Double = ::java::lang::Double;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $Float = ::java::lang::Float;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $InternalError = ::java::lang::InternalError;
using $Long = ::java::lang::Long;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $Void = ::java::lang::Void;
using $LambdaForm = ::java::lang::invoke::LambdaForm;
using $MethodHandleStatics = ::java::lang::invoke::MethodHandleStatics;
using $Arrays = ::java::util::Arrays;
using $List = ::java::util::List;
using $Wrapper = ::sun::invoke::util::Wrapper;

namespace java {
	namespace lang {
		namespace invoke {

$CompoundAttribute _LambdaForm$BasicType_FieldAnnotations_ALL_TYPES[] = {
	{"Ljdk/internal/vm/annotation/Stable;", nullptr},
	{}
};

$CompoundAttribute _LambdaForm$BasicType_FieldAnnotations_ARG_TYPES[] = {
	{"Ljdk/internal/vm/annotation/Stable;", nullptr},
	{}
};

$FieldInfo _LambdaForm$BasicType_FieldInfo_[] = {
	{"$assertionsDisabled", "Z", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(LambdaForm$BasicType, $assertionsDisabled)},
	{"L_TYPE", "Ljava/lang/invoke/LambdaForm$BasicType;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(LambdaForm$BasicType, L_TYPE)},
	{"I_TYPE", "Ljava/lang/invoke/LambdaForm$BasicType;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(LambdaForm$BasicType, I_TYPE)},
	{"J_TYPE", "Ljava/lang/invoke/LambdaForm$BasicType;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(LambdaForm$BasicType, J_TYPE)},
	{"F_TYPE", "Ljava/lang/invoke/LambdaForm$BasicType;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(LambdaForm$BasicType, F_TYPE)},
	{"D_TYPE", "Ljava/lang/invoke/LambdaForm$BasicType;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(LambdaForm$BasicType, D_TYPE)},
	{"V_TYPE", "Ljava/lang/invoke/LambdaForm$BasicType;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(LambdaForm$BasicType, V_TYPE)},
	{"$VALUES", "[Ljava/lang/invoke/LambdaForm$BasicType;", nullptr, $PRIVATE | $STATIC | $FINAL | $SYNTHETIC, $staticField(LambdaForm$BasicType, $VALUES)},
	{"ALL_TYPES", "[Ljava/lang/invoke/LambdaForm$BasicType;", nullptr, $STATIC | $FINAL, $staticField(LambdaForm$BasicType, ALL_TYPES), _LambdaForm$BasicType_FieldAnnotations_ALL_TYPES},
	{"ARG_TYPES", "[Ljava/lang/invoke/LambdaForm$BasicType;", nullptr, $STATIC | $FINAL, $staticField(LambdaForm$BasicType, ARG_TYPES), _LambdaForm$BasicType_FieldAnnotations_ARG_TYPES},
	{"ARG_TYPE_LIMIT", "I", nullptr, $STATIC | $FINAL, $staticField(LambdaForm$BasicType, ARG_TYPE_LIMIT)},
	{"TYPE_LIMIT", "I", nullptr, $STATIC | $FINAL, $staticField(LambdaForm$BasicType, TYPE_LIMIT)},
	{"L_TYPE_NUM", "B", nullptr, $STATIC | $FINAL, $staticField(LambdaForm$BasicType, L_TYPE_NUM)},
	{"I_TYPE_NUM", "B", nullptr, $STATIC | $FINAL, $staticField(LambdaForm$BasicType, I_TYPE_NUM)},
	{"J_TYPE_NUM", "B", nullptr, $STATIC | $FINAL, $staticField(LambdaForm$BasicType, J_TYPE_NUM)},
	{"F_TYPE_NUM", "B", nullptr, $STATIC | $FINAL, $staticField(LambdaForm$BasicType, F_TYPE_NUM)},
	{"D_TYPE_NUM", "B", nullptr, $STATIC | $FINAL, $staticField(LambdaForm$BasicType, D_TYPE_NUM)},
	{"V_TYPE_NUM", "B", nullptr, $STATIC | $FINAL, $staticField(LambdaForm$BasicType, V_TYPE_NUM)},
	{"btChar", "C", nullptr, $FINAL, $field(LambdaForm$BasicType, btChar)},
	{"btClass", "Ljava/lang/Class;", "Ljava/lang/Class<*>;", $FINAL, $field(LambdaForm$BasicType, btClass)},
	{"btWrapper", "Lsun/invoke/util/Wrapper;", nullptr, $FINAL, $field(LambdaForm$BasicType, btWrapper)},
	{}
};

$MethodInfo _LambdaForm$BasicType_MethodInfo_[] = {
	{"$values", "()[Ljava/lang/invoke/LambdaForm$BasicType;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$LambdaForm$BasicTypeArray*(*)()>(&LambdaForm$BasicType::$values))},
	{"<init>", "(Ljava/lang/String;ICLjava/lang/Class;Lsun/invoke/util/Wrapper;)V", "(CLjava/lang/Class<*>;Lsun/invoke/util/Wrapper;)V", $PRIVATE, $method(static_cast<void(LambdaForm$BasicType::*)($String*,int32_t,char16_t,$Class*,$Wrapper*)>(&LambdaForm$BasicType::init$))},
	{"basicType", "(B)Ljava/lang/invoke/LambdaForm$BasicType;", nullptr, $STATIC, $method(static_cast<LambdaForm$BasicType*(*)(int8_t)>(&LambdaForm$BasicType::basicType))},
	{"basicType", "(C)Ljava/lang/invoke/LambdaForm$BasicType;", nullptr, $STATIC, $method(static_cast<LambdaForm$BasicType*(*)(char16_t)>(&LambdaForm$BasicType::basicType))},
	{"basicType", "(Lsun/invoke/util/Wrapper;)Ljava/lang/invoke/LambdaForm$BasicType;", nullptr, $STATIC, $method(static_cast<LambdaForm$BasicType*(*)($Wrapper*)>(&LambdaForm$BasicType::basicType))},
	{"basicType", "(Ljava/lang/Class;)Ljava/lang/invoke/LambdaForm$BasicType;", "(Ljava/lang/Class<*>;)Ljava/lang/invoke/LambdaForm$BasicType;", $STATIC, $method(static_cast<LambdaForm$BasicType*(*)($Class*)>(&LambdaForm$BasicType::basicType))},
	{"basicTypeChar", "()C", nullptr, 0, $method(static_cast<char16_t(LambdaForm$BasicType::*)()>(&LambdaForm$BasicType::basicTypeChar))},
	{"basicTypeChar", "(Ljava/lang/Class;)C", "(Ljava/lang/Class<*>;)C", $STATIC, $method(static_cast<char16_t(*)($Class*)>(&LambdaForm$BasicType::basicTypeChar))},
	{"basicTypeClass", "()Ljava/lang/Class;", "()Ljava/lang/Class<*>;", 0, $method(static_cast<$Class*(LambdaForm$BasicType::*)()>(&LambdaForm$BasicType::basicTypeClass))},
	{"basicTypeOrds", "([Ljava/lang/invoke/LambdaForm$BasicType;)[I", nullptr, $STATIC, $method(static_cast<$ints*(*)($LambdaForm$BasicTypeArray*)>(&LambdaForm$BasicType::basicTypeOrds))},
	{"basicTypeSlots", "()I", nullptr, 0, $method(static_cast<int32_t(LambdaForm$BasicType::*)()>(&LambdaForm$BasicType::basicTypeSlots))},
	{"basicTypeWrapper", "()Lsun/invoke/util/Wrapper;", nullptr, 0, $method(static_cast<$Wrapper*(LambdaForm$BasicType::*)()>(&LambdaForm$BasicType::basicTypeWrapper))},
	{"basicTypesOrd", "([Ljava/lang/Class;)[B", "([Ljava/lang/Class<*>;)[B", $STATIC, $method(static_cast<$bytes*(*)($ClassArray*)>(&LambdaForm$BasicType::basicTypesOrd))},
	{"checkBasicType", "()Z", nullptr, $PRIVATE | $STATIC, $method(static_cast<bool(*)()>(&LambdaForm$BasicType::checkBasicType))},
	{"isArgBasicTypeChar", "(C)Z", nullptr, $STATIC, $method(static_cast<bool(*)(char16_t)>(&LambdaForm$BasicType::isArgBasicTypeChar))},
	{"isBasicTypeChar", "(C)Z", nullptr, $STATIC, $method(static_cast<bool(*)(char16_t)>(&LambdaForm$BasicType::isBasicTypeChar))},
	{"valueOf", "(Ljava/lang/String;)Ljava/lang/invoke/LambdaForm$BasicType;", nullptr, $PUBLIC | $STATIC, $method(static_cast<LambdaForm$BasicType*(*)($String*)>(&LambdaForm$BasicType::valueOf))},
	{"values", "()[Ljava/lang/invoke/LambdaForm$BasicType;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$LambdaForm$BasicTypeArray*(*)()>(&LambdaForm$BasicType::values))},
	{}
};

$InnerClassInfo _LambdaForm$BasicType_InnerClassesInfo_[] = {
	{"java.lang.invoke.LambdaForm$BasicType", "java.lang.invoke.LambdaForm", "BasicType", $STATIC | $FINAL | $ENUM},
	{}
};

$ClassInfo _LambdaForm$BasicType_ClassInfo_ = {
	$FINAL | $ACC_SUPER | $ENUM,
	"java.lang.invoke.LambdaForm$BasicType",
	"java.lang.Enum",
	nullptr,
	_LambdaForm$BasicType_FieldInfo_,
	_LambdaForm$BasicType_MethodInfo_,
	"Ljava/lang/Enum<Ljava/lang/invoke/LambdaForm$BasicType;>;",
	nullptr,
	_LambdaForm$BasicType_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.lang.invoke.LambdaForm"
};

$Object* allocate$LambdaForm$BasicType($Class* clazz) {
	return $of($alloc(LambdaForm$BasicType));
}

bool LambdaForm$BasicType::$assertionsDisabled = false;
LambdaForm$BasicType* LambdaForm$BasicType::L_TYPE = nullptr;
LambdaForm$BasicType* LambdaForm$BasicType::I_TYPE = nullptr;
LambdaForm$BasicType* LambdaForm$BasicType::J_TYPE = nullptr;
LambdaForm$BasicType* LambdaForm$BasicType::F_TYPE = nullptr;
LambdaForm$BasicType* LambdaForm$BasicType::D_TYPE = nullptr;
LambdaForm$BasicType* LambdaForm$BasicType::V_TYPE = nullptr;
$LambdaForm$BasicTypeArray* LambdaForm$BasicType::$VALUES = nullptr;
$LambdaForm$BasicTypeArray* LambdaForm$BasicType::ALL_TYPES = nullptr;
$LambdaForm$BasicTypeArray* LambdaForm$BasicType::ARG_TYPES = nullptr;
int32_t LambdaForm$BasicType::ARG_TYPE_LIMIT = 0;
int32_t LambdaForm$BasicType::TYPE_LIMIT = 0;
int8_t LambdaForm$BasicType::L_TYPE_NUM = 0;
int8_t LambdaForm$BasicType::I_TYPE_NUM = 0;
int8_t LambdaForm$BasicType::J_TYPE_NUM = 0;
int8_t LambdaForm$BasicType::F_TYPE_NUM = 0;
int8_t LambdaForm$BasicType::D_TYPE_NUM = 0;
int8_t LambdaForm$BasicType::V_TYPE_NUM = 0;

$LambdaForm$BasicTypeArray* LambdaForm$BasicType::$values() {
	$init(LambdaForm$BasicType);
	return $new($LambdaForm$BasicTypeArray, {
		LambdaForm$BasicType::L_TYPE,
		LambdaForm$BasicType::I_TYPE,
		LambdaForm$BasicType::J_TYPE,
		LambdaForm$BasicType::F_TYPE,
		LambdaForm$BasicType::D_TYPE,
		LambdaForm$BasicType::V_TYPE
	});
}

$LambdaForm$BasicTypeArray* LambdaForm$BasicType::values() {
	$init(LambdaForm$BasicType);
	return $cast($LambdaForm$BasicTypeArray, LambdaForm$BasicType::$VALUES->clone());
}

LambdaForm$BasicType* LambdaForm$BasicType::valueOf($String* name) {
	$init(LambdaForm$BasicType);
	return $cast(LambdaForm$BasicType, $Enum::valueOf(LambdaForm$BasicType::class$, name));
}

void LambdaForm$BasicType::init$($String* $enum$name, int32_t $enum$ordinal, char16_t btChar, $Class* btClass, $Wrapper* wrapper) {
	$Enum::init$($enum$name, $enum$ordinal);
	this->btChar = btChar;
	$set(this, btClass, btClass);
	$set(this, btWrapper, wrapper);
}

char16_t LambdaForm$BasicType::basicTypeChar() {
	return this->btChar;
}

$Class* LambdaForm$BasicType::basicTypeClass() {
	return this->btClass;
}

$Wrapper* LambdaForm$BasicType::basicTypeWrapper() {
	return this->btWrapper;
}

int32_t LambdaForm$BasicType::basicTypeSlots() {
	return this->btWrapper->stackSlots();
}

LambdaForm$BasicType* LambdaForm$BasicType::basicType(int8_t type) {
	$init(LambdaForm$BasicType);
	return $nc(LambdaForm$BasicType::ALL_TYPES)->get(type);
}

LambdaForm$BasicType* LambdaForm$BasicType::basicType(char16_t type) {
	$init(LambdaForm$BasicType);

	$var(LambdaForm$BasicType, var$0, nullptr)
	switch (type) {
	case u'L':
		{
			$assign(var$0, LambdaForm$BasicType::L_TYPE);
			break;
		}
	case u'I':
		{
			$assign(var$0, LambdaForm$BasicType::I_TYPE);
			break;
		}
	case u'J':
		{
			$assign(var$0, LambdaForm$BasicType::J_TYPE);
			break;
		}
	case u'F':
		{
			$assign(var$0, LambdaForm$BasicType::F_TYPE);
			break;
		}
	case u'D':
		{
			$assign(var$0, LambdaForm$BasicType::D_TYPE);
			break;
		}
	case u'V':
		{
			$assign(var$0, LambdaForm$BasicType::V_TYPE);
			break;
		}
	case u'Z':
		{}
	case u'B':
		{}
	case u'S':
		{}
	case u'C':
		{
			$assign(var$0, LambdaForm$BasicType::I_TYPE);
			break;
		}
	default:
		{
			$throw($($MethodHandleStatics::newInternalError($$str({"Unknown type char: \'"_s, $$str(type), "\'"_s}))));
		}
	}
	return var$0;
}

LambdaForm$BasicType* LambdaForm$BasicType::basicType($Wrapper* type) {
	$init(LambdaForm$BasicType);
	char16_t c = $nc(type)->basicTypeChar();
	return basicType(c);
}

LambdaForm$BasicType* LambdaForm$BasicType::basicType($Class* type) {
	$init(LambdaForm$BasicType);
	if (!$nc(type)->isPrimitive()) {
		return LambdaForm$BasicType::L_TYPE;
	}
	return basicType($($Wrapper::forPrimitiveType(type)));
}

$ints* LambdaForm$BasicType::basicTypeOrds($LambdaForm$BasicTypeArray* types) {
	$init(LambdaForm$BasicType);
	if (types == nullptr) {
		return nullptr;
	}
	$var($ints, a, $new($ints, $nc(types)->length));
	for (int32_t i = 0; i < types->length; ++i) {
		a->set(i, $nc(types->get(i))->ordinal());
	}
	return a;
}

char16_t LambdaForm$BasicType::basicTypeChar($Class* type) {
	$init(LambdaForm$BasicType);
	return $nc($(basicType(type)))->btChar;
}

$bytes* LambdaForm$BasicType::basicTypesOrd($ClassArray* types) {
	$init(LambdaForm$BasicType);
	$var($bytes, ords, $new($bytes, $nc(types)->length));
	for (int32_t i = 0; i < ords->length; ++i) {
		ords->set(i, (int8_t)$nc($(basicType(types->get(i))))->ordinal());
	}
	return ords;
}

bool LambdaForm$BasicType::isBasicTypeChar(char16_t c) {
	$init(LambdaForm$BasicType);
	return "LIJFDV"_s->indexOf((int32_t)c) >= 0;
}

bool LambdaForm$BasicType::isArgBasicTypeChar(char16_t c) {
	$init(LambdaForm$BasicType);
	return "LIJFD"_s->indexOf((int32_t)c) >= 0;
}

bool LambdaForm$BasicType::checkBasicType() {
	$init(LambdaForm$BasicType);
	for (int32_t i = 0; i < LambdaForm$BasicType::ARG_TYPE_LIMIT; ++i) {
		if (!LambdaForm$BasicType::$assertionsDisabled && !($nc($nc(LambdaForm$BasicType::ARG_TYPES)->get(i))->ordinal() == i)) {
			$throwNew($AssertionError);
		}
		if (!LambdaForm$BasicType::$assertionsDisabled && !($nc(LambdaForm$BasicType::ARG_TYPES)->get(i) == $nc(LambdaForm$BasicType::ALL_TYPES)->get(i))) {
			$throwNew($AssertionError);
		}
	}
	for (int32_t i = 0; i < LambdaForm$BasicType::TYPE_LIMIT; ++i) {
		if (!LambdaForm$BasicType::$assertionsDisabled && !($nc($nc(LambdaForm$BasicType::ALL_TYPES)->get(i))->ordinal() == i)) {
			$throwNew($AssertionError);
		}
	}
	if (!LambdaForm$BasicType::$assertionsDisabled && !($nc(LambdaForm$BasicType::ALL_TYPES)->get(LambdaForm$BasicType::TYPE_LIMIT - 1) == LambdaForm$BasicType::V_TYPE)) {
		$throwNew($AssertionError);
	}
	if (!LambdaForm$BasicType::$assertionsDisabled && ! !$nc($($Arrays::asList(LambdaForm$BasicType::ARG_TYPES)))->contains(LambdaForm$BasicType::V_TYPE)) {
		$throwNew($AssertionError);
	}
	return true;
}

void clinit$LambdaForm$BasicType($Class* class$) {
	$load($LambdaForm);
	LambdaForm$BasicType::$assertionsDisabled = !$LambdaForm::class$->desiredAssertionStatus();
	$load($Object);
	$init($Wrapper);
	$assignStatic(LambdaForm$BasicType::L_TYPE, $new(LambdaForm$BasicType, "L_TYPE"_s, 0, u'L', $Object::class$, $Wrapper::OBJECT));
	$init($Integer);
	$assignStatic(LambdaForm$BasicType::I_TYPE, $new(LambdaForm$BasicType, "I_TYPE"_s, 1, u'I', $Integer::TYPE, $Wrapper::INT));
	$init($Long);
	$assignStatic(LambdaForm$BasicType::J_TYPE, $new(LambdaForm$BasicType, "J_TYPE"_s, 2, u'J', $Long::TYPE, $Wrapper::LONG));
	$init($Float);
	$assignStatic(LambdaForm$BasicType::F_TYPE, $new(LambdaForm$BasicType, "F_TYPE"_s, 3, u'F', $Float::TYPE, $Wrapper::FLOAT));
	$init($Double);
	$assignStatic(LambdaForm$BasicType::D_TYPE, $new(LambdaForm$BasicType, "D_TYPE"_s, 4, u'D', $Double::TYPE, $Wrapper::DOUBLE));
	$init($Void);
	$assignStatic(LambdaForm$BasicType::V_TYPE, $new(LambdaForm$BasicType, "V_TYPE"_s, 5, u'V', $Void::TYPE, $Wrapper::VOID));
	$assignStatic(LambdaForm$BasicType::$VALUES, LambdaForm$BasicType::$values());
	$assignStatic(LambdaForm$BasicType::ALL_TYPES, LambdaForm$BasicType::values());
	$assignStatic(LambdaForm$BasicType::ARG_TYPES, $fcast($LambdaForm$BasicTypeArray, $Arrays::copyOf(LambdaForm$BasicType::ALL_TYPES, $nc(LambdaForm$BasicType::ALL_TYPES)->length - 1)));
	LambdaForm$BasicType::ARG_TYPE_LIMIT = $nc(LambdaForm$BasicType::ARG_TYPES)->length;
	LambdaForm$BasicType::TYPE_LIMIT = $nc(LambdaForm$BasicType::ALL_TYPES)->length;
	LambdaForm$BasicType::L_TYPE_NUM = (int8_t)LambdaForm$BasicType::L_TYPE->ordinal();
	LambdaForm$BasicType::I_TYPE_NUM = (int8_t)LambdaForm$BasicType::I_TYPE->ordinal();
	LambdaForm$BasicType::J_TYPE_NUM = (int8_t)LambdaForm$BasicType::J_TYPE->ordinal();
	LambdaForm$BasicType::F_TYPE_NUM = (int8_t)LambdaForm$BasicType::F_TYPE->ordinal();
	LambdaForm$BasicType::D_TYPE_NUM = (int8_t)LambdaForm$BasicType::D_TYPE->ordinal();
	LambdaForm$BasicType::V_TYPE_NUM = (int8_t)LambdaForm$BasicType::V_TYPE->ordinal();
	{
		if (!LambdaForm$BasicType::$assertionsDisabled && !(LambdaForm$BasicType::checkBasicType())) {
			$throwNew($AssertionError);
		}
	}
}

LambdaForm$BasicType::LambdaForm$BasicType() {
}

$Class* LambdaForm$BasicType::load$($String* name, bool initialize) {
	$loadClass(LambdaForm$BasicType, name, initialize, &_LambdaForm$BasicType_ClassInfo_, clinit$LambdaForm$BasicType, allocate$LambdaForm$BasicType);
	return class$;
}

$Class* LambdaForm$BasicType::class$ = nullptr;

		} // invoke
	} // lang
} // java