#include <CharAt.h>

#include <java/io/PrintStream.h>
#include <java/lang/Array.h>
#include <java/lang/CharSequence.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/System.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/nio/CharBuffer.h>
#include <jcpp.h>

using $PrintStream = ::java::io::PrintStream;
using $CharSequence = ::java::lang::CharSequence;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $CharBuffer = ::java::nio::CharBuffer;

$MethodInfo _CharAt_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(CharAt::*)()>(&CharAt::init$))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&CharAt::main))},
	{}
};

$ClassInfo _CharAt_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"CharAt",
	"java.lang.Object",
	nullptr,
	nullptr,
	_CharAt_MethodInfo_
};

$Object* allocate$CharAt($Class* clazz) {
	return $of($alloc(CharAt));
}

void CharAt::init$() {
}

void CharAt::main($StringArray* args) {
	$var($CharSequence, cs, $CharBuffer::wrap(static_cast<$CharSequence*>("foo"_s)));
	for (int32_t i = 0; i < $nc(cs)->length(); ++i) {
		$init($System);
		$nc($System::err)->print(cs->charAt(i));
	}
	$init($System);
	$nc($System::err)->println();
}

CharAt::CharAt() {
}

$Class* CharAt::load$($String* name, bool initialize) {
	$loadClass(CharAt, name, initialize, &_CharAt_ClassInfo_, allocate$CharAt);
	return class$;
}

$Class* CharAt::class$ = nullptr;