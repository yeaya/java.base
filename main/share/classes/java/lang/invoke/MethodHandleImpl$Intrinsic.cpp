#include <java/lang/invoke/MethodHandleImpl$Intrinsic.h>

#include <java/lang/Enum.h>
#include <java/lang/invoke/MethodHandleImpl.h>
#include <jcpp.h>

#undef ARRAY_LENGTH
#undef ARRAY_LOAD
#undef ARRAY_STORE
#undef GUARD_WITH_CATCH
#undef IDENTITY
#undef LOOP
#undef NONE
#undef SELECT_ALTERNATIVE
#undef TABLE_SWITCH
#undef TRY_FINALLY
#undef ZERO

using $MethodHandleImpl$IntrinsicArray = $Array<::java::lang::invoke::MethodHandleImpl$Intrinsic>;
using $ClassInfo = ::java::lang::ClassInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $MethodHandleImpl = ::java::lang::invoke::MethodHandleImpl;

namespace java {
	namespace lang {
		namespace invoke {

$FieldInfo _MethodHandleImpl$Intrinsic_FieldInfo_[] = {
	{"SELECT_ALTERNATIVE", "Ljava/lang/invoke/MethodHandleImpl$Intrinsic;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(MethodHandleImpl$Intrinsic, SELECT_ALTERNATIVE)},
	{"GUARD_WITH_CATCH", "Ljava/lang/invoke/MethodHandleImpl$Intrinsic;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(MethodHandleImpl$Intrinsic, GUARD_WITH_CATCH)},
	{"TRY_FINALLY", "Ljava/lang/invoke/MethodHandleImpl$Intrinsic;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(MethodHandleImpl$Intrinsic, TRY_FINALLY)},
	{"TABLE_SWITCH", "Ljava/lang/invoke/MethodHandleImpl$Intrinsic;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(MethodHandleImpl$Intrinsic, TABLE_SWITCH)},
	{"LOOP", "Ljava/lang/invoke/MethodHandleImpl$Intrinsic;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(MethodHandleImpl$Intrinsic, LOOP)},
	{"ARRAY_LOAD", "Ljava/lang/invoke/MethodHandleImpl$Intrinsic;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(MethodHandleImpl$Intrinsic, ARRAY_LOAD)},
	{"ARRAY_STORE", "Ljava/lang/invoke/MethodHandleImpl$Intrinsic;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(MethodHandleImpl$Intrinsic, ARRAY_STORE)},
	{"ARRAY_LENGTH", "Ljava/lang/invoke/MethodHandleImpl$Intrinsic;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(MethodHandleImpl$Intrinsic, ARRAY_LENGTH)},
	{"IDENTITY", "Ljava/lang/invoke/MethodHandleImpl$Intrinsic;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(MethodHandleImpl$Intrinsic, IDENTITY)},
	{"ZERO", "Ljava/lang/invoke/MethodHandleImpl$Intrinsic;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(MethodHandleImpl$Intrinsic, ZERO)},
	{"NONE", "Ljava/lang/invoke/MethodHandleImpl$Intrinsic;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(MethodHandleImpl$Intrinsic, NONE)},
	{"$VALUES", "[Ljava/lang/invoke/MethodHandleImpl$Intrinsic;", nullptr, $PRIVATE | $STATIC | $FINAL | $SYNTHETIC, $staticField(MethodHandleImpl$Intrinsic, $VALUES)},
	{}
};

$MethodInfo _MethodHandleImpl$Intrinsic_MethodInfo_[] = {
	{"$values", "()[Ljava/lang/invoke/MethodHandleImpl$Intrinsic;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$MethodHandleImpl$IntrinsicArray*(*)()>(&MethodHandleImpl$Intrinsic::$values))},
	{"<init>", "(Ljava/lang/String;I)V", "()V", $PRIVATE, $method(static_cast<void(MethodHandleImpl$Intrinsic::*)($String*,int32_t)>(&MethodHandleImpl$Intrinsic::init$))},
	{"valueOf", "(Ljava/lang/String;)Ljava/lang/invoke/MethodHandleImpl$Intrinsic;", nullptr, $PUBLIC | $STATIC, $method(static_cast<MethodHandleImpl$Intrinsic*(*)($String*)>(&MethodHandleImpl$Intrinsic::valueOf))},
	{"values", "()[Ljava/lang/invoke/MethodHandleImpl$Intrinsic;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$MethodHandleImpl$IntrinsicArray*(*)()>(&MethodHandleImpl$Intrinsic::values))},
	{}
};

$InnerClassInfo _MethodHandleImpl$Intrinsic_InnerClassesInfo_[] = {
	{"java.lang.invoke.MethodHandleImpl$Intrinsic", "java.lang.invoke.MethodHandleImpl", "Intrinsic", $STATIC | $FINAL | $ENUM},
	{}
};

$ClassInfo _MethodHandleImpl$Intrinsic_ClassInfo_ = {
	$FINAL | $ACC_SUPER | $ENUM,
	"java.lang.invoke.MethodHandleImpl$Intrinsic",
	"java.lang.Enum",
	nullptr,
	_MethodHandleImpl$Intrinsic_FieldInfo_,
	_MethodHandleImpl$Intrinsic_MethodInfo_,
	"Ljava/lang/Enum<Ljava/lang/invoke/MethodHandleImpl$Intrinsic;>;",
	nullptr,
	_MethodHandleImpl$Intrinsic_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.lang.invoke.MethodHandleImpl"
};

$Object* allocate$MethodHandleImpl$Intrinsic($Class* clazz) {
	return $of($alloc(MethodHandleImpl$Intrinsic));
}

MethodHandleImpl$Intrinsic* MethodHandleImpl$Intrinsic::SELECT_ALTERNATIVE = nullptr;
MethodHandleImpl$Intrinsic* MethodHandleImpl$Intrinsic::GUARD_WITH_CATCH = nullptr;
MethodHandleImpl$Intrinsic* MethodHandleImpl$Intrinsic::TRY_FINALLY = nullptr;
MethodHandleImpl$Intrinsic* MethodHandleImpl$Intrinsic::TABLE_SWITCH = nullptr;
MethodHandleImpl$Intrinsic* MethodHandleImpl$Intrinsic::LOOP = nullptr;
MethodHandleImpl$Intrinsic* MethodHandleImpl$Intrinsic::ARRAY_LOAD = nullptr;
MethodHandleImpl$Intrinsic* MethodHandleImpl$Intrinsic::ARRAY_STORE = nullptr;
MethodHandleImpl$Intrinsic* MethodHandleImpl$Intrinsic::ARRAY_LENGTH = nullptr;
MethodHandleImpl$Intrinsic* MethodHandleImpl$Intrinsic::IDENTITY = nullptr;
MethodHandleImpl$Intrinsic* MethodHandleImpl$Intrinsic::ZERO = nullptr;
MethodHandleImpl$Intrinsic* MethodHandleImpl$Intrinsic::NONE = nullptr;
$MethodHandleImpl$IntrinsicArray* MethodHandleImpl$Intrinsic::$VALUES = nullptr;

$MethodHandleImpl$IntrinsicArray* MethodHandleImpl$Intrinsic::$values() {
	$init(MethodHandleImpl$Intrinsic);
	return $new($MethodHandleImpl$IntrinsicArray, {
		MethodHandleImpl$Intrinsic::SELECT_ALTERNATIVE,
		MethodHandleImpl$Intrinsic::GUARD_WITH_CATCH,
		MethodHandleImpl$Intrinsic::TRY_FINALLY,
		MethodHandleImpl$Intrinsic::TABLE_SWITCH,
		MethodHandleImpl$Intrinsic::LOOP,
		MethodHandleImpl$Intrinsic::ARRAY_LOAD,
		MethodHandleImpl$Intrinsic::ARRAY_STORE,
		MethodHandleImpl$Intrinsic::ARRAY_LENGTH,
		MethodHandleImpl$Intrinsic::IDENTITY,
		MethodHandleImpl$Intrinsic::ZERO,
		MethodHandleImpl$Intrinsic::NONE
	});
}

$MethodHandleImpl$IntrinsicArray* MethodHandleImpl$Intrinsic::values() {
	$init(MethodHandleImpl$Intrinsic);
	return $cast($MethodHandleImpl$IntrinsicArray, MethodHandleImpl$Intrinsic::$VALUES->clone());
}

MethodHandleImpl$Intrinsic* MethodHandleImpl$Intrinsic::valueOf($String* name) {
	$init(MethodHandleImpl$Intrinsic);
	return $cast(MethodHandleImpl$Intrinsic, $Enum::valueOf(MethodHandleImpl$Intrinsic::class$, name));
}

void MethodHandleImpl$Intrinsic::init$($String* $enum$name, int32_t $enum$ordinal) {
	$Enum::init$($enum$name, $enum$ordinal);
}

void clinit$MethodHandleImpl$Intrinsic($Class* class$) {
	$assignStatic(MethodHandleImpl$Intrinsic::SELECT_ALTERNATIVE, $new(MethodHandleImpl$Intrinsic, "SELECT_ALTERNATIVE"_s, 0));
	$assignStatic(MethodHandleImpl$Intrinsic::GUARD_WITH_CATCH, $new(MethodHandleImpl$Intrinsic, "GUARD_WITH_CATCH"_s, 1));
	$assignStatic(MethodHandleImpl$Intrinsic::TRY_FINALLY, $new(MethodHandleImpl$Intrinsic, "TRY_FINALLY"_s, 2));
	$assignStatic(MethodHandleImpl$Intrinsic::TABLE_SWITCH, $new(MethodHandleImpl$Intrinsic, "TABLE_SWITCH"_s, 3));
	$assignStatic(MethodHandleImpl$Intrinsic::LOOP, $new(MethodHandleImpl$Intrinsic, "LOOP"_s, 4));
	$assignStatic(MethodHandleImpl$Intrinsic::ARRAY_LOAD, $new(MethodHandleImpl$Intrinsic, "ARRAY_LOAD"_s, 5));
	$assignStatic(MethodHandleImpl$Intrinsic::ARRAY_STORE, $new(MethodHandleImpl$Intrinsic, "ARRAY_STORE"_s, 6));
	$assignStatic(MethodHandleImpl$Intrinsic::ARRAY_LENGTH, $new(MethodHandleImpl$Intrinsic, "ARRAY_LENGTH"_s, 7));
	$assignStatic(MethodHandleImpl$Intrinsic::IDENTITY, $new(MethodHandleImpl$Intrinsic, "IDENTITY"_s, 8));
	$assignStatic(MethodHandleImpl$Intrinsic::ZERO, $new(MethodHandleImpl$Intrinsic, "ZERO"_s, 9));
	$assignStatic(MethodHandleImpl$Intrinsic::NONE, $new(MethodHandleImpl$Intrinsic, "NONE"_s, 10));
	$assignStatic(MethodHandleImpl$Intrinsic::$VALUES, MethodHandleImpl$Intrinsic::$values());
}

MethodHandleImpl$Intrinsic::MethodHandleImpl$Intrinsic() {
}

$Class* MethodHandleImpl$Intrinsic::load$($String* name, bool initialize) {
	$loadClass(MethodHandleImpl$Intrinsic, name, initialize, &_MethodHandleImpl$Intrinsic_ClassInfo_, clinit$MethodHandleImpl$Intrinsic, allocate$MethodHandleImpl$Intrinsic);
	return class$;
}

$Class* MethodHandleImpl$Intrinsic::class$ = nullptr;

		} // invoke
	} // lang
} // java