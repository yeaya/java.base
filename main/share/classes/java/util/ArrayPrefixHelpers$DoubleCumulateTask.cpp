#include <java/util/ArrayPrefixHelpers$DoubleCumulateTask.h>

#include <java/util/ArrayPrefixHelpers.h>
#include <java/util/concurrent/CountedCompleter.h>
#include <java/util/concurrent/ForkJoinPool.h>
#include <java/util/concurrent/ForkJoinTask.h>
#include <java/util/function/DoubleBinaryOperator.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $CountedCompleter = ::java::util::concurrent::CountedCompleter;
using $ForkJoinPool = ::java::util::concurrent::ForkJoinPool;
using $DoubleBinaryOperator = ::java::util::function::DoubleBinaryOperator;

namespace java {
	namespace util {

$FieldInfo _ArrayPrefixHelpers$DoubleCumulateTask_FieldInfo_[] = {
	{"array", "[D", nullptr, $FINAL, $field(ArrayPrefixHelpers$DoubleCumulateTask, array)},
	{"function", "Ljava/util/function/DoubleBinaryOperator;", nullptr, $FINAL, $field(ArrayPrefixHelpers$DoubleCumulateTask, function)},
	{"left", "Ljava/util/ArrayPrefixHelpers$DoubleCumulateTask;", nullptr, 0, $field(ArrayPrefixHelpers$DoubleCumulateTask, left)},
	{"right", "Ljava/util/ArrayPrefixHelpers$DoubleCumulateTask;", nullptr, 0, $field(ArrayPrefixHelpers$DoubleCumulateTask, right)},
	{"in", "D", nullptr, 0, $field(ArrayPrefixHelpers$DoubleCumulateTask, in)},
	{"out", "D", nullptr, 0, $field(ArrayPrefixHelpers$DoubleCumulateTask, out)},
	{"lo", "I", nullptr, $FINAL, $field(ArrayPrefixHelpers$DoubleCumulateTask, lo)},
	{"hi", "I", nullptr, $FINAL, $field(ArrayPrefixHelpers$DoubleCumulateTask, hi)},
	{"origin", "I", nullptr, $FINAL, $field(ArrayPrefixHelpers$DoubleCumulateTask, origin)},
	{"fence", "I", nullptr, $FINAL, $field(ArrayPrefixHelpers$DoubleCumulateTask, fence)},
	{"threshold", "I", nullptr, $FINAL, $field(ArrayPrefixHelpers$DoubleCumulateTask, threshold)},
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(ArrayPrefixHelpers$DoubleCumulateTask, serialVersionUID)},
	{}
};

$MethodInfo _ArrayPrefixHelpers$DoubleCumulateTask_MethodInfo_[] = {
	{"<init>", "(Ljava/util/ArrayPrefixHelpers$DoubleCumulateTask;Ljava/util/function/DoubleBinaryOperator;[DII)V", nullptr, $PUBLIC, $method(ArrayPrefixHelpers$DoubleCumulateTask, init$, void, ArrayPrefixHelpers$DoubleCumulateTask*, $DoubleBinaryOperator*, $doubles*, int32_t, int32_t)},
	{"<init>", "(Ljava/util/ArrayPrefixHelpers$DoubleCumulateTask;Ljava/util/function/DoubleBinaryOperator;[DIIIII)V", nullptr, 0, $method(ArrayPrefixHelpers$DoubleCumulateTask, init$, void, ArrayPrefixHelpers$DoubleCumulateTask*, $DoubleBinaryOperator*, $doubles*, int32_t, int32_t, int32_t, int32_t, int32_t)},
	{"compute", "()V", nullptr, $PUBLIC | $FINAL, $virtualMethod(ArrayPrefixHelpers$DoubleCumulateTask, compute, void)},
	{}
};

$InnerClassInfo _ArrayPrefixHelpers$DoubleCumulateTask_InnerClassesInfo_[] = {
	{"java.util.ArrayPrefixHelpers$DoubleCumulateTask", "java.util.ArrayPrefixHelpers", "DoubleCumulateTask", $STATIC | $FINAL},
	{}
};

$ClassInfo _ArrayPrefixHelpers$DoubleCumulateTask_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"java.util.ArrayPrefixHelpers$DoubleCumulateTask",
	"java.util.concurrent.CountedCompleter",
	nullptr,
	_ArrayPrefixHelpers$DoubleCumulateTask_FieldInfo_,
	_ArrayPrefixHelpers$DoubleCumulateTask_MethodInfo_,
	"Ljava/util/concurrent/CountedCompleter<Ljava/lang/Void;>;",
	nullptr,
	_ArrayPrefixHelpers$DoubleCumulateTask_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.ArrayPrefixHelpers"
};

$Object* allocate$ArrayPrefixHelpers$DoubleCumulateTask($Class* clazz) {
	return $of($alloc(ArrayPrefixHelpers$DoubleCumulateTask));
}

void ArrayPrefixHelpers$DoubleCumulateTask::init$(ArrayPrefixHelpers$DoubleCumulateTask* parent, $DoubleBinaryOperator* function, $doubles* array, int32_t lo, int32_t hi) {
	$CountedCompleter::init$(parent);
	$set(this, function, function);
	$set(this, array, array);
	this->lo = (this->origin = lo);
	this->hi = (this->fence = hi);
	int32_t p = 0;
	this->threshold = (p = $div((hi - lo), ($ForkJoinPool::getCommonPoolParallelism() << 3))) <= 16 ? 16 : p;
}

void ArrayPrefixHelpers$DoubleCumulateTask::init$(ArrayPrefixHelpers$DoubleCumulateTask* parent, $DoubleBinaryOperator* function, $doubles* array, int32_t origin, int32_t fence, int32_t threshold, int32_t lo, int32_t hi) {
	$CountedCompleter::init$(parent);
	$set(this, function, function);
	$set(this, array, array);
	this->origin = origin;
	this->fence = fence;
	this->threshold = threshold;
	this->lo = lo;
	this->hi = hi;
}

void ArrayPrefixHelpers$DoubleCumulateTask::compute() {
	$useLocalCurrentObjectStackCache();
	$var($DoubleBinaryOperator, fn, nullptr);
	$var($doubles, a, nullptr);
	if (($assign(fn, this->function)) == nullptr || ($assign(a, this->array)) == nullptr) {
		$throwNew($NullPointerException);
	}
	int32_t th = this->threshold;
	int32_t org = this->origin;
	int32_t fnc = this->fence;
	int32_t l = 0;
	int32_t h = 0;
	$var(ArrayPrefixHelpers$DoubleCumulateTask, t, this);
	bool outer$break = false;
	while ((l = $nc(t)->lo) >= 0 && (h = t->hi) <= $nc(a)->length) {
		if (h - l > th) {
			$var(ArrayPrefixHelpers$DoubleCumulateTask, lt, t->left);
			$var(ArrayPrefixHelpers$DoubleCumulateTask, rt, t->right);
			$var(ArrayPrefixHelpers$DoubleCumulateTask, f, nullptr);
			if (lt == nullptr) {
				int32_t mid = (int32_t)((uint32_t)(l + h) >> 1);
				$assign(f, ($assign(rt, ($set(t, right, $new(ArrayPrefixHelpers$DoubleCumulateTask, t, fn, a, org, fnc, th, mid, h))))));
				$assign(t, ($assign(lt, ($set(t, left, $new(ArrayPrefixHelpers$DoubleCumulateTask, t, fn, a, org, fnc, th, l, mid))))));
			} else {
				double pin = t->in;
				$nc(lt)->in = pin;
				$assign(f, ($assign(t, nullptr)));
				if (rt != nullptr) {
					double lout = lt->out;
					rt->in = (l == org ? lout : $nc(fn)->applyAsDouble(pin, lout));
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
			double sum = 0.0;
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
					a->set(i, sum = $nc(fn)->applyAsDouble(sum, a->get(i)));
				}
			} else if (h < fnc) {
				sum = a->get(l);
				for (int32_t i = l + 1; i < h; ++i) {
					sum = $nc(fn)->applyAsDouble(sum, a->get(i));
				}
			} else {
				sum = t->in;
			}
			t->out = sum;
			{
				$var(ArrayPrefixHelpers$DoubleCumulateTask, par, nullptr);
				for (;;) {
					if (($assign(par, $cast(ArrayPrefixHelpers$DoubleCumulateTask, t->getCompleter()))) == nullptr) {
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
						$var(ArrayPrefixHelpers$DoubleCumulateTask, lt, nullptr);
						$var(ArrayPrefixHelpers$DoubleCumulateTask, rt, nullptr);
						if (($assign(lt, par->left)) != nullptr && ($assign(rt, par->right)) != nullptr) {
							double lout = $nc(lt)->out;
							par->out = ($nc(rt)->hi == fnc ? lout : $nc(fn)->applyAsDouble(lout, $nc(rt)->out));
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

ArrayPrefixHelpers$DoubleCumulateTask::ArrayPrefixHelpers$DoubleCumulateTask() {
}

$Class* ArrayPrefixHelpers$DoubleCumulateTask::load$($String* name, bool initialize) {
	$loadClass(ArrayPrefixHelpers$DoubleCumulateTask, name, initialize, &_ArrayPrefixHelpers$DoubleCumulateTask_ClassInfo_, allocate$ArrayPrefixHelpers$DoubleCumulateTask);
	return class$;
}

$Class* ArrayPrefixHelpers$DoubleCumulateTask::class$ = nullptr;

	} // util
} // java