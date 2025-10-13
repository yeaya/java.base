#include <java/util/ArrayPrefixHelpers$IntCumulateTask.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/NullPointerException.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/ArrayPrefixHelpers.h>
#include <java/util/concurrent/CountedCompleter.h>
#include <java/util/concurrent/ForkJoinPool.h>
#include <java/util/concurrent/ForkJoinTask.h>
#include <java/util/function/IntBinaryOperator.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $ArrayPrefixHelpers = ::java::util::ArrayPrefixHelpers;
using $CountedCompleter = ::java::util::concurrent::CountedCompleter;
using $ForkJoinPool = ::java::util::concurrent::ForkJoinPool;
using $ForkJoinTask = ::java::util::concurrent::ForkJoinTask;
using $IntBinaryOperator = ::java::util::function::IntBinaryOperator;

namespace java {
	namespace util {

$FieldInfo _ArrayPrefixHelpers$IntCumulateTask_FieldInfo_[] = {
	{"array", "[I", nullptr, $FINAL, $field(ArrayPrefixHelpers$IntCumulateTask, array)},
	{"function", "Ljava/util/function/IntBinaryOperator;", nullptr, $FINAL, $field(ArrayPrefixHelpers$IntCumulateTask, function)},
	{"left", "Ljava/util/ArrayPrefixHelpers$IntCumulateTask;", nullptr, 0, $field(ArrayPrefixHelpers$IntCumulateTask, left)},
	{"right", "Ljava/util/ArrayPrefixHelpers$IntCumulateTask;", nullptr, 0, $field(ArrayPrefixHelpers$IntCumulateTask, right)},
	{"in", "I", nullptr, 0, $field(ArrayPrefixHelpers$IntCumulateTask, in)},
	{"out", "I", nullptr, 0, $field(ArrayPrefixHelpers$IntCumulateTask, out)},
	{"lo", "I", nullptr, $FINAL, $field(ArrayPrefixHelpers$IntCumulateTask, lo)},
	{"hi", "I", nullptr, $FINAL, $field(ArrayPrefixHelpers$IntCumulateTask, hi)},
	{"origin", "I", nullptr, $FINAL, $field(ArrayPrefixHelpers$IntCumulateTask, origin)},
	{"fence", "I", nullptr, $FINAL, $field(ArrayPrefixHelpers$IntCumulateTask, fence)},
	{"threshold", "I", nullptr, $FINAL, $field(ArrayPrefixHelpers$IntCumulateTask, threshold)},
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(ArrayPrefixHelpers$IntCumulateTask, serialVersionUID)},
	{}
};

$MethodInfo _ArrayPrefixHelpers$IntCumulateTask_MethodInfo_[] = {
	{"<init>", "(Ljava/util/ArrayPrefixHelpers$IntCumulateTask;Ljava/util/function/IntBinaryOperator;[III)V", nullptr, $PUBLIC, $method(static_cast<void(ArrayPrefixHelpers$IntCumulateTask::*)(ArrayPrefixHelpers$IntCumulateTask*,$IntBinaryOperator*,$ints*,int32_t,int32_t)>(&ArrayPrefixHelpers$IntCumulateTask::init$))},
	{"<init>", "(Ljava/util/ArrayPrefixHelpers$IntCumulateTask;Ljava/util/function/IntBinaryOperator;[IIIIII)V", nullptr, 0, $method(static_cast<void(ArrayPrefixHelpers$IntCumulateTask::*)(ArrayPrefixHelpers$IntCumulateTask*,$IntBinaryOperator*,$ints*,int32_t,int32_t,int32_t,int32_t,int32_t)>(&ArrayPrefixHelpers$IntCumulateTask::init$))},
	{"compute", "()V", nullptr, $PUBLIC | $FINAL},
	{}
};

$InnerClassInfo _ArrayPrefixHelpers$IntCumulateTask_InnerClassesInfo_[] = {
	{"java.util.ArrayPrefixHelpers$IntCumulateTask", "java.util.ArrayPrefixHelpers", "IntCumulateTask", $STATIC | $FINAL},
	{}
};

$ClassInfo _ArrayPrefixHelpers$IntCumulateTask_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"java.util.ArrayPrefixHelpers$IntCumulateTask",
	"java.util.concurrent.CountedCompleter",
	nullptr,
	_ArrayPrefixHelpers$IntCumulateTask_FieldInfo_,
	_ArrayPrefixHelpers$IntCumulateTask_MethodInfo_,
	"Ljava/util/concurrent/CountedCompleter<Ljava/lang/Void;>;",
	nullptr,
	_ArrayPrefixHelpers$IntCumulateTask_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.ArrayPrefixHelpers"
};

$Object* allocate$ArrayPrefixHelpers$IntCumulateTask($Class* clazz) {
	return $of($alloc(ArrayPrefixHelpers$IntCumulateTask));
}

void ArrayPrefixHelpers$IntCumulateTask::init$(ArrayPrefixHelpers$IntCumulateTask* parent, $IntBinaryOperator* function, $ints* array, int32_t lo, int32_t hi) {
	$CountedCompleter::init$(parent);
	$set(this, function, function);
	$set(this, array, array);
	this->lo = (this->origin = lo);
	this->hi = (this->fence = hi);
	int32_t p = 0;
	this->threshold = (p = $div((hi - lo), ($ForkJoinPool::getCommonPoolParallelism() << 3))) <= 16 ? 16 : p;
}

void ArrayPrefixHelpers$IntCumulateTask::init$(ArrayPrefixHelpers$IntCumulateTask* parent, $IntBinaryOperator* function, $ints* array, int32_t origin, int32_t fence, int32_t threshold, int32_t lo, int32_t hi) {
	$CountedCompleter::init$(parent);
	$set(this, function, function);
	$set(this, array, array);
	this->origin = origin;
	this->fence = fence;
	this->threshold = threshold;
	this->lo = lo;
	this->hi = hi;
}

void ArrayPrefixHelpers$IntCumulateTask::compute() {
	$var($IntBinaryOperator, fn, nullptr);
	$var($ints, a, nullptr);
	if (($assign(fn, this->function)) == nullptr || ($assign(a, this->array)) == nullptr) {
		$throwNew($NullPointerException);
	}
	int32_t th = this->threshold;
	int32_t org = this->origin;
	int32_t fnc = this->fence;
	int32_t l = 0;
	int32_t h = 0;
	$var(ArrayPrefixHelpers$IntCumulateTask, t, this);
	bool outer$break = false;
	while ((l = $nc(t)->lo) >= 0 && (h = t->hi) <= $nc(a)->length) {
		if (h - l > th) {
			$var(ArrayPrefixHelpers$IntCumulateTask, lt, t->left);
			$var(ArrayPrefixHelpers$IntCumulateTask, rt, t->right);
			$var(ArrayPrefixHelpers$IntCumulateTask, f, nullptr);
			if (lt == nullptr) {
				int32_t mid = (int32_t)((uint32_t)(l + h) >> 1);
				$assign(f, ($assign(rt, ($assignField(t, right, $new(ArrayPrefixHelpers$IntCumulateTask, t, fn, a, org, fnc, th, mid, h))))));
				$assign(t, ($assign(lt, ($assignField(t, left, $new(ArrayPrefixHelpers$IntCumulateTask, t, fn, a, org, fnc, th, l, mid))))));
			} else {
				int32_t pin = t->in;
				$nc(lt)->in = pin;
				$assign(f, ($assign(t, nullptr)));
				if (rt != nullptr) {
					int32_t lout = lt->out;
					rt->in = (l == org ? lout : $nc(fn)->applyAsInt(pin, lout));
					for (int32_t c = 0;;) {
						if (((int32_t)((c = rt->getPendingCount()) & (uint32_t)1)) != 0) {
							break;
						}
						if (rt->compareAndSetPendingCount(c, c | 1)) {
							$assign(t, rt);
							break;
						}
					}
				}
				for (int32_t c = 0;;) {
					if (((int32_t)((c = lt->getPendingCount()) & (uint32_t)1)) != 0) {
						break;
					}
					if (lt->compareAndSetPendingCount(c, c | 1)) {
						if (t != nullptr) {
							$assign(f, t);
						}
						$assign(t, lt);
						break;
					}
				}
				if (t == nullptr) {
					break;
				}
			}
			if (f != nullptr) {
				f->fork();
			}
		} else {
			int32_t state = 0;
			for (int32_t b = 0;;) {
				if (((int32_t)((b = t->getPendingCount()) & (uint32_t)4)) != 0) {
					outer$break = true;
					break;
				}
				state = (((int32_t)(b & (uint32_t)1)) != 0 ? 4 : (l > org) ? 2 : (2 | 4));
				if (t->compareAndSetPendingCount(b, b | state)) {
					break;
				}
			}
			if (outer$break) {
				break;
			}
			int32_t sum = 0;
			if (state != 2) {
				int32_t first = 0;
				if (l == org) {
					sum = a->get(org);
					first = org + 1;
				} else {
					sum = t->in;
					first = l;
				}
				for (int32_t i = first; i < h; ++i) {
					a->set(i, sum = $nc(fn)->applyAsInt(sum, a->get(i)));
				}
			} else if (h < fnc) {
				sum = a->get(l);
				for (int32_t i = l + 1; i < h; ++i) {
					sum = $nc(fn)->applyAsInt(sum, a->get(i));
				}
			} else {
				sum = t->in;
			}
			t->out = sum;
			{
				$var(ArrayPrefixHelpers$IntCumulateTask, par, nullptr);
				for (;;) {
					if (($assign(par, $cast(ArrayPrefixHelpers$IntCumulateTask, t->getCompleter()))) == nullptr) {
						if (((int32_t)(state & (uint32_t)4)) != 0) {
							t->quietlyComplete();
						}
						outer$break = true;
						break;
					}
					int32_t b = $nc(par)->getPendingCount();
					if (((int32_t)(((int32_t)(b & (uint32_t)state)) & (uint32_t)4)) != 0) {
						$assign(t, par);
					} else if (((int32_t)(((int32_t)(b & (uint32_t)state)) & (uint32_t)2)) != 0) {
						int32_t nextState = 0;
						$var(ArrayPrefixHelpers$IntCumulateTask, lt, nullptr);
						$var(ArrayPrefixHelpers$IntCumulateTask, rt, nullptr);
						if (($assign(lt, par->left)) != nullptr && ($assign(rt, par->right)) != nullptr) {
							int32_t lout = $nc(lt)->out;
							par->out = ($nc(rt)->hi == fnc ? lout : $nc(fn)->applyAsInt(lout, $nc(rt)->out));
						}
						int32_t refork = ((((int32_t)(b & (uint32_t)1)) == 0 && par->lo == org) ? 1 : 0);
						bool var$0 = (nextState = (b | state) | refork) == b;
						if (var$0 || par->compareAndSetPendingCount(b, nextState)) {
							state = 2;
							$assign(t, par);
							if (refork != 0) {
								par->fork();
							}
						}
					} else if (par->compareAndSetPendingCount(b, b | state)) {
						outer$break = true;
						break;
					}
				}
				if (outer$break) {
					break;
				}
			}
		}
	}
}

ArrayPrefixHelpers$IntCumulateTask::ArrayPrefixHelpers$IntCumulateTask() {
}

$Class* ArrayPrefixHelpers$IntCumulateTask::load$($String* name, bool initialize) {
	$loadClass(ArrayPrefixHelpers$IntCumulateTask, name, initialize, &_ArrayPrefixHelpers$IntCumulateTask_ClassInfo_, allocate$ArrayPrefixHelpers$IntCumulateTask);
	return class$;
}

$Class* ArrayPrefixHelpers$IntCumulateTask::class$ = nullptr;

	} // util
} // java