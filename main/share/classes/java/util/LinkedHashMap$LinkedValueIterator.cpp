#include <java/util/LinkedHashMap$LinkedValueIterator.h>
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

bool LinkedHashMap$LinkedValueIterator::hasNext() {
	 return this->$LinkedHashMap$LinkedHashIterator::hasNext();
}

void LinkedHashMap$LinkedValueIterator::remove() {
	this->$LinkedHashMap$LinkedHashIterator::remove();
}

int32_t LinkedHashMap$LinkedValueIterator::hashCode() {
	 return this->$LinkedHashMap$LinkedHashIterator::hashCode();
}

bool LinkedHashMap$LinkedValueIterator::equals(Object$* obj) {
	 return this->$LinkedHashMap$LinkedHashIterator::equals(obj);
}

$Object* LinkedHashMap$LinkedValueIterator::clone() {
	 return this->$LinkedHashMap$LinkedHashIterator::clone();
}

$String* LinkedHashMap$LinkedValueIterator::toString() {
	 return this->$LinkedHashMap$LinkedHashIterator::toString();
}

void LinkedHashMap$LinkedValueIterator::finalize() {
	this->$LinkedHashMap$LinkedHashIterator::finalize();
}

void LinkedHashMap$LinkedValueIterator::init$($LinkedHashMap* this$0) {
	$set(this, this$0, this$0);
	$LinkedHashMap$LinkedHashIterator::init$(this$0);
}

$Object* LinkedHashMap$LinkedValueIterator::next() {
	return $nc($(nextNode()))->value;
}

LinkedHashMap$LinkedValueIterator::LinkedHashMap$LinkedValueIterator() {
}

$Class* LinkedHashMap$LinkedValueIterator::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Ljava/util/LinkedHashMap;", nullptr, $FINAL | $SYNTHETIC, $field(LinkedHashMap$LinkedValueIterator, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
		{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
		{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
		{"*hasNext", "()Z", nullptr, $PUBLIC | $FINAL},
		{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
		{"<init>", "(Ljava/util/LinkedHashMap;)V", nullptr, 0, $method(LinkedHashMap$LinkedValueIterator, init$, void, $LinkedHashMap*)},
		{"next", "()Ljava/lang/Object;", "()TV;", $PUBLIC | $FINAL, $virtualMethod(LinkedHashMap$LinkedValueIterator, next, $Object*)},
		{"*remove", "()V", nullptr, $PUBLIC | $FINAL},
		{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.util.LinkedHashMap$LinkedValueIterator", "java.util.LinkedHashMap", "LinkedValueIterator", $FINAL},
		{"java.util.LinkedHashMap$LinkedHashIterator", "java.util.LinkedHashMap", "LinkedHashIterator", $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"java.util.LinkedHashMap$LinkedValueIterator",
		"java.util.LinkedHashMap$LinkedHashIterator",
		"java.util.Iterator",
		fieldInfos$$,
		methodInfos$$,
		"Ljava/util/LinkedHashMap<TK;TV;>.LinkedHashIterator;Ljava/util/Iterator<TV;>;",
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.util.LinkedHashMap"
	};
	$loadClass(LinkedHashMap$LinkedValueIterator, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(LinkedHashMap$LinkedValueIterator));
	});
	return class$;
}

$Class* LinkedHashMap$LinkedValueIterator::class$ = nullptr;

	} // util
} // java