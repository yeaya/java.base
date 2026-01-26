#include <SiblingIOEHandle$APP.h>

#include <SiblingIOEHandle.h>
#include <java/lang/Enum.h>
#include <jcpp.h>

#undef A
#undef B
#undef C

using $SiblingIOEHandle$APPArray = $Array<SiblingIOEHandle$APP>;
using $ClassInfo = ::java::lang::ClassInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$FieldInfo _SiblingIOEHandle$APP_FieldInfo_[] = {
	{"A", "LSiblingIOEHandle$APP;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(SiblingIOEHandle$APP, A)},
	{"B", "LSiblingIOEHandle$APP;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(SiblingIOEHandle$APP, B)},
	{"C", "LSiblingIOEHandle$APP;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(SiblingIOEHandle$APP, C)},
	{"$VALUES", "[LSiblingIOEHandle$APP;", nullptr, $PRIVATE | $STATIC | $FINAL | $SYNTHETIC, $staticField(SiblingIOEHandle$APP, $VALUES)},
	{}
};

$MethodInfo _SiblingIOEHandle$APP_MethodInfo_[] = {
	{"$values", "()[LSiblingIOEHandle$APP;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(SiblingIOEHandle$APP, $values, $SiblingIOEHandle$APPArray*)},
	{"<init>", "(Ljava/lang/String;I)V", "()V", $PRIVATE, $method(SiblingIOEHandle$APP, init$, void, $String*, int32_t)},
	{"valueOf", "(Ljava/lang/String;)LSiblingIOEHandle$APP;", nullptr, $PUBLIC | $STATIC, $staticMethod(SiblingIOEHandle$APP, valueOf, SiblingIOEHandle$APP*, $String*)},
	{"values", "()[LSiblingIOEHandle$APP;", nullptr, $PUBLIC | $STATIC, $staticMethod(SiblingIOEHandle$APP, values, $SiblingIOEHandle$APPArray*)},
	{}
};

$InnerClassInfo _SiblingIOEHandle$APP_InnerClassesInfo_[] = {
	{"SiblingIOEHandle$APP", "SiblingIOEHandle", "APP", $PRIVATE | $STATIC | $FINAL | $ENUM},
	{}
};

$ClassInfo _SiblingIOEHandle$APP_ClassInfo_ = {
	$FINAL | $ACC_SUPER | $ENUM,
	"SiblingIOEHandle$APP",
	"java.lang.Enum",
	nullptr,
	_SiblingIOEHandle$APP_FieldInfo_,
	_SiblingIOEHandle$APP_MethodInfo_,
	"Ljava/lang/Enum<LSiblingIOEHandle$APP;>;",
	nullptr,
	_SiblingIOEHandle$APP_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"SiblingIOEHandle"
};

$Object* allocate$SiblingIOEHandle$APP($Class* clazz) {
	return $of($alloc(SiblingIOEHandle$APP));
}

SiblingIOEHandle$APP* SiblingIOEHandle$APP::A = nullptr;
SiblingIOEHandle$APP* SiblingIOEHandle$APP::B = nullptr;
SiblingIOEHandle$APP* SiblingIOEHandle$APP::C = nullptr;
$SiblingIOEHandle$APPArray* SiblingIOEHandle$APP::$VALUES = nullptr;

$SiblingIOEHandle$APPArray* SiblingIOEHandle$APP::$values() {
	$init(SiblingIOEHandle$APP);
	return $new($SiblingIOEHandle$APPArray, {
		SiblingIOEHandle$APP::A,
		SiblingIOEHandle$APP::B,
		SiblingIOEHandle$APP::C
	});
}

$SiblingIOEHandle$APPArray* SiblingIOEHandle$APP::values() {
	$init(SiblingIOEHandle$APP);
	return $cast($SiblingIOEHandle$APPArray, SiblingIOEHandle$APP::$VALUES->clone());
}

SiblingIOEHandle$APP* SiblingIOEHandle$APP::valueOf($String* name) {
	$init(SiblingIOEHandle$APP);
	return $cast(SiblingIOEHandle$APP, $Enum::valueOf(SiblingIOEHandle$APP::class$, name));
}

void SiblingIOEHandle$APP::init$($String* $enum$name, int32_t $enum$ordinal) {
	$Enum::init$($enum$name, $enum$ordinal);
}

void clinit$SiblingIOEHandle$APP($Class* class$) {
	$assignStatic(SiblingIOEHandle$APP::A, $new(SiblingIOEHandle$APP, "A"_s, 0));
	$assignStatic(SiblingIOEHandle$APP::B, $new(SiblingIOEHandle$APP, "B"_s, 1));
	$assignStatic(SiblingIOEHandle$APP::C, $new(SiblingIOEHandle$APP, "C"_s, 2));
	$assignStatic(SiblingIOEHandle$APP::$VALUES, SiblingIOEHandle$APP::$values());
}

SiblingIOEHandle$APP::SiblingIOEHandle$APP() {
}

$Class* SiblingIOEHandle$APP::load$($String* name, bool initialize) {
	$loadClass(SiblingIOEHandle$APP, name, initialize, &_SiblingIOEHandle$APP_ClassInfo_, clinit$SiblingIOEHandle$APP, allocate$SiblingIOEHandle$APP);
	return class$;
}

$Class* SiblingIOEHandle$APP::class$ = nullptr;