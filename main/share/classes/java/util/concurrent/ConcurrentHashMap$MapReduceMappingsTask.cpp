#include <java/util/concurrent/ConcurrentHashMap$MapReduceMappingsTask.h>
#include <java/util/concurrent/ConcurrentHashMap$BulkTask.h>
#include <java/util/concurrent/ConcurrentHashMap$Node.h>
#include <java/util/concurrent/ConcurrentHashMap.h>
#include <java/util/concurrent/CountedCompleter.h>
#include <java/util/concurrent/ForkJoinTask.h>
#include <java/util/function/BiFunction.h>
#include <jcpp.h>

using $ConcurrentHashMap$NodeArray = $Array<::java::util::concurrent::ConcurrentHashMap$Node>;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ConcurrentHashMap$BulkTask = ::java::util::concurrent::ConcurrentHashMap$BulkTask;
using $ConcurrentHashMap$Node = ::java::util::concurrent::ConcurrentHashMap$Node;
using $CountedCompleter = ::java::util::concurrent::CountedCompleter;
using $BiFunction = ::java::util::function::BiFunction;

namespace java {
	namespace util {
		namespace concurrent {

void ConcurrentHashMap$MapReduceMappingsTask::init$($ConcurrentHashMap$BulkTask* p, int32_t b, int32_t i, int32_t f, $ConcurrentHashMap$NodeArray* t, ConcurrentHashMap$MapReduceMappingsTask* nextRight, $BiFunction* transformer, $BiFunction* reducer) {
	$ConcurrentHashMap$BulkTask::init$(p, b, i, f, t);
	$set(this, nextRight, nextRight);
	$set(this, transformer, transformer);
	$set(this, reducer, reducer);
}

$Object* ConcurrentHashMap$MapReduceMappingsTask::getRawResult() {
	return this->result;
}

void ConcurrentHashMap$MapReduceMappingsTask::compute() {
	$useLocalObjectStack();
	$var($BiFunction, transformer, nullptr);
	$var($BiFunction, reducer, nullptr);
	if (($assign(transformer, this->transformer)) != nullptr && ($assign(reducer, this->reducer)) != nullptr) {
		for (int32_t i = this->baseIndex, f = 0, h = 0; this->batch > 0 && (h = (int32_t)((uint32_t)((f = this->baseLimit) + i) >> 1)) > i;) {
			addToPendingCount(1);
			$nc(($set(this, rights, $new(ConcurrentHashMap$MapReduceMappingsTask, this, $usrAssign(this->batch, 1), this->baseLimit = h, f, this->tab, this->rights, transformer, reducer))))->fork();
		}
		$var($Object, r, nullptr);
		{
			$var($ConcurrentHashMap$Node, p, nullptr);
			for (; ($assign(p, advance())) != nullptr;) {
				$var($Object, u, nullptr);
				if (($assign(u, $nc(transformer)->apply($nc(p)->key, $nc(p)->val))) != nullptr) {
					$assign(r, (r == nullptr) ? u : $nc(reducer)->apply(r, u));
				}
			}
		}
		$set(this, result, r);
		$var($CountedCompleter, c, nullptr);
		for ($assign(c, firstComplete()); c != nullptr; $assign(c, c->nextComplete())) {
			$var(ConcurrentHashMap$MapReduceMappingsTask, t, $cast(ConcurrentHashMap$MapReduceMappingsTask, c));
			$var(ConcurrentHashMap$MapReduceMappingsTask, s, t->rights);
			while (s != nullptr) {
				$var($Object, tr, nullptr);
				$var($Object, sr, nullptr);
				if (($assign(sr, s->result)) != nullptr) {
					$set(t, result, (($assign(tr, t->result)) == nullptr) ? sr : $nc(reducer)->apply(tr, sr));
				}
				$assign(s, $set(t, rights, s->nextRight));
			}
		}
	}
}

ConcurrentHashMap$MapReduceMappingsTask::ConcurrentHashMap$MapReduceMappingsTask() {
}

$Class* ConcurrentHashMap$MapReduceMappingsTask::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"transformer", "Ljava/util/function/BiFunction;", "Ljava/util/function/BiFunction<-TK;-TV;+TU;>;", $FINAL, $field(ConcurrentHashMap$MapReduceMappingsTask, transformer)},
		{"reducer", "Ljava/util/function/BiFunction;", "Ljava/util/function/BiFunction<-TU;-TU;+TU;>;", $FINAL, $field(ConcurrentHashMap$MapReduceMappingsTask, reducer)},
		{"result", "Ljava/lang/Object;", "TU;", 0, $field(ConcurrentHashMap$MapReduceMappingsTask, result)},
		{"rights", "Ljava/util/concurrent/ConcurrentHashMap$MapReduceMappingsTask;", "Ljava/util/concurrent/ConcurrentHashMap$MapReduceMappingsTask<TK;TV;TU;>;", 0, $field(ConcurrentHashMap$MapReduceMappingsTask, rights)},
		{"nextRight", "Ljava/util/concurrent/ConcurrentHashMap$MapReduceMappingsTask;", "Ljava/util/concurrent/ConcurrentHashMap$MapReduceMappingsTask<TK;TV;TU;>;", 0, $field(ConcurrentHashMap$MapReduceMappingsTask, nextRight)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/util/concurrent/ConcurrentHashMap$BulkTask;III[Ljava/util/concurrent/ConcurrentHashMap$Node;Ljava/util/concurrent/ConcurrentHashMap$MapReduceMappingsTask;Ljava/util/function/BiFunction;Ljava/util/function/BiFunction;)V", "(Ljava/util/concurrent/ConcurrentHashMap$BulkTask<TK;TV;*>;III[Ljava/util/concurrent/ConcurrentHashMap$Node<TK;TV;>;Ljava/util/concurrent/ConcurrentHashMap$MapReduceMappingsTask<TK;TV;TU;>;Ljava/util/function/BiFunction<-TK;-TV;+TU;>;Ljava/util/function/BiFunction<-TU;-TU;+TU;>;)V", 0, $method(ConcurrentHashMap$MapReduceMappingsTask, init$, void, $ConcurrentHashMap$BulkTask*, int32_t, int32_t, int32_t, $ConcurrentHashMap$NodeArray*, ConcurrentHashMap$MapReduceMappingsTask*, $BiFunction*, $BiFunction*)},
		{"compute", "()V", nullptr, $PUBLIC | $FINAL, $virtualMethod(ConcurrentHashMap$MapReduceMappingsTask, compute, void)},
		{"getRawResult", "()Ljava/lang/Object;", "()TU;", $PUBLIC | $FINAL, $virtualMethod(ConcurrentHashMap$MapReduceMappingsTask, getRawResult, $Object*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.util.concurrent.ConcurrentHashMap$MapReduceMappingsTask", "java.util.concurrent.ConcurrentHashMap", "MapReduceMappingsTask", $STATIC | $FINAL},
		{"java.util.concurrent.ConcurrentHashMap$BulkTask", "java.util.concurrent.ConcurrentHashMap", "BulkTask", $STATIC | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"java.util.concurrent.ConcurrentHashMap$MapReduceMappingsTask",
		"java.util.concurrent.ConcurrentHashMap$BulkTask",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		"<K:Ljava/lang/Object;V:Ljava/lang/Object;U:Ljava/lang/Object;>Ljava/util/concurrent/ConcurrentHashMap$BulkTask<TK;TV;TU;>;",
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.util.concurrent.ConcurrentHashMap"
	};
	$loadClass(ConcurrentHashMap$MapReduceMappingsTask, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(ConcurrentHashMap$MapReduceMappingsTask));
	});
	return class$;
}

$Class* ConcurrentHashMap$MapReduceMappingsTask::class$ = nullptr;

		} // concurrent
	} // util
} // java