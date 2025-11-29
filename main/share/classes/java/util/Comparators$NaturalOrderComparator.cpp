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

$FieldInfo _Comparators$NaturalOrderComparator_FieldInfo_[] = {
	{"INSTANCE", "Ljava/util/Comparators$NaturalOrderComparator;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Comparators$NaturalOrderComparator, INSTANCE)},
	{"$VALUES", "[Ljava/util/Comparators$NaturalOrderComparator;", nullptr, $PRIVATE | $STATIC | $FINAL | $SYNTHETIC, $staticField(Comparators$NaturalOrderComparator, $VALUES)},
	{}
};

$MethodInfo _Comparators$NaturalOrderComparator_MethodInfo_[] = {
	{"$values", "()[Ljava/util/Comparators$NaturalOrderComparator;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$Comparators$NaturalOrderComparatorArray*(*)()>(&Comparators$NaturalOrderComparator::$values))},
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC | $FINAL},
	{"*finalize", "()V", nullptr, $PROTECTED | $FINAL},
	{"*hashCode", "()I", nullptr, $PUBLIC | $FINAL},
	{"<init>", "(Ljava/lang/String;I)V", "()V", $PRIVATE, $method(static_cast<void(Comparators$NaturalOrderComparator::*)($String*,int32_t)>(&Comparators$NaturalOrderComparator::init$))},
	{"compare", "(Ljava/lang/Comparable;Ljava/lang/Comparable;)I", "(Ljava/lang/Comparable<Ljava/lang/Object;>;Ljava/lang/Comparable<Ljava/lang/Object;>;)I", $PUBLIC, $method(static_cast<int32_t(Comparators$NaturalOrderComparator::*)($Comparable*,$Comparable*)>(&Comparators$NaturalOrderComparator::compare))},
	{"compare", "(Ljava/lang/Object;Ljava/lang/Object;)I", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"reversed", "()Ljava/util/Comparator;", "()Ljava/util/Comparator<Ljava/lang/Comparable<Ljava/lang/Object;>;>;", $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"valueOf", "(Ljava/lang/String;)Ljava/util/Comparators$NaturalOrderComparator;", nullptr, $PUBLIC | $STATIC, $method(static_cast<Comparators$NaturalOrderComparator*(*)($String*)>(&Comparators$NaturalOrderComparator::valueOf))},
	{"values", "()[Ljava/util/Comparators$NaturalOrderComparator;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$Comparators$NaturalOrderComparatorArray*(*)()>(&Comparators$NaturalOrderComparator::values))},
	{}
};

$InnerClassInfo _Comparators$NaturalOrderComparator_InnerClassesInfo_[] = {
	{"java.util.Comparators$NaturalOrderComparator", "java.util.Comparators", "NaturalOrderComparator", $STATIC | $FINAL | $ENUM},
	{}
};

$ClassInfo _Comparators$NaturalOrderComparator_ClassInfo_ = {
	$FINAL | $ACC_SUPER | $ENUM,
	"java.util.Comparators$NaturalOrderComparator",
	"java.lang.Enum",
	"java.util.Comparator",
	_Comparators$NaturalOrderComparator_FieldInfo_,
	_Comparators$NaturalOrderComparator_MethodInfo_,
	"Ljava/lang/Enum<Ljava/util/Comparators$NaturalOrderComparator;>;Ljava/util/Comparator<Ljava/lang/Comparable<Ljava/lang/Object;>;>;",
	nullptr,
	_Comparators$NaturalOrderComparator_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.Comparators"
};

$Object* allocate$Comparators$NaturalOrderComparator($Class* clazz) {
	return $of($alloc(Comparators$NaturalOrderComparator));
}

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

void clinit$Comparators$NaturalOrderComparator($Class* class$) {
	$assignStatic(Comparators$NaturalOrderComparator::INSTANCE, $new(Comparators$NaturalOrderComparator, "INSTANCE"_s, 0));
	$assignStatic(Comparators$NaturalOrderComparator::$VALUES, Comparators$NaturalOrderComparator::$values());
}

Comparators$NaturalOrderComparator::Comparators$NaturalOrderComparator() {
}

$Class* Comparators$NaturalOrderComparator::load$($String* name, bool initialize) {
	$loadClass(Comparators$NaturalOrderComparator, name, initialize, &_Comparators$NaturalOrderComparator_ClassInfo_, clinit$Comparators$NaturalOrderComparator, allocate$Comparators$NaturalOrderComparator);
	return class$;
}

$Class* Comparators$NaturalOrderComparator::class$ = nullptr;

	} // util
} // java