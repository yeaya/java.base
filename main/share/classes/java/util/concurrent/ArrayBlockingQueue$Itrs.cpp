#include <java/util/concurrent/ArrayBlockingQueue$Itrs.h>

#include <java/lang/ref/Reference.h>
#include <java/util/concurrent/ArrayBlockingQueue$Itr.h>
#include <java/util/concurrent/ArrayBlockingQueue$Itrs$Node.h>
#include <java/util/concurrent/ArrayBlockingQueue.h>
#include <jcpp.h>

#undef LONG_SWEEP_PROBES
#undef SHORT_SWEEP_PROBES

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Reference = ::java::lang::ref::Reference;
using $ArrayBlockingQueue = ::java::util::concurrent::ArrayBlockingQueue;
using $ArrayBlockingQueue$Itr = ::java::util::concurrent::ArrayBlockingQueue$Itr;
using $ArrayBlockingQueue$Itrs$Node = ::java::util::concurrent::ArrayBlockingQueue$Itrs$Node;

namespace java {
	namespace util {
		namespace concurrent {

$FieldInfo _ArrayBlockingQueue$Itrs_FieldInfo_[] = {
	{"this$0", "Ljava/util/concurrent/ArrayBlockingQueue;", nullptr, $FINAL | $SYNTHETIC, $field(ArrayBlockingQueue$Itrs, this$0)},
	{"cycles", "I", nullptr, 0, $field(ArrayBlockingQueue$Itrs, cycles)},
	{"head", "Ljava/util/concurrent/ArrayBlockingQueue$Itrs$Node;", "Ljava/util/concurrent/ArrayBlockingQueue<TE;>.Itrs.Node;", $PRIVATE, $field(ArrayBlockingQueue$Itrs, head)},
	{"sweeper", "Ljava/util/concurrent/ArrayBlockingQueue$Itrs$Node;", "Ljava/util/concurrent/ArrayBlockingQueue<TE;>.Itrs.Node;", $PRIVATE, $field(ArrayBlockingQueue$Itrs, sweeper)},
	{"SHORT_SWEEP_PROBES", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(ArrayBlockingQueue$Itrs, SHORT_SWEEP_PROBES)},
	{"LONG_SWEEP_PROBES", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(ArrayBlockingQueue$Itrs, LONG_SWEEP_PROBES)},
	{}
};

$MethodInfo _ArrayBlockingQueue$Itrs_MethodInfo_[] = {
	{"<init>", "(Ljava/util/concurrent/ArrayBlockingQueue;Ljava/util/concurrent/ArrayBlockingQueue$Itr;)V", "(Ljava/util/concurrent/ArrayBlockingQueue<TE;>.Itr;)V", 0, $method(static_cast<void(ArrayBlockingQueue$Itrs::*)($ArrayBlockingQueue*,$ArrayBlockingQueue$Itr*)>(&ArrayBlockingQueue$Itrs::init$))},
	{"doSomeSweeping", "(Z)V", nullptr, 0},
	{"elementDequeued", "()V", nullptr, 0},
	{"queueIsEmpty", "()V", nullptr, 0},
	{"register", "(Ljava/util/concurrent/ArrayBlockingQueue$Itr;)V", "(Ljava/util/concurrent/ArrayBlockingQueue<TE;>.Itr;)V", 0},
	{"removedAt", "(I)V", nullptr, 0},
	{"takeIndexWrapped", "()V", nullptr, 0},
	{}
};

$InnerClassInfo _ArrayBlockingQueue$Itrs_InnerClassesInfo_[] = {
	{"java.util.concurrent.ArrayBlockingQueue$Itrs", "java.util.concurrent.ArrayBlockingQueue", "Itrs", 0},
	{"java.util.concurrent.ArrayBlockingQueue$Itrs$Node", "java.util.concurrent.ArrayBlockingQueue$Itrs", "Node", $PRIVATE},
	{}
};

$ClassInfo _ArrayBlockingQueue$Itrs_ClassInfo_ = {
	$ACC_SUPER,
	"java.util.concurrent.ArrayBlockingQueue$Itrs",
	"java.lang.Object",
	nullptr,
	_ArrayBlockingQueue$Itrs_FieldInfo_,
	_ArrayBlockingQueue$Itrs_MethodInfo_,
	nullptr,
	nullptr,
	_ArrayBlockingQueue$Itrs_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.concurrent.ArrayBlockingQueue"
};

$Object* allocate$ArrayBlockingQueue$Itrs($Class* clazz) {
	return $of($alloc(ArrayBlockingQueue$Itrs));
}

void ArrayBlockingQueue$Itrs::init$($ArrayBlockingQueue* this$0, $ArrayBlockingQueue$Itr* initial) {
	$set(this, this$0, this$0);
	register$(initial);
}

void ArrayBlockingQueue$Itrs::doSomeSweeping(bool tryHarder) {
	$useLocalCurrentObjectStackCache();
	int32_t probes = tryHarder ? ArrayBlockingQueue$Itrs::LONG_SWEEP_PROBES : ArrayBlockingQueue$Itrs::SHORT_SWEEP_PROBES;
	$var($ArrayBlockingQueue$Itrs$Node, o, nullptr);
	$var($ArrayBlockingQueue$Itrs$Node, p, nullptr);
	$var($ArrayBlockingQueue$Itrs$Node, sweeper, this->sweeper);
	bool passedGo = false;
	if (sweeper == nullptr) {
		$assign(o, nullptr);
		$assign(p, this->head);
		passedGo = true;
	} else {
		$assign(o, sweeper);
		$assign(p, $nc(o)->next);
		passedGo = false;
	}
	for (; probes > 0; --probes) {
		if (p == nullptr) {
			if (passedGo) {
				break;
			}
			$assign(o, nullptr);
			$assign(p, this->head);
			passedGo = true;
		}
		$var($ArrayBlockingQueue$Itr, it, $cast($ArrayBlockingQueue$Itr, $nc(p)->get()));
		$var($ArrayBlockingQueue$Itrs$Node, next, p->next);
		if (it == nullptr || $nc(it)->isDetached()) {
			probes = ArrayBlockingQueue$Itrs::LONG_SWEEP_PROBES;
			p->clear();
			$set(p, next, nullptr);
			if (o == nullptr) {
				$set(this, head, next);
				if (next == nullptr) {
					$set(this->this$0, itrs, nullptr);
					return;
				}
			} else {
				$set($nc(o), next, next);
			}
		} else {
			$assign(o, p);
		}
		$assign(p, next);
	}
	$set(this, sweeper, (p == nullptr) ? ($ArrayBlockingQueue$Itrs$Node*)nullptr : o);
}

void ArrayBlockingQueue$Itrs::register$($ArrayBlockingQueue$Itr* itr) {
	$set(this, head, $new($ArrayBlockingQueue$Itrs$Node, this, itr, this->head));
}

void ArrayBlockingQueue$Itrs::takeIndexWrapped() {
	$useLocalCurrentObjectStackCache();
	++this->cycles;
	{
		$var($ArrayBlockingQueue$Itrs$Node, o, nullptr);
		$var($ArrayBlockingQueue$Itrs$Node, p, this->head);
		for (; p != nullptr;) {
			$var($ArrayBlockingQueue$Itr, it, $cast($ArrayBlockingQueue$Itr, p->get()));
			$var($ArrayBlockingQueue$Itrs$Node, next, p->next);
			if (it == nullptr || $nc(it)->takeIndexWrapped()) {
				p->clear();
				$set(p, next, nullptr);
				if (o == nullptr) {
					$set(this, head, next);
				} else {
					$set($nc(o), next, next);
				}
			} else {
				$assign(o, p);
			}
			$assign(p, next);
		}
	}
	if (this->head == nullptr) {
		$set(this->this$0, itrs, nullptr);
	}
}

void ArrayBlockingQueue$Itrs::removedAt(int32_t removedIndex) {
	$useLocalCurrentObjectStackCache();
	{
		$var($ArrayBlockingQueue$Itrs$Node, o, nullptr);
		$var($ArrayBlockingQueue$Itrs$Node, p, this->head);
		for (; p != nullptr;) {
			$var($ArrayBlockingQueue$Itr, it, $cast($ArrayBlockingQueue$Itr, p->get()));
			$var($ArrayBlockingQueue$Itrs$Node, next, p->next);
			if (it == nullptr || $nc(it)->removedAt(removedIndex)) {
				p->clear();
				$set(p, next, nullptr);
				if (o == nullptr) {
					$set(this, head, next);
				} else {
					$set($nc(o), next, next);
				}
			} else {
				$assign(o, p);
			}
			$assign(p, next);
		}
	}
	if (this->head == nullptr) {
		$set(this->this$0, itrs, nullptr);
	}
}

void ArrayBlockingQueue$Itrs::queueIsEmpty() {
	$useLocalCurrentObjectStackCache();
	{
		$var($ArrayBlockingQueue$Itrs$Node, p, this->head);
		for (; p != nullptr; $assign(p, $nc(p)->next)) {
			$var($ArrayBlockingQueue$Itr, it, $cast($ArrayBlockingQueue$Itr, p->get()));
			if (it != nullptr) {
				p->clear();
				it->shutdown();
			}
		}
	}
	$set(this, head, nullptr);
	$set(this->this$0, itrs, nullptr);
}

void ArrayBlockingQueue$Itrs::elementDequeued() {
	if (this->this$0->count == 0) {
		queueIsEmpty();
	} else if (this->this$0->takeIndex == 0) {
		takeIndexWrapped();
	}
}

ArrayBlockingQueue$Itrs::ArrayBlockingQueue$Itrs() {
}

$Class* ArrayBlockingQueue$Itrs::load$($String* name, bool initialize) {
	$loadClass(ArrayBlockingQueue$Itrs, name, initialize, &_ArrayBlockingQueue$Itrs_ClassInfo_, allocate$ArrayBlockingQueue$Itrs);
	return class$;
}

$Class* ArrayBlockingQueue$Itrs::class$ = nullptr;

		} // concurrent
	} // util
} // java