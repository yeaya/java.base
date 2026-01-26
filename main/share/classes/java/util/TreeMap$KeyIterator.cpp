#include <java/util/TreeMap$KeyIterator.h>

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

$FieldInfo _TreeMap$KeyIterator_FieldInfo_[] = {
	{"this$0", "Ljava/util/TreeMap;", nullptr, $FINAL | $SYNTHETIC, $field(TreeMap$KeyIterator, this$0)},
	{}
};

$MethodInfo _TreeMap$KeyIterator_MethodInfo_[] = {
	{"<init>", "(Ljava/util/TreeMap;Ljava/util/TreeMap$Entry;)V", "(Ljava/util/TreeMap$Entry<TK;TV;>;)V", 0, $method(TreeMap$KeyIterator, init$, void, $TreeMap*, $TreeMap$Entry*)},
	{"next", "()Ljava/lang/Object;", "()TK;", $PUBLIC, $virtualMethod(TreeMap$KeyIterator, next, $Object*)},
	{}
};

$InnerClassInfo _TreeMap$KeyIterator_InnerClassesInfo_[] = {
	{"java.util.TreeMap$KeyIterator", "java.util.TreeMap", "KeyIterator", $FINAL},
	{"java.util.TreeMap$PrivateEntryIterator", "java.util.TreeMap", "PrivateEntryIterator", $ABSTRACT},
	{}
};

$ClassInfo _TreeMap$KeyIterator_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"java.util.TreeMap$KeyIterator",
	"java.util.TreeMap$PrivateEntryIterator",
	nullptr,
	_TreeMap$KeyIterator_FieldInfo_,
	_TreeMap$KeyIterator_MethodInfo_,
	"Ljava/util/TreeMap<TK;TV;>.PrivateEntryIterator<TK;>;",
	nullptr,
	_TreeMap$KeyIterator_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.TreeMap"
};

$Object* allocate$TreeMap$KeyIterator($Class* clazz) {
	return $of($alloc(TreeMap$KeyIterator));
}

void TreeMap$KeyIterator::init$($TreeMap* this$0, $TreeMap$Entry* first) {
	$set(this, this$0, this$0);
	$TreeMap$PrivateEntryIterator::init$(this$0, first);
}

$Object* TreeMap$KeyIterator::next() {
	return $of($nc($(nextEntry()))->key);
}

TreeMap$KeyIterator::TreeMap$KeyIterator() {
}

$Class* TreeMap$KeyIterator::load$($String* name, bool initialize) {
	$loadClass(TreeMap$KeyIterator, name, initialize, &_TreeMap$KeyIterator_ClassInfo_, allocate$TreeMap$KeyIterator);
	return class$;
}

$Class* TreeMap$KeyIterator::class$ = nullptr;

	} // util
} // java