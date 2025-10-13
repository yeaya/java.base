#include <sun/invoke/util/Wrapper.h>

#include <java/lang/Array.h>
#include <java/lang/AssertionError.h>
#include <java/lang/Boolean.h>
#include <java/lang/Byte.h>
#include <java/lang/Character.h>
#include <java/lang/Class.h>
#include <java/lang/ClassCastException.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Double.h>
#include <java/lang/Enum.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/Float.h>
#include <java/lang/IllegalArgumentException.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/Integer.h>
#include <java/lang/InternalError.h>
#include <java/lang/Long.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/NullPointerException.h>
#include <java/lang/Number.h>
#include <java/lang/RuntimeException.h>
#include <java/lang/Short.h>
#include <java/lang/String.h>
#include <java/lang/Void.h>
#include <java/lang/reflect/Array.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/Arrays.h>
#include <java/util/List.h>
#include <sun/invoke/util/Wrapper$1.h>
#include <sun/invoke/util/Wrapper$Format.h>
#include <jcpp.h>

#undef BOOLEAN
#undef BYTE
#undef CHAR
#undef COUNT
#undef DOUBLE
#undef DOUBLE_ZERO
#undef FALSE
#undef FLOAT
#undef FLOAT_ZERO
#undef FROM_CHAR
#undef FROM_PRIM
#undef FROM_WRAP
#undef INT
#undef LONG
#undef NUM_MASK
#undef OBJECT
#undef SHORT
#undef SIGNED
#undef SIZE_MASK
#undef SIZE_SHIFT
#undef SLOT_MASK
#undef SLOT_SHIFT
#undef TYPE
#undef VOID

using $WrapperArray = $Array<::sun::invoke::util::Wrapper>;
using $AssertionError = ::java::lang::AssertionError;
using $Boolean = ::java::lang::Boolean;
using $Byte = ::java::lang::Byte;
using $Character = ::java::lang::Character;
using $ClassCastException = ::java::lang::ClassCastException;
using $ClassInfo = ::java::lang::ClassInfo;
using $Double = ::java::lang::Double;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $Float = ::java::lang::Float;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $InternalError = ::java::lang::InternalError;
using $Long = ::java::lang::Long;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $Number = ::java::lang::Number;
using $RuntimeException = ::java::lang::RuntimeException;
using $Short = ::java::lang::Short;
using $Void = ::java::lang::Void;
using $1Array = ::java::lang::reflect::Array;
using $Arrays = ::java::util::Arrays;
using $List = ::java::util::List;
using $Wrapper$1 = ::sun::invoke::util::Wrapper$1;
using $Wrapper$Format = ::sun::invoke::util::Wrapper$Format;

namespace sun {
	namespace invoke {
		namespace util {

$FieldInfo _Wrapper_FieldInfo_[] = {
	{"$assertionsDisabled", "Z", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(Wrapper, $assertionsDisabled)},
	{"BOOLEAN", "Lsun/invoke/util/Wrapper;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Wrapper, BOOLEAN)},
	{"BYTE", "Lsun/invoke/util/Wrapper;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Wrapper, BYTE)},
	{"SHORT", "Lsun/invoke/util/Wrapper;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Wrapper, SHORT)},
	{"CHAR", "Lsun/invoke/util/Wrapper;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Wrapper, CHAR)},
	{"INT", "Lsun/invoke/util/Wrapper;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Wrapper, INT)},
	{"LONG", "Lsun/invoke/util/Wrapper;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Wrapper, LONG)},
	{"FLOAT", "Lsun/invoke/util/Wrapper;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Wrapper, FLOAT)},
	{"DOUBLE", "Lsun/invoke/util/Wrapper;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Wrapper, DOUBLE)},
	{"OBJECT", "Lsun/invoke/util/Wrapper;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Wrapper, OBJECT)},
	{"VOID", "Lsun/invoke/util/Wrapper;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Wrapper, VOID)},
	{"$VALUES", "[Lsun/invoke/util/Wrapper;", nullptr, $PRIVATE | $STATIC | $FINAL | $SYNTHETIC, $staticField(Wrapper, $VALUES)},
	{"COUNT", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Wrapper, COUNT)},
	{"wrapperType", "Ljava/lang/Class;", "Ljava/lang/Class<*>;", $PRIVATE | $FINAL, $field(Wrapper, wrapperType$)},
	{"primitiveType", "Ljava/lang/Class;", "Ljava/lang/Class<*>;", $PRIVATE | $FINAL, $field(Wrapper, primitiveType$)},
	{"basicTypeChar", "C", nullptr, $PRIVATE | $FINAL, $field(Wrapper, basicTypeChar$)},
	{"basicTypeString", "Ljava/lang/String;", nullptr, $PRIVATE | $FINAL, $field(Wrapper, basicTypeString$)},
	{"emptyArray", "Ljava/lang/Object;", nullptr, $PRIVATE | $FINAL, $field(Wrapper, emptyArray)},
	{"format", "I", nullptr, $PRIVATE | $FINAL, $field(Wrapper, format)},
	{"wrapperSimpleName", "Ljava/lang/String;", nullptr, $PRIVATE | $FINAL, $field(Wrapper, wrapperSimpleName$)},
	{"primitiveSimpleName", "Ljava/lang/String;", nullptr, $PRIVATE | $FINAL, $field(Wrapper, primitiveSimpleName$)},
	{"DOUBLE_ZERO", "Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(Wrapper, DOUBLE_ZERO)},
	{"FLOAT_ZERO", "Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(Wrapper, FLOAT_ZERO)},
	{"FROM_PRIM", "[Lsun/invoke/util/Wrapper;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(Wrapper, FROM_PRIM)},
	{"FROM_WRAP", "[Lsun/invoke/util/Wrapper;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(Wrapper, FROM_WRAP)},
	{"FROM_CHAR", "[Lsun/invoke/util/Wrapper;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(Wrapper, FROM_CHAR)},
	{}
};

$MethodInfo _Wrapper_MethodInfo_[] = {
	{"$values", "()[Lsun/invoke/util/Wrapper;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$WrapperArray*(*)()>(&Wrapper::$values))},
	{"<init>", "(Ljava/lang/String;ILjava/lang/Class;Ljava/lang/String;Ljava/lang/Class;Ljava/lang/String;CLjava/lang/Object;I)V", "(Ljava/lang/Class<*>;Ljava/lang/String;Ljava/lang/Class<*>;Ljava/lang/String;CLjava/lang/Object;I)V", $PRIVATE, $method(static_cast<void(Wrapper::*)($String*,int32_t,$Class*,$String*,$Class*,$String*,char16_t,Object$*,int32_t)>(&Wrapper::init$))},
	{"arrayType", "()Ljava/lang/Class;", "()Ljava/lang/Class<*>;", $PUBLIC, $method(static_cast<$Class*(Wrapper::*)()>(&Wrapper::arrayType))},
	{"asPrimitiveType", "(Ljava/lang/Class;)Ljava/lang/Class;", "<T:Ljava/lang/Object;>(Ljava/lang/Class<TT;>;)Ljava/lang/Class<TT;>;", $PUBLIC | $STATIC, $method(static_cast<$Class*(*)($Class*)>(&Wrapper::asPrimitiveType))},
	{"asWrapperType", "(Ljava/lang/Class;)Ljava/lang/Class;", "<T:Ljava/lang/Object;>(Ljava/lang/Class<TT;>;)Ljava/lang/Class<TT;>;", $PUBLIC | $STATIC, $method(static_cast<$Class*(*)($Class*)>(&Wrapper::asWrapperType))},
	{"basicTypeChar", "(Ljava/lang/Class;)C", "(Ljava/lang/Class<*>;)C", $PUBLIC | $STATIC, $method(static_cast<char16_t(*)($Class*)>(&Wrapper::basicTypeChar))},
	{"basicTypeChar", "()C", nullptr, $PUBLIC, $method(static_cast<char16_t(Wrapper::*)()>(&Wrapper::basicTypeChar))},
	{"basicTypeString", "()Ljava/lang/String;", nullptr, $PUBLIC, $method(static_cast<$String*(Wrapper::*)()>(&Wrapper::basicTypeString))},
	{"bitWidth", "()I", nullptr, $PUBLIC, $method(static_cast<int32_t(Wrapper::*)()>(&Wrapper::bitWidth))},
	{"boolValue", "(B)Z", nullptr, $PRIVATE | $STATIC, $method(static_cast<bool(*)(int8_t)>(&Wrapper::boolValue))},
	{"cast", "(Ljava/lang/Object;Ljava/lang/Class;)Ljava/lang/Object;", "<T:Ljava/lang/Object;>(Ljava/lang/Object;Ljava/lang/Class<TT;>;)TT;", $PUBLIC, $method(static_cast<$Object*(Wrapper::*)(Object$*,$Class*)>(&Wrapper::cast))},
	{"checkConvertibleFrom", "()Z", nullptr, $PRIVATE | $STATIC, $method(static_cast<bool(*)()>(&Wrapper::checkConvertibleFrom))},
	{"convert", "(Ljava/lang/Object;Ljava/lang/Class;)Ljava/lang/Object;", "<T:Ljava/lang/Object;>(Ljava/lang/Object;Ljava/lang/Class<TT;>;)TT;", $PUBLIC, $method(static_cast<$Object*(Wrapper::*)(Object$*,$Class*)>(&Wrapper::convert))},
	{"convert", "(Ljava/lang/Object;Ljava/lang/Class;Z)Ljava/lang/Object;", "<T:Ljava/lang/Object;>(Ljava/lang/Object;Ljava/lang/Class<TT;>;Z)TT;", $PRIVATE, $method(static_cast<$Object*(Wrapper::*)(Object$*,$Class*,bool)>(&Wrapper::convert))},
	{"copyArrayBoxing", "(Ljava/lang/Object;I[Ljava/lang/Object;II)V", nullptr, $PUBLIC, $method(static_cast<void(Wrapper::*)(Object$*,int32_t,$ObjectArray*,int32_t,int32_t)>(&Wrapper::copyArrayBoxing))},
	{"copyArrayUnboxing", "([Ljava/lang/Object;ILjava/lang/Object;II)V", nullptr, $PUBLIC, $method(static_cast<void(Wrapper::*)($ObjectArray*,int32_t,Object$*,int32_t,int32_t)>(&Wrapper::copyArrayUnboxing))},
	{"detailString", "()Ljava/lang/String;", nullptr, $PUBLIC, $method(static_cast<$String*(Wrapper::*)()>(&Wrapper::detailString))},
	{"findPrimitiveType", "(Ljava/lang/Class;)Lsun/invoke/util/Wrapper;", "(Ljava/lang/Class<*>;)Lsun/invoke/util/Wrapper;", $STATIC, $method(static_cast<Wrapper*(*)($Class*)>(&Wrapper::findPrimitiveType))},
	{"findWrapperType", "(Ljava/lang/Class;)Lsun/invoke/util/Wrapper;", "(Ljava/lang/Class<*>;)Lsun/invoke/util/Wrapper;", $STATIC, $method(static_cast<Wrapper*(*)($Class*)>(&Wrapper::findWrapperType))},
	{"forBasicType", "(C)Lsun/invoke/util/Wrapper;", nullptr, $PUBLIC | $STATIC, $method(static_cast<Wrapper*(*)(char16_t)>(&Wrapper::forBasicType))},
	{"forBasicType", "(Ljava/lang/Class;)Lsun/invoke/util/Wrapper;", "(Ljava/lang/Class<*>;)Lsun/invoke/util/Wrapper;", $PUBLIC | $STATIC, $method(static_cast<Wrapper*(*)($Class*)>(&Wrapper::forBasicType))},
	{"forPrimitiveType", "(Ljava/lang/Class;)Lsun/invoke/util/Wrapper;", "(Ljava/lang/Class<*>;)Lsun/invoke/util/Wrapper;", $PUBLIC | $STATIC, $method(static_cast<Wrapper*(*)($Class*)>(&Wrapper::forPrimitiveType))},
	{"forPrimitiveType", "(C)Lsun/invoke/util/Wrapper;", nullptr, $PUBLIC | $STATIC, $method(static_cast<Wrapper*(*)(char16_t)>(&Wrapper::forPrimitiveType))},
	{"forWrapperType", "(Ljava/lang/Class;)Lsun/invoke/util/Wrapper;", "(Ljava/lang/Class<*>;)Lsun/invoke/util/Wrapper;", $PUBLIC | $STATIC, $method(static_cast<Wrapper*(*)($Class*)>(&Wrapper::forWrapperType))},
	{"forceType", "(Ljava/lang/Class;Ljava/lang/Class;)Ljava/lang/Class;", "<T:Ljava/lang/Object;>(Ljava/lang/Class<*>;Ljava/lang/Class<TT;>;)Ljava/lang/Class<TT;>;", $STATIC, $method(static_cast<$Class*(*)($Class*,$Class*)>(&Wrapper::forceType))},
	{"hashChar", "(C)I", nullptr, $PRIVATE | $STATIC, $method(static_cast<int32_t(*)(char16_t)>(&Wrapper::hashChar))},
	{"hashPrim", "(Ljava/lang/Class;)I", "(Ljava/lang/Class<*>;)I", $PRIVATE | $STATIC, $method(static_cast<int32_t(*)($Class*)>(&Wrapper::hashPrim))},
	{"hashWrap", "(Ljava/lang/Class;)I", "(Ljava/lang/Class<*>;)I", $PRIVATE | $STATIC, $method(static_cast<int32_t(*)($Class*)>(&Wrapper::hashWrap))},
	{"isConvertibleFrom", "(Lsun/invoke/util/Wrapper;)Z", nullptr, $PUBLIC, $method(static_cast<bool(Wrapper::*)(Wrapper*)>(&Wrapper::isConvertibleFrom))},
	{"isDoubleWord", "()Z", nullptr, $PUBLIC, $method(static_cast<bool(Wrapper::*)()>(&Wrapper::isDoubleWord))},
	{"isFloating", "()Z", nullptr, $PUBLIC, $method(static_cast<bool(Wrapper::*)()>(&Wrapper::isFloating))},
	{"isIntegral", "()Z", nullptr, $PUBLIC, $method(static_cast<bool(Wrapper::*)()>(&Wrapper::isIntegral))},
	{"isNumeric", "()Z", nullptr, $PUBLIC, $method(static_cast<bool(Wrapper::*)()>(&Wrapper::isNumeric))},
	{"isOther", "()Z", nullptr, $PUBLIC, $method(static_cast<bool(Wrapper::*)()>(&Wrapper::isOther))},
	{"isPrimitiveType", "(Ljava/lang/Class;)Z", "(Ljava/lang/Class<*>;)Z", $PUBLIC | $STATIC, $method(static_cast<bool(*)($Class*)>(&Wrapper::isPrimitiveType))},
	{"isSigned", "()Z", nullptr, $PUBLIC, $method(static_cast<bool(Wrapper::*)()>(&Wrapper::isSigned))},
	{"isSingleWord", "()Z", nullptr, $PUBLIC, $method(static_cast<bool(Wrapper::*)()>(&Wrapper::isSingleWord))},
	{"isSubwordOrInt", "()Z", nullptr, $PUBLIC, $method(static_cast<bool(Wrapper::*)()>(&Wrapper::isSubwordOrInt))},
	{"isUnsigned", "()Z", nullptr, $PUBLIC, $method(static_cast<bool(Wrapper::*)()>(&Wrapper::isUnsigned))},
	{"isWrapperType", "(Ljava/lang/Class;)Z", "(Ljava/lang/Class<*>;)Z", $PUBLIC | $STATIC, $method(static_cast<bool(*)($Class*)>(&Wrapper::isWrapperType))},
	{"makeArray", "(I)Ljava/lang/Object;", nullptr, $PUBLIC, $method(static_cast<$Object*(Wrapper::*)(int32_t)>(&Wrapper::makeArray))},
	{"newClassCastException", "(Ljava/lang/Class;Ljava/lang/Class;)Ljava/lang/ClassCastException;", "(Ljava/lang/Class<*>;Ljava/lang/Class<*>;)Ljava/lang/ClassCastException;", $PRIVATE | $STATIC, $method(static_cast<$ClassCastException*(*)($Class*,$Class*)>(&Wrapper::newClassCastException))},
	{"newIllegalArgumentException", "(Ljava/lang/String;Ljava/lang/Object;)Ljava/lang/RuntimeException;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$RuntimeException*(*)($String*,Object$*)>(&Wrapper::newIllegalArgumentException))},
	{"newIllegalArgumentException", "(Ljava/lang/String;)Ljava/lang/RuntimeException;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$RuntimeException*(*)($String*)>(&Wrapper::newIllegalArgumentException))},
	{"numberValue", "(Ljava/lang/Object;)Ljava/lang/Number;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$Number*(*)(Object$*)>(&Wrapper::numberValue))},
	{"primitiveSimpleName", "()Ljava/lang/String;", nullptr, $PUBLIC, $method(static_cast<$String*(Wrapper::*)()>(&Wrapper::primitiveSimpleName))},
	{"primitiveType", "()Ljava/lang/Class;", "()Ljava/lang/Class<*>;", $PUBLIC, $method(static_cast<$Class*(Wrapper::*)()>(&Wrapper::primitiveType))},
	{"stackSlots", "()I", nullptr, $PUBLIC, $method(static_cast<int32_t(Wrapper::*)()>(&Wrapper::stackSlots))},
	{"valueOf", "(Ljava/lang/String;)Lsun/invoke/util/Wrapper;", nullptr, $PUBLIC | $STATIC, $method(static_cast<Wrapper*(*)($String*)>(&Wrapper::valueOf))},
	{"values", "()[Lsun/invoke/util/Wrapper;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$WrapperArray*(*)()>(&Wrapper::values))},
	{"wrap", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC, $method(static_cast<$Object*(Wrapper::*)(Object$*)>(&Wrapper::wrap))},
	{"wrap", "(I)Ljava/lang/Object;", nullptr, $PUBLIC, $method(static_cast<$Object*(Wrapper::*)(int32_t)>(&Wrapper::wrap))},
	{"wrapperSimpleName", "()Ljava/lang/String;", nullptr, $PUBLIC, $method(static_cast<$String*(Wrapper::*)()>(&Wrapper::wrapperSimpleName))},
	{"wrapperType", "()Ljava/lang/Class;", "()Ljava/lang/Class<*>;", $PUBLIC, $method(static_cast<$Class*(Wrapper::*)()>(&Wrapper::wrapperType))},
	{"wrapperType", "(Ljava/lang/Class;)Ljava/lang/Class;", "<T:Ljava/lang/Object;>(Ljava/lang/Class<TT;>;)Ljava/lang/Class<TT;>;", $PUBLIC, $method(static_cast<$Class*(Wrapper::*)($Class*)>(&Wrapper::wrapperType))},
	{"zero", "()Ljava/lang/Object;", nullptr, $PUBLIC, $method(static_cast<$Object*(Wrapper::*)()>(&Wrapper::zero))},
	{"zero", "(Ljava/lang/Class;)Ljava/lang/Object;", "<T:Ljava/lang/Object;>(Ljava/lang/Class<TT;>;)TT;", $PUBLIC, $method(static_cast<$Object*(Wrapper::*)($Class*)>(&Wrapper::zero))},
	{}
};

$InnerClassInfo _Wrapper_InnerClassesInfo_[] = {
	{"sun.invoke.util.Wrapper$1", nullptr, nullptr, $STATIC | $SYNTHETIC},
	{"sun.invoke.util.Wrapper$Format", "sun.invoke.util.Wrapper", "Format", $PRIVATE | $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _Wrapper_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER | $ENUM,
	"sun.invoke.util.Wrapper",
	"java.lang.Enum",
	nullptr,
	_Wrapper_FieldInfo_,
	_Wrapper_MethodInfo_,
	"Ljava/lang/Enum<Lsun/invoke/util/Wrapper;>;",
	nullptr,
	_Wrapper_InnerClassesInfo_,
	nullptr,
	nullptr,
	"sun.invoke.util.Wrapper$1,sun.invoke.util.Wrapper$Format"
};

$Object* allocate$Wrapper($Class* clazz) {
	return $of($alloc(Wrapper));
}

bool Wrapper::$assertionsDisabled = false;
Wrapper* Wrapper::BOOLEAN = nullptr;
Wrapper* Wrapper::BYTE = nullptr;
Wrapper* Wrapper::SHORT = nullptr;
Wrapper* Wrapper::CHAR = nullptr;
Wrapper* Wrapper::INT = nullptr;
Wrapper* Wrapper::LONG = nullptr;
Wrapper* Wrapper::FLOAT = nullptr;
Wrapper* Wrapper::DOUBLE = nullptr;
Wrapper* Wrapper::OBJECT = nullptr;
Wrapper* Wrapper::VOID = nullptr;
$WrapperArray* Wrapper::$VALUES = nullptr;
$Object* Wrapper::DOUBLE_ZERO = nullptr;
$Object* Wrapper::FLOAT_ZERO = nullptr;
$WrapperArray* Wrapper::FROM_PRIM = nullptr;
$WrapperArray* Wrapper::FROM_WRAP = nullptr;
$WrapperArray* Wrapper::FROM_CHAR = nullptr;

$WrapperArray* Wrapper::$values() {
	$init(Wrapper);
	return $new($WrapperArray, {
		Wrapper::BOOLEAN,
		Wrapper::BYTE,
		Wrapper::SHORT,
		Wrapper::CHAR,
		Wrapper::INT,
		Wrapper::LONG,
		Wrapper::FLOAT,
		Wrapper::DOUBLE,
		Wrapper::OBJECT,
		Wrapper::VOID
	});
}

$WrapperArray* Wrapper::values() {
	$init(Wrapper);
	return $cast($WrapperArray, Wrapper::$VALUES->clone());
}

Wrapper* Wrapper::valueOf($String* name) {
	$init(Wrapper);
	return $cast(Wrapper, $Enum::valueOf(Wrapper::class$, name));
}

void Wrapper::init$($String* $enum$name, int32_t $enum$ordinal, $Class* wtype, $String* wtypeName, $Class* ptype, $String* ptypeName, char16_t tchar, Object$* emptyArray, int32_t format) {
	$Enum::init$($enum$name, $enum$ordinal);
	$set(this, wrapperType$, wtype);
	$set(this, primitiveType$, ptype);
	this->basicTypeChar$ = tchar;
	$set(this, basicTypeString$, $String::valueOf(this->basicTypeChar$));
	$set(this, emptyArray, emptyArray);
	this->format = format;
	$set(this, wrapperSimpleName$, wtypeName);
	$set(this, primitiveSimpleName$, ptypeName);
}

$String* Wrapper::detailString() {
	return $str({this->wrapperSimpleName$, $($Arrays::asList($$new($ObjectArray, {
		$of(this->wrapperType$),
		$of(this->primitiveType$),
		$($of($Character::valueOf(this->basicTypeChar$))),
		$(zero()),
		$of($$str({"0x"_s, $($Integer::toHexString(this->format))}))
	})))});
}

int32_t Wrapper::bitWidth() {
	return (int32_t)(($sr(this->format, $Wrapper$Format::SIZE_SHIFT)) & (uint32_t)$Wrapper$Format::SIZE_MASK);
}

int32_t Wrapper::stackSlots() {
	return (int32_t)(($sr(this->format, $Wrapper$Format::SLOT_SHIFT)) & (uint32_t)$Wrapper$Format::SLOT_MASK);
}

bool Wrapper::isSingleWord() {
	return ((int32_t)(this->format & (uint32_t)($sl(1, $Wrapper$Format::SLOT_SHIFT)))) != 0;
}

bool Wrapper::isDoubleWord() {
	return ((int32_t)(this->format & (uint32_t)($sl(2, $Wrapper$Format::SLOT_SHIFT)))) != 0;
}

bool Wrapper::isNumeric() {
	return ((int32_t)(this->format & (uint32_t)$Wrapper$Format::NUM_MASK)) != 0;
}

bool Wrapper::isIntegral() {
	return isNumeric() && this->format < $Wrapper$Format::FLOAT;
}

bool Wrapper::isSubwordOrInt() {
	bool var$0 = isIntegral();
	return var$0 && isSingleWord();
}

bool Wrapper::isSigned() {
	return this->format < $Wrapper$Format::VOID;
}

bool Wrapper::isUnsigned() {
	return this->format >= $Wrapper$Format::BOOLEAN && this->format < $Wrapper$Format::FLOAT;
}

bool Wrapper::isFloating() {
	return this->format >= $Wrapper$Format::FLOAT;
}

bool Wrapper::isOther() {
	return ((int32_t)(this->format & (uint32_t)~$Wrapper$Format::SLOT_MASK)) == 0;
}

bool Wrapper::isConvertibleFrom(Wrapper* source) {
	if (this == source) {
		return true;
	}
	if (this->compareTo(static_cast<$Enum*>(source)) < 0) {
		return false;
	}
	bool floatOrSigned = (((int32_t)(((int32_t)(this->format & (uint32_t)$nc(source)->format)) & (uint32_t)$Wrapper$Format::SIGNED)) != 0);
	if (!floatOrSigned) {
		if (this->isOther()) {
			return true;
		}
		if (source->format == $Wrapper$Format::CHAR) {
			return true;
		}
		return false;
	}
	bool var$0 = !Wrapper::$assertionsDisabled;
	if (var$0) {
		bool var$1 = this->isFloating();
		var$0 = !(var$1 || this->isSigned());
	}
	if (var$0) {
		$throwNew($AssertionError);
	}
	bool var$2 = !Wrapper::$assertionsDisabled;
	if (var$2) {
		bool var$3 = source->isFloating();
		var$2 = !(var$3 || source->isSigned());
	}
	if (var$2) {
		$throwNew($AssertionError);
	}
	return true;
}

bool Wrapper::checkConvertibleFrom() {
	$init(Wrapper);
	{
		$var($WrapperArray, arr$, values());
		int32_t len$ = $nc(arr$)->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			Wrapper* w = arr$->get(i$);
			{
				if (!Wrapper::$assertionsDisabled && !($nc(w)->isConvertibleFrom(w))) {
					$throwNew($AssertionError);
				}
				if (!Wrapper::$assertionsDisabled && !(Wrapper::VOID->isConvertibleFrom(w))) {
					$throwNew($AssertionError);
				}
				if (w != Wrapper::VOID) {
					if (!Wrapper::$assertionsDisabled && !(Wrapper::OBJECT->isConvertibleFrom(w))) {
						$throwNew($AssertionError);
					}
					if (!Wrapper::$assertionsDisabled && !(!$nc(w)->isConvertibleFrom(Wrapper::VOID))) {
						$throwNew($AssertionError);
					}
				}
				if (w != Wrapper::CHAR) {
					if (!Wrapper::$assertionsDisabled && !(!Wrapper::CHAR->isConvertibleFrom(w))) {
						$throwNew($AssertionError);
					}
					if (!$nc(w)->isConvertibleFrom(Wrapper::INT)) {
						if (!Wrapper::$assertionsDisabled && !(!w->isConvertibleFrom(Wrapper::CHAR))) {
							$throwNew($AssertionError);
						}
					}
				}
				if (w != Wrapper::BOOLEAN) {
					if (!Wrapper::$assertionsDisabled && !(!Wrapper::BOOLEAN->isConvertibleFrom(w))) {
						$throwNew($AssertionError);
					}
					if (w != Wrapper::VOID && w != Wrapper::OBJECT) {
						if (!Wrapper::$assertionsDisabled && !(!$nc(w)->isConvertibleFrom(Wrapper::BOOLEAN))) {
							$throwNew($AssertionError);
						}
					}
				}
				if ($nc(w)->isSigned()) {
					{
						$var($WrapperArray, arr$, values());
						int32_t len$ = arr$->length;
						int32_t i$ = 0;
						for (; i$ < len$; ++i$) {
							Wrapper* x = arr$->get(i$);
							{
								if (w == x) {
									continue;
								}
								if ($nc(x)->isFloating()) {
									if (!Wrapper::$assertionsDisabled && !(!w->isConvertibleFrom(x))) {
										$throwNew($AssertionError);
									}
								} else if (x->isSigned()) {
									if (w->compareTo(static_cast<$Enum*>(x)) < 0) {
										if (!Wrapper::$assertionsDisabled && !(!w->isConvertibleFrom(x))) {
											$throwNew($AssertionError);
										}
									} else {
										if (!Wrapper::$assertionsDisabled && !(w->isConvertibleFrom(x))) {
											$throwNew($AssertionError);
										}
									}
								}
							}
						}
					}
				}
				if ($nc(w)->isFloating()) {
					{
						$var($WrapperArray, arr$, values());
						int32_t len$ = arr$->length;
						int32_t i$ = 0;
						for (; i$ < len$; ++i$) {
							Wrapper* x = arr$->get(i$);
							{
								if (w == x) {
									continue;
								}
								if ($nc(x)->isSigned()) {
									if (!Wrapper::$assertionsDisabled && !(w->isConvertibleFrom(x))) {
										$throwNew($AssertionError);
									}
								} else if (x->isFloating()) {
									if (w->compareTo(static_cast<$Enum*>(x)) < 0) {
										if (!Wrapper::$assertionsDisabled && !(!w->isConvertibleFrom(x))) {
											$throwNew($AssertionError);
										}
									} else {
										if (!Wrapper::$assertionsDisabled && !(w->isConvertibleFrom(x))) {
											$throwNew($AssertionError);
										}
									}
								}
							}
						}
					}
				}
			}
		}
	}
	return true;
}

$Object* Wrapper::zero() {
	$init($Wrapper$1);
	switch ($nc($Wrapper$1::$SwitchMap$sun$invoke$util$Wrapper)->get((this)->ordinal())) {
	case 1:
		{
			$init($Boolean);
			return $of($Boolean::FALSE);
		}
	case 2:
		{
			return $of($Integer::valueOf(0));
		}
	case 3:
		{
			return $of($Byte::valueOf((int8_t)0));
		}
	case 4:
		{
			return $of($Character::valueOf((char16_t)0));
		}
	case 5:
		{
			return $of($Short::valueOf((int16_t)0));
		}
	case 6:
		{
			return $of($Long::valueOf((int64_t)0));
		}
	case 7:
		{
			return $of(Wrapper::FLOAT_ZERO);
		}
	case 8:
		{
			return $of(Wrapper::DOUBLE_ZERO);
		}
	case 9:
		{}
	case 10:
		{}
	default:
		{
			return $of(nullptr);
		}
	}
}

$Object* Wrapper::zero($Class* type) {
	return $of(convert($(zero()), type));
}

Wrapper* Wrapper::forPrimitiveType($Class* type) {
	$init(Wrapper);
	Wrapper* w = findPrimitiveType(type);
	if (w != nullptr) {
		return w;
	}
	if ($nc(type)->isPrimitive()) {
		$throwNew($InternalError);
	}
	$throw($(newIllegalArgumentException($$str({"not primitive: "_s, type}))));
}

Wrapper* Wrapper::forPrimitiveType(char16_t basicTypeChar) {
	$init(Wrapper);
	switch (basicTypeChar) {
	case u'I':
		{
			return Wrapper::INT;
		}
	case u'J':
		{
			return Wrapper::LONG;
		}
	case u'S':
		{
			return Wrapper::SHORT;
		}
	case u'B':
		{
			return Wrapper::BYTE;
		}
	case u'C':
		{
			return Wrapper::CHAR;
		}
	case u'F':
		{
			return Wrapper::FLOAT;
		}
	case u'D':
		{
			return Wrapper::DOUBLE;
		}
	case u'Z':
		{
			return Wrapper::BOOLEAN;
		}
	case u'V':
		{
			return Wrapper::VOID;
		}
	default:
		{
			$throw($(newIllegalArgumentException($$str({"not primitive: "_s, $$str(basicTypeChar)}))));
		}
	}
}

Wrapper* Wrapper::findPrimitiveType($Class* type) {
	$init(Wrapper);
	Wrapper* w = $nc(Wrapper::FROM_PRIM)->get(hashPrim(type));
	if (w != nullptr && w->primitiveType$ == type) {
		return w;
	}
	return nullptr;
}

Wrapper* Wrapper::forWrapperType($Class* type) {
	$init(Wrapper);
	Wrapper* w = findWrapperType(type);
	if (w != nullptr) {
		return w;
	}
	{
		$var($WrapperArray, arr$, values());
		int32_t len$ = arr$->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			Wrapper* x = arr$->get(i$);
			if ($nc(x)->wrapperType$ == type) {
				$throwNew($InternalError);
			}
		}
	}
	$throw($(newIllegalArgumentException($$str({"not wrapper: "_s, type}))));
}

Wrapper* Wrapper::findWrapperType($Class* type) {
	$init(Wrapper);
	Wrapper* w = $nc(Wrapper::FROM_WRAP)->get(hashWrap(type));
	if (w != nullptr && w->wrapperType$ == type) {
		return w;
	}
	return nullptr;
}

Wrapper* Wrapper::forBasicType(char16_t type) {
	$init(Wrapper);
	Wrapper* w = $nc(Wrapper::FROM_CHAR)->get(hashChar(type));
	if (w != nullptr && w->basicTypeChar$ == type) {
		return w;
	}
	{
		$var($WrapperArray, arr$, values());
		int32_t len$ = arr$->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			Wrapper* x = arr$->get(i$);
			if ($nc(w)->basicTypeChar$ == type) {
				$throwNew($InternalError);
			}
		}
	}
	$throw($(newIllegalArgumentException($$str({"not basic type char: "_s, $$str(type)}))));
}

Wrapper* Wrapper::forBasicType($Class* type) {
	$init(Wrapper);
	if ($nc(type)->isPrimitive()) {
		return forPrimitiveType(type);
	}
	return Wrapper::OBJECT;
}

int32_t Wrapper::hashPrim($Class* x) {
	$init(Wrapper);
	$var($String, xn, $nc(x)->getName());
	if ($nc(xn)->length() < 3) {
		return 0;
	}
	char16_t var$0 = $nc(xn)->charAt(0);
	return (var$0 + xn->charAt(2)) % 16;
}

int32_t Wrapper::hashWrap($Class* x) {
	$init(Wrapper);
	$var($String, xn, $nc(x)->getName());
	int32_t offset = 10;
	if (!Wrapper::$assertionsDisabled && !(offset == "java.lang."_s->length())) {
		$throwNew($AssertionError);
	}
	if ($nc(xn)->length() < offset + 3) {
		return 0;
	}
	int32_t var$0 = 3 * $nc(xn)->charAt(offset + 1);
	return (var$0 + xn->charAt(offset + 2)) % 16;
}

int32_t Wrapper::hashChar(char16_t x) {
	$init(Wrapper);
	return (x + (x >> 1)) % 16;
}

$Class* Wrapper::primitiveType() {
	return this->primitiveType$;
}

$Class* Wrapper::wrapperType() {
	return this->wrapperType$;
}

$Class* Wrapper::wrapperType($Class* exampleType) {
	if (exampleType == this->wrapperType$) {
		return exampleType;
	} else {
		$load($Object);
		if (exampleType == this->primitiveType$ || this->wrapperType$ == $Object::class$ || exampleType->isInterface()) {
			return forceType(this->wrapperType$, exampleType);
		}
	}
	$throw($(newClassCastException(exampleType, this->primitiveType$)));
}

$ClassCastException* Wrapper::newClassCastException($Class* actual, $Class* expected) {
	$init(Wrapper);
	return $new($ClassCastException, $$str({actual, " is not compatible with "_s, expected}));
}

$Class* Wrapper::asWrapperType($Class* type) {
	$init(Wrapper);
	if ($nc(type)->isPrimitive()) {
		return $nc($(forPrimitiveType(type)))->wrapperType(type);
	}
	return type;
}

$Class* Wrapper::asPrimitiveType($Class* type) {
	$init(Wrapper);
	Wrapper* w = findWrapperType(type);
	if (w != nullptr) {
		return forceType(w->primitiveType(), type);
	}
	return type;
}

bool Wrapper::isWrapperType($Class* type) {
	$init(Wrapper);
	return findWrapperType(type) != nullptr;
}

bool Wrapper::isPrimitiveType($Class* type) {
	$init(Wrapper);
	return $nc(type)->isPrimitive();
}

char16_t Wrapper::basicTypeChar($Class* type) {
	$init(Wrapper);
	if (!$nc(type)->isPrimitive()) {
		return u'L';
	} else {
		return $nc($(forPrimitiveType(type)))->basicTypeChar();
	}
}

char16_t Wrapper::basicTypeChar() {
	return this->basicTypeChar$;
}

$String* Wrapper::basicTypeString() {
	return this->basicTypeString$;
}

$String* Wrapper::wrapperSimpleName() {
	return this->wrapperSimpleName$;
}

$String* Wrapper::primitiveSimpleName() {
	return this->primitiveSimpleName$;
}

$Object* Wrapper::cast(Object$* x, $Class* type) {
	return $of(convert(x, type, true));
}

$Object* Wrapper::convert(Object$* x, $Class* type) {
	return $of(convert(x, type, false));
}

$Object* Wrapper::convert(Object$* x, $Class* type, bool isCast) {
	if (this == Wrapper::OBJECT) {
		if (!Wrapper::$assertionsDisabled && !(!$nc(type)->isPrimitive())) {
			$throwNew($AssertionError);
		}
		if (!$nc(type)->isInterface()) {
			type->cast(x);
		}
		$var($Object, result, x);
		return $of(result);
	}
	$Class* wtype = wrapperType(type);
	if ($nc(wtype)->isInstance(x)) {
		return $of(wtype->cast(x));
	}
	if (!isCast) {
		$Class* sourceType = $nc($of(x))->getClass();
		Wrapper* source = findWrapperType(sourceType);
		if (source == nullptr || !this->isConvertibleFrom(source)) {
			$throw($(newClassCastException(wtype, sourceType)));
		}
	} else if (x == nullptr) {
		$var($Object, z, zero());
		return $of(z);
	}
	$var($Object, result, wrap(x));
	$load($Void);
	if (!Wrapper::$assertionsDisabled && !((result == nullptr ? $Void::class$ : $nc($of(result))->getClass()) == wtype)) {
		$throwNew($AssertionError);
	}
	return $of(result);
}

$Class* Wrapper::forceType($Class* type, $Class* exampleType) {
	$init(Wrapper);
	bool var$0 = !Wrapper::$assertionsDisabled;
	if (var$0) {
		bool var$3 = type == exampleType;
		if (!var$3) {
			bool var$4 = $nc(type)->isPrimitive();
			if (var$4) {
				var$4 = forPrimitiveType(type) == findWrapperType(exampleType);
			}
			var$3 = var$4;
		}
		bool var$2 = var$3;
		if (!var$2) {
			bool var$5 = $nc(exampleType)->isPrimitive();
			if (var$5) {
				var$5 = forPrimitiveType(exampleType) == findWrapperType(type);
			}
			var$2 = var$5;
		}
		bool var$1 = var$2;
		$load($Object);
		var$0 = !(var$1 || type == $Object::class$ && !$nc(exampleType)->isPrimitive());
	}
	if (var$0) {
		$throwNew($AssertionError);
	}
	$Class* result = type;
	return result;
}

$Object* Wrapper::wrap(Object$* x) {
	switch (this->basicTypeChar$) {
	case u'L':
		{
			return $of(x);
		}
	case u'V':
		{
			return $of(nullptr);
		}
	}
	$var($Number, xn, numberValue(x));
	switch (this->basicTypeChar$) {
	case u'I':
		{
			return $of($Integer::valueOf($nc(xn)->intValue()));
		}
	case u'J':
		{
			return $of($Long::valueOf($nc(xn)->longValue()));
		}
	case u'F':
		{
			return $of($Float::valueOf($nc(xn)->floatValue()));
		}
	case u'D':
		{
			return $of($Double::valueOf($nc(xn)->doubleValue()));
		}
	case u'S':
		{
			return $of($Short::valueOf((int16_t)$nc(xn)->intValue()));
		}
	case u'B':
		{
			return $of($Byte::valueOf((int8_t)$nc(xn)->intValue()));
		}
	case u'C':
		{
			return $of($Character::valueOf((char16_t)$nc(xn)->intValue()));
		}
	case u'Z':
		{
			return $of($Boolean::valueOf(boolValue($nc(xn)->byteValue())));
		}
	}
	$throwNew($InternalError, "bad wrapper"_s);
}

$Object* Wrapper::wrap(int32_t x) {
	switch (this->basicTypeChar$) {
	case u'L':
		{
			return $of($Integer::valueOf(x));
		}
	case u'V':
		{
			return $of(nullptr);
		}
	case u'I':
		{
			return $of($Integer::valueOf(x));
		}
	case u'J':
		{
			return $of($Long::valueOf((int64_t)x));
		}
	case u'F':
		{
			return $of($Float::valueOf((float)x));
		}
	case u'D':
		{
			return $of($Double::valueOf((double)x));
		}
	case u'S':
		{
			return $of($Short::valueOf((int16_t)x));
		}
	case u'B':
		{
			return $of($Byte::valueOf((int8_t)x));
		}
	case u'C':
		{
			return $of($Character::valueOf((char16_t)x));
		}
	case u'Z':
		{
			return $of($Boolean::valueOf(boolValue((int8_t)x)));
		}
	}
	$throwNew($InternalError, "bad wrapper"_s);
}

$Number* Wrapper::numberValue(Object$* x) {
	$init(Wrapper);
	if ($instanceOf($Number, x)) {
		return $cast($Number, x);
	}
	if ($instanceOf($Character, x)) {
		return $Integer::valueOf((int32_t)$nc(($cast($Character, x)))->charValue());
	}
	if ($instanceOf($Boolean, x)) {
		return $Integer::valueOf($nc(($cast($Boolean, x)))->booleanValue() ? 1 : 0);
	}
	return $cast($Number, x);
}

bool Wrapper::boolValue(int8_t bits) {
	$init(Wrapper);
	bits &= (uint8_t)1;
	return (bits != 0);
}

$RuntimeException* Wrapper::newIllegalArgumentException($String* message, Object$* x) {
	$init(Wrapper);
	return newIllegalArgumentException($$str({message, x}));
}

$RuntimeException* Wrapper::newIllegalArgumentException($String* message) {
	$init(Wrapper);
	return $new($IllegalArgumentException, message);
}

$Object* Wrapper::makeArray(int32_t len) {
	return $of($1Array::newInstance(this->primitiveType$, len));
}

$Class* Wrapper::arrayType() {
	return $nc($of(this->emptyArray))->getClass();
}

void Wrapper::copyArrayUnboxing($ObjectArray* values, int32_t vpos, Object$* a, int32_t apos, int32_t length) {
	if ($nc($of(a))->getClass() != arrayType()) {
		$nc(arrayType())->cast(a);
	}
	for (int32_t i = 0; i < length; ++i) {
		$var($Object, value, $nc(values)->get(i + vpos));
		$assign(value, convert(value, this->primitiveType$));
		$1Array::set(a, i + apos, value);
	}
}

void Wrapper::copyArrayBoxing(Object$* a, int32_t apos, $ObjectArray* values, int32_t vpos, int32_t length) {
	if ($nc($of(a))->getClass() != arrayType()) {
		$nc(arrayType())->cast(a);
	}
	for (int32_t i = 0; i < length; ++i) {
		$var($Object, value, $1Array::get(a, i + apos));
		if (!Wrapper::$assertionsDisabled && !($nc($of(value))->getClass() == this->wrapperType$)) {
			$throwNew($AssertionError);
		}
		$nc(values)->set(i + vpos, value);
	}
}

void clinit$Wrapper($Class* class$) {
	Wrapper::$assertionsDisabled = !Wrapper::class$->desiredAssertionStatus();
	$load($Boolean);
	$init($Boolean);
	$assignStatic(Wrapper::BOOLEAN, $new(Wrapper, "BOOLEAN"_s, 0, $Boolean::class$, "Boolean"_s, $Boolean::TYPE, "boolean"_s, u'Z', $$new($booleans, 0), $Wrapper$Format::unsigned$(1)));
	$load($Byte);
	$init($Byte);
	$assignStatic(Wrapper::BYTE, $new(Wrapper, "BYTE"_s, 1, $Byte::class$, "Byte"_s, $Byte::TYPE, "byte"_s, u'B', $$new($bytes, 0), $Wrapper$Format::signed$(8)));
	$load($Short);
	$init($Short);
	$assignStatic(Wrapper::SHORT, $new(Wrapper, "SHORT"_s, 2, $Short::class$, "Short"_s, $Short::TYPE, "short"_s, u'S', $$new($shorts, 0), $Wrapper$Format::signed$(16)));
	$load($Character);
	$init($Character);
	$assignStatic(Wrapper::CHAR, $new(Wrapper, "CHAR"_s, 3, $Character::class$, "Character"_s, $Character::TYPE, "char"_s, u'C', $$new($chars, 0), $Wrapper$Format::unsigned$(16)));
	$load($Integer);
	$init($Integer);
	$assignStatic(Wrapper::INT, $new(Wrapper, "INT"_s, 4, $Integer::class$, "Integer"_s, $Integer::TYPE, "int"_s, u'I', $$new($ints, 0), $Wrapper$Format::signed$(32)));
	$load($Long);
	$init($Long);
	$assignStatic(Wrapper::LONG, $new(Wrapper, "LONG"_s, 5, $Long::class$, "Long"_s, $Long::TYPE, "long"_s, u'J', $$new($longs, 0), $Wrapper$Format::signed$(64)));
	$load($Float);
	$init($Float);
	$assignStatic(Wrapper::FLOAT, $new(Wrapper, "FLOAT"_s, 6, $Float::class$, "Float"_s, $Float::TYPE, "float"_s, u'F', $$new($floats, 0), $Wrapper$Format::floating(32)));
	$load($Double);
	$init($Double);
	$assignStatic(Wrapper::DOUBLE, $new(Wrapper, "DOUBLE"_s, 7, $Double::class$, "Double"_s, $Double::TYPE, "double"_s, u'D', $$new($doubles, 0), $Wrapper$Format::floating(64)));
	$load($Object);
	$assignStatic(Wrapper::OBJECT, $new(Wrapper, "OBJECT"_s, 8, $Object::class$, "Object"_s, $Object::class$, "Object"_s, u'L', $$new($ObjectArray, 0), $Wrapper$Format::other(1)));
	$load($Void);
	$init($Void);
	$assignStatic(Wrapper::VOID, $new(Wrapper, "VOID"_s, 9, $Void::class$, "Void"_s, $Void::TYPE, "void"_s, u'V', nullptr, $Wrapper$Format::other(0)));
	$assignStatic(Wrapper::$VALUES, Wrapper::$values());
	{
		if (!Wrapper::$assertionsDisabled && !(Wrapper::checkConvertibleFrom())) {
			$throwNew($AssertionError);
		}
		if (!Wrapper::$assertionsDisabled && !(Wrapper::COUNT == $(Wrapper::values())->length)) {
			$throwNew($AssertionError);
		}
	}
	$assignStatic(Wrapper::DOUBLE_ZERO, $Double::valueOf((double)0));
	$assignStatic(Wrapper::FLOAT_ZERO, $Float::valueOf((float)0));
	$assignStatic(Wrapper::FROM_PRIM, $new($WrapperArray, 16));
	$assignStatic(Wrapper::FROM_WRAP, $new($WrapperArray, 16));
	$assignStatic(Wrapper::FROM_CHAR, $new($WrapperArray, 16));
	{
		{
			$var($WrapperArray, arr$, Wrapper::values());
			int32_t len$ = arr$->length;
			int32_t i$ = 0;
			for (; i$ < len$; ++i$) {
				Wrapper* w = arr$->get(i$);
				{
					int32_t pi = Wrapper::hashPrim($nc(w)->primitiveType$);
					int32_t wi = Wrapper::hashWrap($nc(w)->wrapperType$);
					int32_t ci = Wrapper::hashChar($nc(w)->basicTypeChar$);
					if (!Wrapper::$assertionsDisabled && !($nc(Wrapper::FROM_PRIM)->get(pi) == nullptr)) {
						$throwNew($AssertionError);
					}
					if (!Wrapper::$assertionsDisabled && !($nc(Wrapper::FROM_WRAP)->get(wi) == nullptr)) {
						$throwNew($AssertionError);
					}
					if (!Wrapper::$assertionsDisabled && !($nc(Wrapper::FROM_CHAR)->get(ci) == nullptr)) {
						$throwNew($AssertionError);
					}
					$nc(Wrapper::FROM_PRIM)->set(pi, w);
					$nc(Wrapper::FROM_WRAP)->set(wi, w);
					$nc(Wrapper::FROM_CHAR)->set(ci, w);
				}
			}
		}
	}
}

Wrapper::Wrapper() {
}

$Class* Wrapper::load$($String* name, bool initialize) {
	$loadClass(Wrapper, name, initialize, &_Wrapper_ClassInfo_, clinit$Wrapper, allocate$Wrapper);
	return class$;
}

$Class* Wrapper::class$ = nullptr;

		} // util
	} // invoke
} // sun