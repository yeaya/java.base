#include <java/util/LinkedHashMap$LinkedValueIterator.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/LinkedHashMap$Entry.h>
#include <java/util/LinkedHashMap$LinkedHashIterator.h>
#include <java/util/LinkedHashMap.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $HashMap$Node = ::java::util::HashMap$Node;
using $Iterator = ::java::util::Iterator;
using $LinkedHashMap = ::java::util::LinkedHashMap;
using $LinkedHashMap$Entry = ::java::util::LinkedHashMap$Entry;
using $LinkedHashMap$LinkedHashIterator = ::java::util::LinkedHashMap$LinkedHashIterator;

namespace java {
	namespace util {

$FieldInfo _LinkedHashMap$LinkedValueIterator_FieldInfo_[] = {
	{"this$0", "Ljava/util/LinkedHashMap;", nullptr, $FINAL | $SYNTHETIC, $field(LinkedHashMap$LinkedValueIterator, this$0)},
	{}
};

$MethodInfo _LinkedHashMap$LinkedValueIterator_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hasNext", "()Z", nullptr, $PUBLIC | $FINAL},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Ljava/util/LinkedHashMap;)V", nullptr, 0, $method(static_cast<void(LinkedHashMap$LinkedValueIterator::*)($LinkedHashMap*)>(&LinkedHashMap$LinkedValueIterator::init$))},
	{"next", "()Ljava/lang/Object;", "()TV;", $PUBLIC | $FINAL},
	{"*remove", "()V", nullptr, $PUBLIC | $FINAL},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _LinkedHashMap$LinkedValueIterator_InnerClassesInfo_[] = {
	{"java.util.LinkedHashMap$LinkedValueIterator", "java.util.LinkedHashMap", "LinkedValueIterator", $FINAL},
	{"java.util.LinkedHashMap$LinkedHashIterator", "java.util.LinkedHashMap", "LinkedHashIterator", $ABSTRACT},
	{}
};

$ClassInfo _LinkedHashMap$LinkedValueIterator_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"java.util.LinkedHashMap$LinkedValueIterator",
	"java.util.LinkedHashMap$LinkedHashIterator",
	"java.util.Iterator",
	_LinkedHashMap$LinkedValueIterator_FieldInfo_,
	_LinkedHashMap$LinkedValueIterator_MethodInfo_,
	"Ljava/util/LinkedHashMap<TK;TV;>.LinkedHashIterator;Ljava/util/Iterator<TV;>;",
	nullptr,
	_LinkedHashMap$LinkedValueIterator_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.LinkedHashMap"
};

$Object* allocate$LinkedHashMap$LinkedValueIterator($Class* clazz) {
	return $of($alloc(LinkedHashMap$LinkedValueIterator));
}

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
	return $of($nc($(nextNode()))->value);
}

LinkedHashMap$LinkedValueIterator::LinkedHashMap$LinkedValueIterator() {
}

$Class* LinkedHashMap$LinkedValueIterator::load$($String* name, bool initialize) {
	$loadClass(LinkedHashMap$LinkedValueIterator, name, initialize, &_LinkedHashMap$LinkedValueIterator_ClassInfo_, allocate$LinkedHashMap$LinkedValueIterator);
	return class$;
}

$Class* LinkedHashMap$LinkedValueIterator::class$ = nullptr;

	} // util
} // java