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
using $LinkedHashMap$Entry = ::java::util::LinkedHashMap$Entry;
using $LinkedHashMap$LinkedHashIterator = ::java::util::LinkedHashMap$LinkedHashIterator;

namespace java {
	namespace util {

$FieldInfo _LinkedHashMap$LinkedKeyIterator_FieldInfo_[] = {
	{"this$0", "Ljava/util/LinkedHashMap;", nullptr, $FINAL | $SYNTHETIC, $field(LinkedHashMap$LinkedKeyIterator, this$0)},
	{}
};

$MethodInfo _LinkedHashMap$LinkedKeyIterator_MethodInfo_[] = {
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

$InnerClassInfo _LinkedHashMap$LinkedKeyIterator_InnerClassesInfo_[] = {
	{"java.util.LinkedHashMap$LinkedKeyIterator", "java.util.LinkedHashMap", "LinkedKeyIterator", $FINAL},
	{"java.util.LinkedHashMap$LinkedHashIterator", "java.util.LinkedHashMap", "LinkedHashIterator", $ABSTRACT},
	{}
};

$ClassInfo _LinkedHashMap$LinkedKeyIterator_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"java.util.LinkedHashMap$LinkedKeyIterator",
	"java.util.LinkedHashMap$LinkedHashIterator",
	"java.util.Iterator",
	_LinkedHashMap$LinkedKeyIterator_FieldInfo_,
	_LinkedHashMap$LinkedKeyIterator_MethodInfo_,
	"Ljava/util/LinkedHashMap<TK;TV;>.LinkedHashIterator;Ljava/util/Iterator<TK;>;",
	nullptr,
	_LinkedHashMap$LinkedKeyIterator_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.LinkedHashMap"
};

$Object* allocate$LinkedHashMap$LinkedKeyIterator($Class* clazz) {
	return $of($alloc(LinkedHashMap$LinkedKeyIterator));
}

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
	return $of($nc($(nextNode()))->getKey());
}

LinkedHashMap$LinkedKeyIterator::LinkedHashMap$LinkedKeyIterator() {
}

$Class* LinkedHashMap$LinkedKeyIterator::load$($String* name, bool initialize) {
	$loadClass(LinkedHashMap$LinkedKeyIterator, name, initialize, &_LinkedHashMap$LinkedKeyIterator_ClassInfo_, allocate$LinkedHashMap$LinkedKeyIterator);
	return class$;
}

$Class* LinkedHashMap$LinkedKeyIterator::class$ = nullptr;

	} // util
} // java