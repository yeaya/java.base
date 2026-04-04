#include <java/util/Collections$ReverseComparator2.h>
#include <java/lang/AssertionError.h>
#include <java/util/Collections.h>
#include <java/util/Comparator.h>
#include <jcpp.h>

#undef MIN_VALUE

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
	return ($equals(o, this)) || ($instanceOf(Collections$ReverseComparator2, o) && $nc(this->cmp)->equals($cast(Collections$ReverseComparator2, o)->cmp));
}

int32_t Collections$ReverseComparator2::hashCode() {
	return $nc(this->cmp)->hashCode() ^ $Integer::MIN_VALUE;
}

$Comparator* Collections$ReverseComparator2::reversed() {
	return this->cmp;
}

void Collections$ReverseComparator2::clinit$($Class* clazz) {
	$load($Collections);
	Collections$ReverseComparator2::$assertionsDisabled = !$Collections::class$->desiredAssertionStatus();
}

Collections$ReverseComparator2::Collections$ReverseComparator2() {
}

$Class* Collections$ReverseComparator2::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"$assertionsDisabled", "Z", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(Collections$ReverseComparator2, $assertionsDisabled)},
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(Collections$ReverseComparator2, serialVersionUID)},
		{"cmp", "Ljava/util/Comparator;", "Ljava/util/Comparator<TT;>;", $FINAL, $field(Collections$ReverseComparator2, cmp)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
		{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
		{"<init>", "(Ljava/util/Comparator;)V", "(Ljava/util/Comparator<TT;>;)V", 0, $method(Collections$ReverseComparator2, init$, void, $Comparator*)},
		{"compare", "(Ljava/lang/Object;Ljava/lang/Object;)I", "(TT;TT;)I", $PUBLIC, $virtualMethod(Collections$ReverseComparator2, compare, int32_t, Object$*, Object$*)},
		{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC, $virtualMethod(Collections$ReverseComparator2, equals, bool, Object$*)},
		{"hashCode", "()I", nullptr, $PUBLIC, $virtualMethod(Collections$ReverseComparator2, hashCode, int32_t)},
		{"reversed", "()Ljava/util/Comparator;", "()Ljava/util/Comparator<TT;>;", $PUBLIC, $virtualMethod(Collections$ReverseComparator2, reversed, $Comparator*)},
		{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.util.Collections$ReverseComparator2", "java.util.Collections", "ReverseComparator2", $PRIVATE | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"java.util.Collections$ReverseComparator2",
		"java.lang.Object",
		"java.util.Comparator,java.io.Serializable",
		fieldInfos$$,
		methodInfos$$,
		"<T:Ljava/lang/Object;>Ljava/lang/Object;Ljava/util/Comparator<TT;>;Ljava/io/Serializable;",
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.util.Collections"
	};
	$loadClass(Collections$ReverseComparator2, name, initialize, &classInfo$$, Collections$ReverseComparator2::clinit$, []($Class* clazz) -> $Object* {
		return $of($alloc(Collections$ReverseComparator2));
	});
	return class$;
}

$Class* Collections$ReverseComparator2::class$ = nullptr;

	} // util
} // java