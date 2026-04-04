#include <java/util/EnumMap$KeyIterator.h>
#include <java/lang/Enum.h>
#include <java/util/EnumMap$EnumMapIterator.h>
#include <java/util/EnumMap.h>
#include <java/util/NoSuchElementException.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $EnumMap = ::java::util::EnumMap;
using $EnumMap$EnumMapIterator = ::java::util::EnumMap$EnumMapIterator;
using $NoSuchElementException = ::java::util::NoSuchElementException;

namespace java {
	namespace util {

void EnumMap$KeyIterator::init$($EnumMap* this$0) {
	$set(this, this$0, this$0);
	$EnumMap$EnumMapIterator::init$(this$0);
}

$Object* EnumMap$KeyIterator::next() {
	if (!hasNext()) {
		$throwNew($NoSuchElementException);
	}
	this->lastReturnedIndex = this->index++;
	return $of($nc(this->this$0->keyUniverse)->get(this->lastReturnedIndex));
}

EnumMap$KeyIterator::EnumMap$KeyIterator() {
}

$Class* EnumMap$KeyIterator::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Ljava/util/EnumMap;", nullptr, $FINAL | $SYNTHETIC, $field(EnumMap$KeyIterator, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/util/EnumMap;)V", nullptr, $PRIVATE, $method(EnumMap$KeyIterator, init$, void, $EnumMap*)},
		{"next", "()Ljava/lang/Enum;", "()TK;", $PUBLIC, $virtualMethod(EnumMap$KeyIterator, next, $Object*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.util.EnumMap$KeyIterator", "java.util.EnumMap", "KeyIterator", $PRIVATE},
		{"java.util.EnumMap$EnumMapIterator", "java.util.EnumMap", "EnumMapIterator", $PRIVATE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"java.util.EnumMap$KeyIterator",
		"java.util.EnumMap$EnumMapIterator",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		"Ljava/util/EnumMap<TK;TV;>.EnumMapIterator<TK;>;",
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.util.EnumMap"
	};
	$loadClass(EnumMap$KeyIterator, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(EnumMap$KeyIterator);
	});
	return class$;
}

$Class* EnumMap$KeyIterator::class$ = nullptr;

	} // util
} // java