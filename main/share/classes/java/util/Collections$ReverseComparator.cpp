#include <java/util/Collections$ReverseComparator.h>
#include <java/lang/Comparable.h>
#include <java/util/Collections.h>
#include <java/util/Comparator.h>
#include <jcpp.h>

#undef REVERSE_ORDER

using $ClassInfo = ::java::lang::ClassInfo;
using $Comparable = ::java::lang::Comparable;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Collections = ::java::util::Collections;
using $Comparator = ::java::util::Comparator;

namespace java {
	namespace util {

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
	return $Collections::reverseOrder();
}

$Comparator* Collections$ReverseComparator::reversed() {
	return $Comparator::naturalOrder();
}

int32_t Collections$ReverseComparator::compare(Object$* c1, Object$* c2) {
	return this->compare($cast($Comparable, c1), $cast($Comparable, c2));
}

void Collections$ReverseComparator::clinit$($Class* clazz) {
	$assignStatic(Collections$ReverseComparator::REVERSE_ORDER, $new(Collections$ReverseComparator));
}

Collections$ReverseComparator::Collections$ReverseComparator() {
}

$Class* Collections$ReverseComparator::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(Collections$ReverseComparator, serialVersionUID)},
		{"REVERSE_ORDER", "Ljava/util/Collections$ReverseComparator;", nullptr, $STATIC | $FINAL, $staticField(Collections$ReverseComparator, REVERSE_ORDER)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
		{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC | $ABSTRACT},
		{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
		{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
		{"<init>", "()V", nullptr, $PRIVATE, $method(Collections$ReverseComparator, init$, void)},
		{"compare", "(Ljava/lang/Comparable;Ljava/lang/Comparable;)I", "(Ljava/lang/Comparable<Ljava/lang/Object;>;Ljava/lang/Comparable<Ljava/lang/Object;>;)I", $PUBLIC, $virtualMethod(Collections$ReverseComparator, compare, int32_t, $Comparable*, $Comparable*)},
		{"compare", "(Ljava/lang/Object;Ljava/lang/Object;)I", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(Collections$ReverseComparator, compare, int32_t, Object$*, Object$*)},
		{"readResolve", "()Ljava/lang/Object;", nullptr, $PRIVATE, $method(Collections$ReverseComparator, readResolve, $Object*)},
		{"reversed", "()Ljava/util/Comparator;", "()Ljava/util/Comparator<Ljava/lang/Comparable<Ljava/lang/Object;>;>;", $PUBLIC, $virtualMethod(Collections$ReverseComparator, reversed, $Comparator*)},
		{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.util.Collections$ReverseComparator", "java.util.Collections", "ReverseComparator", $PRIVATE | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"java.util.Collections$ReverseComparator",
		"java.lang.Object",
		"java.util.Comparator,java.io.Serializable",
		fieldInfos$$,
		methodInfos$$,
		"Ljava/lang/Object;Ljava/util/Comparator<Ljava/lang/Comparable<Ljava/lang/Object;>;>;Ljava/io/Serializable;",
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.util.Collections"
	};
	$loadClass(Collections$ReverseComparator, name, initialize, &classInfo$$, Collections$ReverseComparator::clinit$, []($Class* clazz) -> $Object* {
		return $of($alloc(Collections$ReverseComparator));
	});
	return class$;
}

$Class* Collections$ReverseComparator::class$ = nullptr;

	} // util
} // java