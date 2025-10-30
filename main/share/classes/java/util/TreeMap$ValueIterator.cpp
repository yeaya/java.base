#include <java/util/TreeMap$ValueIterator.h>

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

$FieldInfo _TreeMap$ValueIterator_FieldInfo_[] = {
	{"this$0", "Ljava/util/TreeMap;", nullptr, $FINAL | $SYNTHETIC, $field(TreeMap$ValueIterator, this$0)},
	{}
};

$MethodInfo _TreeMap$ValueIterator_MethodInfo_[] = {
	{"<init>", "(Ljava/util/TreeMap;Ljava/util/TreeMap$Entry;)V", "(Ljava/util/TreeMap$Entry<TK;TV;>;)V", 0, $method(static_cast<void(TreeMap$ValueIterator::*)($TreeMap*,$TreeMap$Entry*)>(&TreeMap$ValueIterator::init$))},
	{"next", "()Ljava/lang/Object;", "()TV;", $PUBLIC},
	{}
};

$InnerClassInfo _TreeMap$ValueIterator_InnerClassesInfo_[] = {
	{"java.util.TreeMap$ValueIterator", "java.util.TreeMap", "ValueIterator", $FINAL},
	{"java.util.TreeMap$PrivateEntryIterator", "java.util.TreeMap", "PrivateEntryIterator", $ABSTRACT},
	{}
};

$ClassInfo _TreeMap$ValueIterator_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"java.util.TreeMap$ValueIterator",
	"java.util.TreeMap$PrivateEntryIterator",
	nullptr,
	_TreeMap$ValueIterator_FieldInfo_,
	_TreeMap$ValueIterator_MethodInfo_,
	"Ljava/util/TreeMap<TK;TV;>.PrivateEntryIterator<TV;>;",
	nullptr,
	_TreeMap$ValueIterator_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.TreeMap"
};

$Object* allocate$TreeMap$ValueIterator($Class* clazz) {
	return $of($alloc(TreeMap$ValueIterator));
}

void TreeMap$ValueIterator::init$($TreeMap* this$0, $TreeMap$Entry* first) {
	$set(this, this$0, this$0);
	$TreeMap$PrivateEntryIterator::init$(this$0, first);
}

$Object* TreeMap$ValueIterator::next() {
	return $of($nc($(nextEntry()))->value);
}

TreeMap$ValueIterator::TreeMap$ValueIterator() {
}

$Class* TreeMap$ValueIterator::load$($String* name, bool initialize) {
	$loadClass(TreeMap$ValueIterator, name, initialize, &_TreeMap$ValueIterator_ClassInfo_, allocate$TreeMap$ValueIterator);
	return class$;
}

$Class* TreeMap$ValueIterator::class$ = nullptr;

	} // util
} // java