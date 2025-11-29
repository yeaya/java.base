#include <java/util/ArrayPrefixHelpers$LongCumulateTask.h>

#include <java/util/ArrayPrefixHelpers.h>
#include <java/util/concurrent/CountedCompleter.h>
#include <java/util/concurrent/ForkJoinPool.h>
#include <java/util/concurrent/ForkJoinTask.h>
#include <java/util/function/LongBinaryOperator.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $CountedCompleter = ::java::util::concurrent::CountedCompleter;
using $ForkJoinPool = ::java::util::concurrent::ForkJoinPool;
using $LongBinaryOperator = ::java::util::function::LongBinaryOperator;

namespace java {
	namespace util {

$FieldInfo _ArrayPrefixHelpers$LongCumulateTask_FieldInfo_[] = {
	{"array", "[J", nullptr, $FINAL, $field(ArrayPrefixHelpers$LongCumulateTask, array)},
	{"function", "Ljava/util/function/LongBinaryOperator;", nullptr, $FINAL, $field(ArrayPrefixHelpers$LongCumulateTask, function)},
	{"left", "Ljava/util/ArrayPrefixHelpers$LongCumulateTask;", nullptr, 0, $field(ArrayPrefixHelpers$LongCumulateTask, left)},
	{"right", "Ljava/util/ArrayPrefixHelpers$LongCumulateTask;", nullptr, 0, $field(ArrayPrefixHelpers$LongCumulateTask, right)},
	{"in", "J", nullptr, 0, $field(ArrayPrefixHelpers$LongCumulateTask, in)},
	{"out", "J", nullptr, 0, $field(ArrayPrefixHelpers$LongCumulateTask, out)},
	{"lo", "I", nullptr, $FINAL, $field(ArrayPrefixHelpers$LongCumulateTask, lo)},
	{"hi", "I", nullptr, $FINAL, $field(ArrayPrefixHelpers$LongCumulateTask, hi)},
	{"origin", "I", nullptr, $FINAL, $field(ArrayPrefixHelpers$LongCumulateTask, origin)},
	{"fence", "I", nullptr, $FINAL, $field(ArrayPrefixHelpers$LongCumulateTask, fence)},
	{"threshold", "I", nullptr, $FINAL, $field(ArrayPrefixHelpers$LongCumulateTask, threshold)},
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(ArrayPrefixHelpers$LongCumulateTask, serialVersionUID)},
	{}
};

$MethodInfo _ArrayPrefixHelpers$LongCumulateTask_MethodInfo_[] = {
	{"<init>", "(Ljava/util/ArrayPrefixHelpers$LongCumulateTask;Ljava/util/function/LongBinaryOperator;[JII)V", nullptr, $PUBLIC, $method(static_cast<void(ArrayPrefixHelpers$LongCumulateTask::*)(ArrayPrefixHelpers$LongCumulateTask*,$LongBinaryOperator*,$longs*,int32_t,int32_t)>(&ArrayPrefixHelpers$LongCumulateTask::init$))},
	{"<init>", "(Ljava/util/ArrayPrefixHelpers$LongCumulateTask;Ljava/util/function/LongBinaryOperator;[JIIIII)V", nullptr, 0, $method(static_cast<void(ArrayPrefixHelpers$LongCumulateTask::*)(ArrayPrefixHelpers$LongCumulateTask*,$LongBinaryOperator*,$longs*,int32_t,int32_t,int32_t,int32_t,int32_t)>(&ArrayPrefixHelpers$LongCumulateTask::init$))},
	{"compute", "()V", nullptr, $PUBLIC | $FINAL},
	{}
};

$InnerClassInfo _ArrayPrefixHelpers$LongCumulateTask_InnerClassesInfo_[] = {
	{"java.util.ArrayPrefixHelpers$LongCumulateTask", "java.util.ArrayPrefixHelpers", "LongCumulateTask", $STATIC | $FINAL},
	{}
};

$ClassInfo _ArrayPrefixHelpers$LongCumulateTask_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"java.util.ArrayPrefixHelpers$LongCumulateTask",
	"java.util.concurrent.CountedCompleter",
	nullptr,
	_ArrayPrefixHelpers$LongCumulateTask_FieldInfo_,
	_ArrayPrefixHelpers$LongCumulateTask_MethodInfo_,
	"Ljava/util/concurrent/CountedCompleter<Ljava/lang/Void;>;",
	nullptr,
	_ArrayPrefixHelpers$LongCumulateTask_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.ArrayPrefixHelpers"
};

$Object* allocate$ArrayPrefixHelpers$LongCumulateTask($Class* clazz) {
	return $of($alloc(ArrayPrefixHelpers$LongCumulateTask));
}

void ArrayPrefixHelpers$LongCumulateTask::init$(ArrayPrefixHelpers$LongCumulateTask* parent, $LongBinaryOperator* function, $longs* array, int32_t lo, int32_t hi) {
	$CountedCompleter::init$(parent);
	$set(this, function, function);
	$set(this, array, array);
	this->lo = (this->origin = lo);
	this->hi = (this->fence = hi);
	int32_t p = 0;
	this->threshold = (p = $div((hi - lo), ($ForkJoinPool::getCommonPoolParallelism() << 3))) <= 16 ? 16 : p;
}

void ArrayPrefixHelpers$LongCumulateTask::init$(ArrayPrefixHelpers$LongCumulateTask* parent, $LongBinaryOperator* function, $longs* array, int32_t origin, int32_t fence, int32_t threshold, int32_t lo, int32_t hi) {
	$CountedCompleter::init$(parent);
	$set(this, function, function);
	$set(this, array, array);
	this->origin = origin;
	this->fence = fence;
	this->threshold = threshold;
	this->lo = lo;
	this->hi = hi;
}

void ArrayPrefixHelpers$LongCumulateTask::compute() {
	$useLocalCurrentObjectStackCache();
	$var($LongBinaryOperator, fn, nullptr);
	$var($longs, a, nullptr);
	if (($assign(fn, this->function)) == nullptr || ($assign(a, this->array)) == nullptr) {
		$throwNew($NullPointerException);
	}
	int32_t th = this->threshold;
	int32_t org = this->origin;
	int32_t fnc = this->fence;
	int32_t l = 0;
	int32_t h = 0;
	$var(ArrayPrefixHelpers$LongCumulateTask, t, this);
	bool outer$break = false;
	while ((l = $nc(t)->lo) >= 0 && (h = t->hi) <= $nc(a)->length) {
		if (h - l > th) {
			$var(ArrayPrefixHelpers$LongCumulateTask, lt, t->left);
			$var(ArrayPrefixHelpers$LongCumulateTask, rt, t->right);
			$var(ArrayPrefixHelpers$LongCumulateTask, f, nullptr);
			if (lt == nullptr) {
				int32_t mid = (int32_t)((uint32_t)(l + h) >> 1);
				$assign(f, ($assign(rt, ($set(t, right, $new(ArrayPrefixHelpers$LongCumulateTask, t, fn, a, org, fnc, th, mid, h))))));
				$assign(t, ($assign(lt, ($set(t, left, $new(ArrayPrefixHelpers$LongCumulateTask, t, fn, a, org, fnc, th, l, mid))))));
			} else {
				int64_t pin = t->in;
				$nc(lt)->in = pin;
				$assign(f, ($assign(t, nullptr)));
				if (rt != nullptr) {
					int64_t lout = lt->out;
					rt->in = (l == org ? lout : $nc(fn)->applyAsLong(pin, lout));
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
			int64_t sum = 0;
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
					a->set(i, sum = $nc(fn)->applyAsLong(sum, a->get(i)));
				}
			} else if (h < fnc) {
				sum = a->get(l);
				for (int32_t i = l + 1; i < h; ++i) {
					sum = $nc(fn)->applyAsLong(sum, a->get(i));
				}
			} else {
				sum = t->in;
			}
			t->out = sum;
			{
				$var(ArrayPrefixHelpers$LongCumulateTask, par, nullptr);
				for (;;) {
					if (($assign(par, $cast(ArrayPrefixHelpers$LongCumulateTask, t->getCompleter()))) == nullptr) {
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
						$var(ArrayPrefixHelpers$LongCumulateTask, lt, nullptr);
						$var(ArrayPrefixHelpers$LongCumulateTask, rt, nullptr);
						if (($assign(lt, par->left)) != nullptr && ($assign(rt, par->right)) != nullptr) {
							int64_t lout = $nc(lt)->out;
							par->out = ($nc(rt)->hi == fnc ? lout : $nc(fn)->applyAsLong(lout, $nc(rt)->out));
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

ArrayPrefixHelpers$LongCumulateTask::ArrayPrefixHelpers$LongCumulateTask() {
}

$Class* ArrayPrefixHelpers$LongCumulateTask::load$($String* name, bool initialize) {
	$loadClass(ArrayPrefixHelpers$LongCumulateTask, name, initialize, &_ArrayPrefixHelpers$LongCumulateTask_ClassInfo_, allocate$ArrayPrefixHelpers$LongCumulateTask);
	return class$;
}

$Class* ArrayPrefixHelpers$LongCumulateTask::class$ = nullptr;

	} // util
} // java