#include <jdk/internal/icu/text/BidiBase$TextAttributeConstants$1.h>
#include <java/text/AttributedCharacterIterator$Attribute.h>
#include <jdk/internal/icu/text/BidiBase$TextAttributeConstants.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AttributedCharacterIterator$Attribute = ::java::text::AttributedCharacterIterator$Attribute;

namespace jdk {
	namespace internal {
		namespace icu {
			namespace text {

void BidiBase$TextAttributeConstants$1::init$($String* name) {
	$AttributedCharacterIterator$Attribute::init$(name);
}

BidiBase$TextAttributeConstants$1::BidiBase$TextAttributeConstants$1() {
}

$Class* BidiBase$TextAttributeConstants$1::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/String;)V", nullptr, 0, $method(BidiBase$TextAttributeConstants$1, init$, void, $String*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"jdk.internal.icu.text.BidiBase$TextAttributeConstants",
		"getTextAttribute",
		"(Ljava/lang/String;)Ljava/text/AttributedCharacterIterator$Attribute;"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"jdk.internal.icu.text.BidiBase$TextAttributeConstants", "jdk.internal.icu.text.BidiBase", "TextAttributeConstants", $PRIVATE | $STATIC},
		{"jdk.internal.icu.text.BidiBase$TextAttributeConstants$1", nullptr, nullptr, 0},
		{"java.text.AttributedCharacterIterator$Attribute", "java.text.AttributedCharacterIterator", "Attribute", $PUBLIC | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"jdk.internal.icu.text.BidiBase$TextAttributeConstants$1",
		"java.text.AttributedCharacterIterator$Attribute",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"jdk.internal.icu.text.BidiBase"
	};
	$loadClass(BidiBase$TextAttributeConstants$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(BidiBase$TextAttributeConstants$1);
	});
	return class$;
}

$Class* BidiBase$TextAttributeConstants$1::class$ = nullptr;

			} // text
		} // icu
	} // internal
} // jdk