#include <java/text/AttributedCharacterIterator.h>

#include <java/text/AttributedCharacterIterator$Attribute.h>
#include <java/util/Map.h>
#include <java/util/Set.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace text {

$MethodInfo _AttributedCharacterIterator_MethodInfo_[] = {
	{"getAllAttributeKeys", "()Ljava/util/Set;", "()Ljava/util/Set<Ljava/text/AttributedCharacterIterator$Attribute;>;", $PUBLIC | $ABSTRACT},
	{"getAttribute", "(Ljava/text/AttributedCharacterIterator$Attribute;)Ljava/lang/Object;", nullptr, $PUBLIC | $ABSTRACT},
	{"getAttributes", "()Ljava/util/Map;", "()Ljava/util/Map<Ljava/text/AttributedCharacterIterator$Attribute;Ljava/lang/Object;>;", $PUBLIC | $ABSTRACT},
	{"getRunLimit", "()I", nullptr, $PUBLIC | $ABSTRACT},
	{"getRunLimit", "(Ljava/text/AttributedCharacterIterator$Attribute;)I", nullptr, $PUBLIC | $ABSTRACT},
	{"getRunLimit", "(Ljava/util/Set;)I", "(Ljava/util/Set<+Ljava/text/AttributedCharacterIterator$Attribute;>;)I", $PUBLIC | $ABSTRACT},
	{"getRunStart", "()I", nullptr, $PUBLIC | $ABSTRACT},
	{"getRunStart", "(Ljava/text/AttributedCharacterIterator$Attribute;)I", nullptr, $PUBLIC | $ABSTRACT},
	{"getRunStart", "(Ljava/util/Set;)I", "(Ljava/util/Set<+Ljava/text/AttributedCharacterIterator$Attribute;>;)I", $PUBLIC | $ABSTRACT},
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