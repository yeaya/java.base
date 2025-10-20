#include <NonCharacterMapping.h>

#include <java/lang/Array.h>
#include <java/lang/Character.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/RuntimeException.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
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

$FieldInfo _NonCharacterMapping_FieldInfo_[] = {
	{"ENGLISH", "Ljava/util/Locale;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(NonCharacterMapping, ENGLISH)},
	{"TURKISH", "Ljava/util/Locale;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(NonCharacterMapping, TURKISH)},
	{}
};

$MethodInfo _NonCharacterMapping_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(NonCharacterMapping::*)()>(&NonCharacterMapping::init$))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&NonCharacterMapping::main))},
	{}
};

$ClassInfo _NonCharacterMapping_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"NonCharacterMapping",
	"java.lang.Object",
	nullptr,
	_NonCharacterMapping_FieldInfo_,
	_NonCharacterMapping_MethodInfo_
};

$Object* allocate$NonCharacterMapping($Class* clazz) {
	return $of($alloc(NonCharacterMapping));
}

$Locale* NonCharacterMapping::ENGLISH = nullptr;
$Locale* NonCharacterMapping::TURKISH = nullptr;

void NonCharacterMapping::init$() {
}

void NonCharacterMapping::main($StringArray* args) {
	$init(NonCharacterMapping);
	$useLocalCurrentObjectStackCache();
	if ($Character::toLowerCase((char16_t)0xFFFF) != (char16_t)0xFFFF) {
		$throwNew($RuntimeException);
	}
	if ($Character::toUpperCase((char16_t)0xFFFF) != (char16_t)0xFFFF) {
		$throwNew($RuntimeException);
	}
	if ($Character::toTitleCase((char16_t)0xFFFF) != (char16_t)0xFFFF) {
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

void clinit$NonCharacterMapping($Class* class$) {
	$assignStatic(NonCharacterMapping::ENGLISH, $new($Locale, "en"_s));
	$assignStatic(NonCharacterMapping::TURKISH, $new($Locale, "tr"_s));
}

NonCharacterMapping::NonCharacterMapping() {
}

$Class* NonCharacterMapping::load$($String* name, bool initialize) {
	$loadClass(NonCharacterMapping, name, initialize, &_NonCharacterMapping_ClassInfo_, clinit$NonCharacterMapping, allocate$NonCharacterMapping);
	return class$;
}

$Class* NonCharacterMapping::class$ = nullptr;