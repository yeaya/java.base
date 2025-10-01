#include <java/util/HashMap$Values.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/NullPointerException.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/AbstractCollection.h>
#include <java/util/ConcurrentModificationException.h>
#include <java/util/HashMap$Node.h>
#include <java/util/HashMap$ValueIterator.h>
#include <java/util/HashMap$ValueSpliterator.h>
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
using $AbstractCollection = ::java::util::AbstractCollection;
using $ConcurrentModificationException = ::java::util::ConcurrentModificationException;
using $HashMap = ::java::util::HashMap;
using $HashMap$Node = ::java::util::HashMap$Node;
using $HashMap$ValueIterator = ::java::util::HashMap$ValueIterator;
using $HashMap$ValueSpliterator = ::java::util::HashMap$ValueSpliterator;
using $Iterator = ::java::util::Iterator;
using $Spliterator = ::java::util::Spliterator;
using $Consumer = ::java::util::function::Consumer;

namespace java {
	namespace util {

$FieldInfo _HashMap$Values_FieldInfo_[] = {
	{"this$0", "Ljava/util/HashMap;", nullptr, $FINAL | $SYNTHETIC, $field(HashMap$Values, this$0)},
	{}
};

$MethodInfo _HashMap$Values_MethodInfo_[] = {
	{"<init>", "(Ljava/util/HashMap;)V", nullptr, 0, $method(static_cast<void(HashMap$Values::*)($HashMap*)>(&HashMap$Values::init$))},
	{"clear", "()V", nullptr, $PUBLIC | $FINAL},
	{"contains", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC | $FINAL},
	{"forEach", "(Ljava/util/function/Consumer;)V", "(Ljava/util/function/Consumer<-TV;>;)V", $PUBLIC | $FINAL},
	{"iterator", "()Ljava/util/Iterator;", "()Ljava/util/Iterator<TV;>;", $PUBLIC | $FINAL},
	{"size", "()I", nullptr, $PUBLIC | $FINAL},
	{"spliterator", "()Ljava/util/Spliterator;", "()Ljava/util/Spliterator<TV;>;", $PUBLIC | $FINAL},
	{"toArray", "()[Ljava/lang/Object;", nullptr, $PUBLIC},
	{"toArray", "([Ljava/lang/Object;)[Ljava/lang/Object;", "<T:Ljava/lang/Object;>([TT;)[TT;", $PUBLIC},
	{}
};

$InnerClassInfo _HashMap$Values_InnerClassesInfo_[] = {
	{"java.util.HashMap$Values", "java.util.HashMap", "Values", $FINAL},
	{}
};

$ClassInfo _HashMap$Values_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"java.util.HashMap$Values",
	"java.util.AbstractCollection",
	nullptr,
	_HashMap$Values_FieldInfo_,
	_HashMap$Values_MethodInfo_,
	"Ljava/util/AbstractCollection<TV;>;",
	nullptr,
	_HashMap$Values_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.HashMap"
};

$Object* allocate$HashMap$Values($Class* clazz) {
	return $of($alloc(HashMap$Values));
}

void HashMap$Values::init$($HashMap* this$0) {
	$set(this, this$0, this$0);
	$AbstractCollection::init$();
}

int32_t HashMap$Values::size() {
	return this->this$0->size$;
}

void HashMap$Values::clear() {
	this->this$0->clear();
}

$Iterator* HashMap$Values::iterator() {
	return $new($HashMap$ValueIterator, this->this$0);
}

bool HashMap$Values::contains(Object$* o) {
	return this->this$0->containsValue(o);
}

$Spliterator* HashMap$Values::spliterator() {
	return $new($HashMap$ValueSpliterator, this->this$0, 0, -1, 0, 0);
}

$ObjectArray* HashMap$Values::toArray() {
	return this->this$0->valuesToArray($$new($ObjectArray, this->this$0->size$));
}

$ObjectArray* HashMap$Values::toArray($ObjectArray* a) {
	return this->this$0->valuesToArray($(this->this$0->prepareArray(a)));
}

void HashMap$Values::forEach($Consumer* action) {
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
						$nc(action)->accept(e->value);
					}
				}
			}
		}
		if (this->this$0->modCount != mc) {
			$throwNew($ConcurrentModificationException);
		}
	}
}

HashMap$Values::HashMap$Values() {
}

$Class* HashMap$Values::load$($String* name, bool initialize) {
	$loadClass(HashMap$Values, name, initialize, &_HashMap$Values_ClassInfo_, allocate$HashMap$Values);
	return class$;
}

$Class* HashMap$Values::class$ = nullptr;

	} // util
} // java