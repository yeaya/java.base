#include <java/util/ArraysParallelSortHelpers$FJObject$Merger.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/IllegalStateException.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/System.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/ArraysParallelSortHelpers$FJObject.h>
#include <java/util/Comparator.h>
#include <java/util/concurrent/CountedCompleter.h>
#include <java/util/concurrent/ForkJoinTask.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalStateException = ::java::lang::IllegalStateException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ArraysParallelSortHelpers$FJObject = ::java::util::ArraysParallelSortHelpers$FJObject;
using $Comparator = ::java::util::Comparator;
using $CountedCompleter = ::java::util::concurrent::CountedCompleter;
using $ForkJoinTask = ::java::util::concurrent::ForkJoinTask;

namespace java {
	namespace util {

$FieldInfo _ArraysParallelSortHelpers$FJObject$Merger_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $STATIC | $FINAL, $constField(ArraysParallelSortHelpers$FJObject$Merger, serialVersionUID)},
	{"a", "[Ljava/lang/Object;", "[TT;", $FINAL, $field(ArraysParallelSortHelpers$FJObject$Merger, a)},
	{"w", "[Ljava/lang/Object;", "[TT;", $FINAL, $field(ArraysParallelSortHelpers$FJObject$Merger, w)},
	{"lbase", "I", nullptr, $FINAL, $field(ArraysParallelSortHelpers$FJObject$Merger, lbase)},
	{"lsize", "I", nullptr, $FINAL, $field(ArraysParallelSortHelpers$FJObject$Merger, lsize)},
	{"rbase", "I", nullptr, $FINAL, $field(ArraysParallelSortHelpers$FJObject$Merger, rbase)},
	{"rsize", "I", nullptr, $FINAL, $field(ArraysParallelSortHelpers$FJObject$Merger, rsize)},
	{"wbase", "I", nullptr, $FINAL, $field(ArraysParallelSortHelpers$FJObject$Merger, wbase)},
	{"gran", "I", nullptr, $FINAL, $field(ArraysParallelSortHelpers$FJObject$Merger, gran)},
	{"comparator", "Ljava/util/Comparator;", "Ljava/util/Comparator<-TT;>;", 0, $field(ArraysParallelSortHelpers$FJObject$Merger, comparator)},
	{}
};

$MethodInfo _ArraysParallelSortHelpers$FJObject$Merger_MethodInfo_[] = {
	{"<init>", "(Ljava/util/concurrent/CountedCompleter;[Ljava/lang/Object;[Ljava/lang/Object;IIIIIILjava/util/Comparator;)V", "(Ljava/util/concurrent/CountedCompleter<*>;[TT;[TT;IIIIIILjava/util/Comparator<-TT;>;)V", 0, $method(static_cast<void(ArraysParallelSortHelpers$FJObject$Merger::*)($CountedCompleter*,$ObjectArray*,$ObjectArray*,int32_t,int32_t,int32_t,int32_t,int32_t,int32_t,$Comparator*)>(&ArraysParallelSortHelpers$FJObject$Merger::init$))},
	{"compute", "()V", nullptr, $PUBLIC | $FINAL},
	{}
};

$InnerClassInfo _ArraysParallelSortHelpers$FJObject$Merger_InnerClassesInfo_[] = {
	{"java.util.ArraysParallelSortHelpers$FJObject", "java.util.ArraysParallelSortHelpers", "FJObject", $STATIC | $FINAL},
	{"java.util.ArraysParallelSortHelpers$FJObject$Merger", "java.util.ArraysParallelSortHelpers$FJObject", "Merger", $STATIC | $FINAL},
	{}
};

$ClassInfo _ArraysParallelSortHelpers$FJObject$Merger_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"java.util.ArraysParallelSortHelpers$FJObject$Merger",
	"java.util.concurrent.CountedCompleter",
	nullptr,
	_ArraysParallelSortHelpers$FJObject$Merger_FieldInfo_,
	_ArraysParallelSortHelpers$FJObject$Merger_MethodInfo_,
	"<T:Ljava/lang/Object;>Ljava/util/concurrent/CountedCompleter<Ljava/lang/Void;>;",
	nullptr,
	_ArraysParallelSortHelpers$FJObject$Merger_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.ArraysParallelSortHelpers"
};

$Object* allocate$ArraysParallelSortHelpers$FJObject$Merger($Class* clazz) {
	return $of($alloc(ArraysParallelSortHelpers$FJObject$Merger));
}

void ArraysParallelSortHelpers$FJObject$Merger::init$($CountedCompleter* par, $ObjectArray* a, $ObjectArray* w, int32_t lbase, int32_t lsize, int32_t rbase, int32_t rsize, int32_t wbase, int32_t gran, $Comparator* comparator) {
	$CountedCompleter::init$(par);
	$set(this, a, a);
	$set(this, w, w);
	this->lbase = lbase;
	this->lsize = lsize;
	this->rbase = rbase;
	this->rsize = rsize;
	this->wbase = wbase;
	this->gran = gran;
	$set(this, comparator, comparator);
}

void ArraysParallelSortHelpers$FJObject$Merger::compute() {
	$useLocalCurrentObjectStackCache();
	$var($Comparator, c, this->comparator);
	$var($ObjectArray, a, this->a);
	$var($ObjectArray, w, this->w);
	int32_t lb = this->lbase;
	int32_t ln = this->lsize;
	int32_t rb = this->rbase;
	int32_t rn = this->rsize;
	int32_t k = this->wbase;
	int32_t g = this->gran;
	if (a == nullptr || w == nullptr || lb < 0 || rb < 0 || k < 0 || c == nullptr) {
		$throwNew($IllegalStateException);
	}
	{
		int32_t lh = 0;
		int32_t rh = 0;
		for (;;) {
			if (ln >= rn) {
				if (ln <= g) {
					break;
				}
				rh = rn;
				$var($Object0, split, $nc(a)->get((lh = (int32_t)((uint32_t)ln >> 1)) + lb));
				for (int32_t lo = 0; lo < rh;) {
					int32_t rm = (int32_t)((uint32_t)(lo + rh) >> 1);
					if ($nc(c)->compare(split, a->get(rm + rb)) <= 0) {
						rh = rm;
					} else {
						lo = rm + 1;
					}
				}
			} else {
				if (rn <= g) {
					break;
				}
				lh = ln;
				$var($Object0, split, $nc(a)->get((rh = (int32_t)((uint32_t)rn >> 1)) + rb));
				for (int32_t lo = 0; lo < lh;) {
					int32_t lm = (int32_t)((uint32_t)(lo + lh) >> 1);
					if ($nc(c)->compare(split, a->get(lm + lb)) <= 0) {
						lh = lm;
					} else {
						lo = lm + 1;
					}
				}
			}
			$var(ArraysParallelSortHelpers$FJObject$Merger, m, $new(ArraysParallelSortHelpers$FJObject$Merger, this, a, w, lb + lh, ln - lh, rb + rh, rn - rh, k + lh + rh, g, c));
			rn = rh;
			ln = lh;
			addToPendingCount(1);
			m->fork();
		}
	}
	int32_t lf = lb + ln;
	int32_t rf = rb + rn;
	while (lb < lf && rb < rf) {
		$var($Object, t, nullptr);
		$var($Object, al, nullptr);
		$var($Object, ar, nullptr);
		if ($nc(c)->compare(($assign(al, $nc(a)->get(lb))), ($assign(ar, a->get(rb)))) <= 0) {
			++lb;
			$assign(t, al);
		} else {
			++rb;
			$assign(t, ar);
		}
		$nc(w)->set(k++, t);
	}
	if (rb < rf) {
		$System::arraycopy(a, rb, w, k, rf - rb);
	} else if (lb < lf) {
		$System::arraycopy(a, lb, w, k, lf - lb);
	}
	tryComplete();
}

ArraysParallelSortHelpers$FJObject$Merger::ArraysParallelSortHelpers$FJObject$Merger() {
}

$Class* ArraysParallelSortHelpers$FJObject$Merger::load$($String* name, bool initialize) {
	$loadClass(ArraysParallelSortHelpers$FJObject$Merger, name, initialize, &_ArraysParallelSortHelpers$FJObject$Merger_ClassInfo_, allocate$ArraysParallelSortHelpers$FJObject$Merger);
	return class$;
}

$Class* ArraysParallelSortHelpers$FJObject$Merger::class$ = nullptr;

	} // util
} // java