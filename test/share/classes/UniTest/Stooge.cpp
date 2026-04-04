#include <UniTest/Stooge.h>
#include <java/lang/Enum.h>
#include <jcpp.h>

#undef CURLY
#undef LARRY
#undef MOE

using $StoogeArray = $Array<::UniTest::Stooge>;
using $ClassInfo = ::java::lang::ClassInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace UniTest {

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

void Stooge::clinit$($Class* clazz) {
	$assignStatic(Stooge::LARRY, $new(Stooge, "LARRY"_s, 0));
	$assignStatic(Stooge::MOE, $new(Stooge, "MOE"_s, 1));
	$assignStatic(Stooge::CURLY, $new(Stooge, "CURLY"_s, 2));
	$assignStatic(Stooge::$VALUES, Stooge::$values());
}

Stooge::Stooge() {
}

$Class* Stooge::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"LARRY", "LUniTest/Stooge;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Stooge, LARRY)},
		{"MOE", "LUniTest/Stooge;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Stooge, MOE)},
		{"CURLY", "LUniTest/Stooge;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Stooge, CURLY)},
		{"$VALUES", "[LUniTest/Stooge;", nullptr, $PRIVATE | $STATIC | $FINAL | $SYNTHETIC, $staticField(Stooge, $VALUES)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"$values", "()[LUniTest/Stooge;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(Stooge, $values, $StoogeArray*)},
		{"<init>", "(Ljava/lang/String;I)V", "()V", $PRIVATE, $method(Stooge, init$, void, $String*, int32_t)},
		{"valueOf", "(Ljava/lang/String;)LUniTest/Stooge;", nullptr, $PUBLIC | $STATIC, $staticMethod(Stooge, valueOf, Stooge*, $String*)},
		{"values", "()[LUniTest/Stooge;", nullptr, $PUBLIC | $STATIC, $staticMethod(Stooge, values, $StoogeArray*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER | $ENUM,
		"UniTest.Stooge",
		"java.lang.Enum",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		"Ljava/lang/Enum<LUniTest/Stooge;>;"
	};
	$loadClass(Stooge, name, initialize, &classInfo$$, Stooge::clinit$, []($Class* clazz) -> $Object* {
		return $of($alloc(Stooge));
	});
	return class$;
}

$Class* Stooge::class$ = nullptr;

} // UniTest