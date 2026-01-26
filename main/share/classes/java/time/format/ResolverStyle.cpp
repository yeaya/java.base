#include <java/time/format/ResolverStyle.h>

#include <java/lang/Enum.h>
#include <jcpp.h>

#undef LENIENT
#undef SMART
#undef STRICT

using $ResolverStyleArray = $Array<::java::time::format::ResolverStyle>;
using $ClassInfo = ::java::lang::ClassInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace time {
		namespace format {

$FieldInfo _ResolverStyle_FieldInfo_[] = {
	{"STRICT", "Ljava/time/format/ResolverStyle;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(ResolverStyle, STRICT)},
	{"SMART", "Ljava/time/format/ResolverStyle;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(ResolverStyle, SMART)},
	{"LENIENT", "Ljava/time/format/ResolverStyle;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(ResolverStyle, LENIENT)},
	{"$VALUES", "[Ljava/time/format/ResolverStyle;", nullptr, $PRIVATE | $STATIC | $FINAL | $SYNTHETIC, $staticField(ResolverStyle, $VALUES)},
	{}
};

$MethodInfo _ResolverStyle_MethodInfo_[] = {
	{"$values", "()[Ljava/time/format/ResolverStyle;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(ResolverStyle, $values, $ResolverStyleArray*)},
	{"<init>", "(Ljava/lang/String;I)V", "()V", $PRIVATE, $method(ResolverStyle, init$, void, $String*, int32_t)},
	{"valueOf", "(Ljava/lang/String;)Ljava/time/format/ResolverStyle;", nullptr, $PUBLIC | $STATIC, $staticMethod(ResolverStyle, valueOf, ResolverStyle*, $String*)},
	{"values", "()[Ljava/time/format/ResolverStyle;", nullptr, $PUBLIC | $STATIC, $staticMethod(ResolverStyle, values, $ResolverStyleArray*)},
	{}
};

$ClassInfo _ResolverStyle_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER | $ENUM,
	"java.time.format.ResolverStyle",
	"java.lang.Enum",
	nullptr,
	_ResolverStyle_FieldInfo_,
	_ResolverStyle_MethodInfo_,
	"Ljava/lang/Enum<Ljava/time/format/ResolverStyle;>;"
};

$Object* allocate$ResolverStyle($Class* clazz) {
	return $of($alloc(ResolverStyle));
}

ResolverStyle* ResolverStyle::STRICT = nullptr;
ResolverStyle* ResolverStyle::SMART = nullptr;
ResolverStyle* ResolverStyle::LENIENT = nullptr;
$ResolverStyleArray* ResolverStyle::$VALUES = nullptr;

$ResolverStyleArray* ResolverStyle::$values() {
	$init(ResolverStyle);
	return $new($ResolverStyleArray, {
		ResolverStyle::STRICT,
		ResolverStyle::SMART,
		ResolverStyle::LENIENT
	});
}

$ResolverStyleArray* ResolverStyle::values() {
	$init(ResolverStyle);
	return $cast($ResolverStyleArray, ResolverStyle::$VALUES->clone());
}

ResolverStyle* ResolverStyle::valueOf($String* name) {
	$init(ResolverStyle);
	return $cast(ResolverStyle, $Enum::valueOf(ResolverStyle::class$, name));
}

void ResolverStyle::init$($String* $enum$name, int32_t $enum$ordinal) {
	$Enum::init$($enum$name, $enum$ordinal);
}

void clinit$ResolverStyle($Class* class$) {
	$assignStatic(ResolverStyle::STRICT, $new(ResolverStyle, "STRICT"_s, 0));
	$assignStatic(ResolverStyle::SMART, $new(ResolverStyle, "SMART"_s, 1));
	$assignStatic(ResolverStyle::LENIENT, $new(ResolverStyle, "LENIENT"_s, 2));
	$assignStatic(ResolverStyle::$VALUES, ResolverStyle::$values());
}

ResolverStyle::ResolverStyle() {
}

$Class* ResolverStyle::load$($String* name, bool initialize) {
	$loadClass(ResolverStyle, name, initialize, &_ResolverStyle_ClassInfo_, clinit$ResolverStyle, allocate$ResolverStyle);
	return class$;
}

$Class* ResolverStyle::class$ = nullptr;

		} // format
	} // time
} // java