#include <java/util/LinkedHashMap$LinkedKeyIterator.h>
#include <java/util/LinkedHashMap$Entry.h>
#include <java/util/LinkedHashMap$LinkedHashIterator.h>
#include <java/util/LinkedHashMap.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $LinkedHashMap = ::java::util::LinkedHashMap;
using $LinkedHashMap$LinkedHashIterator = ::java::util::LinkedHashMap$LinkedHashIterator;

namespace java {
	namespace util {

bool LinkedHashMap$LinkedKeyIterator::hasNext() {
	 return this->$LinkedHashMap$LinkedHashIterator::hasNext();
}

void LinkedHashMap$LinkedKeyIterator::remove() {
	this->$LinkedHashMap$LinkedHashIterator::remove();
}

int32_t LinkedHashMap$LinkedKeyIterator::hashCode() {
	 return this->$LinkedHashMap$LinkedHashIterator::hashCode();
}

bool LinkedHashMap$LinkedKeyIterator::equals(Object$* obj) {
	 return this->$LinkedHashMap$LinkedHashIterator::equals(obj);
}

$Object* LinkedHashMap$LinkedKeyIterator::clone() {
	 return this->$LinkedHashMap$LinkedHashIterator::clone();
}

$String* LinkedHashMap$LinkedKeyIterator::toString() {
	 return this->$LinkedHashMap$LinkedHashIterator::toString();
}

void LinkedHashMap$LinkedKeyIterator::finalize() {
	this->$LinkedHashMap$LinkedHashIterator::finalize();
}

void LinkedHashMap$LinkedKeyIterator::init$($LinkedHashMap* this$0) {
	$set(this, this$0, this$0);
	$LinkedHashMap$LinkedHashIterator::init$(this$0);
}

$Object* LinkedHashMap$LinkedKeyIterator::next() {
	return $$nc(nextNode())->getKey();
}

LinkedHashMap$LinkedKeyIterator::LinkedHashMap$LinkedKeyIterator() {
}

$Class* LinkedHashMap$LinkedKeyIterator::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Ljava/util/LinkedHashMap;", nullptr, $FINAL | $SYNTHETIC, $field(LinkedHashMap$LinkedKeyIterator, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
		{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
		{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
		{"*hasNext", "()Z", nullptr, $PUBLIC | $FINAL},
		{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
		{"<init>", "(Ljava/util/LinkedHashMap;)V", nullptr, 0, $method(LinkedHashMap$LinkedKeyIterator, init$, void, $LinkedHashMap*)},
		{"next", "()Ljava/lang/Object;", "()TK;", $PUBLIC | $FINAL, $virtualMethod(LinkedHashMap$LinkedKeyIterator, next, $Object*)},
		{"*remove", "()V", nullptr, $PUBLIC | $FINAL},
		{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.util.LinkedHashMap$LinkedKeyIterator", "java.util.LinkedHashMap", "LinkedKeyIterator", $FINAL},
		{"java.util.LinkedHashMap$LinkedHashIterator", "java.util.LinkedHashMap", "LinkedHashIterator", $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"java.util.LinkedHashMap$LinkedKeyIterator",
		"java.util.LinkedHashMap$LinkedHashIterator",
		"java.util.Iterator",
		fieldInfos$$,
		methodInfos$$,
		"Ljava/util/LinkedHashMap<TK;TV;>.LinkedHashIterator;Ljava/util/Iterator<TK;>;",
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.util.LinkedHashMap"
	};
	$loadClass(LinkedHashMap$LinkedKeyIterator, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(LinkedHashMap$LinkedKeyIterator));
	});
	return class$;
}

$Class* LinkedHashMap$LinkedKeyIterator::class$ = nullptr;

	} // util
} // java