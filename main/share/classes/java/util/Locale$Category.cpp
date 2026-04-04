#include <java/util/Locale$Category.h>
#include <java/lang/Enum.h>
#include <java/util/Locale.h>
#include <jcpp.h>

#undef DISPLAY
#undef FORMAT

using $Locale$CategoryArray = $Array<::java::util::Locale$Category>;
using $ClassInfo = ::java::lang::ClassInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace util {

Locale$Category* Locale$Category::DISPLAY = nullptr;
Locale$Category* Locale$Category::FORMAT = nullptr;
$Locale$CategoryArray* Locale$Category::$VALUES = nullptr;

$Locale$CategoryArray* Locale$Category::$values() {
	$init(Locale$Category);
	return $new($Locale$CategoryArray, {
		Locale$Category::DISPLAY,
		Locale$Category::FORMAT
	});
}

$Locale$CategoryArray* Locale$Category::values() {
	$init(Locale$Category);
	return $cast($Locale$CategoryArray, Locale$Category::$VALUES->clone());
}

Locale$Category* Locale$Category::valueOf($String* name) {
	$init(Locale$Category);
	return $cast(Locale$Category, $Enum::valueOf(Locale$Category::class$, name));
}

void Locale$Category::init$($String* $enum$name, int32_t $enum$ordinal, $String* languageKey, $String* scriptKey, $String* countryKey, $String* variantKey, $String* extensionsKey) {
	$Enum::init$($enum$name, $enum$ordinal);
	$set(this, languageKey, languageKey);
	$set(this, scriptKey, scriptKey);
	$set(this, countryKey, countryKey);
	$set(this, variantKey, variantKey);
	$set(this, extensionsKey, extensionsKey);
}

void Locale$Category::clinit$($Class* clazz) {
	$assignStatic(Locale$Category::DISPLAY, $new(Locale$Category, "DISPLAY"_s, 0, "user.language.display"_s, "user.script.display"_s, "user.country.display"_s, "user.variant.display"_s, "user.extensions.display"_s));
	$assignStatic(Locale$Category::FORMAT, $new(Locale$Category, "FORMAT"_s, 1, "user.language.format"_s, "user.script.format"_s, "user.country.format"_s, "user.variant.format"_s, "user.extensions.format"_s));
	$assignStatic(Locale$Category::$VALUES, Locale$Category::$values());
}

Locale$Category::Locale$Category() {
}

$Class* Locale$Category::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"DISPLAY", "Ljava/util/Locale$Category;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Locale$Category, DISPLAY)},
		{"FORMAT", "Ljava/util/Locale$Category;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Locale$Category, FORMAT)},
		{"$VALUES", "[Ljava/util/Locale$Category;", nullptr, $PRIVATE | $STATIC | $FINAL | $SYNTHETIC, $staticField(Locale$Category, $VALUES)},
		{"languageKey", "Ljava/lang/String;", nullptr, $FINAL, $field(Locale$Category, languageKey)},
		{"scriptKey", "Ljava/lang/String;", nullptr, $FINAL, $field(Locale$Category, scriptKey)},
		{"countryKey", "Ljava/lang/String;", nullptr, $FINAL, $field(Locale$Category, countryKey)},
		{"variantKey", "Ljava/lang/String;", nullptr, $FINAL, $field(Locale$Category, variantKey)},
		{"extensionsKey", "Ljava/lang/String;", nullptr, $FINAL, $field(Locale$Category, extensionsKey)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"$values", "()[Ljava/util/Locale$Category;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(Locale$Category, $values, $Locale$CategoryArray*)},
		{"<init>", "(Ljava/lang/String;ILjava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V", $PRIVATE, $method(Locale$Category, init$, void, $String*, int32_t, $String*, $String*, $String*, $String*, $String*)},
		{"valueOf", "(Ljava/lang/String;)Ljava/util/Locale$Category;", nullptr, $PUBLIC | $STATIC, $staticMethod(Locale$Category, valueOf, Locale$Category*, $String*)},
		{"values", "()[Ljava/util/Locale$Category;", nullptr, $PUBLIC | $STATIC, $staticMethod(Locale$Category, values, $Locale$CategoryArray*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.util.Locale$Category", "java.util.Locale", "Category", $PUBLIC | $STATIC | $FINAL | $ENUM},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER | $ENUM,
		"java.util.Locale$Category",
		"java.lang.Enum",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		"Ljava/lang/Enum<Ljava/util/Locale$Category;>;",
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.util.Locale"
	};
	$loadClass(Locale$Category, name, initialize, &classInfo$$, Locale$Category::clinit$, []($Class* clazz) -> $Object* {
		return $of($alloc(Locale$Category));
	});
	return class$;
}

$Class* Locale$Category::class$ = nullptr;

	} // util
} // java