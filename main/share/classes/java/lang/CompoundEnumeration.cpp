#include <java/lang/CompoundEnumeration.h>
#include <java/util/Enumeration.h>
#include <java/util/NoSuchElementException.h>
#include <jcpp.h>

using $EnumerationArray = $Array<::java::util::Enumeration>;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NoSuchElementException = ::java::util::NoSuchElementException;

namespace java {
	namespace lang {

void CompoundEnumeration::init$($EnumerationArray* enums) {
	$set(this, enums, enums);
}

bool CompoundEnumeration::next() {
	while (this->index < $nc(this->enums)->length) {
		if (this->enums->get(this->index) != nullptr && $nc(this->enums->get(this->index))->hasMoreElements()) {
			return true;
		}
		++this->index;
	}
	return false;
}

bool CompoundEnumeration::hasMoreElements() {
	return next();
}

$Object* CompoundEnumeration::nextElement() {
	if (!next()) {
		$throwNew($NoSuchElementException);
	}
	return $nc($nc(this->enums)->get(this->index))->nextElement();
}

CompoundEnumeration::CompoundEnumeration() {
}

$Class* CompoundEnumeration::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"enums", "[Ljava/util/Enumeration;", "[Ljava/util/Enumeration<TE;>;", $PRIVATE | $FINAL, $field(CompoundEnumeration, enums)},
		{"index", "I", nullptr, $PRIVATE, $field(CompoundEnumeration, index)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "([Ljava/util/Enumeration;)V", "([Ljava/util/Enumeration<TE;>;)V", $PUBLIC, $method(CompoundEnumeration, init$, void, $EnumerationArray*)},
		{"hasMoreElements", "()Z", nullptr, $PUBLIC, $virtualMethod(CompoundEnumeration, hasMoreElements, bool)},
		{"next", "()Z", nullptr, $PRIVATE, $method(CompoundEnumeration, next, bool)},
		{"nextElement", "()Ljava/lang/Object;", "()TE;", $PUBLIC, $virtualMethod(CompoundEnumeration, nextElement, $Object*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"java.lang.CompoundEnumeration",
		"java.lang.Object",
		"java.util.Enumeration",
		fieldInfos$$,
		methodInfos$$,
		"<E:Ljava/lang/Object;>Ljava/lang/Object;Ljava/util/Enumeration<TE;>;"
	};
	$loadClass(CompoundEnumeration, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(CompoundEnumeration);
	});
	return class$;
}

$Class* CompoundEnumeration::class$ = nullptr;

	} // lang
} // java