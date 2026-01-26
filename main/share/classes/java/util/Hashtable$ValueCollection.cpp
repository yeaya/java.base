#include <java/util/Hashtable$ValueCollection.h>

#include <java/util/AbstractCollection.h>
#include <java/util/Hashtable.h>
#include <java/util/Iterator.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractCollection = ::java::util::AbstractCollection;
using $Hashtable = ::java::util::Hashtable;
using $Iterator = ::java::util::Iterator;

namespace java {
	namespace util {

$FieldInfo _Hashtable$ValueCollection_FieldInfo_[] = {
	{"this$0", "Ljava/util/Hashtable;", nullptr, $FINAL | $SYNTHETIC, $field(Hashtable$ValueCollection, this$0)},
	{}
};

$MethodInfo _Hashtable$ValueCollection_MethodInfo_[] = {
	{"<init>", "(Ljava/util/Hashtable;)V", nullptr, $PRIVATE, $method(Hashtable$ValueCollection, init$, void, $Hashtable*)},
	{"clear", "()V", nullptr, $PUBLIC, $virtualMethod(Hashtable$ValueCollection, clear, void)},
	{"contains", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC, $virtualMethod(Hashtable$ValueCollection, contains, bool, Object$*)},
	{"iterator", "()Ljava/util/Iterator;", "()Ljava/util/Iterator<TV;>;", $PUBLIC, $virtualMethod(Hashtable$ValueCollection, iterator, $Iterator*)},
	{"size", "()I", nullptr, $PUBLIC, $virtualMethod(Hashtable$ValueCollection, size, int32_t)},
	{}
};

$InnerClassInfo _Hashtable$ValueCollection_InnerClassesInfo_[] = {
	{"java.util.Hashtable$ValueCollection", "java.util.Hashtable", "ValueCollection", $PRIVATE},
	{}
};

$ClassInfo _Hashtable$ValueCollection_ClassInfo_ = {
	$ACC_SUPER,
	"java.util.Hashtable$ValueCollection",
	"java.util.AbstractCollection",
	nullptr,
	_Hashtable$ValueCollection_FieldInfo_,
	_Hashtable$ValueCollection_MethodInfo_,
	"Ljava/util/AbstractCollection<TV;>;",
	nullptr,
	_Hashtable$ValueCollection_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.Hashtable"
};

$Object* allocate$Hashtable$ValueCollection($Class* clazz) {
	return $of($alloc(Hashtable$ValueCollection));
}

void Hashtable$ValueCollection::init$($Hashtable* this$0) {
	$set(this, this$0, this$0);
	$AbstractCollection::init$();
}

$Iterator* Hashtable$ValueCollection::iterator() {
	return this->this$0->getIterator(1);
}

int32_t Hashtable$ValueCollection::size() {
	return this->this$0->count;
}

bool Hashtable$ValueCollection::contains(Object$* o) {
	return this->this$0->containsValue(o);
}

void Hashtable$ValueCollection::clear() {
	this->this$0->clear();
}

Hashtable$ValueCollection::Hashtable$ValueCollection() {
}

$Class* Hashtable$ValueCollection::load$($String* name, bool initialize) {
	$loadClass(Hashtable$ValueCollection, name, initialize, &_Hashtable$ValueCollection_ClassInfo_, allocate$Hashtable$ValueCollection);
	return class$;
}

$Class* Hashtable$ValueCollection::class$ = nullptr;

	} // util
} // java