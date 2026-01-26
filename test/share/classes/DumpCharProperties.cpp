#include <DumpCharProperties.h>

#include <java/util/Locale.h>
#include <jcpp.h>

#undef GERMAN

using $PrintStream = ::java::io::PrintStream;
using $Boolean = ::java::lang::Boolean;
using $Byte = ::java::lang::Byte;
using $Character = ::java::lang::Character;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $Locale = ::java::util::Locale;

$FieldInfo _DumpCharProperties_FieldInfo_[] = {
	{"turkish", "Ljava/util/Locale;", nullptr, $STATIC | $FINAL, $staticField(DumpCharProperties, turkish)},
	{}
};

$MethodInfo _DumpCharProperties_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(DumpCharProperties, init$, void)},
	{"charProps", "(I)Ljava/lang/String;", nullptr, $STATIC, $staticMethod(DumpCharProperties, charProps, $String*, int32_t)},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(DumpCharProperties, main, void, $StringArray*), "java.lang.Throwable"},
	{}
};

$ClassInfo _DumpCharProperties_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"DumpCharProperties",
	"java.lang.Object",
	nullptr,
	_DumpCharProperties_FieldInfo_,
	_DumpCharProperties_MethodInfo_
};

$Object* allocate$DumpCharProperties($Class* clazz) {
	return $of($alloc(DumpCharProperties));
}

$Locale* DumpCharProperties::turkish = nullptr;

void DumpCharProperties::init$() {
}

$String* DumpCharProperties::charProps(int32_t i) {
	$init(DumpCharProperties);
	$useLocalCurrentObjectStackCache();
	$var($String, s, $new($String, $$new($ints, {i}), 0, 1));
	$init($Locale);
	return $String::format("%b %b %b %b %b %b %b %b %b %b %b %b %d %d %d %d %d %b %b %d %d %b %d %d"_s, $$new($ObjectArray, {
		$($of($Boolean::valueOf($Character::isLowerCase(i)))),
		$($of($Boolean::valueOf($Character::isUpperCase(i)))),
		$($of($Boolean::valueOf($Character::isTitleCase(i)))),
		$($of($Boolean::valueOf($Character::isDigit(i)))),
		$($of($Boolean::valueOf($Character::isDefined(i)))),
		$($of($Boolean::valueOf($Character::isLetter(i)))),
		$($of($Boolean::valueOf($Character::isLetterOrDigit(i)))),
		$($of($Boolean::valueOf($Character::isJavaIdentifierStart(i)))),
		$($of($Boolean::valueOf($Character::isJavaIdentifierPart(i)))),
		$($of($Boolean::valueOf($Character::isUnicodeIdentifierStart(i)))),
		$($of($Boolean::valueOf($Character::isUnicodeIdentifierPart(i)))),
		$($of($Boolean::valueOf($Character::isIdentifierIgnorable(i)))),
		$($of($Integer::valueOf($Character::toLowerCase(i)))),
		$($of($Integer::valueOf($Character::toUpperCase(i)))),
		$($of($Integer::valueOf($Character::toTitleCase(i)))),
		$($of($Integer::valueOf($Character::digit(i, 16)))),
		$($of($Integer::valueOf($Character::getNumericValue(i)))),
		$($of($Boolean::valueOf($Character::isSpaceChar(i)))),
		$($of($Boolean::valueOf($Character::isWhitespace(i)))),
		$($of($Integer::valueOf($Character::getType(i)))),
		$($of($Byte::valueOf($Character::getDirectionality(i)))),
		$($of($Boolean::valueOf($Character::isMirrored(i)))),
		$($of($Integer::valueOf((int32_t)$(s->toUpperCase($Locale::GERMAN))->charAt(0)))),
		$($of($Integer::valueOf((int32_t)$(s->toUpperCase(DumpCharProperties::turkish))->charAt(0))))
	}));
}

void DumpCharProperties::main($StringArray* args) {
	$init(DumpCharProperties);
	$useLocalCurrentObjectStackCache();
	for (int32_t i = 0; i < 17 * 0x00010000; ++i) {
		$nc($System::out)->println($(charProps(i)));
	}
}

void clinit$DumpCharProperties($Class* class$) {
	$assignStatic(DumpCharProperties::turkish, $new($Locale, "tr"_s));
}

DumpCharProperties::DumpCharProperties() {
}

$Class* DumpCharProperties::load$($String* name, bool initialize) {
	$loadClass(DumpCharProperties, name, initialize, &_DumpCharProperties_ClassInfo_, clinit$DumpCharProperties, allocate$DumpCharProperties);
	return class$;
}

$Class* DumpCharProperties::class$ = nullptr;