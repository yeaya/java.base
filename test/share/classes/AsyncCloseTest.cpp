#include <AsyncCloseTest.h>

#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$FieldInfo _AsyncCloseTest_FieldInfo_[] = {
	{"passed", "Z", nullptr, $PRIVATE, $field(AsyncCloseTest, passed$)},
	{"reason", "Ljava/lang/StringBuilder;", nullptr, $PRIVATE | $FINAL, $field(AsyncCloseTest, reason)},
	{"closed", "Z", nullptr, $PRIVATE, $field(AsyncCloseTest, closed$)},
	{}
};

$MethodInfo _AsyncCloseTest_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(AsyncCloseTest, init$, void)},
	{"closed", "()V", nullptr, $PROTECTED | $SYNCHRONIZED, $virtualMethod(AsyncCloseTest, closed, void)},
	{"description", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(AsyncCloseTest, description, $String*)},
	{"failed", "(Ljava/lang/String;)LAsyncCloseTest;", nullptr, $PROTECTED | $SYNCHRONIZED, $virtualMethod(AsyncCloseTest, failed, AsyncCloseTest*, $String*)},
	{"failureReason", "()Ljava/lang/String;", nullptr, $PUBLIC | $SYNCHRONIZED, $virtualMethod(AsyncCloseTest, failureReason, $String*)},
	{"go", "()LAsyncCloseTest;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(AsyncCloseTest, go, AsyncCloseTest*)},
	{"hasPassed", "()Z", nullptr, $PUBLIC | $SYNCHRONIZED, $virtualMethod(AsyncCloseTest, hasPassed, bool)},
	{"isClosed", "()Z", nullptr, $PROTECTED | $SYNCHRONIZED, $virtualMethod(AsyncCloseTest, isClosed, bool)},
	{"passed", "()LAsyncCloseTest;", nullptr, $PROTECTED | $SYNCHRONIZED, $virtualMethod(AsyncCloseTest, passed, AsyncCloseTest*)},
	{}
};

$ClassInfo _AsyncCloseTest_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"AsyncCloseTest",
	"java.lang.Object",
	nullptr,
	_AsyncCloseTest_FieldInfo_,
	_AsyncCloseTest_MethodInfo_
};

$Object* allocate$AsyncCloseTest($Class* clazz) {
	return $of($alloc(AsyncCloseTest));
}

void AsyncCloseTest::init$() {
	$set(this, reason, $new($StringBuilder));
}

bool AsyncCloseTest::hasPassed() {
	$synchronized(this) {
		return this->passed$;
	}
}

AsyncCloseTest* AsyncCloseTest::passed() {
	$synchronized(this) {
		if (failureReason() == nullptr) {
			this->passed$ = true;
		}
		return this;
	}
}

AsyncCloseTest* AsyncCloseTest::failed($String* r) {
	$synchronized(this) {
		$useLocalCurrentObjectStackCache();
		this->passed$ = false;
		$nc(this->reason)->append($($String::format("%n - %s"_s, $$new($ObjectArray, {$of(r)}))));
		return this;
	}
}

$String* AsyncCloseTest::failureReason() {
	$synchronized(this) {
		return $nc(this->reason)->length() > 0 ? $nc(this->reason)->toString() : ($String*)nullptr;
	}
}

void AsyncCloseTest::closed() {
	$synchronized(this) {
		this->closed$ = true;
	}
}

bool AsyncCloseTest::isClosed() {
	$synchronized(this) {
		return this->closed$;
	}
}

AsyncCloseTest::AsyncCloseTest() {
}

$Class* AsyncCloseTest::load$($String* name, bool initialize) {
	$loadClass(AsyncCloseTest, name, initialize, &_AsyncCloseTest_ClassInfo_, allocate$AsyncCloseTest);
	return class$;
}

$Class* AsyncCloseTest::class$ = nullptr;