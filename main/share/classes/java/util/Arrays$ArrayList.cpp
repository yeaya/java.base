#include <java/util/Arrays$ArrayList.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/System.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
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

using $Serializable = ::java::io::Serializable;
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
using $RandomAccess = ::java::util::RandomAccess;
using $Spliterator = ::java::util::Spliterator;
using $Spliterators = ::java::util::Spliterators;
using $Consumer = ::java::util::function::Consumer;
using $Function = ::java::util::function::Function;
using $UnaryOperator = ::java::util::function::UnaryOperator;

namespace java {
	namespace util {

$FieldInfo _Arrays$ArrayList_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(Arrays$ArrayList, serialVersionUID)},
	{"a", "[Ljava/lang/Object;", "[TE;", $PRIVATE | $FINAL, $field(Arrays$ArrayList, a)},
	{}
};

$MethodInfo _Arrays$ArrayList_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC},
	{"<init>", "([Ljava/lang/Object;)V", "([TE;)V", 0, $method(static_cast<void(Arrays$ArrayList::*)($ObjectArray*)>(&Arrays$ArrayList::init$))},
	{"contains", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"forEach", "(Ljava/util/function/Consumer;)V", "(Ljava/util/function/Consumer<-TE;>;)V", $PUBLIC},
	{"get", "(I)Ljava/lang/Object;", "(I)TE;", $PUBLIC},
	{"indexOf", "(Ljava/lang/Object;)I", nullptr, $PUBLIC},
	{"iterator", "()Ljava/util/Iterator;", "()Ljava/util/Iterator<TE;>;", $PUBLIC},
	{"replaceAll", "(Ljava/util/function/UnaryOperator;)V", "(Ljava/util/function/UnaryOperator<TE;>;)V", $PUBLIC},
	{"set", "(ILjava/lang/Object;)Ljava/lang/Object;", "(ITE;)TE;", $PUBLIC},
	{"size", "()I", nullptr, $PUBLIC},
	{"sort", "(Ljava/util/Comparator;)V", "(Ljava/util/Comparator<-TE;>;)V", $PUBLIC},
	{"spliterator", "()Ljava/util/Spliterator;", "()Ljava/util/Spliterator<TE;>;", $PUBLIC},
	{"toArray", "()[Ljava/lang/Object;", nullptr, $PUBLIC},
	{"toArray", "([Ljava/lang/Object;)[Ljava/lang/Object;", "<T:Ljava/lang/Object;>([TT;)[TT;", $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _Arrays$ArrayList_InnerClassesInfo_[] = {
	{"java.util.Arrays$ArrayList", "java.util.Arrays", "ArrayList", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _Arrays$ArrayList_ClassInfo_ = {
	$ACC_SUPER,
	"java.util.Arrays$ArrayList",
	"java.util.AbstractList",
	"java.util.RandomAccess,java.io.Serializable",
	_Arrays$ArrayList_FieldInfo_,
	_Arrays$ArrayList_MethodInfo_,
	"<E:Ljava/lang/Object;>Ljava/util/AbstractList<TE;>;Ljava/util/RandomAccess;Ljava/io/Serializable;",
	nullptr,
	_Arrays$ArrayList_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.Arrays"
};

$Object* allocate$Arrays$ArrayList($Class* clazz) {
	return $of($alloc(Arrays$ArrayList));
}

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
	$load($ObjectArray);
	return $Arrays::copyOf(this->a, $nc(this->a)->length, $getClass($ObjectArray));
}

$ObjectArray* Arrays$ArrayList::toArray($ObjectArray* a) {
	int32_t size = this->size();
	if ($nc(a)->length < size) {
		return $Arrays::copyOf(this->a, size, $of(a)->getClass());
	}
	$System::arraycopy(this->a, 0, a, 0, size);
	if ($nc(a)->length > size) {
		a->set(size, nullptr);
	}
	return a;
}

$Object* Arrays$ArrayList::get(int32_t index) {
	return $of($nc(this->a)->get(index));
}

$Object* Arrays$ArrayList::set(int32_t index, Object$* element) {
	$var($Object0, oldValue, $nc(this->a)->get(index));
	$nc(this->a)->set(index, element);
	return $of(oldValue);
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
			if ($nc($of(o))->equals(a->get(i))) {
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
	$useLocalCurrentObjectStackCache();
	$Objects::requireNonNull(action);
	{
		$var($ObjectArray, arr$, this->a);
		int32_t len$ = $nc(arr$)->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$var($Object0, e, arr$->get(i$));
			{
				action->accept(e);
			}
		}
	}
}

void Arrays$ArrayList::replaceAll($UnaryOperator* operator$) {
	$useLocalCurrentObjectStackCache();
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
	$loadClass(Arrays$ArrayList, name, initialize, &_Arrays$ArrayList_ClassInfo_, allocate$Arrays$ArrayList);
	return class$;
}

$Class* Arrays$ArrayList::class$ = nullptr;

	} // util
} // java