#include <java/lang/constant/DirectMethodHandleDesc$Kind.h>

#include <java/lang/Array.h>
#include <java/lang/AssertionError.h>
#include <java/lang/Boolean.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/CompoundAttribute.h>
#include <java/lang/Enum.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/IllegalArgumentException.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/Integer.h>
#include <java/lang/Math.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/constant/DirectMethodHandleDesc$1.h>
#include <java/lang/constant/DirectMethodHandleDesc.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

#undef CONSTRUCTOR
#undef GETTER
#undef INTERFACE_SPECIAL
#undef INTERFACE_STATIC
#undef INTERFACE_VIRTUAL
#undef SETTER
#undef SPECIAL
#undef STATIC
#undef STATIC_GETTER
#undef STATIC_SETTER
#undef TABLE
#undef VIRTUAL

using $DirectMethodHandleDesc$KindArray = $Array<::java::lang::constant::DirectMethodHandleDesc$Kind>;
using $AssertionError = ::java::lang::AssertionError;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $DirectMethodHandleDesc = ::java::lang::constant::DirectMethodHandleDesc;
using $DirectMethodHandleDesc$1 = ::java::lang::constant::DirectMethodHandleDesc$1;

namespace java {
	namespace lang {
		namespace constant {

$CompoundAttribute _DirectMethodHandleDesc$Kind_FieldAnnotations_TABLE[] = {
	{"Ljdk/internal/vm/annotation/Stable;", nullptr},
	{}
};

$FieldInfo _DirectMethodHandleDesc$Kind_FieldInfo_[] = {
	{"STATIC", "Ljava/lang/constant/DirectMethodHandleDesc$Kind;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(DirectMethodHandleDesc$Kind, STATIC)},
	{"INTERFACE_STATIC", "Ljava/lang/constant/DirectMethodHandleDesc$Kind;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(DirectMethodHandleDesc$Kind, INTERFACE_STATIC)},
	{"VIRTUAL", "Ljava/lang/constant/DirectMethodHandleDesc$Kind;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(DirectMethodHandleDesc$Kind, VIRTUAL)},
	{"INTERFACE_VIRTUAL", "Ljava/lang/constant/DirectMethodHandleDesc$Kind;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(DirectMethodHandleDesc$Kind, INTERFACE_VIRTUAL)},
	{"SPECIAL", "Ljava/lang/constant/DirectMethodHandleDesc$Kind;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(DirectMethodHandleDesc$Kind, SPECIAL)},
	{"INTERFACE_SPECIAL", "Ljava/lang/constant/DirectMethodHandleDesc$Kind;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(DirectMethodHandleDesc$Kind, INTERFACE_SPECIAL)},
	{"CONSTRUCTOR", "Ljava/lang/constant/DirectMethodHandleDesc$Kind;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(DirectMethodHandleDesc$Kind, CONSTRUCTOR)},
	{"GETTER", "Ljava/lang/constant/DirectMethodHandleDesc$Kind;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(DirectMethodHandleDesc$Kind, GETTER)},
	{"SETTER", "Ljava/lang/constant/DirectMethodHandleDesc$Kind;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(DirectMethodHandleDesc$Kind, SETTER)},
	{"STATIC_GETTER", "Ljava/lang/constant/DirectMethodHandleDesc$Kind;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(DirectMethodHandleDesc$Kind, STATIC_GETTER)},
	{"STATIC_SETTER", "Ljava/lang/constant/DirectMethodHandleDesc$Kind;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(DirectMethodHandleDesc$Kind, STATIC_SETTER)},
	{"$VALUES", "[Ljava/lang/constant/DirectMethodHandleDesc$Kind;", nullptr, $PRIVATE | $STATIC | $FINAL | $SYNTHETIC, $staticField(DirectMethodHandleDesc$Kind, $VALUES)},
	{"refKind", "I", nullptr, $PUBLIC | $FINAL, $field(DirectMethodHandleDesc$Kind, refKind)},
	{"isInterface", "Z", nullptr, $PUBLIC | $FINAL, $field(DirectMethodHandleDesc$Kind, isInterface)},
	{"TABLE", "[Ljava/lang/constant/DirectMethodHandleDesc$Kind;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(DirectMethodHandleDesc$Kind, TABLE), _DirectMethodHandleDesc$Kind_FieldAnnotations_TABLE},
	{}
};

$MethodInfo _DirectMethodHandleDesc$Kind_MethodInfo_[] = {
	{"$values", "()[Ljava/lang/constant/DirectMethodHandleDesc$Kind;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$DirectMethodHandleDesc$KindArray*(*)()>(&DirectMethodHandleDesc$Kind::$values))},
	{"<init>", "(Ljava/lang/String;II)V", "(I)V", $PRIVATE, $method(static_cast<void(DirectMethodHandleDesc$Kind::*)($String*,int32_t,int32_t)>(&DirectMethodHandleDesc$Kind::init$))},
	{"<init>", "(Ljava/lang/String;IIZ)V", "(IZ)V", $PRIVATE, $method(static_cast<void(DirectMethodHandleDesc$Kind::*)($String*,int32_t,int32_t,bool)>(&DirectMethodHandleDesc$Kind::init$))},
	{"isVirtualMethod", "()Z", nullptr, 0, $method(static_cast<bool(DirectMethodHandleDesc$Kind::*)()>(&DirectMethodHandleDesc$Kind::isVirtualMethod))},
	{"tableIndex", "(IZ)I", nullptr, $PRIVATE | $STATIC, $method(static_cast<int32_t(*)(int32_t,bool)>(&DirectMethodHandleDesc$Kind::tableIndex))},
	{"valueOf", "(Ljava/lang/String;)Ljava/lang/constant/DirectMethodHandleDesc$Kind;", nullptr, $PUBLIC | $STATIC, $method(static_cast<DirectMethodHandleDesc$Kind*(*)($String*)>(&DirectMethodHandleDesc$Kind::valueOf))},
	{"valueOf", "(I)Ljava/lang/constant/DirectMethodHandleDesc$Kind;", nullptr, $PUBLIC | $STATIC, $method(static_cast<DirectMethodHandleDesc$Kind*(*)(int32_t)>(&DirectMethodHandleDesc$Kind::valueOf))},
	{"valueOf", "(IZ)Ljava/lang/constant/DirectMethodHandleDesc$Kind;", nullptr, $PUBLIC | $STATIC, $method(static_cast<DirectMethodHandleDesc$Kind*(*)(int32_t,bool)>(&DirectMethodHandleDesc$Kind::valueOf))},
	{"values", "()[Ljava/lang/constant/DirectMethodHandleDesc$Kind;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$DirectMethodHandleDesc$KindArray*(*)()>(&DirectMethodHandleDesc$Kind::values))},
	{}
};

$InnerClassInfo _DirectMethodHandleDesc$Kind_InnerClassesInfo_[] = {
	{"java.lang.constant.DirectMethodHandleDesc$Kind", "java.lang.constant.DirectMethodHandleDesc", "Kind", $PUBLIC | $STATIC | $FINAL | $ENUM},
	{}
};

$ClassInfo _DirectMethodHandleDesc$Kind_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER | $ENUM,
	"java.lang.constant.DirectMethodHandleDesc$Kind",
	"java.lang.Enum",
	nullptr,
	_DirectMethodHandleDesc$Kind_FieldInfo_,
	_DirectMethodHandleDesc$Kind_MethodInfo_,
	"Ljava/lang/Enum<Ljava/lang/constant/DirectMethodHandleDesc$Kind;>;",
	nullptr,
	_DirectMethodHandleDesc$Kind_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.lang.constant.DirectMethodHandleDesc"
};

$Object* allocate$DirectMethodHandleDesc$Kind($Class* clazz) {
	return $of($alloc(DirectMethodHandleDesc$Kind));
}


DirectMethodHandleDesc$Kind* DirectMethodHandleDesc$Kind::STATIC = nullptr;

DirectMethodHandleDesc$Kind* DirectMethodHandleDesc$Kind::INTERFACE_STATIC = nullptr;

DirectMethodHandleDesc$Kind* DirectMethodHandleDesc$Kind::VIRTUAL = nullptr;

DirectMethodHandleDesc$Kind* DirectMethodHandleDesc$Kind::INTERFACE_VIRTUAL = nullptr;

DirectMethodHandleDesc$Kind* DirectMethodHandleDesc$Kind::SPECIAL = nullptr;

DirectMethodHandleDesc$Kind* DirectMethodHandleDesc$Kind::INTERFACE_SPECIAL = nullptr;

DirectMethodHandleDesc$Kind* DirectMethodHandleDesc$Kind::CONSTRUCTOR = nullptr;

DirectMethodHandleDesc$Kind* DirectMethodHandleDesc$Kind::GETTER = nullptr;

DirectMethodHandleDesc$Kind* DirectMethodHandleDesc$Kind::SETTER = nullptr;

DirectMethodHandleDesc$Kind* DirectMethodHandleDesc$Kind::STATIC_GETTER = nullptr;

DirectMethodHandleDesc$Kind* DirectMethodHandleDesc$Kind::STATIC_SETTER = nullptr;
$DirectMethodHandleDesc$KindArray* DirectMethodHandleDesc$Kind::$VALUES = nullptr;
$DirectMethodHandleDesc$KindArray* DirectMethodHandleDesc$Kind::TABLE = nullptr;

$DirectMethodHandleDesc$KindArray* DirectMethodHandleDesc$Kind::$values() {
	$init(DirectMethodHandleDesc$Kind);
	return $new($DirectMethodHandleDesc$KindArray, {
		DirectMethodHandleDesc$Kind::STATIC,
		DirectMethodHandleDesc$Kind::INTERFACE_STATIC,
		DirectMethodHandleDesc$Kind::VIRTUAL,
		DirectMethodHandleDesc$Kind::INTERFACE_VIRTUAL,
		DirectMethodHandleDesc$Kind::SPECIAL,
		DirectMethodHandleDesc$Kind::INTERFACE_SPECIAL,
		DirectMethodHandleDesc$Kind::CONSTRUCTOR,
		DirectMethodHandleDesc$Kind::GETTER,
		DirectMethodHandleDesc$Kind::SETTER,
		DirectMethodHandleDesc$Kind::STATIC_GETTER,
		DirectMethodHandleDesc$Kind::STATIC_SETTER
	});
}

$DirectMethodHandleDesc$KindArray* DirectMethodHandleDesc$Kind::values() {
	$init(DirectMethodHandleDesc$Kind);
	return $cast($DirectMethodHandleDesc$KindArray, DirectMethodHandleDesc$Kind::$VALUES->clone());
}

DirectMethodHandleDesc$Kind* DirectMethodHandleDesc$Kind::valueOf($String* name) {
	$init(DirectMethodHandleDesc$Kind);
	return $cast(DirectMethodHandleDesc$Kind, $Enum::valueOf(DirectMethodHandleDesc$Kind::class$, name));
}

void DirectMethodHandleDesc$Kind::init$($String* $enum$name, int32_t $enum$ordinal, int32_t refKind) {
	DirectMethodHandleDesc$Kind::init$($enum$name, $enum$ordinal, refKind, false);
}

void DirectMethodHandleDesc$Kind::init$($String* $enum$name, int32_t $enum$ordinal, int32_t refKind, bool isInterface) {
	$Enum::init$($enum$name, $enum$ordinal);
	this->refKind = refKind;
	this->isInterface = isInterface;
}

DirectMethodHandleDesc$Kind* DirectMethodHandleDesc$Kind::valueOf(int32_t refKind) {
	$init(DirectMethodHandleDesc$Kind);
	return valueOf(refKind, refKind == 9);
}

DirectMethodHandleDesc$Kind* DirectMethodHandleDesc$Kind::valueOf(int32_t refKind, bool isInterface) {
	$init(DirectMethodHandleDesc$Kind);
	int32_t i = tableIndex(refKind, isInterface);
	if (i >= 2 && i < $nc(DirectMethodHandleDesc$Kind::TABLE)->length) {
		return $nc(DirectMethodHandleDesc$Kind::TABLE)->get(i);
	}
	$throwNew($IllegalArgumentException, $($String::format("refKind=%d isInterface=%s"_s, $$new($ObjectArray, {
		$($of($Integer::valueOf(refKind))),
		$($of($Boolean::valueOf(isInterface)))
	}))));
}

int32_t DirectMethodHandleDesc$Kind::tableIndex(int32_t refKind, bool isInterface) {
	$init(DirectMethodHandleDesc$Kind);
	if (refKind < 0) {
		return refKind;
	}
	return (refKind * 2) + (isInterface ? 1 : 0);
}

bool DirectMethodHandleDesc$Kind::isVirtualMethod() {
	$init($DirectMethodHandleDesc$1);
	switch ($nc($DirectMethodHandleDesc$1::$SwitchMap$java$lang$constant$DirectMethodHandleDesc$Kind)->get((this)->ordinal())) {
	case 1:
		{}
	case 2:
		{}
	case 3:
		{}
	case 4:
		{
			return true;
		}
	default:
		{
			return false;
		}
	}
}

void clinit$DirectMethodHandleDesc$Kind($Class* class$) {
	$assignStatic(DirectMethodHandleDesc$Kind::STATIC, $new(DirectMethodHandleDesc$Kind, "STATIC"_s, 0, 6));
	$assignStatic(DirectMethodHandleDesc$Kind::INTERFACE_STATIC, $new(DirectMethodHandleDesc$Kind, "INTERFACE_STATIC"_s, 1, 6, true));
	$assignStatic(DirectMethodHandleDesc$Kind::VIRTUAL, $new(DirectMethodHandleDesc$Kind, "VIRTUAL"_s, 2, 5));
	$assignStatic(DirectMethodHandleDesc$Kind::INTERFACE_VIRTUAL, $new(DirectMethodHandleDesc$Kind, "INTERFACE_VIRTUAL"_s, 3, 9, true));
	$assignStatic(DirectMethodHandleDesc$Kind::SPECIAL, $new(DirectMethodHandleDesc$Kind, "SPECIAL"_s, 4, 7));
	$assignStatic(DirectMethodHandleDesc$Kind::INTERFACE_SPECIAL, $new(DirectMethodHandleDesc$Kind, "INTERFACE_SPECIAL"_s, 5, 7, true));
	$assignStatic(DirectMethodHandleDesc$Kind::CONSTRUCTOR, $new(DirectMethodHandleDesc$Kind, "CONSTRUCTOR"_s, 6, 8));
	$assignStatic(DirectMethodHandleDesc$Kind::GETTER, $new(DirectMethodHandleDesc$Kind, "GETTER"_s, 7, 1));
	$assignStatic(DirectMethodHandleDesc$Kind::SETTER, $new(DirectMethodHandleDesc$Kind, "SETTER"_s, 8, 3));
	$assignStatic(DirectMethodHandleDesc$Kind::STATIC_GETTER, $new(DirectMethodHandleDesc$Kind, "STATIC_GETTER"_s, 9, 2));
	$assignStatic(DirectMethodHandleDesc$Kind::STATIC_SETTER, $new(DirectMethodHandleDesc$Kind, "STATIC_SETTER"_s, 10, 4));
	$assignStatic(DirectMethodHandleDesc$Kind::$VALUES, DirectMethodHandleDesc$Kind::$values());
	{
		int32_t max = 0;
		{
			$var($DirectMethodHandleDesc$KindArray, arr$, DirectMethodHandleDesc$Kind::values());
			int32_t len$ = $nc(arr$)->length;
			int32_t i$ = 0;
			for (; i$ < len$; ++i$) {
				DirectMethodHandleDesc$Kind* k = arr$->get(i$);
				max = $Math::max(max, DirectMethodHandleDesc$Kind::tableIndex($nc(k)->refKind, true));
			}
		}
		$assignStatic(DirectMethodHandleDesc$Kind::TABLE, $new($DirectMethodHandleDesc$KindArray, max + 1));
		{
			$var($DirectMethodHandleDesc$KindArray, arr$, DirectMethodHandleDesc$Kind::values());
			int32_t len$ = arr$->length;
			int32_t i$ = 0;
			for (; i$ < len$; ++i$) {
				DirectMethodHandleDesc$Kind* kind = arr$->get(i$);
				{
					int32_t i = DirectMethodHandleDesc$Kind::tableIndex($nc(kind)->refKind, kind->isInterface);
					if (i >= $nc(DirectMethodHandleDesc$Kind::TABLE)->length || $nc(DirectMethodHandleDesc$Kind::TABLE)->get(i) != nullptr) {
						$throwNew($AssertionError, $of($$str({"TABLE entry for "_s, kind})));
					}
					$nc(DirectMethodHandleDesc$Kind::TABLE)->set(i, kind);
				}
			}
		}
		int32_t ii = DirectMethodHandleDesc$Kind::tableIndex(9, false);
		if ($nc(DirectMethodHandleDesc$Kind::TABLE)->get(ii) != nullptr) {
			$throwNew($AssertionError, $of($$str({"TABLE entry for (invokeInterface, false) used by "_s, $nc(DirectMethodHandleDesc$Kind::TABLE)->get(ii)})));
		}
		$nc(DirectMethodHandleDesc$Kind::TABLE)->set(ii, DirectMethodHandleDesc$Kind::INTERFACE_VIRTUAL);
		{
			$var($DirectMethodHandleDesc$KindArray, arr$, DirectMethodHandleDesc$Kind::values());
			int32_t len$ = arr$->length;
			int32_t i$ = 0;
			for (; i$ < len$; ++i$) {
				DirectMethodHandleDesc$Kind* kind = arr$->get(i$);
				{
					if (!$nc(kind)->isInterface) {
						int32_t i = DirectMethodHandleDesc$Kind::tableIndex(kind->refKind, true);
						if ($nc(DirectMethodHandleDesc$Kind::TABLE)->get(i) == nullptr) {
							$nc(DirectMethodHandleDesc$Kind::TABLE)->set(i, kind);
						}
					}
				}
			}
		}
	}
}

DirectMethodHandleDesc$Kind::DirectMethodHandleDesc$Kind() {
}

$Class* DirectMethodHandleDesc$Kind::load$($String* name, bool initialize) {
	$loadClass(DirectMethodHandleDesc$Kind, name, initialize, &_DirectMethodHandleDesc$Kind_ClassInfo_, clinit$DirectMethodHandleDesc$Kind, allocate$DirectMethodHandleDesc$Kind);
	return class$;
}

$Class* DirectMethodHandleDesc$Kind::class$ = nullptr;

		} // constant
	} // lang
} // java