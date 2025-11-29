#include <java/util/Collections$EmptyListIterator.h>

#include <java/lang/IllegalStateException.h>
#include <java/lang/UnsupportedOperationException.h>
#include <java/util/Collections$EmptyIterator.h>
#include <java/util/Collections.h>
#include <java/util/NoSuchElementException.h>
#include <java/util/function/Consumer.h>
#include <jcpp.h>

#undef EMPTY_ITERATOR

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalStateException = ::java::lang::IllegalStateException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $UnsupportedOperationException = ::java::lang::UnsupportedOperationException;
using $Collections$EmptyIterator = ::java::util::Collections$EmptyIterator;
using $NoSuchElementException = ::java::util::NoSuchElementException;
using $Consumer = ::java::util::function::Consumer;

namespace java {
	namespace util {

$FieldInfo _Collections$EmptyListIterator_FieldInfo_[] = {
	{"EMPTY_ITERATOR", "Ljava/util/Collections$EmptyListIterator;", "Ljava/util/Collections$EmptyListIterator<Ljava/lang/Object;>;", $STATIC | $FINAL, $staticField(Collections$EmptyListIterator, EMPTY_ITERATOR)},
	{}
};

$MethodInfo _Collections$EmptyListIterator_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*forEachRemaining", "(Ljava/util/function/Consumer;)V", nullptr, $PUBLIC},
	{"*hasNext", "()Z", nullptr, $PUBLIC},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(Collections$EmptyListIterator::*)()>(&Collections$EmptyListIterator::init$))},
	{"add", "(Ljava/lang/Object;)V", "(TE;)V", $PUBLIC},
	{"hasPrevious", "()Z", nullptr, $PUBLIC},
	{"*next", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{"nextIndex", "()I", nullptr, $PUBLIC},
	{"previous", "()Ljava/lang/Object;", "()TE;", $PUBLIC},
	{"previousIndex", "()I", nullptr, $PUBLIC},
	{"*remove", "()V", nullptr, $PUBLIC},
	{"set", "(Ljava/lang/Object;)V", "(TE;)V", $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _Collections$EmptyListIterator_InnerClassesInfo_[] = {
	{"java.util.Collections$EmptyListIterator", "java.util.Collections", "EmptyListIterator", $PRIVATE | $STATIC},
	{"java.util.Collections$EmptyIterator", "java.util.Collections", "EmptyIterator", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _Collections$EmptyListIterator_ClassInfo_ = {
	$ACC_SUPER,
	"java.util.Collections$EmptyListIterator",
	"java.util.Collections$EmptyIterator",
	"java.util.ListIterator",
	_Collections$EmptyListIterator_FieldInfo_,
	_Collections$EmptyListIterator_MethodInfo_,
	"<E:Ljava/lang/Object;>Ljava/util/Collections$EmptyIterator<TE;>;Ljava/util/ListIterator<TE;>;",
	nullptr,
	_Collections$EmptyListIterator_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.Collections"
};

$Object* allocate$Collections$EmptyListIterator($Class* clazz) {
	return $of($alloc(Collections$EmptyListIterator));
}

bool Collections$EmptyListIterator::hasNext() {
	 return this->$Collections$EmptyIterator::hasNext();
}

$Object* Collections$EmptyListIterator::next() {
	 return this->$Collections$EmptyIterator::next();
}

void Collections$EmptyListIterator::remove() {
	this->$Collections$EmptyIterator::remove();
}

void Collections$EmptyListIterator::forEachRemaining($Consumer* action) {
	this->$Collections$EmptyIterator::forEachRemaining(action);
}

int32_t Collections$EmptyListIterator::hashCode() {
	 return this->$Collections$EmptyIterator::hashCode();
}

bool Collections$EmptyListIterator::equals(Object$* obj) {
	 return this->$Collections$EmptyIterator::equals(obj);
}

$Object* Collections$EmptyListIterator::clone() {
	 return this->$Collections$EmptyIterator::clone();
}

$String* Collections$EmptyListIterator::toString() {
	 return this->$Collections$EmptyIterator::toString();
}

void Collections$EmptyListIterator::finalize() {
	this->$Collections$EmptyIterator::finalize();
}

Collections$EmptyListIterator* Collections$EmptyListIterator::EMPTY_ITERATOR = nullptr;

void Collections$EmptyListIterator::init$() {
	$Collections$EmptyIterator::init$();
}

bool Collections$EmptyListIterator::hasPrevious() {
	return false;
}

$Object* Collections$EmptyListIterator::previous() {
	$throwNew($NoSuchElementException);
	$shouldNotReachHere();
}

int32_t Collections$EmptyListIterator::nextIndex() {
	return 0;
}

int32_t Collections$EmptyListIterator::previousIndex() {
	return -1;
}

void Collections$EmptyListIterator::set(Object$* e) {
	$throwNew($IllegalStateException);
}

void Collections$EmptyListIterator::add(Object$* e) {
	$throwNew($UnsupportedOperationException);
}

void clinit$Collections$EmptyListIterator($Class* class$) {
	$assignStatic(Collections$EmptyListIterator::EMPTY_ITERATOR, $new(Collections$EmptyListIterator));
}

Collections$EmptyListIterator::Collections$EmptyListIterator() {
}

$Class* Collections$EmptyListIterator::load$($String* name, bool initialize) {
	$loadClass(Collections$EmptyListIterator, name, initialize, &_Collections$EmptyListIterator_ClassInfo_, clinit$Collections$EmptyListIterator, allocate$Collections$EmptyListIterator);
	return class$;
}

$Class* Collections$EmptyListIterator::class$ = nullptr;

	} // util
} // java