#include <java/util/regex/Pattern$BitClass.h>
#include <java/lang/AssertionError.h>
#include <java/util/regex/ASCII.h>
#include <java/util/regex/Pattern.h>
#include <jcpp.h>

using $AssertionError = ::java::lang::AssertionError;
using $Character = ::java::lang::Character;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ASCII = ::java::util::regex::ASCII;
using $Pattern = ::java::util::regex::Pattern;

namespace java {
	namespace util {
		namespace regex {

bool Pattern$BitClass::$assertionsDisabled = false;

void Pattern$BitClass::init$() {
	$set(this, bits, $new($booleans, 256));
}

Pattern$BitClass* Pattern$BitClass::add(int32_t c, int32_t flags) {
	if (!Pattern$BitClass::$assertionsDisabled && !(c >= 0 && c <= 255)) {
		$throwNew($AssertionError);
	}
	if ((flags & 2) != 0) {
		if ($ASCII::isAscii(c)) {
			this->bits->set($ASCII::toUpper(c), true);
			this->bits->set($ASCII::toLower(c), true);
		} else if ((flags & 0x40) != 0) {
			this->bits->set($Character::toLowerCase(c), true);
			this->bits->set($Character::toUpperCase(c), true);
		}
	}
	this->bits->set(c, true);
	return this;
}

bool Pattern$BitClass::is(int32_t ch) {
	return ch < 256 && this->bits->get(ch);
}

void Pattern$BitClass::clinit$($Class* clazz) {
	$load($Pattern);
	Pattern$BitClass::$assertionsDisabled = !$Pattern::class$->desiredAssertionStatus();
}

Pattern$BitClass::Pattern$BitClass() {
}

$Class* Pattern$BitClass::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"$assertionsDisabled", "Z", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(Pattern$BitClass, $assertionsDisabled)},
		{"bits", "[Z", nullptr, $FINAL, $field(Pattern$BitClass, bits)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(Pattern$BitClass, init$, void)},
		{"add", "(II)Ljava/util/regex/Pattern$BitClass;", nullptr, 0, $method(Pattern$BitClass, add, Pattern$BitClass*, int32_t, int32_t)},
		{"is", "(I)Z", nullptr, $PUBLIC, $virtualMethod(Pattern$BitClass, is, bool, int32_t)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.util.regex.Pattern$BitClass", "java.util.regex.Pattern", "BitClass", $STATIC | $FINAL},
		{"java.util.regex.Pattern$BmpCharPredicate", "java.util.regex.Pattern", "BmpCharPredicate", $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"java.util.regex.Pattern$BitClass",
		"java.lang.Object",
		"java.util.regex.Pattern$BmpCharPredicate",
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.util.regex.Pattern"
	};
	$loadClass(Pattern$BitClass, name, initialize, &classInfo$$, Pattern$BitClass::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(Pattern$BitClass);
	});
	return class$;
}

$Class* Pattern$BitClass::class$ = nullptr;

		} // regex
	} // util
} // java