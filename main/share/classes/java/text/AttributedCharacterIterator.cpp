#include <java/text/AttributedCharacterIterator.h>
#include <java/text/AttributedCharacterIterator$Attribute.h>
#include <java/util/Map.h>
#include <java/util/Set.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AttributedCharacterIterator$Attribute = ::java::text::AttributedCharacterIterator$Attribute;
using $Map = ::java::util::Map;
using $Set = ::java::util::Set;

namespace java {
	namespace text {

$Class* AttributedCharacterIterator::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"getAllAttributeKeys", "()Ljava/util/Set;", "()Ljava/util/Set<Ljava/text/AttributedCharacterIterator$Attribute;>;", $PUBLIC | $ABSTRACT, $virtualMethod(AttributedCharacterIterator, getAllAttributeKeys, $Set*)},
		{"getAttribute", "(Ljava/text/AttributedCharacterIterator$Attribute;)Ljava/lang/Object;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(AttributedCharacterIterator, getAttribute, $Object*, $AttributedCharacterIterator$Attribute*)},
		{"getAttributes", "()Ljava/util/Map;", "()Ljava/util/Map<Ljava/text/AttributedCharacterIterator$Attribute;Ljava/lang/Object;>;", $PUBLIC | $ABSTRACT, $virtualMethod(AttributedCharacterIterator, getAttributes, $Map*)},
		{"getRunLimit", "()I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(AttributedCharacterIterator, getRunLimit, int32_t)},
		{"getRunLimit", "(Ljava/text/AttributedCharacterIterator$Attribute;)I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(AttributedCharacterIterator, getRunLimit, int32_t, $AttributedCharacterIterator$Attribute*)},
		{"getRunLimit", "(Ljava/util/Set;)I", "(Ljava/util/Set<+Ljava/text/AttributedCharacterIterator$Attribute;>;)I", $PUBLIC | $ABSTRACT, $virtualMethod(AttributedCharacterIterator, getRunLimit, int32_t, $Set*)},
		{"getRunStart", "()I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(AttributedCharacterIterator, getRunStart, int32_t)},
		{"getRunStart", "(Ljava/text/AttributedCharacterIterator$Attribute;)I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(AttributedCharacterIterator, getRunStart, int32_t, $AttributedCharacterIterator$Attribute*)},
		{"getRunStart", "(Ljava/util/Set;)I", "(Ljava/util/Set<+Ljava/text/AttributedCharacterIterator$Attribute;>;)I", $PUBLIC | $ABSTRACT, $virtualMethod(AttributedCharacterIterator, getRunStart, int32_t, $Set*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.text.AttributedCharacterIterator$Attribute", "java.text.AttributedCharacterIterator", "Attribute", $PUBLIC | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"java.text.AttributedCharacterIterator",
		nullptr,
		"java.text.CharacterIterator",
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"java.text.AttributedCharacterIterator$Attribute"
	};
	$loadClass(AttributedCharacterIterator, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(AttributedCharacterIterator);
	});
	return class$;
}

$Class* AttributedCharacterIterator::class$ = nullptr;

	} // text
} // java