#include <java/util/Collections$SingletonSet.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/UnsupportedOperationException.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/AbstractSet.h>
#include <java/util/Collections.h>
#include <java/util/Iterator.h>
#include <java/util/Objects.h>
#include <java/util/Spliterator.h>
#include <java/util/function/Consumer.h>
#include <java/util/function/Predicate.h>
#include <jcpp.h>

using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $UnsupportedOperationException = ::java::lang::UnsupportedOperationException;
using $AbstractSet = ::java::util::AbstractSet;
using $Collections = ::java::util::Collections;
using $Iterator = ::java::util::Iterator;
using $Objects = ::java::util::Objects;
using $Spliterator = ::java::util::Spliterator;
using $Consumer = ::java::util::function::Consumer;
using $Predicate = ::java::util::function::Predicate;

namespace java {
	namespace util {

$FieldInfo _Collections$SingletonSet_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(Collections$SingletonSet, serialVersionUID)},
	{"element", "Ljava/lang/Object;", "TE;", $PRIVATE | $FINAL, $field(Collections$SingletonSet, element)},
	{}
};

$MethodInfo _Collections$SingletonSet_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"<init>", "(Ljava/lang/Object;)V", "(TE;)V", 0, $method(static_cast<void(Collections$SingletonSet::*)(Object$*)>(&Collections$SingletonSet::init$))},
	{"contains", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"forEach", "(Ljava/util/function/Consumer;)V", "(Ljava/util/function/Consumer<-TE;>;)V", $PUBLIC},
	{"hashCode", "()I", nullptr, $PUBLIC},
	{"iterator", "()Ljava/util/Iterator;", "()Ljava/util/Iterator<TE;>;", $PUBLIC},
	{"removeIf", "(Ljava/util/function/Predicate;)Z", "(Ljava/util/function/Predicate<-TE;>;)Z", $PUBLIC},
	{"size", "()I", nullptr, $PUBLIC},
	{"spliterator", "()Ljava/util/Spliterator;", "()Ljava/util/Spliterator<TE;>;", $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _Collections$SingletonSet_InnerClassesInfo_[] = {
	{"java.util.Collections$SingletonSet", "java.util.Collections", "SingletonSet", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _Collections$SingletonSet_ClassInfo_ = {
	$ACC_SUPER,
	"java.util.Collections$SingletonSet",
	"java.util.AbstractSet",
	"java.io.Serializable",
	_Collections$SingletonSet_FieldInfo_,
	_Collections$SingletonSet_MethodInfo_,
	"<E:Ljava/lang/Object;>Ljava/util/AbstractSet<TE;>;Ljava/io/Serializable;",
	nullptr,
	_Collections$SingletonSet_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.Collections"
};

$Object* allocate$Collections$SingletonSet($Class* clazz) {
	return $of($alloc(Collections$SingletonSet));
}

bool Collections$SingletonSet::equals(Object$* o) {
	 return this->$AbstractSet::equals(o);
}

$String* Collections$SingletonSet::toString() {
	 return this->$AbstractSet::toString();
}

$Object* Collections$SingletonSet::clone() {
	 return this->$AbstractSet::clone();
}

void Collections$SingletonSet::finalize() {
	this->$AbstractSet::finalize();
}

void Collections$SingletonSet::init$(Object$* e) {
	$AbstractSet::init$();
	$set(this, element, e);
}

$Iterator* Collections$SingletonSet::iterator() {
	return $Collections::singletonIterator(this->element);
}

int32_t Collections$SingletonSet::size() {
	return 1;
}

bool Collections$SingletonSet::contains(Object$* o) {
	return $Collections::eq(o, this->element);
}

void Collections$SingletonSet::forEach($Consumer* action) {
	$nc(action)->accept(this->element);
}

$Spliterator* Collections$SingletonSet::spliterator() {
	return $Collections::singletonSpliterator(this->element);
}

bool Collections$SingletonSet::removeIf($Predicate* filter) {
	$throwNew($UnsupportedOperationException);
	$shouldNotReachHere();
}

int32_t Collections$SingletonSet::hashCode() {
	return $Objects::hashCode(this->element);
}

Collections$SingletonSet::Collections$SingletonSet() {
}

$Class* Collections$SingletonSet::load$($String* name, bool initialize) {
	$loadClass(Collections$SingletonSet, name, initialize, &_Collections$SingletonSet_ClassInfo_, allocate$Collections$SingletonSet);
	return class$;
}

$Class* Collections$SingletonSet::class$ = nullptr;

	} // util
} // java