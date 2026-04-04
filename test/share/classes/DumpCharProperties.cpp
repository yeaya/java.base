#include <DumpCharProperties.h>
#include <java/util/Locale.h>
#include <jcpp.h>

#undef GERMAN

using $Boolean = ::java::lang::Boolean;
using $Byte = ::java::lang::Byte;
using $Character = ::java::lang::Character;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $Locale = ::java::util::Locale;

$Locale* DumpCharProperties::turkish = nullptr;

void DumpCharProperties::init$() {
}

$String* DumpCharProperties::charProps(int32_t i) {
	$init(DumpCharProperties);
	$useLocalObjectStack();
	$var($String, s, $new($String, $$new($ints, {i}), 0, 1));
	$init($Locale);
	return $String::format("%b %b %b %b %b %b %b %b %b %b %b %b %d %d %d %d %d %b %b %d %d %b %d %d"_s, $$new($ObjectArray, {
		$($Boolean::valueOf($Character::isLowerCase(i))),
		$($Boolean::valueOf($Character::isUpperCase(i))),
		$($Boolean::valueOf($Character::isTitleCase(i))),
		$($Boolean::valueOf($Character::isDigit(i))),
		$($Boolean::valueOf($Character::isDefined(i))),
		$($Boolean::valueOf($Character::isLetter(i))),
		$($Boolean::valueOf($Character::isLetterOrDigit(i))),
		$($Boolean::valueOf($Character::isJavaIdentifierStart(i))),
		$($Boolean::valueOf($Character::isJavaIdentifierPart(i))),
		$($Boolean::valueOf($Character::isUnicodeIdentifierStart(i))),
		$($Boolean::valueOf($Character::isUnicodeIdentifierPart(i))),
		$($Boolean::valueOf($Character::isIdentifierIgnorable(i))),
		$($Integer::valueOf($Character::toLowerCase(i))),
		$($Integer::valueOf($Character::toUpperCase(i))),
		$($Integer::valueOf($Character::toTitleCase(i))),
		$($Integer::valueOf($Character::digit(i, 16))),
		$($Integer::valueOf($Character::getNumericValue(i))),
		$($Boolean::valueOf($Character::isSpaceChar(i))),
		$($Boolean::valueOf($Character::isWhitespace(i))),
		$($Integer::valueOf($Character::getType(i))),
		$($Byte::valueOf($Character::getDirectionality(i))),
		$($Boolean::valueOf($Character::isMirrored(i))),
		$($Integer::valueOf((int32_t)$(s->toUpperCase($Locale::GERMAN))->charAt(0))),
		$($Integer::valueOf((int32_t)$(s->toUpperCase(DumpCharProperties::turkish))->charAt(0)))
	}));
}

void DumpCharProperties::main($StringArray* args) {
	$init(DumpCharProperties);
	$useLocalObjectStack();
	for (int32_t i = 0; i < 17 * 0x00010000; ++i) {
		$nc($System::out)->println($(charProps(i)));
	}
}

void DumpCharProperties::clinit$($Class* clazz) {
	$assignStatic(DumpCharProperties::turkish, $new($Locale, "tr"_s));
}

DumpCharProperties::DumpCharProperties() {
}

$Class* DumpCharProperties::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"turkish", "Ljava/util/Locale;", nullptr, $STATIC | $FINAL, $staticField(DumpCharProperties, turkish)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(DumpCharProperties, init$, void)},
		{"charProps", "(I)Ljava/lang/String;", nullptr, $STATIC, $staticMethod(DumpCharProperties, charProps, $String*, int32_t)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(DumpCharProperties, main, void, $StringArray*), "java.lang.Throwable"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"DumpCharProperties",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(DumpCharProperties, name, initialize, &classInfo$$, DumpCharProperties::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(DumpCharProperties);
	});
	return class$;
}

$Class* DumpCharProperties::class$ = nullptr;