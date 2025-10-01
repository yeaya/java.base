#include <java/util/Collections$ReverseComparator.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Comparable.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/Collections.h>
#include <java/util/Comparator.h>
#include <jcpp.h>

#undef REVERSE_ORDER

using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $Comparable = ::java::lang::Comparable;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Collections = ::java::util::Collections;
using $Comparator = ::java::util::Comparator;

namespace java {
	namespace util {

$FieldInfo _Collections$ReverseComparator_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(Collections$ReverseComparator, serialVersionUID)},
	{"REVERSE_ORDER", "Ljava/util/Collections$ReverseComparator;", nullptr, $STATIC | $FINAL, $staticField(Collections$ReverseComparator, REVERSE_ORDER)},
	{}
};

$MethodInfo _Collections$ReverseComparator_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC | $ABSTRACT},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(Collections$ReverseComparator::*)()>(&Collections$ReverseComparator::init$))},
	{"compare", "(Ljava/lang/Comparable;Ljava/lang/Comparable;)I", "(Ljava/lang/Comparable<Ljava/lang/Object;>;Ljava/lang/Comparable<Ljava/lang/Object;>;)I", $PUBLIC},
	{"compare", "(Ljava/lang/Object;Ljava/lang/Object;)I", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"readResolve", "()Ljava/lang/Object;", nullptr, $PRIVATE, $method(static_cast<$Object*(Collections$ReverseComparator::*)()>(&Collections$ReverseComparator::readResolve))},
	{"reversed", "()Ljava/util/Comparator;", "()Ljava/util/Comparator<Ljava/lang/Comparable<Ljava/lang/Object;>;>;", $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _Collections$ReverseComparator_InnerClassesInfo_[] = {
	{"java.util.Collections$ReverseComparator", "java.util.Collections", "ReverseComparator", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _Collections$ReverseComparator_ClassInfo_ = {
	$ACC_SUPER,
	"java.util.Collections$ReverseComparator",
	"java.lang.Object",
	"java.util.Comparator,java.io.Serializable",
	_Collections$ReverseComparator_FieldInfo_,
	_Collections$ReverseComparator_MethodInfo_,
	"Ljava/lang/Object;Ljava/util/Comparator<Ljava/lang/Comparable<Ljava/lang/Object;>;>;Ljava/io/Serializable;",
	nullptr,
	_Collections$ReverseComparator_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.Collections"
};

$Object* allocate$Collections$ReverseComparator($Class* clazz) {
	return $of($alloc(Collections$ReverseComparator));
}

bool Collections$ReverseComparator::equals(Object$* obj) {
	 return this->$Comparator::equals(obj);
}

int32_t Collections$ReverseComparator::hashCode() {
	 return this->$Comparator::hashCode();
}

$Object* Collections$ReverseComparator::clone() {
	 return this->$Comparator::clone();
}

$String* Collections$ReverseComparator::toString() {
	 return this->$Comparator::toString();
}

void Collections$ReverseComparator::finalize() {
	this->$Comparator::finalize();
}

Collections$ReverseComparator* Collections$ReverseComparator::REVERSE_ORDER = nullptr;

void Collections$ReverseComparator::init$() {
}

int32_t Collections$ReverseComparator::compare($Comparable* c1, $Comparable* c2) {
	return $nc(c2)->compareTo(c1);
}

$Object* Collections$ReverseComparator::readResolve() {
	return $of($Collections::reverseOrder());
}

$Comparator* Collections$ReverseComparator::reversed() {
	return $Comparator::naturalOrder();
}

int32_t Collections$ReverseComparator::compare(Object$* c1, Object$* c2) {
	return this->compare($cast($Comparable, c1), $cast($Comparable, c2));
}

void clinit$Collections$ReverseComparator($Class* class$) {
	$assignStatic(Collections$ReverseComparator::REVERSE_ORDER, $new(Collections$ReverseComparator));
}

Collections$ReverseComparator::Collections$ReverseComparator() {
}

$Class* Collections$ReverseComparator::load$($String* name, bool initialize) {
	$loadClass(Collections$ReverseComparator, name, initialize, &_Collections$ReverseComparator_ClassInfo_, clinit$Collections$ReverseComparator, allocate$Collections$ReverseComparator);
	return class$;
}

$Class* Collections$ReverseComparator::class$ = nullptr;

	} // util
} // java