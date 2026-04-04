#include <NonCharacterMapping.h>
#include <java/util/Locale.h>
#include <jcpp.h>

#undef ENGLISH
#undef TURKISH

using $Character = ::java::lang::Character;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $Locale = ::java::util::Locale;

$Locale* NonCharacterMapping::ENGLISH = nullptr;
$Locale* NonCharacterMapping::TURKISH = nullptr;

void NonCharacterMapping::init$() {
}

void NonCharacterMapping::main($StringArray* args) {
	$init(NonCharacterMapping);
	$useLocalObjectStack();
	if ($Character::toLowerCase((char16_t)0xffff) != (char16_t)0xffff) {
		$throwNew($RuntimeException);
	}
	if ($Character::toUpperCase((char16_t)0xffff) != (char16_t)0xffff) {
		$throwNew($RuntimeException);
	}
	if ($Character::toTitleCase((char16_t)0xffff) != (char16_t)0xffff) {
		$throwNew($RuntimeException);
	}
	if (!$(u"\uffff"_s->toLowerCase(NonCharacterMapping::ENGLISH))->equals(u"\uffff"_s)) {
		$throwNew($RuntimeException);
	}
	if (!$(u"\uffff"_s->toUpperCase(NonCharacterMapping::ENGLISH))->equals(u"\uffff"_s)) {
		$throwNew($RuntimeException);
	}
	if (!$(u"\uffff"_s->toLowerCase(NonCharacterMapping::TURKISH))->equals(u"\uffff"_s)) {
		$throwNew($RuntimeException);
	}
	if (!$(u"\uffff"_s->toUpperCase(NonCharacterMapping::TURKISH))->equals(u"\uffff"_s)) {
		$throwNew($RuntimeException);
	}
	if (!$(u"A\uffff"_s->toLowerCase(NonCharacterMapping::ENGLISH))->equals(u"a\uffff"_s)) {
		$throwNew($RuntimeException);
	}
	if (!$(u"A\uffff"_s->toUpperCase(NonCharacterMapping::ENGLISH))->equals(u"A\uffff"_s)) {
		$throwNew($RuntimeException);
	}
	if (!$(u"A\uffff"_s->toLowerCase(NonCharacterMapping::TURKISH))->equals(u"a\uffff"_s)) {
		$throwNew($RuntimeException);
	}
	if (!$(u"A\uffff"_s->toUpperCase(NonCharacterMapping::TURKISH))->equals(u"A\uffff"_s)) {
		$throwNew($RuntimeException);
	}
	if (!$(u"a\uffff"_s->toLowerCase(NonCharacterMapping::ENGLISH))->equals(u"a\uffff"_s)) {
		$throwNew($RuntimeException);
	}
	if (!$(u"a\uffff"_s->toUpperCase(NonCharacterMapping::ENGLISH))->equals(u"A\uffff"_s)) {
		$throwNew($RuntimeException);
	}
	if (!$(u"a\uffff"_s->toLowerCase(NonCharacterMapping::TURKISH))->equals(u"a\uffff"_s)) {
		$throwNew($RuntimeException);
	}
	if (!$(u"a\uffff"_s->toUpperCase(NonCharacterMapping::TURKISH))->equals(u"A\uffff"_s)) {
		$throwNew($RuntimeException);
	}
}

void NonCharacterMapping::clinit$($Class* clazz) {
	$assignStatic(NonCharacterMapping::ENGLISH, $new($Locale, "en"_s));
	$assignStatic(NonCharacterMapping::TURKISH, $new($Locale, "tr"_s));
}

NonCharacterMapping::NonCharacterMapping() {
}

$Class* NonCharacterMapping::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"ENGLISH", "Ljava/util/Locale;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(NonCharacterMapping, ENGLISH)},
		{"TURKISH", "Ljava/util/Locale;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(NonCharacterMapping, TURKISH)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(NonCharacterMapping, init$, void)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(NonCharacterMapping, main, void, $StringArray*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"NonCharacterMapping",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(NonCharacterMapping, name, initialize, &classInfo$$, NonCharacterMapping::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(NonCharacterMapping);
	});
	return class$;
}

$Class* NonCharacterMapping::class$ = nullptr;