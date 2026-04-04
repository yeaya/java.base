#include <java/text/Format$Field.h>
#include <java/text/AttributedCharacterIterator$Attribute.h>
#include <java/text/Format.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AttributedCharacterIterator$Attribute = ::java::text::AttributedCharacterIterator$Attribute;

namespace java {
	namespace text {

void Format$Field::init$($String* name) {
	$AttributedCharacterIterator$Attribute::init$(name);
}

Format$Field::Format$Field() {
}

$Class* Format$Field::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(Format$Field, serialVersionUID)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/String;)V", nullptr, $PROTECTED, $method(Format$Field, init$, void, $String*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.text.Format$Field", "java.text.Format", "Field", $PUBLIC | $STATIC},
		{"java.text.AttributedCharacterIterator$Attribute", "java.text.AttributedCharacterIterator", "Attribute", $PUBLIC | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"java.text.Format$Field",
		"java.text.AttributedCharacterIterator$Attribute",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.text.Format"
	};
	$loadClass(Format$Field, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Format$Field);
	});
	return class$;
}

$Class* Format$Field::class$ = nullptr;

	} // text
} // java