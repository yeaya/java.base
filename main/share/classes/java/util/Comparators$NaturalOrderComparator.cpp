#include <java/util/Comparators$NaturalOrderComparator.h>
#include <java/lang/Comparable.h>
#include <java/lang/Enum.h>
#include <java/util/Comparator.h>
#include <java/util/Comparators.h>
#include <jcpp.h>

#undef INSTANCE

using $Comparators$NaturalOrderComparatorArray = $Array<::java::util::Comparators$NaturalOrderComparator>;
using $ClassInfo = ::java::lang::ClassInfo;
using $Comparable = ::java::lang::Comparable;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Comparator = ::java::util::Comparator;

namespace java {
	namespace util {

$String* Comparators$NaturalOrderComparator::toString() {
	 return this->$Enum::toString();
}

bool Comparators$NaturalOrderComparator::equals(Object$* other) {
	 return this->$Enum::equals(other);
}

int32_t Comparators$NaturalOrderComparator::hashCode() {
	 return this->$Enum::hashCode();
}

$Object* Comparators$NaturalOrderComparator::clone() {
	 return this->$Enum::clone();
}

void Comparators$NaturalOrderComparator::finalize() {
	this->$Enum::finalize();
}

Comparators$NaturalOrderComparator* Comparators$NaturalOrderComparator::INSTANCE = nullptr;
$Comparators$NaturalOrderComparatorArray* Comparators$NaturalOrderComparator::$VALUES = nullptr;

$Comparators$NaturalOrderComparatorArray* Comparators$NaturalOrderComparator::$values() {
	$init(Comparators$NaturalOrderComparator);
	return $new($Comparators$NaturalOrderComparatorArray, {Comparators$NaturalOrderComparator::INSTANCE});
}

$Comparators$NaturalOrderComparatorArray* Comparators$NaturalOrderComparator::values() {
	$init(Comparators$NaturalOrderComparator);
	return $cast($Comparators$NaturalOrderComparatorArray, Comparators$NaturalOrderComparator::$VALUES->clone());
}

Comparators$NaturalOrderComparator* Comparators$NaturalOrderComparator::valueOf($String* name) {
	$init(Comparators$NaturalOrderComparator);
	return $cast(Comparators$NaturalOrderComparator, $Enum::valueOf(Comparators$NaturalOrderComparator::class$, name));
}

void Comparators$NaturalOrderComparator::init$($String* $enum$name, int32_t $enum$ordinal) {
	$Enum::init$($enum$name, $enum$ordinal);
}

int32_t Comparators$NaturalOrderComparator::compare($Comparable* c1, $Comparable* c2) {
	return $nc(c1)->compareTo(c2);
}

$Comparator* Comparators$NaturalOrderComparator::reversed() {
	return $Comparator::reverseOrder();
}

int32_t Comparators$NaturalOrderComparator::compare(Object$* c1, Object$* c2) {
	return this->compare($cast($Comparable, c1), $cast($Comparable, c2));
}

void Comparators$NaturalOrderComparator::clinit$($Class* clazz) {
	$assignStatic(Comparators$NaturalOrderComparator::INSTANCE, $new(Comparators$NaturalOrderComparator, "INSTANCE"_s, 0));
	$assignStatic(Comparators$NaturalOrderComparator::$VALUES, Comparators$NaturalOrderComparator::$values());
}

Comparators$NaturalOrderComparator::Comparators$NaturalOrderComparator() {
}

$Class* Comparators$NaturalOrderComparator::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"INSTANCE", "Ljava/util/Comparators$NaturalOrderComparator;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Comparators$NaturalOrderComparator, INSTANCE)},
		{"$VALUES", "[Ljava/util/Comparators$NaturalOrderComparator;", nullptr, $PRIVATE | $STATIC | $FINAL | $SYNTHETIC, $staticField(Comparators$NaturalOrderComparator, $VALUES)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"$values", "()[Ljava/util/Comparators$NaturalOrderComparator;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(Comparators$NaturalOrderComparator, $values, $Comparators$NaturalOrderComparatorArray*)},
		{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL},
		{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC | $FINAL},
		{"*finalize", "()V", nullptr, $PROTECTED | $FINAL},
		{"*hashCode", "()I", nullptr, $PUBLIC | $FINAL},
		{"<init>", "(Ljava/lang/String;I)V", "()V", $PRIVATE, $method(Comparators$NaturalOrderComparator, init$, void, $String*, int32_t)},
		{"compare", "(Ljava/lang/Comparable;Ljava/lang/Comparable;)I", "(Ljava/lang/Comparable<Ljava/lang/Object;>;Ljava/lang/Comparable<Ljava/lang/Object;>;)I", $PUBLIC, $method(Comparators$NaturalOrderComparator, compare, int32_t, $Comparable*, $Comparable*)},
		{"compare", "(Ljava/lang/Object;Ljava/lang/Object;)I", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(Comparators$NaturalOrderComparator, compare, int32_t, Object$*, Object$*)},
		{"reversed", "()Ljava/util/Comparator;", "()Ljava/util/Comparator<Ljava/lang/Comparable<Ljava/lang/Object;>;>;", $PUBLIC, $virtualMethod(Comparators$NaturalOrderComparator, reversed, $Comparator*)},
		{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
		{"valueOf", "(Ljava/lang/String;)Ljava/util/Comparators$NaturalOrderComparator;", nullptr, $PUBLIC | $STATIC, $staticMethod(Comparators$NaturalOrderComparator, valueOf, Comparators$NaturalOrderComparator*, $String*)},
		{"values", "()[Ljava/util/Comparators$NaturalOrderComparator;", nullptr, $PUBLIC | $STATIC, $staticMethod(Comparators$NaturalOrderComparator, values, $Comparators$NaturalOrderComparatorArray*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.util.Comparators$NaturalOrderComparator", "java.util.Comparators", "NaturalOrderComparator", $STATIC | $FINAL | $ENUM},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER | $ENUM,
		"java.util.Comparators$NaturalOrderComparator",
		"java.lang.Enum",
		"java.util.Comparator",
		fieldInfos$$,
		methodInfos$$,
		"Ljava/lang/Enum<Ljava/util/Comparators$NaturalOrderComparator;>;Ljava/util/Comparator<Ljava/lang/Comparable<Ljava/lang/Object;>;>;",
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.util.Comparators"
	};
	$loadClass(Comparators$NaturalOrderComparator, name, initialize, &classInfo$$, Comparators$NaturalOrderComparator::clinit$, []($Class* clazz) -> $Object* {
		return $of($alloc(Comparators$NaturalOrderComparator));
	});
	return class$;
}

$Class* Comparators$NaturalOrderComparator::class$ = nullptr;

	} // util
} // java