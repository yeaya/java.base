#include <p/Foo$T.h>

#include <java/lang/Enum.h>
#include <p/Foo.h>
#include <jcpp.h>

#undef ONE

using $Foo$TArray = $Array<::p::Foo$T>;
using $ClassInfo = ::java::lang::ClassInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace p {

$FieldInfo _Foo$T_FieldInfo_[] = {
	{"ONE", "Lp/Foo$T;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Foo$T, ONE)},
	{"$VALUES", "[Lp/Foo$T;", nullptr, $PRIVATE | $STATIC | $FINAL | $SYNTHETIC, $staticField(Foo$T, $VALUES)},
	{}
};

$MethodInfo _Foo$T_MethodInfo_[] = {
	{"$values", "()[Lp/Foo$T;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(Foo$T, $values, $Foo$TArray*)},
	{"<init>", "(Ljava/lang/String;I)V", "()V", $PRIVATE, $method(Foo$T, init$, void, $String*, int32_t)},
	{"valueOf", "(Ljava/lang/String;)Lp/Foo$T;", nullptr, $PUBLIC | $STATIC, $staticMethod(Foo$T, valueOf, Foo$T*, $String*)},
	{"values", "()[Lp/Foo$T;", nullptr, $PUBLIC | $STATIC, $staticMethod(Foo$T, values, $Foo$TArray*)},
	{}
};

$InnerClassInfo _Foo$T_InnerClassesInfo_[] = {
	{"p.Foo$T", "p.Foo", "T", $PROTECTED | $STATIC | $FINAL | $ENUM},
	{}
};

$ClassInfo _Foo$T_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER | $ENUM,
	"p.Foo$T",
	"java.lang.Enum",
	nullptr,
	_Foo$T_FieldInfo_,
	_Foo$T_MethodInfo_,
	"Ljava/lang/Enum<Lp/Foo$T;>;",
	nullptr,
	_Foo$T_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"p.Foo"
};

$Object* allocate$Foo$T($Class* clazz) {
	return $of($alloc(Foo$T));
}

Foo$T* Foo$T::ONE = nullptr;
$Foo$TArray* Foo$T::$VALUES = nullptr;

$Foo$TArray* Foo$T::$values() {
	$init(Foo$T);
	return $new($Foo$TArray, {Foo$T::ONE});
}

$Foo$TArray* Foo$T::values() {
	$init(Foo$T);
	return $cast($Foo$TArray, Foo$T::$VALUES->clone());
}

Foo$T* Foo$T::valueOf($String* name) {
	$init(Foo$T);
	return $cast(Foo$T, $Enum::valueOf(Foo$T::class$, name));
}

void Foo$T::init$($String* $enum$name, int32_t $enum$ordinal) {
	$Enum::init$($enum$name, $enum$ordinal);
}

void clinit$Foo$T($Class* class$) {
	$assignStatic(Foo$T::ONE, $new(Foo$T, "ONE"_s, 0));
	$assignStatic(Foo$T::$VALUES, Foo$T::$values());
}

Foo$T::Foo$T() {
}

$Class* Foo$T::load$($String* name, bool initialize) {
	$loadClass(Foo$T, name, initialize, &_Foo$T_ClassInfo_, clinit$Foo$T, allocate$Foo$T);
	return class$;
}

$Class* Foo$T::class$ = nullptr;

} // p