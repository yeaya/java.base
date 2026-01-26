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

$MethodInfo _AttributedCharacterIterator_MethodInfo_[] = {
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

$InnerClassInfo _AttributedCharacterIterator_InnerClassesInfo_[] = {
	{"java.text.AttributedCharacterIterator$Attribute", "java.text.AttributedCharacterIterator", "Attribute", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _AttributedCharacterIterator_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"java.text.AttributedCharacterIterator",
	nullptr,
	"java.text.CharacterIterator",
	nullptr,
	_AttributedCharacterIterator_MethodInfo_,
	nullptr,
	nullptr,
	_AttributedCharacterIterator_InnerClassesInfo_,
	nullptr,
	nullptr,
	"java.text.AttributedCharacterIterator$Attribute"
};

$Object* allocate$AttributedCharacterIterator($Class* clazz) {
	return $of($alloc(AttributedCharacterIterator));
}

$Class* AttributedCharacterIterator::load$($String* name, bool initialize) {
	$loadClass(AttributedCharacterIterator, name, initialize, &_AttributedCharacterIterator_ClassInfo_, allocate$AttributedCharacterIterator);
	return class$;
}

$Class* AttributedCharacterIterator::class$ = nullptr;

	} // text
} // java