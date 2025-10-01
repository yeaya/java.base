#include <java/util/Collections$SingletonList.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/IndexOutOfBoundsException.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/UnsupportedOperationException.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/AbstractList.h>
#include <java/util/Collections.h>
#include <java/util/Comparator.h>
#include <java/util/Iterator.h>
#include <java/util/Objects.h>
#include <java/util/Spliterator.h>
#include <java/util/function/Consumer.h>
#include <java/util/function/Predicate.h>
#include <java/util/function/UnaryOperator.h>
#include <jcpp.h>

using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IndexOutOfBoundsException = ::java::lang::IndexOutOfBoundsException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $UnsupportedOperationException = ::java::lang::UnsupportedOperationException;
using $AbstractList = ::java::util::AbstractList;
using $Collections = ::java::util::Collections;
using $Comparator = ::java::util::Comparator;
using $Iterator = ::java::util::Iterator;
using $Objects = ::java::util::Objects;
using $RandomAccess = ::java::util::RandomAccess;
using $Spliterator = ::java::util::Spliterator;
using $Consumer = ::java::util::function::Consumer;
using $Predicate = ::java::util::function::Predicate;
using $UnaryOperator = ::java::util::function::UnaryOperator;

namespace java {
	namespace util {

$FieldInfo _Collections$SingletonList_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(Collections$SingletonList, serialVersionUID)},
	{"element", "Ljava/lang/Object;", "TE;", $PRIVATE | $FINAL, $field(Collections$SingletonList, element)},
	{}
};

$MethodInfo _Collections$SingletonList_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"<init>", "(Ljava/lang/Object;)V", "(TE;)V", 0, $method(static_cast<void(Collections$SingletonList::*)(Object$*)>(&Collections$SingletonList::init$))},
	{"contains", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"forEach", "(Ljava/util/function/Consumer;)V", "(Ljava/util/function/Consumer<-TE;>;)V", $PUBLIC},
	{"get", "(I)Ljava/lang/Object;", "(I)TE;", $PUBLIC},
	{"hashCode", "()I", nullptr, $PUBLIC},
	{"iterator", "()Ljava/util/Iterator;", "()Ljava/util/Iterator<TE;>;", $PUBLIC},
	{"removeIf", "(Ljava/util/function/Predicate;)Z", "(Ljava/util/function/Predicate<-TE;>;)Z", $PUBLIC},
	{"replaceAll", "(Ljava/util/function/UnaryOperator;)V", "(Ljava/util/function/UnaryOperator<TE;>;)V", $PUBLIC},
	{"size", "()I", nullptr, $PUBLIC},
	{"sort", "(Ljava/util/Comparator;)V", "(Ljava/util/Comparator<-TE;>;)V", $PUBLIC},
	{"spliterator", "()Ljava/util/Spliterator;", "()Ljava/util/Spliterator<TE;>;", $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _Collections$SingletonList_InnerClassesInfo_[] = {
	{"java.util.Collections$SingletonList", "java.util.Collections", "SingletonList", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _Collections$SingletonList_ClassInfo_ = {
	$ACC_SUPER,
	"java.util.Collections$SingletonList",
	"java.util.AbstractList",
	"java.util.RandomAccess,java.io.Serializable",
	_Collections$SingletonList_FieldInfo_,
	_Collections$SingletonList_MethodInfo_,
	"<E:Ljava/lang/Object;>Ljava/util/AbstractList<TE;>;Ljava/util/RandomAccess;Ljava/io/Serializable;",
	nullptr,
	_Collections$SingletonList_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.Collections"
};

$Object* allocate$Collections$SingletonList($Class* clazz) {
	return $of($alloc(Collections$SingletonList));
}

bool Collections$SingletonList::equals(Object$* o) {
	 return this->$AbstractList::equals(o);
}

$String* Collections$SingletonList::toString() {
	 return this->$AbstractList::toString();
}

$Object* Collections$SingletonList::clone() {
	 return this->$AbstractList::clone();
}

void Collections$SingletonList::finalize() {
	this->$AbstractList::finalize();
}

void Collections$SingletonList::init$(Object$* obj) {
	$AbstractList::init$();
	$set(this, element, obj);
}

$Iterator* Collections$SingletonList::iterator() {
	return $Collections::singletonIterator(this->element);
}

int32_t Collections$SingletonList::size() {
	return 1;
}

bool Collections$SingletonList::contains(Object$* obj) {
	return $Collections::eq(obj, this->element);
}

$Object* Collections$SingletonList::get(int32_t index) {
	if (index != 0) {
		$throwNew($IndexOutOfBoundsException, $$str({"Index: "_s, $$str(index), ", Size: 1"_s}));
	}
	return $of(this->element);
}

void Collections$SingletonList::forEach($Consumer* action) {
	$nc(action)->accept(this->element);
}

bool Collections$SingletonList::removeIf($Predicate* filter) {
	$throwNew($UnsupportedOperationException);
	$shouldNotReachHere();
}

void Collections$SingletonList::replaceAll($UnaryOperator* operator$) {
	$throwNew($UnsupportedOperationException);
}

void Collections$SingletonList::sort($Comparator* c) {
}

$Spliterator* Collections$SingletonList::spliterator() {
	return $Collections::singletonSpliterator(this->element);
}

int32_t Collections$SingletonList::hashCode() {
	return 31 + $Objects::hashCode(this->element);
}

Collections$SingletonList::Collections$SingletonList() {
}

$Class* Collections$SingletonList::load$($String* name, bool initialize) {
	$loadClass(Collections$SingletonList, name, initialize, &_Collections$SingletonList_ClassInfo_, allocate$Collections$SingletonList);
	return class$;
}

$Class* Collections$SingletonList::class$ = nullptr;

	} // util
} // java