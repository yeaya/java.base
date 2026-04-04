#include <TLRemoveTest$2.h>
#include <TLRemoveTest.h>
#include <java/lang/ThreadLocal.h>
#include <jcpp.h>

using $TLRemoveTest = ::TLRemoveTest;
using $ThrowableArray = $Array<::java::lang::Throwable>;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;

void TLRemoveTest$2::init$(int32_t val$threadId, $ints* val$removeNode, $ints* val$removeAndSet, $ints* val$x, $ThrowableArray* val$exceptions) {
	this->val$threadId = val$threadId;
	$set(this, val$removeNode, val$removeNode);
	$set(this, val$removeAndSet, val$removeAndSet);
	$set(this, val$x, val$x);
	$set(this, val$exceptions, val$exceptions);
	$Thread::init$();
}

void TLRemoveTest$2::run() {
	$useLocalObjectStack();
	try {
		$init($TLRemoveTest);
		$nc($TLRemoveTest::n)->set($($Integer::valueOf(this->val$threadId)));
		for (int32_t j = 0; j < this->val$threadId; ++j) {
			$($Thread::currentThread())->yield();
		}
		{
			$var($ints, arr$, this->val$removeNode);
			for (int32_t len$ = $nc(arr$)->length, i$ = 0; i$ < len$; ++i$) {
				int32_t removeId = arr$->get(i$);
				if (this->val$threadId == removeId) {
					$TLRemoveTest::n->remove();
					break;
				}
			}
		}
		{
			$var($ints, arr$, this->val$removeAndSet);
			for (int32_t len$ = $nc(arr$)->length, i$ = 0; i$ < len$; ++i$) {
				int32_t removeId = arr$->get(i$);
				if (this->val$threadId == removeId) {
					$TLRemoveTest::n->remove();
					$TLRemoveTest::n->set($($Integer::valueOf(102)));
					break;
				}
			}
		}
		$nc(this->val$x)->set(this->val$threadId, $$sure($Integer, $TLRemoveTest::n->get())->intValue());
	} catch ($Throwable& ex) {
		$nc(this->val$exceptions)->set(this->val$threadId, ex);
	}
}

TLRemoveTest$2::TLRemoveTest$2() {
}

$Class* TLRemoveTest$2::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"val$exceptions", "[Ljava/lang/Throwable;", nullptr, $FINAL | $SYNTHETIC, $field(TLRemoveTest$2, val$exceptions)},
		{"val$x", "[I", nullptr, $FINAL | $SYNTHETIC, $field(TLRemoveTest$2, val$x)},
		{"val$removeAndSet", "[I", nullptr, $FINAL | $SYNTHETIC, $field(TLRemoveTest$2, val$removeAndSet)},
		{"val$removeNode", "[I", nullptr, $FINAL | $SYNTHETIC, $field(TLRemoveTest$2, val$removeNode)},
		{"val$threadId", "I", nullptr, $FINAL | $SYNTHETIC, $field(TLRemoveTest$2, val$threadId)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(I[I[I[I[Ljava/lang/Throwable;)V", nullptr, 0, $method(TLRemoveTest$2, init$, void, int32_t, $ints*, $ints*, $ints*, $ThrowableArray*)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(TLRemoveTest$2, run, void)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"TLRemoveTest",
		"main",
		"([Ljava/lang/String;)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"TLRemoveTest$2", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"TLRemoveTest$2",
		"java.lang.Thread",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"TLRemoveTest"
	};
	$loadClass(TLRemoveTest$2, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(TLRemoveTest$2);
	});
	return class$;
}

$Class* TLRemoveTest$2::class$ = nullptr;