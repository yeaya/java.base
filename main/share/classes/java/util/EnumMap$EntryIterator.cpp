#include <java/util/EnumMap$EntryIterator.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/EnumMap$EntryIterator$Entry.h>
#include <java/util/EnumMap$EnumMapIterator.h>
#include <java/util/EnumMap.h>
#include <java/util/NoSuchElementException.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $EnumMap = ::java::util::EnumMap;
using $EnumMap$EntryIterator$Entry = ::java::util::EnumMap$EntryIterator$Entry;
using $EnumMap$EnumMapIterator = ::java::util::EnumMap$EnumMapIterator;
using $NoSuchElementException = ::java::util::NoSuchElementException;

namespace java {
	namespace util {

$FieldInfo _EnumMap$EntryIterator_FieldInfo_[] = {
	{"this$0", "Ljava/util/EnumMap;", nullptr, $FINAL | $SYNTHETIC, $field(EnumMap$EntryIterator, this$0)},
	{"lastReturnedEntry", "Ljava/util/EnumMap$EntryIterator$Entry;", "Ljava/util/EnumMap<TK;TV;>.EntryIterator.Entry;", $PRIVATE, $field(EnumMap$EntryIterator, lastReturnedEntry)},
	{}
};

$MethodInfo _EnumMap$EntryIterator_MethodInfo_[] = {
	{"<init>", "(Ljava/util/EnumMap;)V", nullptr, $PRIVATE, $method(static_cast<void(EnumMap$EntryIterator::*)($EnumMap*)>(&EnumMap$EntryIterator::init$))},
	{"next", "()Ljava/util/Map$Entry;", "()Ljava/util/Map$Entry<TK;TV;>;", $PUBLIC},
	{"remove", "()V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _EnumMap$EntryIterator_InnerClassesInfo_[] = {
	{"java.util.EnumMap$EntryIterator", "java.util.EnumMap", "EntryIterator", $PRIVATE},
	{"java.util.EnumMap$EnumMapIterator", "java.util.EnumMap", "EnumMapIterator", $PRIVATE | $ABSTRACT},
	{"java.util.EnumMap$EntryIterator$Entry", "java.util.EnumMap$EntryIterator", "Entry", $PRIVATE},
	{"java.util.Map$Entry", "java.util.Map", "Entry", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _EnumMap$EntryIterator_ClassInfo_ = {
	$ACC_SUPER,
	"java.util.EnumMap$EntryIterator",
	"java.util.EnumMap$EnumMapIterator",
	nullptr,
	_EnumMap$EntryIterator_FieldInfo_,
	_EnumMap$EntryIterator_MethodInfo_,
	"Ljava/util/EnumMap<TK;TV;>.EnumMapIterator<Ljava/util/Map$Entry<TK;TV;>;>;",
	nullptr,
	_EnumMap$EntryIterator_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.EnumMap"
};

$Object* allocate$EnumMap$EntryIterator($Class* clazz) {
	return $of($alloc(EnumMap$EntryIterator));
}

void EnumMap$EntryIterator::init$($EnumMap* this$0) {
	$set(this, this$0, this$0);
	$EnumMap$EnumMapIterator::init$(this$0);
}

$Object* EnumMap$EntryIterator::next() {
	if (!hasNext()) {
		$throwNew($NoSuchElementException);
	}
	$set(this, lastReturnedEntry, $new($EnumMap$EntryIterator$Entry, this, this->index++));
	return $of(this->lastReturnedEntry);
}

void EnumMap$EntryIterator::remove() {
	this->lastReturnedIndex = ((nullptr == this->lastReturnedEntry) ? -1 : $nc(this->lastReturnedEntry)->index);
	$EnumMap$EnumMapIterator::remove();
	$nc(this->lastReturnedEntry)->index = this->lastReturnedIndex;
	$set(this, lastReturnedEntry, nullptr);
}

EnumMap$EntryIterator::EnumMap$EntryIterator() {
}

$Class* EnumMap$EntryIterator::load$($String* name, bool initialize) {
	$loadClass(EnumMap$EntryIterator, name, initialize, &_EnumMap$EntryIterator_ClassInfo_, allocate$EnumMap$EntryIterator);
	return class$;
}

$Class* EnumMap$EntryIterator::class$ = nullptr;

	} // util
} // java