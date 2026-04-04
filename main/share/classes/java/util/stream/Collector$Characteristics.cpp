#include <java/util/stream/Collector$Characteristics.h>
#include <java/lang/Enum.h>
#include <java/util/stream/Collector.h>
#include <jcpp.h>

#undef CONCURRENT
#undef IDENTITY_FINISH
#undef UNORDERED

using $Collector$CharacteristicsArray = $Array<::java::util::stream::Collector$Characteristics>;
using $ClassInfo = ::java::lang::ClassInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace util {
		namespace stream {

Collector$Characteristics* Collector$Characteristics::CONCURRENT = nullptr;
Collector$Characteristics* Collector$Characteristics::UNORDERED = nullptr;
Collector$Characteristics* Collector$Characteristics::IDENTITY_FINISH = nullptr;
$Collector$CharacteristicsArray* Collector$Characteristics::$VALUES = nullptr;

$Collector$CharacteristicsArray* Collector$Characteristics::$values() {
	$init(Collector$Characteristics);
	return $new($Collector$CharacteristicsArray, {
		Collector$Characteristics::CONCURRENT,
		Collector$Characteristics::UNORDERED,
		Collector$Characteristics::IDENTITY_FINISH
	});
}

$Collector$CharacteristicsArray* Collector$Characteristics::values() {
	$init(Collector$Characteristics);
	return $cast($Collector$CharacteristicsArray, Collector$Characteristics::$VALUES->clone());
}

Collector$Characteristics* Collector$Characteristics::valueOf($String* name) {
	$init(Collector$Characteristics);
	return $cast(Collector$Characteristics, $Enum::valueOf(Collector$Characteristics::class$, name));
}

void Collector$Characteristics::init$($String* $enum$name, int32_t $enum$ordinal) {
	$Enum::init$($enum$name, $enum$ordinal);
}

void Collector$Characteristics::clinit$($Class* clazz) {
	$assignStatic(Collector$Characteristics::CONCURRENT, $new(Collector$Characteristics, "CONCURRENT"_s, 0));
	$assignStatic(Collector$Characteristics::UNORDERED, $new(Collector$Characteristics, "UNORDERED"_s, 1));
	$assignStatic(Collector$Characteristics::IDENTITY_FINISH, $new(Collector$Characteristics, "IDENTITY_FINISH"_s, 2));
	$assignStatic(Collector$Characteristics::$VALUES, Collector$Characteristics::$values());
}

Collector$Characteristics::Collector$Characteristics() {
}

$Class* Collector$Characteristics::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"CONCURRENT", "Ljava/util/stream/Collector$Characteristics;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Collector$Characteristics, CONCURRENT)},
		{"UNORDERED", "Ljava/util/stream/Collector$Characteristics;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Collector$Characteristics, UNORDERED)},
		{"IDENTITY_FINISH", "Ljava/util/stream/Collector$Characteristics;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Collector$Characteristics, IDENTITY_FINISH)},
		{"$VALUES", "[Ljava/util/stream/Collector$Characteristics;", nullptr, $PRIVATE | $STATIC | $FINAL | $SYNTHETIC, $staticField(Collector$Characteristics, $VALUES)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"$values", "()[Ljava/util/stream/Collector$Characteristics;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(Collector$Characteristics, $values, $Collector$CharacteristicsArray*)},
		{"<init>", "(Ljava/lang/String;I)V", "()V", $PRIVATE, $method(Collector$Characteristics, init$, void, $String*, int32_t)},
		{"valueOf", "(Ljava/lang/String;)Ljava/util/stream/Collector$Characteristics;", nullptr, $PUBLIC | $STATIC, $staticMethod(Collector$Characteristics, valueOf, Collector$Characteristics*, $String*)},
		{"values", "()[Ljava/util/stream/Collector$Characteristics;", nullptr, $PUBLIC | $STATIC, $staticMethod(Collector$Characteristics, values, $Collector$CharacteristicsArray*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.util.stream.Collector$Characteristics", "java.util.stream.Collector", "Characteristics", $PUBLIC | $STATIC | $FINAL | $ENUM},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER | $ENUM,
		"java.util.stream.Collector$Characteristics",
		"java.lang.Enum",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		"Ljava/lang/Enum<Ljava/util/stream/Collector$Characteristics;>;",
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.util.stream.Collector"
	};
	$loadClass(Collector$Characteristics, name, initialize, &classInfo$$, Collector$Characteristics::clinit$, []($Class* clazz) -> $Object* {
		return $of($alloc(Collector$Characteristics));
	});
	return class$;
}

$Class* Collector$Characteristics::class$ = nullptr;

		} // stream
	} // util
} // java