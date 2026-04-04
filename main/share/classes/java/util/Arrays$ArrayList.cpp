#include <java/util/Arrays$ArrayList.h>
#include <java/util/AbstractList.h>
#include <java/util/Arrays$ArrayItr.h>
#include <java/util/Arrays.h>
#include <java/util/Comparator.h>
#include <java/util/Iterator.h>
#include <java/util/Objects.h>
#include <java/util/Spliterator.h>
#include <java/util/Spliterators.h>
#include <java/util/function/Consumer.h>
#include <java/util/function/UnaryOperator.h>
#include <jcpp.h>

#undef ORDERED

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractList = ::java::util::AbstractList;
using $Arrays = ::java::util::Arrays;
using $Arrays$ArrayItr = ::java::util::Arrays$ArrayItr;
using $Comparator = ::java::util::Comparator;
using $Iterator = ::java::util::Iterator;
using $Objects = ::java::util::Objects;
using $Spliterator = ::java::util::Spliterator;
using $Spliterators = ::java::util::Spliterators;
using $Consumer = ::java::util::function::Consumer;
using $UnaryOperator = ::java::util::function::UnaryOperator;

namespace java {
	namespace util {

bool Arrays$ArrayList::equals(Object$* o) {
	 return this->$AbstractList::equals(o);
}

int32_t Arrays$ArrayList::hashCode() {
	 return this->$AbstractList::hashCode();
}

$String* Arrays$ArrayList::toString() {
	 return this->$AbstractList::toString();
}

$Object* Arrays$ArrayList::clone() {
	 return this->$AbstractList::clone();
}

void Arrays$ArrayList::finalize() {
	this->$AbstractList::finalize();
}

void Arrays$ArrayList::init$($ObjectArray* array) {
	$AbstractList::init$();
	$set(this, a, $cast($ObjectArray, $Objects::requireNonNull(array)));
}

int32_t Arrays$ArrayList::size() {
	return $nc(this->a)->length;
}

$ObjectArray* Arrays$ArrayList::toArray() {
	return $Arrays::copyOf(this->a, $nc(this->a)->length, $getClass($ObjectArray));
}

$ObjectArray* Arrays$ArrayList::toArray($ObjectArray* a) {
	int32_t size = this->size();
	if ($nc(a)->length < size) {
		return $Arrays::copyOf(this->a, size, $of(a)->getClass());
	}
	$System::arraycopy(this->a, 0, a, 0, size);
	if (a->length > size) {
		a->set(size, nullptr);
	}
	return a;
}

$Object* Arrays$ArrayList::get(int32_t index) {
	return $nc(this->a)->get(index);
}

$Object* Arrays$ArrayList::set(int32_t index, Object$* element) {
	$var($Object0, oldValue, $nc(this->a)->get(index));
	this->a->set(index, element);
	return oldValue;
}

int32_t Arrays$ArrayList::indexOf(Object$* o) {
	$var($ObjectArray, a, this->a);
	if (o == nullptr) {
		for (int32_t i = 0; i < $nc(a)->length; ++i) {
			if (a->get(i) == nullptr) {
				return i;
			}
		}
	} else {
		for (int32_t i = 0; i < $nc(a)->length; ++i) {
			if ($of(o)->equals(a->get(i))) {
				return i;
			}
		}
	}
	return -1;
}

bool Arrays$ArrayList::contains(Object$* o) {
	return indexOf(o) >= 0;
}

$Spliterator* Arrays$ArrayList::spliterator() {
	return $Spliterators::spliterator(this->a, $Spliterator::ORDERED);
}

void Arrays$ArrayList::forEach($Consumer* action) {
	$useLocalObjectStack();
	$Objects::requireNonNull(action);
	{
		$var($ObjectArray, arr$, this->a);
		for (int32_t len$ = $nc(arr$)->length, i$ = 0; i$ < len$; ++i$) {
			$var($Object0, e, arr$->get(i$));
			{
				action->accept(e);
			}
		}
	}
}

void Arrays$ArrayList::replaceAll($UnaryOperator* operator$) {
	$useLocalObjectStack();
	$Objects::requireNonNull(operator$);
	$var($ObjectArray, a, this->a);
	for (int32_t i = 0; i < $nc(a)->length; ++i) {
		a->set(i, $(operator$->apply(a->get(i))));
	}
}

void Arrays$ArrayList::sort($Comparator* c) {
	$Arrays::sort(this->a, c);
}

$Iterator* Arrays$ArrayList::iterator() {
	return $new($Arrays$ArrayItr, this->a);
}

Arrays$ArrayList::Arrays$ArrayList() {
}

$Class* Arrays$ArrayList::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(Arrays$ArrayList, serialVersionUID)},
		{"a", "[Ljava/lang/Object;", "[TE;", $PRIVATE | $FINAL, $field(Arrays$ArrayList, a)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
		{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
		{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
		{"*hashCode", "()I", nullptr, $PUBLIC},
		{"<init>", "([Ljava/lang/Object;)V", "([TE;)V", 0, $method(Arrays$ArrayList, init$, void, $ObjectArray*)},
		{"contains", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC, $virtualMethod(Arrays$ArrayList, contains, bool, Object$*)},
		{"forEach", "(Ljava/util/function/Consumer;)V", "(Ljava/util/function/Consumer<-TE;>;)V", $PUBLIC, $virtualMethod(Arrays$ArrayList, forEach, void, $Consumer*)},
		{"get", "(I)Ljava/lang/Object;", "(I)TE;", $PUBLIC, $virtualMethod(Arrays$ArrayList, get, $Object*, int32_t)},
		{"indexOf", "(Ljava/lang/Object;)I", nullptr, $PUBLIC, $virtualMethod(Arrays$ArrayList, indexOf, int32_t, Object$*)},
		{"iterator", "()Ljava/util/Iterator;", "()Ljava/util/Iterator<TE;>;", $PUBLIC, $virtualMethod(Arrays$ArrayList, iterator, $Iterator*)},
		{"replaceAll", "(Ljava/util/function/UnaryOperator;)V", "(Ljava/util/function/UnaryOperator<TE;>;)V", $PUBLIC, $virtualMethod(Arrays$ArrayList, replaceAll, void, $UnaryOperator*)},
		{"set", "(ILjava/lang/Object;)Ljava/lang/Object;", "(ITE;)TE;", $PUBLIC, $virtualMethod(Arrays$ArrayList, set, $Object*, int32_t, Object$*)},
		{"size", "()I", nullptr, $PUBLIC, $virtualMethod(Arrays$ArrayList, size, int32_t)},
		{"sort", "(Ljava/util/Comparator;)V", "(Ljava/util/Comparator<-TE;>;)V", $PUBLIC, $virtualMethod(Arrays$ArrayList, sort, void, $Comparator*)},
		{"spliterator", "()Ljava/util/Spliterator;", "()Ljava/util/Spliterator<TE;>;", $PUBLIC, $virtualMethod(Arrays$ArrayList, spliterator, $Spliterator*)},
		{"toArray", "()[Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(Arrays$ArrayList, toArray, $ObjectArray*)},
		{"toArray", "([Ljava/lang/Object;)[Ljava/lang/Object;", "<T:Ljava/lang/Object;>([TT;)[TT;", $PUBLIC, $virtualMethod(Arrays$ArrayList, toArray, $ObjectArray*, $ObjectArray*)},
		{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.util.Arrays$ArrayList", "java.util.Arrays", "ArrayList", $PRIVATE | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"java.util.Arrays$ArrayList",
		"java.util.AbstractList",
		"java.util.RandomAccess,java.io.Serializable",
		fieldInfos$$,
		methodInfos$$,
		"<E:Ljava/lang/Object;>Ljava/util/AbstractList<TE;>;Ljava/util/RandomAccess;Ljava/io/Serializable;",
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.util.Arrays"
	};
	$loadClass(Arrays$ArrayList, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(Arrays$ArrayList));
	});
	return class$;
}

$Class* Arrays$ArrayList::class$ = nullptr;

	} // util
} // java