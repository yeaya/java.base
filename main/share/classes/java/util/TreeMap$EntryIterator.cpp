#include <java/util/TreeMap$EntryIterator.h>

#include <java/util/TreeMap$Entry.h>
#include <java/util/TreeMap$PrivateEntryIterator.h>
#include <java/util/TreeMap.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $TreeMap = ::java::util::TreeMap;
using $TreeMap$Entry = ::java::util::TreeMap$Entry;
using $TreeMap$PrivateEntryIterator = ::java::util::TreeMap$PrivateEntryIterator;

namespace java {
	namespace util {

$FieldInfo _TreeMap$EntryIterator_FieldInfo_[] = {
	{"this$0", "Ljava/util/TreeMap;", nullptr, $FINAL | $SYNTHETIC, $field(TreeMap$EntryIterator, this$0)},
	{}
};

$MethodInfo _TreeMap$EntryIterator_MethodInfo_[] = {
	{"<init>", "(Ljava/util/TreeMap;Ljava/util/TreeMap$Entry;)V", "(Ljava/util/TreeMap$Entry<TK;TV;>;)V", 0, $method(TreeMap$EntryIterator, init$, void, $TreeMap*, $TreeMap$Entry*)},
	{"next", "()Ljava/util/Map$Entry;", "()Ljava/util/Map$Entry<TK;TV;>;", $PUBLIC, $virtualMethod(TreeMap$EntryIterator, next, $Object*)},
	{}
};

$InnerClassInfo _TreeMap$EntryIterator_InnerClassesInfo_[] = {
	{"java.util.TreeMap$EntryIterator", "java.util.TreeMap", "EntryIterator", $FINAL},
	{"java.util.TreeMap$PrivateEntryIterator", "java.util.TreeMap", "PrivateEntryIterator", $ABSTRACT},
	{"java.util.Map$Entry", "java.util.Map", "Entry", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _TreeMap$EntryIterator_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"java.util.TreeMap$EntryIterator",
	"java.util.TreeMap$PrivateEntryIterator",
	nullptr,
	_TreeMap$EntryIterator_FieldInfo_,
	_TreeMap$EntryIterator_MethodInfo_,
	"Ljava/util/TreeMap<TK;TV;>.PrivateEntryIterator<Ljava/util/Map$Entry<TK;TV;>;>;",
	nullptr,
	_TreeMap$EntryIterator_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.TreeMap"
};

$Object* allocate$TreeMap$EntryIterator($Class* clazz) {
	return $of($alloc(TreeMap$EntryIterator));
}

void TreeMap$EntryIterator::init$($TreeMap* this$0, $TreeMap$Entry* first) {
	$set(this, this$0, this$0);
	$TreeMap$PrivateEntryIterator::init$(this$0, first);
}

$Object* TreeMap$EntryIterator::next() {
	return $of(nextEntry());
}

TreeMap$EntryIterator::TreeMap$EntryIterator() {
}

$Class* TreeMap$EntryIterator::load$($String* name, bool initialize) {
	$loadClass(TreeMap$EntryIterator, name, initialize, &_TreeMap$EntryIterator_ClassInfo_, allocate$TreeMap$EntryIterator);
	return class$;
}

$Class* TreeMap$EntryIterator::class$ = nullptr;

	} // util
} // java