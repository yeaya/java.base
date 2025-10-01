#include <TestObj.h>

#include <java/io/PrintWriter.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InterruptedException.h>
#include <java/lang/Math.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/Thread.h>
#include <java/lang/Throwable.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $PrintWriter = ::java::io::PrintWriter;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InterruptedException = ::java::lang::InterruptedException;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;

$FieldInfo _TestObj_FieldInfo_[] = {
	{"mStr", "Ljava/lang/String;", nullptr, 0, $field(TestObj, mStr)},
	{"writer", "Ljava/io/PrintWriter;", nullptr, $PRIVATE, $field(TestObj, writer)},
	{}
};

$MethodInfo _TestObj_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;Ljava/io/PrintWriter;)V", nullptr, 0, $method(static_cast<void(TestObj::*)($String*,$PrintWriter*)>(&TestObj::init$))},
	{"test", "()V", nullptr, $SYNCHRONIZED},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC | $SYNCHRONIZED},
	{}
};

$ClassInfo _TestObj_ClassInfo_ = {
	$ACC_SUPER,
	"TestObj",
	"java.lang.Object",
	nullptr,
	_TestObj_FieldInfo_,
	_TestObj_MethodInfo_
};

$Object* allocate$TestObj($Class* clazz) {
	return $of($alloc(TestObj));
}

void TestObj::init$($String* str, $PrintWriter* writer) {
	$set(this, mStr, str);
	$set(this, writer, writer);
}

void TestObj::test() {
	$synchronized(this) {
		try {
			int64_t t = $Math::round($Math::random() * 10);
			$($Thread::currentThread())->sleep(t);
		} catch ($InterruptedException&) {
			$var($InterruptedException, e, $catch());
			e->printStackTrace();
		}
		$nc(this->writer)->println("In test()."_s);
	}
}

$String* TestObj::toString() {
	$synchronized(this) {
		$nc(this->writer)->println("Calling toString\n"_s);
		return this->mStr;
	}
}

TestObj::TestObj() {
}

$Class* TestObj::load$($String* name, bool initialize) {
	$loadClass(TestObj, name, initialize, &_TestObj_ClassInfo_, allocate$TestObj);
	return class$;
}

$Class* TestObj::class$ = nullptr;