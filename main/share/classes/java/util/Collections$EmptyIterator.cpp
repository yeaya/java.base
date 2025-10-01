#include <java/util/Collections$EmptyIterator.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/IllegalStateException.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/Collections.h>
#include <java/util/NoSuchElementException.h>
#include <java/util/Objects.h>
#include <java/util/function/Consumer.h>
#include <jcpp.h>

#undef EMPTY_ITERATOR

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalStateException = ::java::lang::IllegalStateException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Collections = ::java::util::Collections;
using $Iterator = ::java::util::Iterator;
using $NoSuchElementException = ::java::util::NoSuchElementException;
using $Objects = ::java::util::Objects;
using $Consumer = ::java::util::function::Consumer;

namespace java {
	namespace util {

$FieldInfo _Collections$EmptyIterator_FieldInfo_[] = {
	{"EMPTY_ITERATOR", "Ljava/util/Collections$EmptyIterator;", "Ljava/util/Collections$EmptyIterator<Ljava/lang/Object;>;", $STATIC | $FINAL, $staticField(Collections$EmptyIterator, EMPTY_ITERATOR)},
	{}
};

$MethodInfo _Collections$EmptyIterator_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(Collections$EmptyIterator::*)()>(&Collections$EmptyIterator::init$))},
	{"forEachRemaining", "(Ljava/util/function/Consumer;)V", "(Ljava/util/function/Consumer<-TE;>;)V", $PUBLIC},
	{"hasNext", "()Z", nullptr, $PUBLIC},
	{"next", "()Ljava/lang/Object;", "()TE;", $PUBLIC},
	{"remove", "()V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _Collections$EmptyIterator_InnerClassesInfo_[] = {
	{"java.util.Collections$EmptyIterator", "java.util.Collections", "EmptyIterator", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _Collections$EmptyIterator_ClassInfo_ = {
	$ACC_SUPER,
	"java.util.Collections$EmptyIterator",
	"java.lang.Object",
	"java.util.Iterator",
	_Collections$EmptyIterator_FieldInfo_,
	_Collections$EmptyIterator_MethodInfo_,
	"<E:Ljava/lang/Object;>Ljava/lang/Object;Ljava/util/Iterator<TE;>;",
	nullptr,
	_Collections$EmptyIterator_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.Collections"
};

$Object* allocate$Collections$EmptyIterator($Class* clazz) {
	return $of($alloc(Collections$EmptyIterator));
}

Collections$EmptyIterator* Collections$EmptyIterator::EMPTY_ITERATOR = nullptr;

void Collections$EmptyIterator::init$() {
}

bool Collections$EmptyIterator::hasNext() {
	return false;
}

$Object* Collections$EmptyIterator::next() {
	$throwNew($NoSuchElementException);
	$shouldNotReachHere();
}

void Collections$EmptyIterator::remove() {
	$throwNew($IllegalStateException);
}

void Collections$EmptyIterator::forEachRemaining($Consumer* action) {
	$Objects::requireNonNull(action);
}

void clinit$Collections$EmptyIterator($Class* class$) {
	$assignStatic(Collections$EmptyIterator::EMPTY_ITERATOR, $new(Collections$EmptyIterator));
}

Collections$EmptyIterator::Collections$EmptyIterator() {
}

$Class* Collections$EmptyIterator::load$($String* name, bool initialize) {
	$loadClass(Collections$EmptyIterator, name, initialize, &_Collections$EmptyIterator_ClassInfo_, clinit$Collections$EmptyIterator, allocate$Collections$EmptyIterator);
	return class$;
}

$Class* Collections$EmptyIterator::class$ = nullptr;

	} // util
} // java