#include <java/text/CharacterIterator.h>

#include <java/lang/Cloneable.h>
#include <jcpp.h>

#undef DONE

using $ClassInfo = ::java::lang::ClassInfo;
using $Cloneable = ::java::lang::Cloneable;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace text {

$FieldInfo _CharacterIterator_FieldInfo_[] = {
	{"DONE", "C", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(CharacterIterator, DONE)},
	{}
};

$MethodInfo _CharacterIterator_MethodInfo_[] = {
	{"clone", "()Ljava/lang/Object;", nullptr, $PUBLIC | $ABSTRACT},
	{"current", "()C", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(CharacterIterator, current, char16_t)},
	{"first", "()C", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(CharacterIterator, first, char16_t)},
	{"getBeginIndex", "()I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(CharacterIterator, getBeginIndex, int32_t)},
	{"getEndIndex", "()I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(CharacterIterator, getEndIndex, int32_t)},
	{"getIndex", "()I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(CharacterIterator, getIndex, int32_t)},
	{"last", "()C", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(CharacterIterator, last, char16_t)},
	{"next", "()C", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(CharacterIterator, next, char16_t)},
	{"previous", "()C", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(CharacterIterator, previous, char16_t)},
	{"setIndex", "(I)C", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(CharacterIterator, setIndex, char16_t, int32_t)},
	{}
};

$ClassInfo _CharacterIterator_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"java.text.CharacterIterator",
	nullptr,
	"java.lang.Cloneable",
	_CharacterIterator_FieldInfo_,
	_CharacterIterator_MethodInfo_
};

$Object* allocate$CharacterIterator($Class* clazz) {
	return $of($alloc(CharacterIterator));
}

$Object* CharacterIterator::clone() {
	 return this->$Cloneable::clone();
}

$Class* CharacterIterator::load$($String* name, bool initialize) {
	$loadClass(CharacterIterator, name, initialize, &_CharacterIterator_ClassInfo_, allocate$CharacterIterator);
	return class$;
}

$Class* CharacterIterator::class$ = nullptr;

	} // text
} // java