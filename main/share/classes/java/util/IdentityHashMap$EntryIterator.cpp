#include <java/util/IdentityHashMap$EntryIterator.h>

#include <java/util/IdentityHashMap$EntryIterator$Entry.h>
#include <java/util/IdentityHashMap$IdentityHashMapIterator.h>
#include <java/util/IdentityHashMap.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $IdentityHashMap = ::java::util::IdentityHashMap;
using $IdentityHashMap$EntryIterator$Entry = ::java::util::IdentityHashMap$EntryIterator$Entry;
using $IdentityHashMap$IdentityHashMapIterator = ::java::util::IdentityHashMap$IdentityHashMapIterator;

namespace java {
	namespace util {

$FieldInfo _IdentityHashMap$EntryIterator_FieldInfo_[] = {
	{"this$0", "Ljava/util/IdentityHashMap;", nullptr, $FINAL | $SYNTHETIC, $field(IdentityHashMap$EntryIterator, this$0)},
	{"lastReturnedEntry", "Ljava/util/IdentityHashMap$EntryIterator$Entry;", "Ljava/util/IdentityHashMap<TK;TV;>.EntryIterator.Entry;", $PRIVATE, $field(IdentityHashMap$EntryIterator, lastReturnedEntry)},
	{}
};

$MethodInfo _IdentityHashMap$EntryIterator_MethodInfo_[] = {
	{"<init>", "(Ljava/util/IdentityHashMap;)V", nullptr, $PRIVATE, $method(IdentityHashMap$EntryIterator, init$, void, $IdentityHashMap*)},
	{"next", "()Ljava/util/Map$Entry;", "()Ljava/util/Map$Entry<TK;TV;>;", $PUBLIC, $virtualMethod(IdentityHashMap$EntryIterator, next, $Object*)},
	{"remove", "()V", nullptr, $PUBLIC, $virtualMethod(IdentityHashMap$EntryIterator, remove, void)},
	{}
};

$InnerClassInfo _IdentityHashMap$EntryIterator_InnerClassesInfo_[] = {
	{"java.util.IdentityHashMap$EntryIterator", "java.util.IdentityHashMap", "EntryIterator", $PRIVATE},
	{"java.util.IdentityHashMap$IdentityHashMapIterator", "java.util.IdentityHashMap", "IdentityHashMapIterator", $PRIVATE | $ABSTRACT},
	{"java.util.IdentityHashMap$EntryIterator$Entry", "java.util.IdentityHashMap$EntryIterator", "Entry", $PRIVATE},
	{"java.util.Map$Entry", "java.util.Map", "Entry", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _IdentityHashMap$EntryIterator_ClassInfo_ = {
	$ACC_SUPER,
	"java.util.IdentityHashMap$EntryIterator",
	"java.util.IdentityHashMap$IdentityHashMapIterator",
	nullptr,
	_IdentityHashMap$EntryIterator_FieldInfo_,
	_IdentityHashMap$EntryIterator_MethodInfo_,
	"Ljava/util/IdentityHashMap<TK;TV;>.IdentityHashMapIterator<Ljava/util/Map$Entry<TK;TV;>;>;",
	nullptr,
	_IdentityHashMap$EntryIterator_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.IdentityHashMap"
};

$Object* allocate$IdentityHashMap$EntryIterator($Class* clazz) {
	return $of($alloc(IdentityHashMap$EntryIterator));
}

void IdentityHashMap$EntryIterator::init$($IdentityHashMap* this$0) {
	$set(this, this$0, this$0);
	$IdentityHashMap$IdentityHashMapIterator::init$(this$0);
}

$Object* IdentityHashMap$EntryIterator::next() {
	$set(this, lastReturnedEntry, $new($IdentityHashMap$EntryIterator$Entry, this, nextIndex()));
	return $of(this->lastReturnedEntry);
}

void IdentityHashMap$EntryIterator::remove() {
	this->lastReturnedIndex = ((nullptr == this->lastReturnedEntry) ? -1 : $nc(this->lastReturnedEntry)->index);
	$IdentityHashMap$IdentityHashMapIterator::remove();
	$nc(this->lastReturnedEntry)->index = this->lastReturnedIndex;
	$set(this, lastReturnedEntry, nullptr);
}

IdentityHashMap$EntryIterator::IdentityHashMap$EntryIterator() {
}

$Class* IdentityHashMap$EntryIterator::load$($String* name, bool initialize) {
	$loadClass(IdentityHashMap$EntryIterator, name, initialize, &_IdentityHashMap$EntryIterator_ClassInfo_, allocate$IdentityHashMap$EntryIterator);
	return class$;
}

$Class* IdentityHashMap$EntryIterator::class$ = nullptr;

	} // util
} // java