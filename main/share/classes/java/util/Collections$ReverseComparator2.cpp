#include <java/util/Collections$ReverseComparator2.h>

#include <java/lang/AssertionError.h>
#include <java/util/Collections.h>
#include <java/util/Comparator.h>
#include <jcpp.h>

#undef MIN_VALUE

using $Serializable = ::java::io::Serializable;
using $AssertionError = ::java::lang::AssertionError;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $Collections = ::java::util::Collections;
using $Comparator = ::java::util::Comparator;

namespace java {
	namespace util {

$FieldInfo _Collections$ReverseComparator2_FieldInfo_[] = {
	{"$assertionsDisabled", "Z", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(Collections$ReverseComparator2, $assertionsDisabled)},
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(Collections$ReverseComparator2, serialVersionUID)},
	{"cmp", "Ljava/util/Comparator;", "Ljava/util/Comparator<TT;>;", $FINAL, $field(Collections$ReverseComparator2, cmp)},
	{}
};

$MethodInfo _Collections$ReverseComparator2_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"<init>", "(Ljava/util/Comparator;)V", "(Ljava/util/Comparator<TT;>;)V", 0, $method(static_cast<void(Collections$ReverseComparator2::*)($Comparator*)>(&Collections$ReverseComparator2::init$))},
	{"compare", "(Ljava/lang/Object;Ljava/lang/Object;)I", "(TT;TT;)I", $PUBLIC},
	{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"hashCode", "()I", nullptr, $PUBLIC},
	{"reversed", "()Ljava/util/Comparator;", "()Ljava/util/Comparator<TT;>;", $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _Collections$ReverseComparator2_InnerClassesInfo_[] = {
	{"java.util.Collections$ReverseComparator2", "java.util.Collections", "ReverseComparator2", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _Collections$ReverseComparator2_ClassInfo_ = {
	$ACC_SUPER,
	"java.util.Collections$ReverseComparator2",
	"java.lang.Object",
	"java.util.Comparator,java.io.Serializable",
	_Collections$ReverseComparator2_FieldInfo_,
	_Collections$ReverseComparator2_MethodInfo_,
	"<T:Ljava/lang/Object;>Ljava/lang/Object;Ljava/util/Comparator<TT;>;Ljava/io/Serializable;",
	nullptr,
	_Collections$ReverseComparator2_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.Collections"
};

$Object* allocate$Collections$ReverseComparator2($Class* clazz) {
	return $of($alloc(Collections$ReverseComparator2));
}

$Object* Collections$ReverseComparator2::clone() {
	 return this->$Comparator::clone();
}

$String* Collections$ReverseComparator2::toString() {
	 return this->$Comparator::toString();
}

void Collections$ReverseComparator2::finalize() {
	this->$Comparator::finalize();
}

bool Collections$ReverseComparator2::$assertionsDisabled = false;

void Collections$ReverseComparator2::init$($Comparator* cmp) {
	if (!Collections$ReverseComparator2::$assertionsDisabled && !(cmp != nullptr)) {
		$throwNew($AssertionError);
	}
	$set(this, cmp, cmp);
}

int32_t Collections$ReverseComparator2::compare(Object$* t1, Object$* t2) {
	return $nc(this->cmp)->compare(t2, t1);
}

bool Collections$ReverseComparator2::equals(Object$* o) {
	return ($equals(o, this)) || ($instanceOf(Collections$ReverseComparator2, o) && $nc(this->cmp)->equals($nc(($cast(Collections$ReverseComparator2, o)))->cmp));
}

int32_t Collections$ReverseComparator2::hashCode() {
	return $nc($of(this->cmp))->hashCode() ^ $Integer::MIN_VALUE;
}

$Comparator* Collections$ReverseComparator2::reversed() {
	return this->cmp;
}

void clinit$Collections$ReverseComparator2($Class* class$) {
	$load($Collections);
	Collections$ReverseComparator2::$assertionsDisabled = !$Collections::class$->desiredAssertionStatus();
}

Collections$ReverseComparator2::Collections$ReverseComparator2() {
}

$Class* Collections$ReverseComparator2::load$($String* name, bool initialize) {
	$loadClass(Collections$ReverseComparator2, name, initialize, &_Collections$ReverseComparator2_ClassInfo_, clinit$Collections$ReverseComparator2, allocate$Collections$ReverseComparator2);
	return class$;
}

$Class* Collections$ReverseComparator2::class$ = nullptr;

	} // util
} // java