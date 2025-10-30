#include <java/util/ArrayPrefixHelpers$CumulateTask.h>

#include <java/util/ArrayPrefixHelpers.h>
#include <java/util/concurrent/CountedCompleter.h>
#include <java/util/concurrent/ForkJoinPool.h>
#include <java/util/concurrent/ForkJoinTask.h>
#include <java/util/function/BinaryOperator.h>
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
using $BiFunction = ::java::util::function::BiFunction;
using $BinaryOperator = ::java::util::function::BinaryOperator;

namespace java {
	namespace util {

$FieldInfo _ArrayPrefixHelpers$CumulateTask_FieldInfo_[] = {
	{"array", "[Ljava/lang/Object;", "[TT;", $FINAL, $field(ArrayPrefixHelpers$CumulateTask, array)},
	{"function", "Ljava/util/function/BinaryOperator;", "Ljava/util/function/BinaryOperator<TT;>;", $FINAL, $field(ArrayPrefixHelpers$CumulateTask, function)},
	{"left", "Ljava/util/ArrayPrefixHelpers$CumulateTask;", "Ljava/util/ArrayPrefixHelpers$CumulateTask<TT;>;", 0, $field(ArrayPrefixHelpers$CumulateTask, left)},
	{"right", "Ljava/util/ArrayPrefixHelpers$CumulateTask;", "Ljava/util/ArrayPrefixHelpers$CumulateTask<TT;>;", 0, $field(ArrayPrefixHelpers$CumulateTask, right)},
	{"in", "Ljava/lang/Object;", "TT;", 0, $field(ArrayPrefixHelpers$CumulateTask, in)},
	{"out", "Ljava/lang/Object;", "TT;", 0, $field(ArrayPrefixHelpers$CumulateTask, out)},
	{"lo", "I", nullptr, $FINAL, $field(ArrayPrefixHelpers$CumulateTask, lo)},
	{"hi", "I", nullptr, $FINAL, $field(ArrayPrefixHelpers$CumulateTask, hi)},
	{"origin", "I", nullptr, $FINAL, $field(ArrayPrefixHelpers$CumulateTask, origin)},
	{"fence", "I", nullptr, $FINAL, $field(ArrayPrefixHelpers$CumulateTask, fence)},
	{"threshold", "I", nullptr, $FINAL, $field(ArrayPrefixHelpers$CumulateTask, threshold)},
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(ArrayPrefixHelpers$CumulateTask, serialVersionUID)},
	{}
};

$MethodInfo _ArrayPrefixHelpers$CumulateTask_MethodInfo_[] = {
	{"<init>", "(Ljava/util/ArrayPrefixHelpers$CumulateTask;Ljava/util/function/BinaryOperator;[Ljava/lang/Object;II)V", "(Ljava/util/ArrayPrefixHelpers$CumulateTask<TT;>;Ljava/util/function/BinaryOperator<TT;>;[TT;II)V", $PUBLIC, $method(static_cast<void(ArrayPrefixHelpers$CumulateTask::*)(ArrayPrefixHelpers$CumulateTask*,$BinaryOperator*,$ObjectArray*,int32_t,int32_t)>(&ArrayPrefixHelpers$CumulateTask::init$))},
	{"<init>", "(Ljava/util/ArrayPrefixHelpers$CumulateTask;Ljava/util/function/BinaryOperator;[Ljava/lang/Object;IIIII)V", "(Ljava/util/ArrayPrefixHelpers$CumulateTask<TT;>;Ljava/util/function/BinaryOperator<TT;>;[TT;IIIII)V", 0, $method(static_cast<void(ArrayPrefixHelpers$CumulateTask::*)(ArrayPrefixHelpers$CumulateTask*,$BinaryOperator*,$ObjectArray*,int32_t,int32_t,int32_t,int32_t,int32_t)>(&ArrayPrefixHelpers$CumulateTask::init$))},
	{"compute", "()V", nullptr, $PUBLIC | $FINAL},
	{}
};

$InnerClassInfo _ArrayPrefixHelpers$CumulateTask_InnerClassesInfo_[] = {
	{"java.util.ArrayPrefixHelpers$CumulateTask", "java.util.ArrayPrefixHelpers", "CumulateTask", $STATIC | $FINAL},
	{}
};

$ClassInfo _ArrayPrefixHelpers$CumulateTask_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"java.util.ArrayPrefixHelpers$CumulateTask",
	"java.util.concurrent.CountedCompleter",
	nullptr,
	_ArrayPrefixHelpers$CumulateTask_FieldInfo_,
	_ArrayPrefixHelpers$CumulateTask_MethodInfo_,
	"<T:Ljava/lang/Object;>Ljava/util/concurrent/CountedCompleter<Ljava/lang/Void;>;",
	nullptr,
	_ArrayPrefixHelpers$CumulateTask_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.ArrayPrefixHelpers"
};

$Object* allocate$ArrayPrefixHelpers$CumulateTask($Class* clazz) {
	return $of($alloc(ArrayPrefixHelpers$CumulateTask));
}

void ArrayPrefixHelpers$CumulateTask::init$(ArrayPrefixHelpers$CumulateTask* parent, $BinaryOperator* function, $ObjectArray* array, int32_t lo, int32_t hi) {
	$CountedCompleter::init$(parent);
	$set(this, function, function);
	$set(this, array, array);
	this->lo = (this->origin = lo);
	this->hi = (this->fence = hi);
	int32_t p = 0;
	this->threshold = (p = $div((hi - lo), ($ForkJoinPool::getCommonPoolParallelism() << 3))) <= 16 ? 16 : p;
}

void ArrayPrefixHelpers$CumulateTask::init$(ArrayPrefixHelpers$CumulateTask* parent, $BinaryOperator* function, $ObjectArray* array, int32_t origin, int32_t fence, int32_t threshold, int32_t lo, int32_t hi) {
	$CountedCompleter::init$(parent);
	$set(this, function, function);
	$set(this, array, array);
	this->origin = origin;
	this->fence = fence;
	this->threshold = threshold;
	this->lo = lo;
	this->hi = hi;
}

void ArrayPrefixHelpers$CumulateTask::compute() {
	$useLocalCurrentObjectStackCache();
	$var($BinaryOperator, fn, nullptr);
	$var($ObjectArray, a, nullptr);
	if (($assign(fn, this->function)) == nullptr || ($assign(a, this->array)) == nullptr) {
		$throwNew($NullPointerException);
	}
	int32_t th = this->threshold;
	int32_t org = this->origin;
	int32_t fnc = this->fence;
	int32_t l = 0;
	int32_t h = 0;
	$var(ArrayPrefixHelpers$CumulateTask, t, this);
	bool outer$break = false;
	while ((l = $nc(t)->lo) >= 0 && (h = t->hi) <= $nc(a)->length) {
		if (h - l > th) {
			$var(ArrayPrefixHelpers$CumulateTask, lt, t->left);
			$var(ArrayPrefixHelpers$CumulateTask, rt, t->right);
			$var(ArrayPrefixHelpers$CumulateTask, f, nullptr);
			if (lt == nullptr) {
				int32_t mid = (int32_t)((uint32_t)(l + h) >> 1);
				$assign(f, ($assign(rt, ($set(t, right, $new(ArrayPrefixHelpers$CumulateTask, t, fn, a, org, fnc, th, mid, h))))));
				$assign(t, ($assign(lt, ($set(t, left, $new(ArrayPrefixHelpers$CumulateTask, t, fn, a, org, fnc, th, l, mid))))));
			} else {
				$var($Object, pin, t->in);
				$set($nc(lt), in, pin);
				$assign(f, ($assign(t, nullptr)));
				if (rt != nullptr) {
					$var($Object, lout, lt->out);
					$set(rt, in, l == org ? lout : $nc(fn)->apply(pin, lout));
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
			$var($Object, sum, nullptr);
			if (state != 2) {
				int32_t first = 0;
				if (l == org) {
					$assign(sum, a->get(org));
					first = org + 1;
				} else {
					$assign(sum, t->in);
					first = l;
				}
				for (int32_t i = first; i < h; ++i) {
					a->set(i, $assign(sum, $nc(fn)->apply(sum, a->get(i))));
				}
			} else if (h < fnc) {
				$assign(sum, a->get(l));
				for (int32_t i = l + 1; i < h; ++i) {
					$assign(sum, $nc(fn)->apply(sum, a->get(i)));
				}
			} else {
				$assign(sum, t->in);
			}
			$set(t, out, sum);
			{
				$var(ArrayPrefixHelpers$CumulateTask, par, nullptr);
				for (;;) {
					$var(ArrayPrefixHelpers$CumulateTask, partmp, $cast(ArrayPrefixHelpers$CumulateTask, t->getCompleter()));
					if (($assign(par, partmp)) == nullptr) {
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
						$var(ArrayPrefixHelpers$CumulateTask, lt, nullptr);
						$var(ArrayPrefixHelpers$CumulateTask, rt, nullptr);
						if (($assign(lt, par->left)) != nullptr && ($assign(rt, par->right)) != nullptr) {
							$var($Object, lout, $nc(lt)->out);
							$set(par, out, $nc(rt)->hi == fnc ? lout : $nc(fn)->apply(lout, $nc(rt)->out));
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

ArrayPrefixHelpers$CumulateTask::ArrayPrefixHelpers$CumulateTask() {
}

$Class* ArrayPrefixHelpers$CumulateTask::load$($String* name, bool initialize) {
	$loadClass(ArrayPrefixHelpers$CumulateTask, name, initialize, &_ArrayPrefixHelpers$CumulateTask_ClassInfo_, allocate$ArrayPrefixHelpers$CumulateTask);
	return class$;
}

$Class* ArrayPrefixHelpers$CumulateTask::class$ = nullptr;

	} // util
} // java