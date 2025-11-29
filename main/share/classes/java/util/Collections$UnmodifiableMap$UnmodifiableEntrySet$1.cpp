#include <java/util/Collections$UnmodifiableMap$UnmodifiableEntrySet$1.h>

#include <java/lang/UnsupportedOperationException.h>
#include <java/util/Collection.h>
#include <java/util/Collections$UnmodifiableCollection.h>
#include <java/util/Collections$UnmodifiableMap$UnmodifiableEntrySet$UnmodifiableEntry.h>
#include <java/util/Collections$UnmodifiableMap$UnmodifiableEntrySet.h>
#include <java/util/Iterator.h>
#include <java/util/Map$Entry.h>
#include <java/util/function/Consumer.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $UnsupportedOperationException = ::java::lang::UnsupportedOperationException;
using $Collection = ::java::util::Collection;
using $Collections$UnmodifiableMap$UnmodifiableEntrySet = ::java::util::Collections$UnmodifiableMap$UnmodifiableEntrySet;
using $Collections$UnmodifiableMap$UnmodifiableEntrySet$UnmodifiableEntry = ::java::util::Collections$UnmodifiableMap$UnmodifiableEntrySet$UnmodifiableEntry;
using $Iterator = ::java::util::Iterator;
using $Map$Entry = ::java::util::Map$Entry;
using $Consumer = ::java::util::function::Consumer;

namespace java {
	namespace util {

$FieldInfo _Collections$UnmodifiableMap$UnmodifiableEntrySet$1_FieldInfo_[] = {
	{"this$0", "Ljava/util/Collections$UnmodifiableMap$UnmodifiableEntrySet;", nullptr, $FINAL | $SYNTHETIC, $field(Collections$UnmodifiableMap$UnmodifiableEntrySet$1, this$0)},
	{"i", "Ljava/util/Iterator;", "Ljava/util/Iterator<+Ljava/util/Map$Entry<+TK;+TV;>;>;", $PRIVATE | $FINAL, $field(Collections$UnmodifiableMap$UnmodifiableEntrySet$1, i)},
	{}
};

$MethodInfo _Collections$UnmodifiableMap$UnmodifiableEntrySet$1_MethodInfo_[] = {
	{"<init>", "(Ljava/util/Collections$UnmodifiableMap$UnmodifiableEntrySet;)V", nullptr, 0, $method(static_cast<void(Collections$UnmodifiableMap$UnmodifiableEntrySet$1::*)($Collections$UnmodifiableMap$UnmodifiableEntrySet*)>(&Collections$UnmodifiableMap$UnmodifiableEntrySet$1::init$))},
	{"forEachRemaining", "(Ljava/util/function/Consumer;)V", "(Ljava/util/function/Consumer<-Ljava/util/Map$Entry<TK;TV;>;>;)V", $PUBLIC},
	{"hasNext", "()Z", nullptr, $PUBLIC},
	{"next", "()Ljava/util/Map$Entry;", "()Ljava/util/Map$Entry<TK;TV;>;", $PUBLIC},
	{"remove", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _Collections$UnmodifiableMap$UnmodifiableEntrySet$1_EnclosingMethodInfo_ = {
	"java.util.Collections$UnmodifiableMap$UnmodifiableEntrySet",
	"iterator",
	"()Ljava/util/Iterator;"
};

$InnerClassInfo _Collections$UnmodifiableMap$UnmodifiableEntrySet$1_InnerClassesInfo_[] = {
	{"java.util.Collections$UnmodifiableMap", "java.util.Collections", "UnmodifiableMap", $PRIVATE | $STATIC},
	{"java.util.Collections$UnmodifiableMap$UnmodifiableEntrySet", "java.util.Collections$UnmodifiableMap", "UnmodifiableEntrySet", $STATIC},
	{"java.util.Collections$UnmodifiableMap$UnmodifiableEntrySet$1", nullptr, nullptr, 0},
	{"java.util.Map$Entry", "java.util.Map", "Entry", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _Collections$UnmodifiableMap$UnmodifiableEntrySet$1_ClassInfo_ = {
	$ACC_SUPER,
	"java.util.Collections$UnmodifiableMap$UnmodifiableEntrySet$1",
	"java.lang.Object",
	"java.util.Iterator",
	_Collections$UnmodifiableMap$UnmodifiableEntrySet$1_FieldInfo_,
	_Collections$UnmodifiableMap$UnmodifiableEntrySet$1_MethodInfo_,
	"Ljava/lang/Object;Ljava/util/Iterator<Ljava/util/Map$Entry<TK;TV;>;>;",
	&_Collections$UnmodifiableMap$UnmodifiableEntrySet$1_EnclosingMethodInfo_,
	_Collections$UnmodifiableMap$UnmodifiableEntrySet$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.Collections"
};

$Object* allocate$Collections$UnmodifiableMap$UnmodifiableEntrySet$1($Class* clazz) {
	return $of($alloc(Collections$UnmodifiableMap$UnmodifiableEntrySet$1));
}

void Collections$UnmodifiableMap$UnmodifiableEntrySet$1::init$($Collections$UnmodifiableMap$UnmodifiableEntrySet* this$0) {
	$set(this, this$0, this$0);
	$set(this, i, $nc(this->this$0->c)->iterator());
}

bool Collections$UnmodifiableMap$UnmodifiableEntrySet$1::hasNext() {
	return $nc(this->i)->hasNext();
}

$Object* Collections$UnmodifiableMap$UnmodifiableEntrySet$1::next() {
	return $of($new($Collections$UnmodifiableMap$UnmodifiableEntrySet$UnmodifiableEntry, $cast($Map$Entry, $($nc(this->i)->next()))));
}

void Collections$UnmodifiableMap$UnmodifiableEntrySet$1::remove() {
	$throwNew($UnsupportedOperationException);
}

void Collections$UnmodifiableMap$UnmodifiableEntrySet$1::forEachRemaining($Consumer* action) {
	$nc(this->i)->forEachRemaining($($Collections$UnmodifiableMap$UnmodifiableEntrySet::entryConsumer(action)));
}

Collections$UnmodifiableMap$UnmodifiableEntrySet$1::Collections$UnmodifiableMap$UnmodifiableEntrySet$1() {
}

$Class* Collections$UnmodifiableMap$UnmodifiableEntrySet$1::load$($String* name, bool initialize) {
	$loadClass(Collections$UnmodifiableMap$UnmodifiableEntrySet$1, name, initialize, &_Collections$UnmodifiableMap$UnmodifiableEntrySet$1_ClassInfo_, allocate$Collections$UnmodifiableMap$UnmodifiableEntrySet$1);
	return class$;
}

$Class* Collections$UnmodifiableMap$UnmodifiableEntrySet$1::class$ = nullptr;

	} // util
} // java