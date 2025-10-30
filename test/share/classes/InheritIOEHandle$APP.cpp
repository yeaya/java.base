#include <InheritIOEHandle$APP.h>

#include <InheritIOEHandle.h>
#include <java/lang/Enum.h>
#include <jcpp.h>

#undef A
#undef B
#undef C

using $InheritIOEHandle = ::InheritIOEHandle;
using $InheritIOEHandle$APPArray = $Array<InheritIOEHandle$APP>;
using $ClassInfo = ::java::lang::ClassInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$FieldInfo _InheritIOEHandle$APP_FieldInfo_[] = {
	{"A", "LInheritIOEHandle$APP;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(InheritIOEHandle$APP, A)},
	{"B", "LInheritIOEHandle$APP;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(InheritIOEHandle$APP, B)},
	{"C", "LInheritIOEHandle$APP;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(InheritIOEHandle$APP, C)},
	{"$VALUES", "[LInheritIOEHandle$APP;", nullptr, $PRIVATE | $STATIC | $FINAL | $SYNTHETIC, $staticField(InheritIOEHandle$APP, $VALUES)},
	{}
};

$MethodInfo _InheritIOEHandle$APP_MethodInfo_[] = {
	{"$values", "()[LInheritIOEHandle$APP;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$InheritIOEHandle$APPArray*(*)()>(&InheritIOEHandle$APP::$values))},
	{"<init>", "(Ljava/lang/String;I)V", "()V", $PRIVATE, $method(static_cast<void(InheritIOEHandle$APP::*)($String*,int32_t)>(&InheritIOEHandle$APP::init$))},
	{"valueOf", "(Ljava/lang/String;)LInheritIOEHandle$APP;", nullptr, $PUBLIC | $STATIC, $method(static_cast<InheritIOEHandle$APP*(*)($String*)>(&InheritIOEHandle$APP::valueOf))},
	{"values", "()[LInheritIOEHandle$APP;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$InheritIOEHandle$APPArray*(*)()>(&InheritIOEHandle$APP::values))},
	{}
};

$InnerClassInfo _InheritIOEHandle$APP_InnerClassesInfo_[] = {
	{"InheritIOEHandle$APP", "InheritIOEHandle", "APP", $PRIVATE | $STATIC | $FINAL | $ENUM},
	{}
};

$ClassInfo _InheritIOEHandle$APP_ClassInfo_ = {
	$FINAL | $ACC_SUPER | $ENUM,
	"InheritIOEHandle$APP",
	"java.lang.Enum",
	nullptr,
	_InheritIOEHandle$APP_FieldInfo_,
	_InheritIOEHandle$APP_MethodInfo_,
	"Ljava/lang/Enum<LInheritIOEHandle$APP;>;",
	nullptr,
	_InheritIOEHandle$APP_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"InheritIOEHandle"
};

$Object* allocate$InheritIOEHandle$APP($Class* clazz) {
	return $of($alloc(InheritIOEHandle$APP));
}

InheritIOEHandle$APP* InheritIOEHandle$APP::A = nullptr;
InheritIOEHandle$APP* InheritIOEHandle$APP::B = nullptr;
InheritIOEHandle$APP* InheritIOEHandle$APP::C = nullptr;
$InheritIOEHandle$APPArray* InheritIOEHandle$APP::$VALUES = nullptr;

$InheritIOEHandle$APPArray* InheritIOEHandle$APP::$values() {
	$init(InheritIOEHandle$APP);
	return $new($InheritIOEHandle$APPArray, {
		InheritIOEHandle$APP::A,
		InheritIOEHandle$APP::B,
		InheritIOEHandle$APP::C
	});
}

$InheritIOEHandle$APPArray* InheritIOEHandle$APP::values() {
	$init(InheritIOEHandle$APP);
	return $cast($InheritIOEHandle$APPArray, InheritIOEHandle$APP::$VALUES->clone());
}

InheritIOEHandle$APP* InheritIOEHandle$APP::valueOf($String* name) {
	$init(InheritIOEHandle$APP);
	return $cast(InheritIOEHandle$APP, $Enum::valueOf(InheritIOEHandle$APP::class$, name));
}

void InheritIOEHandle$APP::init$($String* $enum$name, int32_t $enum$ordinal) {
	$Enum::init$($enum$name, $enum$ordinal);
}

void clinit$InheritIOEHandle$APP($Class* class$) {
	$assignStatic(InheritIOEHandle$APP::A, $new(InheritIOEHandle$APP, "A"_s, 0));
	$assignStatic(InheritIOEHandle$APP::B, $new(InheritIOEHandle$APP, "B"_s, 1));
	$assignStatic(InheritIOEHandle$APP::C, $new(InheritIOEHandle$APP, "C"_s, 2));
	$assignStatic(InheritIOEHandle$APP::$VALUES, InheritIOEHandle$APP::$values());
}

InheritIOEHandle$APP::InheritIOEHandle$APP() {
}

$Class* InheritIOEHandle$APP::load$($String* name, bool initialize) {
	$loadClass(InheritIOEHandle$APP, name, initialize, &_InheritIOEHandle$APP_ClassInfo_, clinit$InheritIOEHandle$APP, allocate$InheritIOEHandle$APP);
	return class$;
}

$Class* InheritIOEHandle$APP::class$ = nullptr;