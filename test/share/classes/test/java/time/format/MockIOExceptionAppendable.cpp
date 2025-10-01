#include <test/java/time/format/MockIOExceptionAppendable.h>

#include <java/io/IOException.h>
#include <java/lang/Appendable.h>
#include <java/lang/CharSequence.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $IOException = ::java::io::IOException;
using $Appendable = ::java::lang::Appendable;
using $CharSequence = ::java::lang::CharSequence;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace test {
	namespace java {
		namespace time {
			namespace format {

$MethodInfo _MockIOExceptionAppendable_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(MockIOExceptionAppendable::*)()>(&MockIOExceptionAppendable::init$))},
	{"append", "(Ljava/lang/CharSequence;)Ljava/lang/Appendable;", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"append", "(C)Ljava/lang/Appendable;", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"append", "(Ljava/lang/CharSequence;II)Ljava/lang/Appendable;", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{}
};

$ClassInfo _MockIOExceptionAppendable_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"test.java.time.format.MockIOExceptionAppendable",
	"java.lang.Object",
	"java.lang.Appendable",
	nullptr,
	_MockIOExceptionAppendable_MethodInfo_
};

$Object* allocate$MockIOExceptionAppendable($Class* clazz) {
	return $of($alloc(MockIOExceptionAppendable));
}

void MockIOExceptionAppendable::init$() {
}

$Appendable* MockIOExceptionAppendable::append($CharSequence* csq) {
	$throwNew($IOException);
	$shouldNotReachHere();
}

$Appendable* MockIOExceptionAppendable::append(char16_t c) {
	$throwNew($IOException);
	$shouldNotReachHere();
}

$Appendable* MockIOExceptionAppendable::append($CharSequence* csq, int32_t start, int32_t end) {
	$throwNew($IOException);
	$shouldNotReachHere();
}

MockIOExceptionAppendable::MockIOExceptionAppendable() {
}

$Class* MockIOExceptionAppendable::load$($String* name, bool initialize) {
	$loadClass(MockIOExceptionAppendable, name, initialize, &_MockIOExceptionAppendable_ClassInfo_, allocate$MockIOExceptionAppendable);
	return class$;
}

$Class* MockIOExceptionAppendable::class$ = nullptr;

			} // format
		} // time
	} // java
} // test