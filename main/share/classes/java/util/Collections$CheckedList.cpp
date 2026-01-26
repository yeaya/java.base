#include <java/util/Collections$CheckedList.h>

#include <java/io/Serializable.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/util/Collection.h>
#include <java/util/Collections$CheckedCollection.h>
#include <java/util/Collections$CheckedList$1.h>
#include <java/util/Collections.h>
#include <java/util/Comparator.h>
#include <java/util/Iterator.h>
#include <java/util/List.h>
#include <java/util/ListIterator.h>
#include <java/util/Objects.h>
#include <java/util/Spliterator.h>
#include <java/util/function/Consumer.h>
#include <java/util/function/IntFunction.h>
#include <java/util/function/Predicate.h>
#include <java/util/function/UnaryOperator.h>
#include <java/util/stream/Stream.h>
#include <jcpp.h>

using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $Collection = ::java::util::Collection;
using $Collections$CheckedCollection = ::java::util::Collections$CheckedCollection;
using $Collections$CheckedList$1 = ::java::util::Collections$CheckedList$1;
using $Comparator = ::java::util::Comparator;
using $Iterator = ::java::util::Iterator;
using $List = ::java::util::List;
using $ListIterator = ::java::util::ListIterator;
using $Objects = ::java::util::Objects;
using $Spliterator = ::java::util::Spliterator;
using $Consumer = ::java::util::function::Consumer;
using $IntFunction = ::java::util::function::IntFunction;
using $Predicate = ::java::util::function::Predicate;
using $UnaryOperator = ::java::util::function::UnaryOperator;
using $Stream = ::java::util::stream::Stream;

namespace java {
	namespace util {

class Collections$CheckedList$$Lambda$lambda$replaceAll$0 : public $UnaryOperator {
	$class(Collections$CheckedList$$Lambda$lambda$replaceAll$0, $NO_CLASS_INIT, $UnaryOperator)
public:
	void init$(Collections$CheckedList* inst, $UnaryOperator* operator$) {
		$set(this, inst$, inst);
		$set(this, operator$, operator$);
	}
	virtual $Object* apply(Object$* e) override {
		 return $nc(inst$)->lambda$replaceAll$0(operator$, e);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<Collections$CheckedList$$Lambda$lambda$replaceAll$0>());
	}
	Collections$CheckedList* inst$ = nullptr;
	$UnaryOperator* operator$ = nullptr;
	static $FieldInfo fieldInfos[3];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo Collections$CheckedList$$Lambda$lambda$replaceAll$0::fieldInfos[3] = {
	{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(Collections$CheckedList$$Lambda$lambda$replaceAll$0, inst$)},
	{"operator", "Ljava/util/function/UnaryOperator;", nullptr, $PUBLIC, $field(Collections$CheckedList$$Lambda$lambda$replaceAll$0, operator$)},
	{}
};
$MethodInfo Collections$CheckedList$$Lambda$lambda$replaceAll$0::methodInfos[3] = {
	{"<init>", "(Ljava/util/Collections$CheckedList;Ljava/util/function/UnaryOperator;)V", nullptr, $PUBLIC, $method(Collections$CheckedList$$Lambda$lambda$replaceAll$0, init$, void, Collections$CheckedList*, $UnaryOperator*)},
	{"apply", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(Collections$CheckedList$$Lambda$lambda$replaceAll$0, apply, $Object*, Object$*)},
	{}
};
$ClassInfo Collections$CheckedList$$Lambda$lambda$replaceAll$0::classInfo$ = {
	$PUBLIC | $FINAL,
	"java.util.Collections$CheckedList$$Lambda$lambda$replaceAll$0",
	"java.lang.Object",
	"java.util.function.UnaryOperator",
	fieldInfos,
	methodInfos
};
$Class* Collections$CheckedList$$Lambda$lambda$replaceAll$0::load$($String* name, bool initialize) {
	$loadClass(Collections$CheckedList$$Lambda$lambda$replaceAll$0, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* Collections$CheckedList$$Lambda$lambda$replaceAll$0::class$ = nullptr;

$FieldInfo _Collections$CheckedList_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(Collections$CheckedList, serialVersionUID)},
	{"list", "Ljava/util/List;", "Ljava/util/List<TE;>;", $FINAL, $field(Collections$CheckedList, list)},
	{}
};

$MethodInfo _Collections$CheckedList_MethodInfo_[] = {
	{"*add", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*addAll", "(Ljava/util/Collection;)Z", nullptr, $PUBLIC},
	{"*clear", "()V", nullptr, $PUBLIC},
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*contains", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*containsAll", "(Ljava/util/Collection;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*forEach", "(Ljava/util/function/Consumer;)V", nullptr, $PUBLIC},
	{"<init>", "(Ljava/util/List;Ljava/lang/Class;)V", "(Ljava/util/List<TE;>;Ljava/lang/Class<TE;>;)V", 0, $method(Collections$CheckedList, init$, void, $List*, $Class*)},
	{"add", "(ILjava/lang/Object;)V", "(ITE;)V", $PUBLIC, $virtualMethod(Collections$CheckedList, add, void, int32_t, Object$*)},
	{"addAll", "(ILjava/util/Collection;)Z", "(ILjava/util/Collection<+TE;>;)Z", $PUBLIC, $virtualMethod(Collections$CheckedList, addAll, bool, int32_t, $Collection*)},
	{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC, $virtualMethod(Collections$CheckedList, equals, bool, Object$*)},
	{"get", "(I)Ljava/lang/Object;", "(I)TE;", $PUBLIC, $virtualMethod(Collections$CheckedList, get, $Object*, int32_t)},
	{"hashCode", "()I", nullptr, $PUBLIC, $virtualMethod(Collections$CheckedList, hashCode, int32_t)},
	{"indexOf", "(Ljava/lang/Object;)I", nullptr, $PUBLIC, $virtualMethod(Collections$CheckedList, indexOf, int32_t, Object$*)},
	{"*isEmpty", "()Z", nullptr, $PUBLIC},
	{"*iterator", "()Ljava/util/Iterator;", nullptr, $PUBLIC},
	{"lambda$replaceAll$0", "(Ljava/util/function/UnaryOperator;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PRIVATE | $SYNTHETIC, $method(Collections$CheckedList, lambda$replaceAll$0, $Object*, $UnaryOperator*, Object$*)},
	{"lastIndexOf", "(Ljava/lang/Object;)I", nullptr, $PUBLIC, $virtualMethod(Collections$CheckedList, lastIndexOf, int32_t, Object$*)},
	{"listIterator", "()Ljava/util/ListIterator;", "()Ljava/util/ListIterator<TE;>;", $PUBLIC, $virtualMethod(Collections$CheckedList, listIterator, $ListIterator*)},
	{"listIterator", "(I)Ljava/util/ListIterator;", "(I)Ljava/util/ListIterator<TE;>;", $PUBLIC, $virtualMethod(Collections$CheckedList, listIterator, $ListIterator*, int32_t)},
	{"*parallelStream", "()Ljava/util/stream/Stream;", nullptr, $PUBLIC},
	{"*remove", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"remove", "(I)Ljava/lang/Object;", "(I)TE;", $PUBLIC, $virtualMethod(Collections$CheckedList, remove, $Object*, int32_t)},
	{"*removeAll", "(Ljava/util/Collection;)Z", nullptr, $PUBLIC},
	{"*removeIf", "(Ljava/util/function/Predicate;)Z", nullptr, $PUBLIC},
	{"replaceAll", "(Ljava/util/function/UnaryOperator;)V", "(Ljava/util/function/UnaryOperator<TE;>;)V", $PUBLIC, $virtualMethod(Collections$CheckedList, replaceAll, void, $UnaryOperator*)},
	{"*retainAll", "(Ljava/util/Collection;)Z", nullptr, $PUBLIC},
	{"set", "(ILjava/lang/Object;)Ljava/lang/Object;", "(ITE;)TE;", $PUBLIC, $virtualMethod(Collections$CheckedList, set, $Object*, int32_t, Object$*)},
	{"*size", "()I", nullptr, $PUBLIC},
	{"sort", "(Ljava/util/Comparator;)V", "(Ljava/util/Comparator<-TE;>;)V", $PUBLIC, $virtualMethod(Collections$CheckedList, sort, void, $Comparator*)},
	{"*spliterator", "()Ljava/util/Spliterator;", nullptr, $PUBLIC},
	{"*stream", "()Ljava/util/stream/Stream;", nullptr, $PUBLIC},
	{"subList", "(II)Ljava/util/List;", "(II)Ljava/util/List<TE;>;", $PUBLIC, $virtualMethod(Collections$CheckedList, subList, $List*, int32_t, int32_t)},
	{"*toArray", "()[Ljava/lang/Object;", nullptr, $PUBLIC},
	{"*toArray", "([Ljava/lang/Object;)[Ljava/lang/Object;", nullptr, $PUBLIC},
	{"*toArray", "(Ljava/util/function/IntFunction;)[Ljava/lang/Object;", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _Collections$CheckedList_InnerClassesInfo_[] = {
	{"java.util.Collections$CheckedList", "java.util.Collections", "CheckedList", $STATIC},
	{"java.util.Collections$CheckedCollection", "java.util.Collections", "CheckedCollection", $STATIC},
	{"java.util.Collections$CheckedList$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _Collections$CheckedList_ClassInfo_ = {
	$ACC_SUPER,
	"java.util.Collections$CheckedList",
	"java.util.Collections$CheckedCollection",
	"java.util.List",
	_Collections$CheckedList_FieldInfo_,
	_Collections$CheckedList_MethodInfo_,
	"<E:Ljava/lang/Object;>Ljava/util/Collections$CheckedCollection<TE;>;Ljava/util/List<TE;>;",
	nullptr,
	_Collections$CheckedList_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.Collections"
};

$Object* allocate$Collections$CheckedList($Class* clazz) {
	return $of($alloc(Collections$CheckedList));
}

int32_t Collections$CheckedList::size() {
	 return this->$Collections$CheckedCollection::size();
}

bool Collections$CheckedList::isEmpty() {
	 return this->$Collections$CheckedCollection::isEmpty();
}

bool Collections$CheckedList::contains(Object$* o) {
	 return this->$Collections$CheckedCollection::contains(o);
}

$ObjectArray* Collections$CheckedList::toArray() {
	 return this->$Collections$CheckedCollection::toArray();
}

$ObjectArray* Collections$CheckedList::toArray($ObjectArray* a) {
	 return this->$Collections$CheckedCollection::toArray(a);
}

$ObjectArray* Collections$CheckedList::toArray($IntFunction* f) {
	 return this->$Collections$CheckedCollection::toArray(f);
}

$String* Collections$CheckedList::toString() {
	 return this->$Collections$CheckedCollection::toString();
}

bool Collections$CheckedList::remove(Object$* o) {
	 return this->$Collections$CheckedCollection::remove(o);
}

void Collections$CheckedList::clear() {
	this->$Collections$CheckedCollection::clear();
}

bool Collections$CheckedList::containsAll($Collection* coll) {
	 return this->$Collections$CheckedCollection::containsAll(coll);
}

bool Collections$CheckedList::removeAll($Collection* coll) {
	 return this->$Collections$CheckedCollection::removeAll(coll);
}

bool Collections$CheckedList::retainAll($Collection* coll) {
	 return this->$Collections$CheckedCollection::retainAll(coll);
}

$Iterator* Collections$CheckedList::iterator() {
	 return this->$Collections$CheckedCollection::iterator();
}

bool Collections$CheckedList::add(Object$* e) {
	 return this->$Collections$CheckedCollection::add(e);
}

bool Collections$CheckedList::addAll($Collection* coll) {
	 return this->$Collections$CheckedCollection::addAll(coll);
}

void Collections$CheckedList::forEach($Consumer* action) {
	this->$Collections$CheckedCollection::forEach(action);
}

bool Collections$CheckedList::removeIf($Predicate* filter) {
	 return this->$Collections$CheckedCollection::removeIf(filter);
}

$Spliterator* Collections$CheckedList::spliterator() {
	 return this->$Collections$CheckedCollection::spliterator();
}

$Stream* Collections$CheckedList::stream() {
	 return this->$Collections$CheckedCollection::stream();
}

$Stream* Collections$CheckedList::parallelStream() {
	 return this->$Collections$CheckedCollection::parallelStream();
}

$Object* Collections$CheckedList::clone() {
	 return this->$Collections$CheckedCollection::clone();
}

void Collections$CheckedList::finalize() {
	this->$Collections$CheckedCollection::finalize();
}

void Collections$CheckedList::init$($List* list, $Class* type) {
	$Collections$CheckedCollection::init$(list, type);
	$set(this, list, list);
}

bool Collections$CheckedList::equals(Object$* o) {
	return $equals(o, this) || $nc(this->list)->equals(o);
}

int32_t Collections$CheckedList::hashCode() {
	return $nc(this->list)->hashCode();
}

$Object* Collections$CheckedList::get(int32_t index) {
	return $of($nc(this->list)->get(index));
}

$Object* Collections$CheckedList::remove(int32_t index) {
	return $of($nc(this->list)->remove(index));
}

int32_t Collections$CheckedList::indexOf(Object$* o) {
	return $nc(this->list)->indexOf(o);
}

int32_t Collections$CheckedList::lastIndexOf(Object$* o) {
	return $nc(this->list)->lastIndexOf(o);
}

$Object* Collections$CheckedList::set(int32_t index, Object$* element) {
	return $of($nc(this->list)->set(index, $(typeCheck(element))));
}

void Collections$CheckedList::add(int32_t index, Object$* element) {
	$nc(this->list)->add(index, $(typeCheck(element)));
}

bool Collections$CheckedList::addAll(int32_t index, $Collection* c) {
	return $nc(this->list)->addAll(index, $(checkedCopyOf(c)));
}

$ListIterator* Collections$CheckedList::listIterator() {
	return listIterator(0);
}

$ListIterator* Collections$CheckedList::listIterator(int32_t index) {
	$var($ListIterator, i, $nc(this->list)->listIterator(index));
	return $new($Collections$CheckedList$1, this, i);
}

$List* Collections$CheckedList::subList(int32_t fromIndex, int32_t toIndex) {
	return $new(Collections$CheckedList, $($nc(this->list)->subList(fromIndex, toIndex)), this->type);
}

void Collections$CheckedList::replaceAll($UnaryOperator* operator$) {
	$Objects::requireNonNull(operator$);
	$nc(this->list)->replaceAll(static_cast<$UnaryOperator*>($$new(Collections$CheckedList$$Lambda$lambda$replaceAll$0, this, operator$)));
}

void Collections$CheckedList::sort($Comparator* c) {
	$nc(this->list)->sort(c);
}

$Object* Collections$CheckedList::lambda$replaceAll$0($UnaryOperator* operator$, Object$* e) {
	return $of(typeCheck($($nc(operator$)->apply(e))));
}

Collections$CheckedList::Collections$CheckedList() {
}

$Class* Collections$CheckedList::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(Collections$CheckedList$$Lambda$lambda$replaceAll$0::classInfo$.name)) {
			return Collections$CheckedList$$Lambda$lambda$replaceAll$0::load$(name, initialize);
		}
	}
	$loadClass(Collections$CheckedList, name, initialize, &_Collections$CheckedList_ClassInfo_, allocate$Collections$CheckedList);
	return class$;
}

$Class* Collections$CheckedList::class$ = nullptr;

	} // util
} // java