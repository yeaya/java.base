#include <java/util/concurrent/CopyOnWriteArrayList$COWSubList.h>

#include <java/io/Serializable.h>
#include <java/lang/IndexOutOfBoundsException.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/util/Arrays.h>
#include <java/util/Collection.h>
#include <java/util/Comparator.h>
#include <java/util/ConcurrentModificationException.h>
#include <java/util/Iterator.h>
#include <java/util/List.h>
#include <java/util/ListIterator.h>
#include <java/util/Objects.h>
#include <java/util/Spliterator.h>
#include <java/util/Spliterators.h>
#include <java/util/concurrent/CopyOnWriteArrayList$COWSubListIterator.h>
#include <java/util/concurrent/CopyOnWriteArrayList.h>
#include <java/util/function/Consumer.h>
#include <java/util/function/Predicate.h>
#include <java/util/function/UnaryOperator.h>
#include <jcpp.h>

#undef IMMUTABLE
#undef ORDERED

using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IndexOutOfBoundsException = ::java::lang::IndexOutOfBoundsException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $Arrays = ::java::util::Arrays;
using $Collection = ::java::util::Collection;
using $Comparator = ::java::util::Comparator;
using $ConcurrentModificationException = ::java::util::ConcurrentModificationException;
using $Iterator = ::java::util::Iterator;
using $List = ::java::util::List;
using $ListIterator = ::java::util::ListIterator;
using $Objects = ::java::util::Objects;
using $Spliterator = ::java::util::Spliterator;
using $Spliterators = ::java::util::Spliterators;
using $CopyOnWriteArrayList = ::java::util::concurrent::CopyOnWriteArrayList;
using $CopyOnWriteArrayList$COWSubListIterator = ::java::util::concurrent::CopyOnWriteArrayList$COWSubListIterator;
using $Consumer = ::java::util::function::Consumer;
using $Predicate = ::java::util::function::Predicate;
using $UnaryOperator = ::java::util::function::UnaryOperator;

namespace java {
	namespace util {
		namespace concurrent {

class CopyOnWriteArrayList$COWSubList$$Lambda$lambda$removeAll$0 : public $Predicate {
	$class(CopyOnWriteArrayList$COWSubList$$Lambda$lambda$removeAll$0, $NO_CLASS_INIT, $Predicate)
public:
	void init$($Collection* c) {
		$set(this, c, c);
	}
	virtual bool test(Object$* e) override {
		 return CopyOnWriteArrayList$COWSubList::lambda$removeAll$0(c, e);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<CopyOnWriteArrayList$COWSubList$$Lambda$lambda$removeAll$0>());
	}
	$Collection* c = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo CopyOnWriteArrayList$COWSubList$$Lambda$lambda$removeAll$0::fieldInfos[2] = {
	{"c", "Ljava/util/Collection;", nullptr, $PUBLIC, $field(CopyOnWriteArrayList$COWSubList$$Lambda$lambda$removeAll$0, c)},
	{}
};
$MethodInfo CopyOnWriteArrayList$COWSubList$$Lambda$lambda$removeAll$0::methodInfos[3] = {
	{"<init>", "(Ljava/util/Collection;)V", nullptr, $PUBLIC, $method(CopyOnWriteArrayList$COWSubList$$Lambda$lambda$removeAll$0, init$, void, $Collection*)},
	{"test", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC, $virtualMethod(CopyOnWriteArrayList$COWSubList$$Lambda$lambda$removeAll$0, test, bool, Object$*)},
	{}
};
$ClassInfo CopyOnWriteArrayList$COWSubList$$Lambda$lambda$removeAll$0::classInfo$ = {
	$PUBLIC | $FINAL,
	"java.util.concurrent.CopyOnWriteArrayList$COWSubList$$Lambda$lambda$removeAll$0",
	"java.lang.Object",
	"java.util.function.Predicate",
	fieldInfos,
	methodInfos
};
$Class* CopyOnWriteArrayList$COWSubList$$Lambda$lambda$removeAll$0::load$($String* name, bool initialize) {
	$loadClass(CopyOnWriteArrayList$COWSubList$$Lambda$lambda$removeAll$0, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* CopyOnWriteArrayList$COWSubList$$Lambda$lambda$removeAll$0::class$ = nullptr;

class CopyOnWriteArrayList$COWSubList$$Lambda$lambda$retainAll$1$1 : public $Predicate {
	$class(CopyOnWriteArrayList$COWSubList$$Lambda$lambda$retainAll$1$1, $NO_CLASS_INIT, $Predicate)
public:
	void init$($Collection* c) {
		$set(this, c, c);
	}
	virtual bool test(Object$* e) override {
		 return CopyOnWriteArrayList$COWSubList::lambda$retainAll$1(c, e);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<CopyOnWriteArrayList$COWSubList$$Lambda$lambda$retainAll$1$1>());
	}
	$Collection* c = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo CopyOnWriteArrayList$COWSubList$$Lambda$lambda$retainAll$1$1::fieldInfos[2] = {
	{"c", "Ljava/util/Collection;", nullptr, $PUBLIC, $field(CopyOnWriteArrayList$COWSubList$$Lambda$lambda$retainAll$1$1, c)},
	{}
};
$MethodInfo CopyOnWriteArrayList$COWSubList$$Lambda$lambda$retainAll$1$1::methodInfos[3] = {
	{"<init>", "(Ljava/util/Collection;)V", nullptr, $PUBLIC, $method(CopyOnWriteArrayList$COWSubList$$Lambda$lambda$retainAll$1$1, init$, void, $Collection*)},
	{"test", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC, $virtualMethod(CopyOnWriteArrayList$COWSubList$$Lambda$lambda$retainAll$1$1, test, bool, Object$*)},
	{}
};
$ClassInfo CopyOnWriteArrayList$COWSubList$$Lambda$lambda$retainAll$1$1::classInfo$ = {
	$PUBLIC | $FINAL,
	"java.util.concurrent.CopyOnWriteArrayList$COWSubList$$Lambda$lambda$retainAll$1$1",
	"java.lang.Object",
	"java.util.function.Predicate",
	fieldInfos,
	methodInfos
};
$Class* CopyOnWriteArrayList$COWSubList$$Lambda$lambda$retainAll$1$1::load$($String* name, bool initialize) {
	$loadClass(CopyOnWriteArrayList$COWSubList$$Lambda$lambda$retainAll$1$1, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* CopyOnWriteArrayList$COWSubList$$Lambda$lambda$retainAll$1$1::class$ = nullptr;

$FieldInfo _CopyOnWriteArrayList$COWSubList_FieldInfo_[] = {
	{"this$0", "Ljava/util/concurrent/CopyOnWriteArrayList;", nullptr, $FINAL | $SYNTHETIC, $field(CopyOnWriteArrayList$COWSubList, this$0)},
	{"offset", "I", nullptr, $PRIVATE | $FINAL, $field(CopyOnWriteArrayList$COWSubList, offset)},
	{"size", "I", nullptr, $PRIVATE, $field(CopyOnWriteArrayList$COWSubList, size$)},
	{"expectedArray", "[Ljava/lang/Object;", nullptr, $PRIVATE, $field(CopyOnWriteArrayList$COWSubList, expectedArray)},
	{}
};

$MethodInfo _CopyOnWriteArrayList$COWSubList_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"<init>", "(Ljava/util/concurrent/CopyOnWriteArrayList;[Ljava/lang/Object;II)V", nullptr, 0, $method(CopyOnWriteArrayList$COWSubList, init$, void, $CopyOnWriteArrayList*, $ObjectArray*, int32_t, int32_t)},
	{"add", "(Ljava/lang/Object;)Z", "(TE;)Z", $PUBLIC, $virtualMethod(CopyOnWriteArrayList$COWSubList, add, bool, Object$*)},
	{"add", "(ILjava/lang/Object;)V", "(ITE;)V", $PUBLIC, $virtualMethod(CopyOnWriteArrayList$COWSubList, add, void, int32_t, Object$*)},
	{"addAll", "(Ljava/util/Collection;)Z", "(Ljava/util/Collection<+TE;>;)Z", $PUBLIC, $virtualMethod(CopyOnWriteArrayList$COWSubList, addAll, bool, $Collection*)},
	{"addAll", "(ILjava/util/Collection;)Z", "(ILjava/util/Collection<+TE;>;)Z", $PUBLIC, $virtualMethod(CopyOnWriteArrayList$COWSubList, addAll, bool, int32_t, $Collection*)},
	{"bulkRemove", "(Ljava/util/function/Predicate;)Z", "(Ljava/util/function/Predicate<-TE;>;)Z", $PRIVATE, $method(CopyOnWriteArrayList$COWSubList, bulkRemove, bool, $Predicate*)},
	{"checkForComodification", "()V", nullptr, $PRIVATE, $method(CopyOnWriteArrayList$COWSubList, checkForComodification, void)},
	{"clear", "()V", nullptr, $PUBLIC, $virtualMethod(CopyOnWriteArrayList$COWSubList, clear, void)},
	{"contains", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC, $virtualMethod(CopyOnWriteArrayList$COWSubList, contains, bool, Object$*)},
	{"containsAll", "(Ljava/util/Collection;)Z", "(Ljava/util/Collection<*>;)Z", $PUBLIC, $virtualMethod(CopyOnWriteArrayList$COWSubList, containsAll, bool, $Collection*)},
	{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC, $virtualMethod(CopyOnWriteArrayList$COWSubList, equals, bool, Object$*)},
	{"forEach", "(Ljava/util/function/Consumer;)V", "(Ljava/util/function/Consumer<-TE;>;)V", $PUBLIC, $virtualMethod(CopyOnWriteArrayList$COWSubList, forEach, void, $Consumer*)},
	{"get", "(I)Ljava/lang/Object;", "(I)TE;", $PUBLIC, $virtualMethod(CopyOnWriteArrayList$COWSubList, get, $Object*, int32_t)},
	{"getArrayChecked", "()[Ljava/lang/Object;", nullptr, $PRIVATE, $method(CopyOnWriteArrayList$COWSubList, getArrayChecked, $ObjectArray*)},
	{"hashCode", "()I", nullptr, $PUBLIC, $virtualMethod(CopyOnWriteArrayList$COWSubList, hashCode, int32_t)},
	{"indexOf", "(Ljava/lang/Object;)I", nullptr, $PUBLIC, $virtualMethod(CopyOnWriteArrayList$COWSubList, indexOf, int32_t, Object$*)},
	{"isEmpty", "()Z", nullptr, $PUBLIC, $virtualMethod(CopyOnWriteArrayList$COWSubList, isEmpty, bool)},
	{"iterator", "()Ljava/util/Iterator;", "()Ljava/util/Iterator<TE;>;", $PUBLIC, $virtualMethod(CopyOnWriteArrayList$COWSubList, iterator, $Iterator*)},
	{"lambda$removeAll$0", "(Ljava/util/Collection;Ljava/lang/Object;)Z", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(CopyOnWriteArrayList$COWSubList, lambda$removeAll$0, bool, $Collection*, Object$*)},
	{"lambda$retainAll$1", "(Ljava/util/Collection;Ljava/lang/Object;)Z", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(CopyOnWriteArrayList$COWSubList, lambda$retainAll$1, bool, $Collection*, Object$*)},
	{"lastIndexOf", "(Ljava/lang/Object;)I", nullptr, $PUBLIC, $virtualMethod(CopyOnWriteArrayList$COWSubList, lastIndexOf, int32_t, Object$*)},
	{"listIterator", "()Ljava/util/ListIterator;", "()Ljava/util/ListIterator<TE;>;", $PUBLIC, $virtualMethod(CopyOnWriteArrayList$COWSubList, listIterator, $ListIterator*)},
	{"listIterator", "(I)Ljava/util/ListIterator;", "(I)Ljava/util/ListIterator<TE;>;", $PUBLIC, $virtualMethod(CopyOnWriteArrayList$COWSubList, listIterator, $ListIterator*, int32_t)},
	{"rangeCheck", "(I)V", nullptr, $PRIVATE, $method(CopyOnWriteArrayList$COWSubList, rangeCheck, void, int32_t)},
	{"rangeCheckForAdd", "(I)V", nullptr, $PRIVATE, $method(CopyOnWriteArrayList$COWSubList, rangeCheckForAdd, void, int32_t)},
	{"remove", "(I)Ljava/lang/Object;", "(I)TE;", $PUBLIC, $virtualMethod(CopyOnWriteArrayList$COWSubList, remove, $Object*, int32_t)},
	{"remove", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC, $virtualMethod(CopyOnWriteArrayList$COWSubList, remove, bool, Object$*)},
	{"removeAll", "(Ljava/util/Collection;)Z", "(Ljava/util/Collection<*>;)Z", $PUBLIC, $virtualMethod(CopyOnWriteArrayList$COWSubList, removeAll, bool, $Collection*)},
	{"removeIf", "(Ljava/util/function/Predicate;)Z", "(Ljava/util/function/Predicate<-TE;>;)Z", $PUBLIC, $virtualMethod(CopyOnWriteArrayList$COWSubList, removeIf, bool, $Predicate*)},
	{"replaceAll", "(Ljava/util/function/UnaryOperator;)V", "(Ljava/util/function/UnaryOperator<TE;>;)V", $PUBLIC, $virtualMethod(CopyOnWriteArrayList$COWSubList, replaceAll, void, $UnaryOperator*)},
	{"retainAll", "(Ljava/util/Collection;)Z", "(Ljava/util/Collection<*>;)Z", $PUBLIC, $virtualMethod(CopyOnWriteArrayList$COWSubList, retainAll, bool, $Collection*)},
	{"set", "(ILjava/lang/Object;)Ljava/lang/Object;", "(ITE;)TE;", $PUBLIC, $virtualMethod(CopyOnWriteArrayList$COWSubList, set, $Object*, int32_t, Object$*)},
	{"size", "()I", nullptr, $PUBLIC, $virtualMethod(CopyOnWriteArrayList$COWSubList, size, int32_t)},
	{"sort", "(Ljava/util/Comparator;)V", "(Ljava/util/Comparator<-TE;>;)V", $PUBLIC, $virtualMethod(CopyOnWriteArrayList$COWSubList, sort, void, $Comparator*)},
	{"spliterator", "()Ljava/util/Spliterator;", "()Ljava/util/Spliterator<TE;>;", $PUBLIC, $virtualMethod(CopyOnWriteArrayList$COWSubList, spliterator, $Spliterator*)},
	{"subList", "(II)Ljava/util/List;", "(II)Ljava/util/List<TE;>;", $PUBLIC, $virtualMethod(CopyOnWriteArrayList$COWSubList, subList, $List*, int32_t, int32_t)},
	{"toArray", "()[Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(CopyOnWriteArrayList$COWSubList, toArray, $ObjectArray*)},
	{"toArray", "([Ljava/lang/Object;)[Ljava/lang/Object;", "<T:Ljava/lang/Object;>([TT;)[TT;", $PUBLIC, $virtualMethod(CopyOnWriteArrayList$COWSubList, toArray, $ObjectArray*, $ObjectArray*)},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(CopyOnWriteArrayList$COWSubList, toString, $String*)},
	{}
};

$InnerClassInfo _CopyOnWriteArrayList$COWSubList_InnerClassesInfo_[] = {
	{"java.util.concurrent.CopyOnWriteArrayList$COWSubList", "java.util.concurrent.CopyOnWriteArrayList", "COWSubList", $PRIVATE},
	{}
};

$ClassInfo _CopyOnWriteArrayList$COWSubList_ClassInfo_ = {
	$ACC_SUPER,
	"java.util.concurrent.CopyOnWriteArrayList$COWSubList",
	"java.lang.Object",
	"java.util.List,java.util.RandomAccess",
	_CopyOnWriteArrayList$COWSubList_FieldInfo_,
	_CopyOnWriteArrayList$COWSubList_MethodInfo_,
	"Ljava/lang/Object;Ljava/util/List<TE;>;Ljava/util/RandomAccess;",
	nullptr,
	_CopyOnWriteArrayList$COWSubList_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.concurrent.CopyOnWriteArrayList"
};

$Object* allocate$CopyOnWriteArrayList$COWSubList($Class* clazz) {
	return $of($alloc(CopyOnWriteArrayList$COWSubList));
}

$Object* CopyOnWriteArrayList$COWSubList::clone() {
	 return this->$List::clone();
}

void CopyOnWriteArrayList$COWSubList::finalize() {
	this->$List::finalize();
}

void CopyOnWriteArrayList$COWSubList::init$($CopyOnWriteArrayList* this$0, $ObjectArray* es, int32_t offset, int32_t size) {
	$set(this, this$0, this$0);
	$set(this, expectedArray, es);
	this->offset = offset;
	this->size$ = size;
}

void CopyOnWriteArrayList$COWSubList::checkForComodification() {
	if (this->this$0->getArray() != this->expectedArray) {
		$throwNew($ConcurrentModificationException);
	}
}

$ObjectArray* CopyOnWriteArrayList$COWSubList::getArrayChecked() {
	$var($ObjectArray, a, this->this$0->getArray());
	if (a != this->expectedArray) {
		$throwNew($ConcurrentModificationException);
	}
	return a;
}

void CopyOnWriteArrayList$COWSubList::rangeCheck(int32_t index) {
	if (index < 0 || index >= this->size$) {
		$throwNew($IndexOutOfBoundsException, $($CopyOnWriteArrayList::outOfBounds(index, this->size$)));
	}
}

void CopyOnWriteArrayList$COWSubList::rangeCheckForAdd(int32_t index) {
	if (index < 0 || index > this->size$) {
		$throwNew($IndexOutOfBoundsException, $($CopyOnWriteArrayList::outOfBounds(index, this->size$)));
	}
}

$ObjectArray* CopyOnWriteArrayList$COWSubList::toArray() {
	$var($ObjectArray, es, nullptr);
	int32_t offset = 0;
	int32_t size = 0;
	$synchronized(this->this$0->lock) {
		$assign(es, getArrayChecked());
		offset = this->offset;
		size = this->size$;
	}
	return $Arrays::copyOfRange(es, offset, offset + size);
}

$ObjectArray* CopyOnWriteArrayList$COWSubList::toArray($ObjectArray* a) {
	$var($ObjectArray, es, nullptr);
	int32_t offset = 0;
	int32_t size = 0;
	$synchronized(this->this$0->lock) {
		$assign(es, getArrayChecked());
		offset = this->offset;
		size = this->size$;
	}
	if ($nc(a)->length < size) {
		return $Arrays::copyOfRange(es, offset, offset + size, $of(a)->getClass());
	} else {
		$System::arraycopy(es, offset, a, 0, size);
		if (a->length > size) {
			a->set(size, nullptr);
		}
		return a;
	}
}

int32_t CopyOnWriteArrayList$COWSubList::indexOf(Object$* o) {
	$var($ObjectArray, es, nullptr);
	int32_t offset = 0;
	int32_t size = 0;
	$synchronized(this->this$0->lock) {
		$assign(es, getArrayChecked());
		offset = this->offset;
		size = this->size$;
	}
	int32_t i = $CopyOnWriteArrayList::indexOfRange(o, es, offset, offset + size);
	return (i == -1) ? -1 : i - offset;
}

int32_t CopyOnWriteArrayList$COWSubList::lastIndexOf(Object$* o) {
	$var($ObjectArray, es, nullptr);
	int32_t offset = 0;
	int32_t size = 0;
	$synchronized(this->this$0->lock) {
		$assign(es, getArrayChecked());
		offset = this->offset;
		size = this->size$;
	}
	int32_t i = $CopyOnWriteArrayList::lastIndexOfRange(o, es, offset, offset + size);
	return (i == -1) ? -1 : i - offset;
}

bool CopyOnWriteArrayList$COWSubList::contains(Object$* o) {
	return indexOf(o) >= 0;
}

bool CopyOnWriteArrayList$COWSubList::containsAll($Collection* c) {
	$useLocalCurrentObjectStackCache();
	$var($ObjectArray, es, nullptr);
	int32_t offset = 0;
	int32_t size = 0;
	$synchronized(this->this$0->lock) {
		$assign(es, getArrayChecked());
		offset = this->offset;
		size = this->size$;
	}
	{
		$var($Iterator, i$, $nc(c)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($Object, o, i$->next());
			if ($CopyOnWriteArrayList::indexOfRange(o, es, offset, offset + size) < 0) {
				return false;
			}
		}
	}
	return true;
}

bool CopyOnWriteArrayList$COWSubList::isEmpty() {
	return size() == 0;
}

$String* CopyOnWriteArrayList$COWSubList::toString() {
	return $Arrays::toString($(toArray()));
}

int32_t CopyOnWriteArrayList$COWSubList::hashCode() {
	$var($ObjectArray, es, nullptr);
	int32_t offset = 0;
	int32_t size = 0;
	$synchronized(this->this$0->lock) {
		$assign(es, getArrayChecked());
		offset = this->offset;
		size = this->size$;
	}
	return $CopyOnWriteArrayList::hashCodeOfRange(es, offset, offset + size);
}

bool CopyOnWriteArrayList$COWSubList::equals(Object$* o) {
	$useLocalCurrentObjectStackCache();
	if ($equals(o, this)) {
		return true;
	}
	if (!($instanceOf($List, o))) {
		return false;
	}
	$var($Iterator, it, $nc(($cast($List, o)))->iterator());
	$var($ObjectArray, es, nullptr);
	int32_t offset = 0;
	int32_t size = 0;
	$synchronized(this->this$0->lock) {
		$assign(es, getArrayChecked());
		offset = this->offset;
		size = this->size$;
	}
	{
		int32_t i = offset;
		int32_t end = offset + size;
		for (; i < end; ++i) {
			bool var$0 = !$nc(it)->hasNext();
			if (var$0 || !$Objects::equals($nc(es)->get(i), $($nc(it)->next()))) {
				return false;
			}
		}
	}
	return !$nc(it)->hasNext();
}

$Object* CopyOnWriteArrayList$COWSubList::set(int32_t index, Object$* element) {
	$synchronized(this->this$0->lock) {
		rangeCheck(index);
		checkForComodification();
		$var($Object, x, this->this$0->set(this->offset + index, element));
		$set(this, expectedArray, this->this$0->getArray());
		return $of(x);
	}
}

$Object* CopyOnWriteArrayList$COWSubList::get(int32_t index) {
	$synchronized(this->this$0->lock) {
		rangeCheck(index);
		checkForComodification();
		return $of(this->this$0->get(this->offset + index));
	}
}

int32_t CopyOnWriteArrayList$COWSubList::size() {
	$synchronized(this->this$0->lock) {
		checkForComodification();
		return this->size$;
	}
}

bool CopyOnWriteArrayList$COWSubList::add(Object$* element) {
	$synchronized(this->this$0->lock) {
		checkForComodification();
		this->this$0->add(this->offset + this->size$, element);
		$set(this, expectedArray, this->this$0->getArray());
		++this->size$;
	}
	return true;
}

void CopyOnWriteArrayList$COWSubList::add(int32_t index, Object$* element) {
	$synchronized(this->this$0->lock) {
		checkForComodification();
		rangeCheckForAdd(index);
		this->this$0->add(this->offset + index, element);
		$set(this, expectedArray, this->this$0->getArray());
		++this->size$;
	}
}

bool CopyOnWriteArrayList$COWSubList::addAll($Collection* c) {
	$synchronized(this->this$0->lock) {
		$var($ObjectArray, oldArray, getArrayChecked());
		bool modified = this->this$0->addAll(this->offset + this->size$, c);
		this->size$ += $nc(($set(this, expectedArray, this->this$0->getArray())))->length - $nc(oldArray)->length;
		return modified;
	}
}

bool CopyOnWriteArrayList$COWSubList::addAll(int32_t index, $Collection* c) {
	$synchronized(this->this$0->lock) {
		rangeCheckForAdd(index);
		$var($ObjectArray, oldArray, getArrayChecked());
		bool modified = this->this$0->addAll(this->offset + index, c);
		this->size$ += $nc(($set(this, expectedArray, this->this$0->getArray())))->length - $nc(oldArray)->length;
		return modified;
	}
}

void CopyOnWriteArrayList$COWSubList::clear() {
	$synchronized(this->this$0->lock) {
		checkForComodification();
		this->this$0->removeRange(this->offset, this->offset + this->size$);
		$set(this, expectedArray, this->this$0->getArray());
		this->size$ = 0;
	}
}

$Object* CopyOnWriteArrayList$COWSubList::remove(int32_t index) {
	$synchronized(this->this$0->lock) {
		rangeCheck(index);
		checkForComodification();
		$var($Object, result, this->this$0->remove(this->offset + index));
		$set(this, expectedArray, this->this$0->getArray());
		--this->size$;
		return $of(result);
	}
}

bool CopyOnWriteArrayList$COWSubList::remove(Object$* o) {
	$synchronized(this->this$0->lock) {
		checkForComodification();
		int32_t index = indexOf(o);
		if (index == -1) {
			return false;
		}
		remove(index);
		return true;
	}
}

$Iterator* CopyOnWriteArrayList$COWSubList::iterator() {
	return listIterator(0);
}

$ListIterator* CopyOnWriteArrayList$COWSubList::listIterator() {
	return listIterator(0);
}

$ListIterator* CopyOnWriteArrayList$COWSubList::listIterator(int32_t index) {
	$synchronized(this->this$0->lock) {
		checkForComodification();
		rangeCheckForAdd(index);
		return $new($CopyOnWriteArrayList$COWSubListIterator, this->this$0, index, this->offset, this->size$);
	}
}

$List* CopyOnWriteArrayList$COWSubList::subList(int32_t fromIndex, int32_t toIndex) {
	$synchronized(this->this$0->lock) {
		checkForComodification();
		if (fromIndex < 0 || toIndex > this->size$ || fromIndex > toIndex) {
			$throwNew($IndexOutOfBoundsException);
		}
		return $new(CopyOnWriteArrayList$COWSubList, this->this$0, this->expectedArray, fromIndex + this->offset, toIndex - fromIndex);
	}
}

void CopyOnWriteArrayList$COWSubList::forEach($Consumer* action) {
	$useLocalCurrentObjectStackCache();
	$Objects::requireNonNull(action);
	int32_t i = 0;
	int32_t end = 0;
	$var($ObjectArray, es, nullptr);
	$synchronized(this->this$0->lock) {
		$assign(es, getArrayChecked());
		i = this->offset;
		end = i + this->size$;
	}
	for (; i < end; ++i) {
		action->accept($($CopyOnWriteArrayList::elementAt(es, i)));
	}
}

void CopyOnWriteArrayList$COWSubList::replaceAll($UnaryOperator* operator$) {
	$synchronized(this->this$0->lock) {
		checkForComodification();
		this->this$0->replaceAllRange(operator$, this->offset, this->offset + this->size$);
		$set(this, expectedArray, this->this$0->getArray());
	}
}

void CopyOnWriteArrayList$COWSubList::sort($Comparator* c) {
	$synchronized(this->this$0->lock) {
		checkForComodification();
		this->this$0->sortRange(c, this->offset, this->offset + this->size$);
		$set(this, expectedArray, this->this$0->getArray());
	}
}

bool CopyOnWriteArrayList$COWSubList::removeAll($Collection* c) {
	$Objects::requireNonNull(c);
	return bulkRemove(static_cast<$Predicate*>($$new(CopyOnWriteArrayList$COWSubList$$Lambda$lambda$removeAll$0, c)));
}

bool CopyOnWriteArrayList$COWSubList::retainAll($Collection* c) {
	$Objects::requireNonNull(c);
	return bulkRemove(static_cast<$Predicate*>($$new(CopyOnWriteArrayList$COWSubList$$Lambda$lambda$retainAll$1$1, c)));
}

bool CopyOnWriteArrayList$COWSubList::removeIf($Predicate* filter) {
	$Objects::requireNonNull(filter);
	return bulkRemove(filter);
}

bool CopyOnWriteArrayList$COWSubList::bulkRemove($Predicate* filter) {
	$synchronized(this->this$0->lock) {
		$var($ObjectArray, oldArray, getArrayChecked());
		bool modified = this->this$0->bulkRemove(filter, this->offset, this->offset + this->size$);
		this->size$ += $nc(($set(this, expectedArray, this->this$0->getArray())))->length - $nc(oldArray)->length;
		return modified;
	}
}

$Spliterator* CopyOnWriteArrayList$COWSubList::spliterator() {
	$synchronized(this->this$0->lock) {
		return $Spliterators::spliterator($(getArrayChecked()), this->offset, this->offset + this->size$, $Spliterator::IMMUTABLE | $Spliterator::ORDERED);
	}
}

bool CopyOnWriteArrayList$COWSubList::lambda$retainAll$1($Collection* c, Object$* e) {
	$init(CopyOnWriteArrayList$COWSubList);
	return !$nc(c)->contains(e);
}

bool CopyOnWriteArrayList$COWSubList::lambda$removeAll$0($Collection* c, Object$* e) {
	$init(CopyOnWriteArrayList$COWSubList);
	return $nc(c)->contains(e);
}

CopyOnWriteArrayList$COWSubList::CopyOnWriteArrayList$COWSubList() {
}

$Class* CopyOnWriteArrayList$COWSubList::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(CopyOnWriteArrayList$COWSubList$$Lambda$lambda$removeAll$0::classInfo$.name)) {
			return CopyOnWriteArrayList$COWSubList$$Lambda$lambda$removeAll$0::load$(name, initialize);
		}
		if (name->equals(CopyOnWriteArrayList$COWSubList$$Lambda$lambda$retainAll$1$1::classInfo$.name)) {
			return CopyOnWriteArrayList$COWSubList$$Lambda$lambda$retainAll$1$1::load$(name, initialize);
		}
	}
	$loadClass(CopyOnWriteArrayList$COWSubList, name, initialize, &_CopyOnWriteArrayList$COWSubList_ClassInfo_, allocate$CopyOnWriteArrayList$COWSubList);
	return class$;
}

$Class* CopyOnWriteArrayList$COWSubList::class$ = nullptr;

		} // concurrent
	} // util
} // java