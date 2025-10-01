#include <IDNTest.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Exception.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/RuntimeException.h>
#include <java/lang/String.h>
#include <java/lang/Throwable.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/net/Socket.h>
#include <java/net/UnknownHostException.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $Socket = ::java::net::Socket;
using $UnknownHostException = ::java::net::UnknownHostException;

$MethodInfo _IDNTest_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(IDNTest::*)()>(&IDNTest::init$))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&IDNTest::main))},
	{}
};

$ClassInfo _IDNTest_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"IDNTest",
	"java.lang.Object",
	nullptr,
	nullptr,
	_IDNTest_MethodInfo_
};

$Object* allocate$IDNTest($Class* clazz) {
	return $of($alloc(IDNTest));
}

void IDNTest::init$() {
}

void IDNTest::main($StringArray* args) {
	try {
		$var($Socket, s, $new($Socket, u"\u67f4\u7530\u82b3\u6a39"_s, 8000));
	} catch ($UnknownHostException&) {
		$catch();
	} catch ($Exception&) {
		$var($Exception, e, $catch());
		$throwNew($RuntimeException, static_cast<$Throwable*>(e));
	}
	try {
		$var($Socket, s, $new($Socket, "ho st"_s, 8000));
	} catch ($UnknownHostException&) {
		$catch();
	} catch ($Exception&) {
		$var($Exception, e, $catch());
		$throwNew($RuntimeException, static_cast<$Throwable*>(e));
	}
}

IDNTest::IDNTest() {
}

$Class* IDNTest::load$($String* name, bool initialize) {
	$loadClass(IDNTest, name, initialize, &_IDNTest_ClassInfo_, allocate$IDNTest);
	return class$;
}

$Class* IDNTest::class$ = nullptr;