#include <java/util/HashMap$EntryIterator.h>

#include <java/util/HashMap$HashIterator.h>
#include <java/util/HashMap$Node.h>
#include <java/util/HashMap.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $HashMap = ::java::util::HashMap;
using $HashMap$HashIterator = ::java::util::HashMap$HashIterator;

namespace java {
	namespace util {

$FieldInfo _HashMap$EntryIterator_FieldInfo_[] = {
	{"this$0", "Ljava/util/HashMap;", nullptr, $FINAL | $SYNTHETIC, $field(HashMap$EntryIterator, this$0)},
	{}
};

$MethodInfo _HashMap$EntryIterator_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hasNext", "()Z", nullptr, $PUBLIC | $FINAL},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Ljava/util/HashMap;)V", nullptr, 0, $method(HashMap$EntryIterator, init$, void, $HashMap*)},
	{"next", "()Ljava/util/Map$Entry;", "()Ljava/util/Map$Entry<TK;TV;>;", $PUBLIC | $FINAL, $virtualMethod(HashMap$EntryIterator, next, $Object*)},
	{"*remove", "()V", nullptr, $PUBLIC | $FINAL},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _HashMap$EntryIterator_InnerClassesInfo_[] = {
	{"java.util.HashMap$EntryIterator", "java.util.HashMap", "EntryIterator", $FINAL},
	{"java.util.HashMap$HashIterator", "java.util.HashMap", "HashIterator", $ABSTRACT},
	{"java.util.Map$Entry", "java.util.Map", "Entry", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _HashMap$EntryIterator_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"java.util.HashMap$EntryIterator",
	"java.util.HashMap$HashIterator",
	"java.util.Iterator",
	_HashMap$EntryIterator_FieldInfo_,
	_HashMap$EntryIterator_MethodInfo_,
	"Ljava/util/HashMap<TK;TV;>.HashIterator;Ljava/util/Iterator<Ljava/util/Map$Entry<TK;TV;>;>;",
	nullptr,
	_HashMap$EntryIterator_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.HashMap"
};

$Object* allocate$HashMap$EntryIterator($Class* clazz) {
	return $of($alloc(HashMap$EntryIterator));
}

bool HashMap$EntryIterator::hasNext() {
	 return this->$HashMap$HashIterator::hasNext();
}

void HashMap$EntryIterator::remove() {
	this->$HashMap$HashIterator::remove();
}

int32_t HashMap$EntryIterator::hashCode() {
	 return this->$HashMap$HashIterator::hashCode();
}

bool HashMap$EntryIterator::equals(Object$* obj) {
	 return this->$HashMap$HashIterator::equals(obj);
}

$Object* HashMap$EntryIterator::clone() {
	 return this->$HashMap$HashIterator::clone();
}

$String* HashMap$EntryIterator::toString() {
	 return this->$HashMap$HashIterator::toString();
}

void HashMap$EntryIterator::finalize() {
	this->$HashMap$HashIterator::finalize();
}

void HashMap$EntryIterator::init$($HashMap* this$0) {
	$set(this, this$0, this$0);
	$HashMap$HashIterator::init$(this$0);
}

$Object* HashMap$EntryIterator::next() {
	return $of(nextNode());
}

HashMap$EntryIterator::HashMap$EntryIterator() {
}

$Class* HashMap$EntryIterator::load$($String* name, bool initialize) {
	$loadClass(HashMap$EntryIterator, name, initialize, &_HashMap$EntryIterator_ClassInfo_, allocate$HashMap$EntryIterator);
	return class$;
}

$Class* HashMap$EntryIterator::class$ = nullptr;

	} // util
} // java