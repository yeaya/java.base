#include <java/util/LinkedHashMap$LinkedEntryIterator.h>
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

bool LinkedHashMap$LinkedEntryIterator::hasNext() {
	 return this->$LinkedHashMap$LinkedHashIterator::hasNext();
}

void LinkedHashMap$LinkedEntryIterator::remove() {
	this->$LinkedHashMap$LinkedHashIterator::remove();
}

int32_t LinkedHashMap$LinkedEntryIterator::hashCode() {
	 return this->$LinkedHashMap$LinkedHashIterator::hashCode();
}

bool LinkedHashMap$LinkedEntryIterator::equals(Object$* obj) {
	 return this->$LinkedHashMap$LinkedHashIterator::equals(obj);
}

$Object* LinkedHashMap$LinkedEntryIterator::clone() {
	 return this->$LinkedHashMap$LinkedHashIterator::clone();
}

$String* LinkedHashMap$LinkedEntryIterator::toString() {
	 return this->$LinkedHashMap$LinkedHashIterator::toString();
}

void LinkedHashMap$LinkedEntryIterator::finalize() {
	this->$LinkedHashMap$LinkedHashIterator::finalize();
}

void LinkedHashMap$LinkedEntryIterator::init$($LinkedHashMap* this$0) {
	$set(this, this$0, this$0);
	$LinkedHashMap$LinkedHashIterator::init$(this$0);
}

$Object* LinkedHashMap$LinkedEntryIterator::next() {
	return nextNode();
}

LinkedHashMap$LinkedEntryIterator::LinkedHashMap$LinkedEntryIterator() {
}

$Class* LinkedHashMap$LinkedEntryIterator::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Ljava/util/LinkedHashMap;", nullptr, $FINAL | $SYNTHETIC, $field(LinkedHashMap$LinkedEntryIterator, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
		{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
		{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
		{"*hasNext", "()Z", nullptr, $PUBLIC | $FINAL},
		{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
		{"<init>", "(Ljava/util/LinkedHashMap;)V", nullptr, 0, $method(LinkedHashMap$LinkedEntryIterator, init$, void, $LinkedHashMap*)},
		{"next", "()Ljava/util/Map$Entry;", "()Ljava/util/Map$Entry<TK;TV;>;", $PUBLIC | $FINAL, $virtualMethod(LinkedHashMap$LinkedEntryIterator, next, $Object*)},
		{"*remove", "()V", nullptr, $PUBLIC | $FINAL},
		{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.util.LinkedHashMap$LinkedEntryIterator", "java.util.LinkedHashMap", "LinkedEntryIterator", $FINAL},
		{"java.util.LinkedHashMap$LinkedHashIterator", "java.util.LinkedHashMap", "LinkedHashIterator", $ABSTRACT},
		{"java.util.Map$Entry", "java.util.Map", "Entry", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"java.util.LinkedHashMap$LinkedEntryIterator",
		"java.util.LinkedHashMap$LinkedHashIterator",
		"java.util.Iterator",
		fieldInfos$$,
		methodInfos$$,
		"Ljava/util/LinkedHashMap<TK;TV;>.LinkedHashIterator;Ljava/util/Iterator<Ljava/util/Map$Entry<TK;TV;>;>;",
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.util.LinkedHashMap"
	};
	$loadClass(LinkedHashMap$LinkedEntryIterator, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(LinkedHashMap$LinkedEntryIterator));
	});
	return class$;
}

$Class* LinkedHashMap$LinkedEntryIterator::class$ = nullptr;

	} // util
} // java