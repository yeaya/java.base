#include <java/lang/invoke/LambdaForm$BasicType.h>
#include <java/lang/AssertionError.h>
#include <java/lang/Enum.h>
#include <java/lang/InternalError.h>
#include <java/lang/invoke/LambdaForm.h>
#include <java/lang/invoke/MethodHandleStatics.h>
#include <java/util/Arrays.h>
#include <java/util/List.h>
#include <sun/invoke/util/Wrapper.h>
#include <jcpp.h>

#undef ALL_TYPES
#undef ARG_TYPES
#undef ARG_TYPE_LIMIT
#undef DOUBLE
#undef D_TYPE
#undef D_TYPE_NUM
#undef FLOAT
#undef F_TYPE
#undef F_TYPE_NUM
#undef INT
#undef I_TYPE
#undef I_TYPE_NUM
#undef J_TYPE
#undef J_TYPE_NUM
#undef LONG
#undef L_TYPE
#undef L_TYPE_NUM
#undef OBJECT
#undef TYPE
#undef TYPE_LIMIT
#undef VOID
#undef V_TYPE
#undef V_TYPE_NUM

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
using $Long = ::java::lang::Long;
using $MethodInfo = ::java::lang::MethodInfo;
using $Void = ::java::lang::Void;
using $LambdaForm = ::java::lang::invoke::LambdaForm;
using $MethodHandleStatics = ::java::lang::invoke::MethodHandleStatics;
using $Arrays = ::java::util::Arrays;
using $Wrapper = ::sun::invoke::util::Wrapper;

namespace java {
	namespace lang {
		namespace invoke {

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
	return LambdaForm$BasicType::ALL_TYPES->get(type);
}

LambdaForm$BasicType* LambdaForm$BasicType::basicType(char16_t type) {
	$init(LambdaForm$BasicType);
	$useLocalObjectStack();
	$var(LambdaForm$BasicType, var$0, nullptr);
	switch (type) {
	case u'L':
		$assign(var$0, LambdaForm$BasicType::L_TYPE);
		break;
	case u'I':
		$assign(var$0, LambdaForm$BasicType::I_TYPE);
		break;
	case u'J':
		$assign(var$0, LambdaForm$BasicType::J_TYPE);
		break;
	case u'F':
		$assign(var$0, LambdaForm$BasicType::F_TYPE);
		break;
	case u'D':
		$assign(var$0, LambdaForm$BasicType::D_TYPE);
		break;
	case u'V':
		$assign(var$0, LambdaForm$BasicType::V_TYPE);
		break;
	case u'Z':
	case u'B':
	case u'S':
	case u'C':
		$assign(var$0, LambdaForm$BasicType::I_TYPE);
		break;
	default:
		$throw($($MethodHandleStatics::newInternalError($$str({"Unknown type char: \'"_s, $$str(type), "\'"_s}))));
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
	$useLocalObjectStack();
	$var($bytes, ords, $new($bytes, $nc(types)->length));
	for (int32_t i = 0; i < ords->length; ++i) {
		ords->set(i, (int8_t)$$nc(basicType(types->get(i)))->ordinal());
	}
	return ords;
}

bool LambdaForm$BasicType::isBasicTypeChar(char16_t c) {
	$init(LambdaForm$BasicType);
	return "LIJFDV"_s->indexOf(c) >= 0;
}

bool LambdaForm$BasicType::isArgBasicTypeChar(char16_t c) {
	$init(LambdaForm$BasicType);
	return "LIJFD"_s->indexOf(c) >= 0;
}

bool LambdaForm$BasicType::checkBasicType() {
	$init(LambdaForm$BasicType);
	for (int32_t i = 0; i < LambdaForm$BasicType::ARG_TYPE_LIMIT; ++i) {
		if (!LambdaForm$BasicType::$assertionsDisabled && !($nc(LambdaForm$BasicType::ARG_TYPES->get(i))->ordinal() == i)) {
			$throwNew($AssertionError);
		}
		if (!LambdaForm$BasicType::$assertionsDisabled && !(LambdaForm$BasicType::ARG_TYPES->get(i) == LambdaForm$BasicType::ALL_TYPES->get(i))) {
			$throwNew($AssertionError);
		}
	}
	for (int32_t i = 0; i < LambdaForm$BasicType::TYPE_LIMIT; ++i) {
		if (!LambdaForm$BasicType::$assertionsDisabled && !($nc(LambdaForm$BasicType::ALL_TYPES->get(i))->ordinal() == i)) {
			$throwNew($AssertionError);
		}
	}
	if (!LambdaForm$BasicType::$assertionsDisabled && !(LambdaForm$BasicType::ALL_TYPES->get(LambdaForm$BasicType::TYPE_LIMIT - 1) == LambdaForm$BasicType::V_TYPE)) {
		$throwNew($AssertionError);
	}
	if (!LambdaForm$BasicType::$assertionsDisabled && ! !$$nc($Arrays::asList(LambdaForm$BasicType::ARG_TYPES))->contains(LambdaForm$BasicType::V_TYPE)) {
		$throwNew($AssertionError);
	}
	return true;
}

void LambdaForm$BasicType::clinit$($Class* clazz) {
	$load($LambdaForm);
	LambdaForm$BasicType::$assertionsDisabled = !$LambdaForm::class$->desiredAssertionStatus();
	$init($Wrapper);
	$assignStatic(LambdaForm$BasicType::L_TYPE, $new(LambdaForm$BasicType, "L_TYPE"_s, 0, u'L', $Object::class$, $Wrapper::OBJECT));
	$assignStatic(LambdaForm$BasicType::I_TYPE, $new(LambdaForm$BasicType, "I_TYPE"_s, 1, u'I', $Integer::TYPE, $Wrapper::INT));
	$assignStatic(LambdaForm$BasicType::J_TYPE, $new(LambdaForm$BasicType, "J_TYPE"_s, 2, u'J', $Long::TYPE, $Wrapper::LONG));
	$assignStatic(LambdaForm$BasicType::F_TYPE, $new(LambdaForm$BasicType, "F_TYPE"_s, 3, u'F', $Float::TYPE, $Wrapper::FLOAT));
	$assignStatic(LambdaForm$BasicType::D_TYPE, $new(LambdaForm$BasicType, "D_TYPE"_s, 4, u'D', $Double::TYPE, $Wrapper::DOUBLE));
	$assignStatic(LambdaForm$BasicType::V_TYPE, $new(LambdaForm$BasicType, "V_TYPE"_s, 5, u'V', $Void::TYPE, $Wrapper::VOID));
	$assignStatic(LambdaForm$BasicType::$VALUES, LambdaForm$BasicType::$values());
	$assignStatic(LambdaForm$BasicType::ALL_TYPES, LambdaForm$BasicType::values());
	$assignStatic(LambdaForm$BasicType::ARG_TYPES, $cast($LambdaForm$BasicTypeArray, $Arrays::copyOf(LambdaForm$BasicType::ALL_TYPES, LambdaForm$BasicType::ALL_TYPES->length - 1)));
	LambdaForm$BasicType::ARG_TYPE_LIMIT = LambdaForm$BasicType::ARG_TYPES->length;
	LambdaForm$BasicType::TYPE_LIMIT = LambdaForm$BasicType::ALL_TYPES->length;
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
	$CompoundAttribute ALL_TYPESfieldAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/Stable;", nullptr},
		{}
	};
	$CompoundAttribute ARG_TYPESfieldAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/Stable;", nullptr},
		{}
	};
	$FieldInfo fieldInfos$$[] = {
		{"$assertionsDisabled", "Z", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(LambdaForm$BasicType, $assertionsDisabled)},
		{"L_TYPE", "Ljava/lang/invoke/LambdaForm$BasicType;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(LambdaForm$BasicType, L_TYPE)},
		{"I_TYPE", "Ljava/lang/invoke/LambdaForm$BasicType;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(LambdaForm$BasicType, I_TYPE)},
		{"J_TYPE", "Ljava/lang/invoke/LambdaForm$BasicType;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(LambdaForm$BasicType, J_TYPE)},
		{"F_TYPE", "Ljava/lang/invoke/LambdaForm$BasicType;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(LambdaForm$BasicType, F_TYPE)},
		{"D_TYPE", "Ljava/lang/invoke/LambdaForm$BasicType;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(LambdaForm$BasicType, D_TYPE)},
		{"V_TYPE", "Ljava/lang/invoke/LambdaForm$BasicType;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(LambdaForm$BasicType, V_TYPE)},
		{"$VALUES", "[Ljava/lang/invoke/LambdaForm$BasicType;", nullptr, $PRIVATE | $STATIC | $FINAL | $SYNTHETIC, $staticField(LambdaForm$BasicType, $VALUES)},
		{"ALL_TYPES", "[Ljava/lang/invoke/LambdaForm$BasicType;", nullptr, $STATIC | $FINAL, $staticField(LambdaForm$BasicType, ALL_TYPES), ALL_TYPESfieldAnnotations$$},
		{"ARG_TYPES", "[Ljava/lang/invoke/LambdaForm$BasicType;", nullptr, $STATIC | $FINAL, $staticField(LambdaForm$BasicType, ARG_TYPES), ARG_TYPESfieldAnnotations$$},
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
	$MethodInfo methodInfos$$[] = {
		{"$values", "()[Ljava/lang/invoke/LambdaForm$BasicType;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(LambdaForm$BasicType, $values, $LambdaForm$BasicTypeArray*)},
		{"<init>", "(Ljava/lang/String;ICLjava/lang/Class;Lsun/invoke/util/Wrapper;)V", "(CLjava/lang/Class<*>;Lsun/invoke/util/Wrapper;)V", $PRIVATE, $method(LambdaForm$BasicType, init$, void, $String*, int32_t, char16_t, $Class*, $Wrapper*)},
		{"basicType", "(B)Ljava/lang/invoke/LambdaForm$BasicType;", nullptr, $STATIC, $staticMethod(LambdaForm$BasicType, basicType, LambdaForm$BasicType*, int8_t)},
		{"basicType", "(C)Ljava/lang/invoke/LambdaForm$BasicType;", nullptr, $STATIC, $staticMethod(LambdaForm$BasicType, basicType, LambdaForm$BasicType*, char16_t)},
		{"basicType", "(Lsun/invoke/util/Wrapper;)Ljava/lang/invoke/LambdaForm$BasicType;", nullptr, $STATIC, $staticMethod(LambdaForm$BasicType, basicType, LambdaForm$BasicType*, $Wrapper*)},
		{"basicType", "(Ljava/lang/Class;)Ljava/lang/invoke/LambdaForm$BasicType;", "(Ljava/lang/Class<*>;)Ljava/lang/invoke/LambdaForm$BasicType;", $STATIC, $staticMethod(LambdaForm$BasicType, basicType, LambdaForm$BasicType*, $Class*)},
		{"basicTypeChar", "()C", nullptr, 0, $method(LambdaForm$BasicType, basicTypeChar, char16_t)},
		{"basicTypeChar", "(Ljava/lang/Class;)C", "(Ljava/lang/Class<*>;)C", $STATIC, $staticMethod(LambdaForm$BasicType, basicTypeChar, char16_t, $Class*)},
		{"basicTypeClass", "()Ljava/lang/Class;", "()Ljava/lang/Class<*>;", 0, $method(LambdaForm$BasicType, basicTypeClass, $Class*)},
		{"basicTypeOrds", "([Ljava/lang/invoke/LambdaForm$BasicType;)[I", nullptr, $STATIC, $staticMethod(LambdaForm$BasicType, basicTypeOrds, $ints*, $LambdaForm$BasicTypeArray*)},
		{"basicTypeSlots", "()I", nullptr, 0, $method(LambdaForm$BasicType, basicTypeSlots, int32_t)},
		{"basicTypeWrapper", "()Lsun/invoke/util/Wrapper;", nullptr, 0, $method(LambdaForm$BasicType, basicTypeWrapper, $Wrapper*)},
		{"basicTypesOrd", "([Ljava/lang/Class;)[B", "([Ljava/lang/Class<*>;)[B", $STATIC, $staticMethod(LambdaForm$BasicType, basicTypesOrd, $bytes*, $ClassArray*)},
		{"checkBasicType", "()Z", nullptr, $PRIVATE | $STATIC, $staticMethod(LambdaForm$BasicType, checkBasicType, bool)},
		{"isArgBasicTypeChar", "(C)Z", nullptr, $STATIC, $staticMethod(LambdaForm$BasicType, isArgBasicTypeChar, bool, char16_t)},
		{"isBasicTypeChar", "(C)Z", nullptr, $STATIC, $staticMethod(LambdaForm$BasicType, isBasicTypeChar, bool, char16_t)},
		{"valueOf", "(Ljava/lang/String;)Ljava/lang/invoke/LambdaForm$BasicType;", nullptr, $PUBLIC | $STATIC, $staticMethod(LambdaForm$BasicType, valueOf, LambdaForm$BasicType*, $String*)},
		{"values", "()[Ljava/lang/invoke/LambdaForm$BasicType;", nullptr, $PUBLIC | $STATIC, $staticMethod(LambdaForm$BasicType, values, $LambdaForm$BasicTypeArray*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.lang.invoke.LambdaForm$BasicType", "java.lang.invoke.LambdaForm", "BasicType", $STATIC | $FINAL | $ENUM},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER | $ENUM,
		"java.lang.invoke.LambdaForm$BasicType",
		"java.lang.Enum",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		"Ljava/lang/Enum<Ljava/lang/invoke/LambdaForm$BasicType;>;",
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.lang.invoke.LambdaForm"
	};
	$loadClass(LambdaForm$BasicType, name, initialize, &classInfo$$, LambdaForm$BasicType::clinit$, []($Class* clazz) -> $Object* {
		return $of($alloc(LambdaForm$BasicType));
	});
	return class$;
}

$Class* LambdaForm$BasicType::class$ = nullptr;

		} // invoke
	} // lang
} // java