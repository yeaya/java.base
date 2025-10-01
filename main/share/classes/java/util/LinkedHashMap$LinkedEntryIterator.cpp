#include <java/util/LinkedHashMap$LinkedEntryIterator.h>

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
using $Iterator = ::java::util::Iterator;
using $LinkedHashMap = ::java::util::LinkedHashMap;
using $LinkedHashMap$Entry = ::java::util::LinkedHashMap$Entry;
using $LinkedHashMap$LinkedHashIterator = ::java::util::LinkedHashMap$LinkedHashIterator;

namespace java {
	namespace util {

$FieldInfo _LinkedHashMap$LinkedEntryIterator_FieldInfo_[] = {
	{"this$0", "Ljava/util/LinkedHashMap;", nullptr, $FINAL | $SYNTHETIC, $field(LinkedHashMap$LinkedEntryIterator, this$0)},
	{}
};

$MethodInfo _LinkedHashMap$LinkedEntryIterator_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hasNext", "()Z", nullptr, $PUBLIC | $FINAL},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Ljava/util/LinkedHashMap;)V", nullptr, 0, $method(static_cast<void(LinkedHashMap$LinkedEntryIterator::*)($LinkedHashMap*)>(&LinkedHashMap$LinkedEntryIterator::init$))},
	{"next", "()Ljava/util/Map$Entry;", "()Ljava/util/Map$Entry<TK;TV;>;", $PUBLIC | $FINAL},
	{"*remove", "()V", nullptr, $PUBLIC | $FINAL},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _LinkedHashMap$LinkedEntryIterator_InnerClassesInfo_[] = {
	{"java.util.LinkedHashMap$LinkedEntryIterator", "java.util.LinkedHashMap", "LinkedEntryIterator", $FINAL},
	{"java.util.LinkedHashMap$LinkedHashIterator", "java.util.LinkedHashMap", "LinkedHashIterator", $ABSTRACT},
	{"java.util.Map$Entry", "java.util.Map", "Entry", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _LinkedHashMap$LinkedEntryIterator_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"java.util.LinkedHashMap$LinkedEntryIterator",
	"java.util.LinkedHashMap$LinkedHashIterator",
	"java.util.Iterator",
	_LinkedHashMap$LinkedEntryIterator_FieldInfo_,
	_LinkedHashMap$LinkedEntryIterator_MethodInfo_,
	"Ljava/util/LinkedHashMap<TK;TV;>.LinkedHashIterator;Ljava/util/Iterator<Ljava/util/Map$Entry<TK;TV;>;>;",
	nullptr,
	_LinkedHashMap$LinkedEntryIterator_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.LinkedHashMap"
};

$Object* allocate$LinkedHashMap$LinkedEntryIterator($Class* clazz) {
	return $of($alloc(LinkedHashMap$LinkedEntryIterator));
}

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
	return $of(nextNode());
}

LinkedHashMap$LinkedEntryIterator::LinkedHashMap$LinkedEntryIterator() {
}

$Class* LinkedHashMap$LinkedEntryIterator::load$($String* name, bool initialize) {
	$loadClass(LinkedHashMap$LinkedEntryIterator, name, initialize, &_LinkedHashMap$LinkedEntryIterator_ClassInfo_, allocate$LinkedHashMap$LinkedEntryIterator);
	return class$;
}

$Class* LinkedHashMap$LinkedEntryIterator::class$ = nullptr;

	} // util
} // java