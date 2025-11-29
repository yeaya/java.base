#include <java/util/Collections$EmptyList.h>

#include <java/lang/IndexOutOfBoundsException.h>
#include <java/util/AbstractList.h>
#include <java/util/Collection.h>
#include <java/util/Collections.h>
#include <java/util/Comparator.h>
#include <java/util/Iterator.h>
#include <java/util/List.h>
#include <java/util/ListIterator.h>
#include <java/util/Objects.h>
#include <java/util/Spliterator.h>
#include <java/util/Spliterators.h>
#include <java/util/function/Consumer.h>
#include <java/util/function/Predicate.h>
#include <java/util/function/UnaryOperator.h>
#include <jcpp.h>

#undef EMPTY_LIST

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IndexOutOfBoundsException = ::java::lang::IndexOutOfBoundsException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractList = ::java::util::AbstractList;
using $Collection = ::java::util::Collection;
using $Collections = ::java::util::Collections;
using $Comparator = ::java::util::Comparator;
using $Iterator = ::java::util::Iterator;
using $List = ::java::util::List;
using $ListIterator = ::java::util::ListIterator;
using $Objects = ::java::util::Objects;
using $Spliterator = ::java::util::Spliterator;
using $Spliterators = ::java::util::Spliterators;
using $Consumer = ::java::util::function::Consumer;
using $Predicate = ::java::util::function::Predicate;
using $UnaryOperator = ::java::util::function::UnaryOperator;

namespace java {
	namespace util {

$FieldInfo _Collections$EmptyList_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(Collections$EmptyList, serialVersionUID)},
	{}
};

$MethodInfo _Collections$EmptyList_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(Collections$EmptyList::*)()>(&Collections$EmptyList::init$))},
	{"clear", "()V", nullptr, $PUBLIC},
	{"contains", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"containsAll", "(Ljava/util/Collection;)Z", "(Ljava/util/Collection<*>;)Z", $PUBLIC},
	{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"forEach", "(Ljava/util/function/Consumer;)V", "(Ljava/util/function/Consumer<-TE;>;)V", $PUBLIC},
	{"get", "(I)Ljava/lang/Object;", "(I)TE;", $PUBLIC},
	{"hashCode", "()I", nullptr, $PUBLIC},
	{"isEmpty", "()Z", nullptr, $PUBLIC},
	{"iterator", "()Ljava/util/Iterator;", "()Ljava/util/Iterator<TE;>;", $PUBLIC},
	{"listIterator", "()Ljava/util/ListIterator;", "()Ljava/util/ListIterator<TE;>;", $PUBLIC},
	{"readResolve", "()Ljava/lang/Object;", nullptr, $PRIVATE, $method(static_cast<$Object*(Collections$EmptyList::*)()>(&Collections$EmptyList::readResolve))},
	{"removeIf", "(Ljava/util/function/Predicate;)Z", "(Ljava/util/function/Predicate<-TE;>;)Z", $PUBLIC},
	{"replaceAll", "(Ljava/util/function/UnaryOperator;)V", "(Ljava/util/function/UnaryOperator<TE;>;)V", $PUBLIC},
	{"size", "()I", nullptr, $PUBLIC},
	{"sort", "(Ljava/util/Comparator;)V", "(Ljava/util/Comparator<-TE;>;)V", $PUBLIC},
	{"spliterator", "()Ljava/util/Spliterator;", "()Ljava/util/Spliterator<TE;>;", $PUBLIC},
	{"toArray", "()[Ljava/lang/Object;", nullptr, $PUBLIC},
	{"toArray", "([Ljava/lang/Object;)[Ljava/lang/Object;", "<T:Ljava/lang/Object;>([TT;)[TT;", $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _Collections$EmptyList_InnerClassesInfo_[] = {
	{"java.util.Collections$EmptyList", "java.util.Collections", "EmptyList", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _Collections$EmptyList_ClassInfo_ = {
	$ACC_SUPER,
	"java.util.Collections$EmptyList",
	"java.util.AbstractList",
	"java.util.RandomAccess,java.io.Serializable",
	_Collections$EmptyList_FieldInfo_,
	_Collections$EmptyList_MethodInfo_,
	"<E:Ljava/lang/Object;>Ljava/util/AbstractList<TE;>;Ljava/util/RandomAccess;Ljava/io/Serializable;",
	nullptr,
	_Collections$EmptyList_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.Collections"
};

$Object* allocate$Collections$EmptyList($Class* clazz) {
	return $of($alloc(Collections$EmptyList));
}

$String* Collections$EmptyList::toString() {
	 return this->$AbstractList::toString();
}

$Object* Collections$EmptyList::clone() {
	 return this->$AbstractList::clone();
}

void Collections$EmptyList::finalize() {
	this->$AbstractList::finalize();
}

void Collections$EmptyList::init$() {
	$AbstractList::init$();
}

$Iterator* Collections$EmptyList::iterator() {
	return $Collections::emptyIterator();
}

$ListIterator* Collections$EmptyList::listIterator() {
	return $Collections::emptyListIterator();
}

int32_t Collections$EmptyList::size() {
	return 0;
}

bool Collections$EmptyList::isEmpty() {
	return true;
}

void Collections$EmptyList::clear() {
}

bool Collections$EmptyList::contains(Object$* obj) {
	return false;
}

bool Collections$EmptyList::containsAll($Collection* c) {
	return $nc(c)->isEmpty();
}

$ObjectArray* Collections$EmptyList::toArray() {
	return $new($ObjectArray, 0);
}

$ObjectArray* Collections$EmptyList::toArray($ObjectArray* a) {
	if ($nc(a)->length > 0) {
		a->set(0, nullptr);
	}
	return a;
}

$Object* Collections$EmptyList::get(int32_t index) {
	$useLocalCurrentObjectStackCache();
	$throwNew($IndexOutOfBoundsException, $$str({"Index: "_s, $$str(index)}));
	$shouldNotReachHere();
}

bool Collections$EmptyList::equals(Object$* o) {
	return ($instanceOf($List, o)) && $nc(($cast($List, o)))->isEmpty();
}

int32_t Collections$EmptyList::hashCode() {
	return 1;
}

bool Collections$EmptyList::removeIf($Predicate* filter) {
	$Objects::requireNonNull(filter);
	return false;
}

void Collections$EmptyList::replaceAll($UnaryOperator* operator$) {
	$Objects::requireNonNull(operator$);
}

void Collections$EmptyList::sort($Comparator* c) {
}

void Collections$EmptyList::forEach($Consumer* action) {
	$Objects::requireNonNull(action);
}

$Spliterator* Collections$EmptyList::spliterator() {
	return $Spliterators::emptySpliterator();
}

$Object* Collections$EmptyList::readResolve() {
	$init($Collections);
	return $of($Collections::EMPTY_LIST);
}

Collections$EmptyList::Collections$EmptyList() {
}

$Class* Collections$EmptyList::load$($String* name, bool initialize) {
	$loadClass(Collections$EmptyList, name, initialize, &_Collections$EmptyList_ClassInfo_, allocate$Collections$EmptyList);
	return class$;
}

$Class* Collections$EmptyList::class$ = nullptr;

	} // util
} // java