#include <Basic4ref.h>

#include <Basic4ref$1.h>
#include <Basic4ref$2.h>
#include <Basic4ref$3.h>
#include <Basic4ref$4.h>
#include <Basic4ref$Sub.h>
#include <java/lang/Runnable.h>
#include <java/lang/ref/Reference.h>
#include <java/lang/ref/ReferenceQueue.h>
#include <java/util/Vector.h>
#include <jcpp.h>

using $Basic4ref$1 = ::Basic4ref$1;
using $Basic4ref$2 = ::Basic4ref$2;
using $Basic4ref$3 = ::Basic4ref$3;
using $Basic4ref$4 = ::Basic4ref$4;
using $Basic4ref$Sub = ::Basic4ref$Sub;
using $PrintStream = ::java::io::PrintStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $Reference = ::java::lang::ref::Reference;
using $ReferenceQueue = ::java::lang::ref::ReferenceQueue;
using $Vector = ::java::util::Vector;

$FieldInfo _Basic4ref_FieldInfo_[] = {
	{"q", "Ljava/lang/ref/ReferenceQueue;", nullptr, $STATIC, $staticField(Basic4ref, q)},
	{"q2", "Ljava/lang/ref/ReferenceQueue;", nullptr, $STATIC, $staticField(Basic4ref, q2)},
	{"rw", "Ljava/lang/ref/Reference;", nullptr, $STATIC, $staticField(Basic4ref, rw)},
	{"rw2", "Ljava/lang/ref/Reference;", nullptr, $STATIC, $staticField(Basic4ref, rw2)},
	{"rp", "Ljava/lang/ref/Reference;", nullptr, $STATIC, $staticField(Basic4ref, rp)},
	{"rp2", "Ljava/lang/ref/Reference;", nullptr, $STATIC, $staticField(Basic4ref, rp2)},
	{"keep", "Ljava/util/Vector;", nullptr, $STATIC, $staticField(Basic4ref, keep)},
	{"finalized", "Z", nullptr, $STATIC, $staticField(Basic4ref, finalized)},
	{"sub", "Ljava/lang/Object;", nullptr, 0, $field(Basic4ref, sub)},
	{}
};

$MethodInfo _Basic4ref_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(Basic4ref::*)()>(&Basic4ref::init$))},
	{"createNoise", "()V", nullptr, $STATIC, $method(static_cast<void(*)()>(&Basic4ref::createNoise)), "java.lang.InterruptedException"},
	{"finalize", "()V", nullptr, $PROTECTED},
	{"fork", "(Ljava/lang/Runnable;)V", nullptr, $STATIC, $method(static_cast<void(*)($Runnable*)>(&Basic4ref::fork)), "java.lang.InterruptedException"},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&Basic4ref::main)), "java.lang.Exception"},
	{"showReferences", "()V", nullptr, $STATIC, $method(static_cast<void(*)()>(&Basic4ref::showReferences)), "java.lang.InterruptedException"},
	{}
};

$InnerClassInfo _Basic4ref_InnerClassesInfo_[] = {
	{"Basic4ref$Sub", "Basic4ref", "Sub", $PUBLIC | $STATIC},
	{"Basic4ref$ClearFinalizerThread", "Basic4ref", "ClearFinalizerThread", $PUBLIC | $STATIC},
	{"Basic4ref$4", nullptr, nullptr, 0},
	{"Basic4ref$3", nullptr, nullptr, 0},
	{"Basic4ref$2", nullptr, nullptr, 0},
	{"Basic4ref$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _Basic4ref_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"Basic4ref",
	"java.lang.Object",
	nullptr,
	_Basic4ref_FieldInfo_,
	_Basic4ref_MethodInfo_,
	nullptr,
	nullptr,
	_Basic4ref_InnerClassesInfo_,
	nullptr,
	nullptr,
	"Basic4ref$Sub,Basic4ref$ClearFinalizerThread,Basic4ref$4,Basic4ref$3,Basic4ref$2,Basic4ref$1"
};

$Object* allocate$Basic4ref($Class* clazz) {
	return $of($alloc(Basic4ref));
}

$ReferenceQueue* Basic4ref::q = nullptr;
$ReferenceQueue* Basic4ref::q2 = nullptr;
$Reference* Basic4ref::rw = nullptr;
$Reference* Basic4ref::rw2 = nullptr;
$Reference* Basic4ref::rp = nullptr;
$Reference* Basic4ref::rp2 = nullptr;
$Vector* Basic4ref::keep = nullptr;
bool Basic4ref::finalized = false;

void Basic4ref::init$() {
	$set(this, sub, $new($Basic4ref$Sub));
}

void Basic4ref::finalize() {
	Basic4ref::finalized = true;
	$nc($System::err)->println($$str({"Finalized "_s, this}));
}

void Basic4ref::fork($Runnable* proc) {
	$init(Basic4ref);
	$var($Thread, t, $new($Thread, proc));
	t->start();
	t->join();
}

void Basic4ref::showReferences() {
	$init(Basic4ref);
	fork($$new($Basic4ref$1));
}

void Basic4ref::createNoise() {
	$init(Basic4ref);
	fork($$new($Basic4ref$2));
}

void Basic4ref::main($StringArray* args) {
	$init(Basic4ref);
	$useLocalCurrentObjectStackCache();
	fork($$new($Basic4ref$3));
	showReferences();
	int32_t ndq = 0;
	bool prevFinalized = false;
	bool outer$break = false;
	for (int32_t i = 1;; ++i) {
		$var($Reference, r, nullptr);
		createNoise();
		$nc($System::err)->println($$str({"GC "_s, $$str(i)}));
		$Thread::sleep(10);
		$System::gc();
		$System::runFinalization();
		showReferences();
		while (($assign(r, $nc(Basic4ref::q2)->poll())) != nullptr) {
			$nc($System::err)->println($$str({"Noise "_s, r}));
		}
		if (Basic4ref::finalized && !prevFinalized) {
			fork($$new($Basic4ref$4));
			prevFinalized = true;
		}
		while (($assign(r, $nc(Basic4ref::q)->poll())) != nullptr) {
			++ndq;
			if (r != nullptr) {
				$nc($System::err)->println($$str({"Dequeued "_s, r}));
				if (ndq == 3) {
					outer$break = true;
					break;
				}
			}
		}
		if (outer$break) {
			break;
		}
		if (i >= 10) {
			break;
		}
	}
	if (ndq != 3) {
		$throwNew($Exception, $$str({"Expected to dequeue 3 reference objects, but only got "_s, $$str(ndq)}));
	}
	if (!Basic4ref::finalized) {
		$throwNew($Exception, "Test object not finalized"_s);
	}
}

void clinit$Basic4ref($Class* class$) {
	$assignStatic(Basic4ref::q, $new($ReferenceQueue));
	$assignStatic(Basic4ref::q2, $new($ReferenceQueue));
	$assignStatic(Basic4ref::keep, $new($Vector));
	Basic4ref::finalized = false;
}

Basic4ref::Basic4ref() {
}

$Class* Basic4ref::load$($String* name, bool initialize) {
	$loadClass(Basic4ref, name, initialize, &_Basic4ref_ClassInfo_, clinit$Basic4ref, allocate$Basic4ref);
	return class$;
}

$Class* Basic4ref::class$ = nullptr;