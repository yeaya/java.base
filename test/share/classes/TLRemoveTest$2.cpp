#include <TLRemoveTest$2.h>

#include <TLRemoveTest.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/Integer.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/Thread.h>
#include <java/lang/ThreadLocal.h>
#include <java/lang/Throwable.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $TLRemoveTest = ::TLRemoveTest;
using $ThrowableArray = $Array<::java::lang::Throwable>;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $ThreadLocal = ::java::lang::ThreadLocal;

$FieldInfo _TLRemoveTest$2_FieldInfo_[] = {
	{"val$exceptions", "[Ljava/lang/Throwable;", nullptr, $FINAL | $SYNTHETIC, $field(TLRemoveTest$2, val$exceptions)},
	{"val$x", "[I", nullptr, $FINAL | $SYNTHETIC, $field(TLRemoveTest$2, val$x)},
	{"val$removeAndSet", "[I", nullptr, $FINAL | $SYNTHETIC, $field(TLRemoveTest$2, val$removeAndSet)},
	{"val$removeNode", "[I", nullptr, $FINAL | $SYNTHETIC, $field(TLRemoveTest$2, val$removeNode)},
	{"val$threadId", "I", nullptr, $FINAL | $SYNTHETIC, $field(TLRemoveTest$2, val$threadId)},
	{}
};

$MethodInfo _TLRemoveTest$2_MethodInfo_[] = {
	{"<init>", "(I[I[I[I[Ljava/lang/Throwable;)V", nullptr, 0, $method(static_cast<void(TLRemoveTest$2::*)(int32_t,$ints*,$ints*,$ints*,$ThrowableArray*)>(&TLRemoveTest$2::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _TLRemoveTest$2_EnclosingMethodInfo_ = {
	"TLRemoveTest",
	"main",
	"([Ljava/lang/String;)V"
};

$InnerClassInfo _TLRemoveTest$2_InnerClassesInfo_[] = {
	{"TLRemoveTest$2", nullptr, nullptr, 0},
	{}
};

$ClassInfo _TLRemoveTest$2_ClassInfo_ = {
	$ACC_SUPER,
	"TLRemoveTest$2",
	"java.lang.Thread",
	nullptr,
	_TLRemoveTest$2_FieldInfo_,
	_TLRemoveTest$2_MethodInfo_,
	nullptr,
	&_TLRemoveTest$2_EnclosingMethodInfo_,
	_TLRemoveTest$2_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"TLRemoveTest"
};

$Object* allocate$TLRemoveTest$2($Class* clazz) {
	return $of($alloc(TLRemoveTest$2));
}

void TLRemoveTest$2::init$(int32_t val$threadId, $ints* val$removeNode, $ints* val$removeAndSet, $ints* val$x, $ThrowableArray* val$exceptions) {
	this->val$threadId = val$threadId;
	$set(this, val$removeNode, val$removeNode);
	$set(this, val$removeAndSet, val$removeAndSet);
	$set(this, val$x, val$x);
	$set(this, val$exceptions, val$exceptions);
	$Thread::init$();
}

void TLRemoveTest$2::run() {
	try {
		$init($TLRemoveTest);
		$nc($TLRemoveTest::n)->set($($Integer::valueOf(this->val$threadId)));
		for (int32_t j = 0; j < this->val$threadId; ++j) {
			$($Thread::currentThread())->yield();
		}
		{
			$var($ints, arr$, this->val$removeNode);
			int32_t len$ = $nc(arr$)->length;
			int32_t i$ = 0;
			for (; i$ < len$; ++i$) {
				int32_t removeId = arr$->get(i$);
				if (this->val$threadId == removeId) {
					$nc($TLRemoveTest::n)->remove();
					break;
				}
			}
		}
		{
			$var($ints, arr$, this->val$removeAndSet);
			int32_t len$ = arr$->length;
			int32_t i$ = 0;
			for (; i$ < len$; ++i$) {
				int32_t removeId = arr$->get(i$);
				if (this->val$threadId == removeId) {
					$nc($TLRemoveTest::n)->remove();
					$nc($TLRemoveTest::n)->set($($Integer::valueOf(102)));
					break;
				}
			}
		}
		$nc(this->val$x)->set(this->val$threadId, $nc(($cast($Integer, $($nc($TLRemoveTest::n)->get()))))->intValue());
	} catch ($Throwable&) {
		$var($Throwable, ex, $catch());
		$nc(this->val$exceptions)->set(this->val$threadId, ex);
	}
}

TLRemoveTest$2::TLRemoveTest$2() {
}

$Class* TLRemoveTest$2::load$($String* name, bool initialize) {
	$loadClass(TLRemoveTest$2, name, initialize, &_TLRemoveTest$2_ClassInfo_, allocate$TLRemoveTest$2);
	return class$;
}

$Class* TLRemoveTest$2::class$ = nullptr;