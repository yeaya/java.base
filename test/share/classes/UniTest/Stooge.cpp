#include <UniTest/Stooge.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Enum.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

#undef MOE
#undef CURLY
#undef LARRY

using $StoogeArray = $Array<::UniTest::Stooge>;
using $ClassInfo = ::java::lang::ClassInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace UniTest {

$FieldInfo _Stooge_FieldInfo_[] = {
	{"LARRY", "LUniTest/Stooge;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Stooge, LARRY)},
	{"MOE", "LUniTest/Stooge;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Stooge, MOE)},
	{"CURLY", "LUniTest/Stooge;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Stooge, CURLY)},
	{"$VALUES", "[LUniTest/Stooge;", nullptr, $PRIVATE | $STATIC | $FINAL | $SYNTHETIC, $staticField(Stooge, $VALUES)},
	{}
};

$MethodInfo _Stooge_MethodInfo_[] = {
	{"$values", "()[LUniTest/Stooge;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$StoogeArray*(*)()>(&Stooge::$values))},
	{"<init>", "(Ljava/lang/String;I)V", "()V", $PRIVATE, $method(static_cast<void(Stooge::*)($String*,int32_t)>(&Stooge::init$))},
	{"valueOf", "(Ljava/lang/String;)LUniTest/Stooge;", nullptr, $PUBLIC | $STATIC, $method(static_cast<Stooge*(*)($String*)>(&Stooge::valueOf))},
	{"values", "()[LUniTest/Stooge;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$StoogeArray*(*)()>(&Stooge::values))},
	{}
};

$ClassInfo _Stooge_ClassInfo_ = {
	$FINAL | $ACC_SUPER | $ENUM,
	"UniTest.Stooge",
	"java.lang.Enum",
	nullptr,
	_Stooge_FieldInfo_,
	_Stooge_MethodInfo_,
	"Ljava/lang/Enum<LUniTest/Stooge;>;"
};

$Object* allocate$Stooge($Class* clazz) {
	return $of($alloc(Stooge));
}

Stooge* Stooge::LARRY = nullptr;
Stooge* Stooge::MOE = nullptr;
Stooge* Stooge::CURLY = nullptr;
$StoogeArray* Stooge::$VALUES = nullptr;

$StoogeArray* Stooge::$values() {
	$init(Stooge);
	return $new($StoogeArray, {
		Stooge::LARRY,
		Stooge::MOE,
		Stooge::CURLY
	});
}

$StoogeArray* Stooge::values() {
	$init(Stooge);
	return $cast($StoogeArray, Stooge::$VALUES->clone());
}

Stooge* Stooge::valueOf($String* name) {
	$init(Stooge);
	return $cast(Stooge, $Enum::valueOf(Stooge::class$, name));
}

void Stooge::init$($String* $enum$name, int32_t $enum$ordinal) {
	$Enum::init$($enum$name, $enum$ordinal);
}

void clinit$Stooge($Class* class$) {
	$assignStatic(Stooge::LARRY, $new(Stooge, "LARRY"_s, 0));
	$assignStatic(Stooge::MOE, $new(Stooge, "MOE"_s, 1));
	$assignStatic(Stooge::CURLY, $new(Stooge, "CURLY"_s, 2));
	$assignStatic(Stooge::$VALUES, Stooge::$values());
}

Stooge::Stooge() {
}

$Class* Stooge::load$($String* name, bool initialize) {
	$loadClass(Stooge, name, initialize, &_Stooge_ClassInfo_, clinit$Stooge, allocate$Stooge);
	return class$;
}

$Class* Stooge::class$ = nullptr;

} // UniTest