#include <java/util/Arrays$ArrayItr.h>
#include <java/util/Arrays.h>
#include <java/util/NoSuchElementException.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NoSuchElementException = ::java::util::NoSuchElementException;

namespace java {
	namespace util {

void Arrays$ArrayItr::init$($ObjectArray* a) {
	$set(this, a, a);
}

bool Arrays$ArrayItr::hasNext() {
	return this->cursor < $nc(this->a)->length;
}

$Object* Arrays$ArrayItr::next() {
	int32_t i = this->cursor;
	if (i >= $nc(this->a)->length) {
		$throwNew($NoSuchElementException);
	}
	this->cursor = i + 1;
	return this->a->get(i);
}

Arrays$ArrayItr::Arrays$ArrayItr() {
}

$Class* Arrays$ArrayItr::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"cursor", "I", nullptr, $PRIVATE, $field(Arrays$ArrayItr, cursor)},
		{"a", "[Ljava/lang/Object;", "[TE;", $PRIVATE | $FINAL, $field(Arrays$ArrayItr, a)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "([Ljava/lang/Object;)V", "([TE;)V", 0, $method(Arrays$ArrayItr, init$, void, $ObjectArray*)},
		{"hasNext", "()Z", nullptr, $PUBLIC, $virtualMethod(Arrays$ArrayItr, hasNext, bool)},
		{"next", "()Ljava/lang/Object;", "()TE;", $PUBLIC, $virtualMethod(Arrays$ArrayItr, next, $Object*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.util.Arrays$ArrayItr", "java.util.Arrays", "ArrayItr", $PRIVATE | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"java.util.Arrays$ArrayItr",
		"java.lang.Object",
		"java.util.Iterator",
		fieldInfos$$,
		methodInfos$$,
		"<E:Ljava/lang/Object;>Ljava/lang/Object;Ljava/util/Iterator<TE;>;",
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.util.Arrays"
	};
	$loadClass(Arrays$ArrayItr, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Arrays$ArrayItr);
	});
	return class$;
}

$Class* Arrays$ArrayItr::class$ = nullptr;

	} // util
} // java