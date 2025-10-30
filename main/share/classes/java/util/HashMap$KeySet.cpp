#include <java/util/HashMap$KeySet.h>

#include <java/util/AbstractSet.h>
#include <java/util/ConcurrentModificationException.h>
#include <java/util/HashMap$KeyIterator.h>
#include <java/util/HashMap$KeySpliterator.h>
#include <java/util/HashMap$Node.h>
#include <java/util/HashMap.h>
#include <java/util/Iterator.h>
#include <java/util/Spliterator.h>
#include <java/util/function/Consumer.h>
#include <jcpp.h>

using $HashMap$NodeArray = $Array<::java::util::HashMap$Node>;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $AbstractSet = ::java::util::AbstractSet;
using $ConcurrentModificationException = ::java::util::ConcurrentModificationException;
using $HashMap = ::java::util::HashMap;
using $HashMap$KeyIterator = ::java::util::HashMap$KeyIterator;
using $HashMap$KeySpliterator = ::java::util::HashMap$KeySpliterator;
using $HashMap$Node = ::java::util::HashMap$Node;
using $Iterator = ::java::util::Iterator;
using $Spliterator = ::java::util::Spliterator;
using $Consumer = ::java::util::function::Consumer;

namespace java {
	namespace util {

$FieldInfo _HashMap$KeySet_FieldInfo_[] = {
	{"this$0", "Ljava/util/HashMap;", nullptr, $FINAL | $SYNTHETIC, $field(HashMap$KeySet, this$0)},
	{}
};

$MethodInfo _HashMap$KeySet_MethodInfo_[] = {
	{"<init>", "(Ljava/util/HashMap;)V", nullptr, 0, $method(static_cast<void(HashMap$KeySet::*)($HashMap*)>(&HashMap$KeySet::init$))},
	{"clear", "()V", nullptr, $PUBLIC | $FINAL},
	{"contains", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC | $FINAL},
	{"forEach", "(Ljava/util/function/Consumer;)V", "(Ljava/util/function/Consumer<-TK;>;)V", $PUBLIC | $FINAL},
	{"iterator", "()Ljava/util/Iterator;", "()Ljava/util/Iterator<TK;>;", $PUBLIC | $FINAL},
	{"remove", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC | $FINAL},
	{"size", "()I", nullptr, $PUBLIC | $FINAL},
	{"spliterator", "()Ljava/util/Spliterator;", "()Ljava/util/Spliterator<TK;>;", $PUBLIC | $FINAL},
	{"toArray", "()[Ljava/lang/Object;", nullptr, $PUBLIC},
	{"toArray", "([Ljava/lang/Object;)[Ljava/lang/Object;", "<T:Ljava/lang/Object;>([TT;)[TT;", $PUBLIC},
	{}
};

$InnerClassInfo _HashMap$KeySet_InnerClassesInfo_[] = {
	{"java.util.HashMap$KeySet", "java.util.HashMap", "KeySet", $FINAL},
	{}
};

$ClassInfo _HashMap$KeySet_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"java.util.HashMap$KeySet",
	"java.util.AbstractSet",
	nullptr,
	_HashMap$KeySet_FieldInfo_,
	_HashMap$KeySet_MethodInfo_,
	"Ljava/util/AbstractSet<TK;>;",
	nullptr,
	_HashMap$KeySet_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.HashMap"
};

$Object* allocate$HashMap$KeySet($Class* clazz) {
	return $of($alloc(HashMap$KeySet));
}

void HashMap$KeySet::init$($HashMap* this$0) {
	$set(this, this$0, this$0);
	$AbstractSet::init$();
}

int32_t HashMap$KeySet::size() {
	return this->this$0->size$;
}

void HashMap$KeySet::clear() {
	this->this$0->clear();
}

$Iterator* HashMap$KeySet::iterator() {
	return $new($HashMap$KeyIterator, this->this$0);
}

bool HashMap$KeySet::contains(Object$* o) {
	return this->this$0->containsKey(o);
}

bool HashMap$KeySet::remove(Object$* key) {
	return this->this$0->removeNode($HashMap::hash(key), key, nullptr, false, true) != nullptr;
}

$Spliterator* HashMap$KeySet::spliterator() {
	return $new($HashMap$KeySpliterator, this->this$0, 0, -1, 0, 0);
}

$ObjectArray* HashMap$KeySet::toArray() {
	return this->this$0->keysToArray($$new($ObjectArray, this->this$0->size$));
}

$ObjectArray* HashMap$KeySet::toArray($ObjectArray* a) {
	return this->this$0->keysToArray($(this->this$0->prepareArray(a)));
}

void HashMap$KeySet::forEach($Consumer* action) {
	$useLocalCurrentObjectStackCache();
	$var($HashMap$NodeArray, tab, nullptr);
	if (action == nullptr) {
		$throwNew($NullPointerException);
	}
	if (this->this$0->size$ > 0 && ($assign(tab, this->this$0->table)) != nullptr) {
		int32_t mc = this->this$0->modCount;
		{
			$var($HashMap$NodeArray, arr$, tab);
			int32_t len$ = $nc(arr$)->length;
			int32_t i$ = 0;
			for (; i$ < len$; ++i$) {
				$var($HashMap$Node, e, arr$->get(i$));
				{
					for (; e != nullptr; $assign(e, $nc(e)->next)) {
						$nc(action)->accept(e->key);
					}
				}
			}
		}
		if (this->this$0->modCount != mc) {
			$throwNew($ConcurrentModificationException);
		}
	}
}

HashMap$KeySet::HashMap$KeySet() {
}

$Class* HashMap$KeySet::load$($String* name, bool initialize) {
	$loadClass(HashMap$KeySet, name, initialize, &_HashMap$KeySet_ClassInfo_, allocate$HashMap$KeySet);
	return class$;
}

$Class* HashMap$KeySet::class$ = nullptr;

	} // util
} // java