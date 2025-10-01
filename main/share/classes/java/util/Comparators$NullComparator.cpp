#include <java/util/Comparators$NullComparator.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/Comparator.h>
#include <java/util/Comparators.h>
#include <java/util/Objects.h>
#include <jcpp.h>

using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Comparator = ::java::util::Comparator;
using $Comparators = ::java::util::Comparators;
using $Objects = ::java::util::Objects;

namespace java {
	namespace util {

$FieldInfo _Comparators$NullComparator_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(Comparators$NullComparator, serialVersionUID)},
	{"nullFirst", "Z", nullptr, $PRIVATE | $FINAL, $field(Comparators$NullComparator, nullFirst)},
	{"real", "Ljava/util/Comparator;", "Ljava/util/Comparator<TT;>;", $PRIVATE | $FINAL, $field(Comparators$NullComparator, real)},
	{}
};

$MethodInfo _Comparators$NullComparator_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC | $ABSTRACT},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(ZLjava/util/Comparator;)V", "(ZLjava/util/Comparator<-TT;>;)V", 0, $method(static_cast<void(Comparators$NullComparator::*)(bool,$Comparator*)>(&Comparators$NullComparator::init$))},
	{"compare", "(Ljava/lang/Object;Ljava/lang/Object;)I", "(TT;TT;)I", $PUBLIC},
	{"reversed", "()Ljava/util/Comparator;", "()Ljava/util/Comparator<TT;>;", $PUBLIC},
	{"thenComparing", "(Ljava/util/Comparator;)Ljava/util/Comparator;", "(Ljava/util/Comparator<-TT;>;)Ljava/util/Comparator<TT;>;", $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _Comparators$NullComparator_InnerClassesInfo_[] = {
	{"java.util.Comparators$NullComparator", "java.util.Comparators", "NullComparator", $STATIC | $FINAL},
	{}
};

$ClassInfo _Comparators$NullComparator_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"java.util.Comparators$NullComparator",
	"java.lang.Object",
	"java.util.Comparator,java.io.Serializable",
	_Comparators$NullComparator_FieldInfo_,
	_Comparators$NullComparator_MethodInfo_,
	"<T:Ljava/lang/Object;>Ljava/lang/Object;Ljava/util/Comparator<TT;>;Ljava/io/Serializable;",
	nullptr,
	_Comparators$NullComparator_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.Comparators"
};

$Object* allocate$Comparators$NullComparator($Class* clazz) {
	return $of($alloc(Comparators$NullComparator));
}

bool Comparators$NullComparator::equals(Object$* obj) {
	 return this->$Comparator::equals(obj);
}

int32_t Comparators$NullComparator::hashCode() {
	 return this->$Comparator::hashCode();
}

$Object* Comparators$NullComparator::clone() {
	 return this->$Comparator::clone();
}

$String* Comparators$NullComparator::toString() {
	 return this->$Comparator::toString();
}

void Comparators$NullComparator::finalize() {
	this->$Comparator::finalize();
}

void Comparators$NullComparator::init$(bool nullFirst, $Comparator* real) {
	this->nullFirst = nullFirst;
	$set(this, real, real);
}

int32_t Comparators$NullComparator::compare(Object$* a, Object$* b) {
	if (a == nullptr) {
		return (b == nullptr) ? 0 : (this->nullFirst ? -1 : 1);
	} else if (b == nullptr) {
		return this->nullFirst ? 1 : -1;
	} else {
		return (this->real == nullptr) ? 0 : $nc(this->real)->compare(a, b);
	}
}

$Comparator* Comparators$NullComparator::thenComparing($Comparator* other) {
	$Objects::requireNonNull(other);
	return $new(Comparators$NullComparator, this->nullFirst, this->real == nullptr ? other : $($nc(this->real)->thenComparing(other)));
}

$Comparator* Comparators$NullComparator::reversed() {
	return $new(Comparators$NullComparator, !this->nullFirst, this->real == nullptr ? ($Comparator*)nullptr : $($nc(this->real)->reversed()));
}

Comparators$NullComparator::Comparators$NullComparator() {
}

$Class* Comparators$NullComparator::load$($String* name, bool initialize) {
	$loadClass(Comparators$NullComparator, name, initialize, &_Comparators$NullComparator_ClassInfo_, allocate$Comparators$NullComparator);
	return class$;
}

$Class* Comparators$NullComparator::class$ = nullptr;

	} // util
} // java