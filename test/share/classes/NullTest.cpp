#include <NullTest.h>

#include <java/io/IOException.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/RuntimeException.h>
#include <java/lang/String.h>
#include <java/lang/System.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/nio/channels/Channel.h>
#include <java/nio/channels/spi/SelectorProvider.h>
#include <jcpp.h>

using $IOException = ::java::io::IOException;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $Channel = ::java::nio::channels::Channel;
using $SelectorProvider = ::java::nio::channels::spi::SelectorProvider;

$MethodInfo _NullTest_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(NullTest::*)()>(&NullTest::init$))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&NullTest::main))},
	{}
};

$ClassInfo _NullTest_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"NullTest",
	"java.lang.Object",
	nullptr,
	nullptr,
	_NullTest_MethodInfo_
};

$Object* allocate$NullTest($Class* clazz) {
	return $of($alloc(NullTest));
}

void NullTest::init$() {
}

void NullTest::main($StringArray* args) {
	$useLocalCurrentObjectStackCache();
	$var($Channel, c1, nullptr);
	$var($Channel, c2, nullptr);
	try {
		$assign(c1, $nc($($SelectorProvider::provider()))->inheritedChannel());
		$assign(c2, $System::inheritedChannel());
	} catch ($IOException&) {
		$var($IOException, ioe, $catch());
		$throwNew($RuntimeException, $$str({"Unexpected IOException: "_s, ioe}));
	}
	if (c1 != nullptr || c2 != nullptr) {
		$throwNew($RuntimeException, "Channel returned - unexpected"_s);
	}
}

NullTest::NullTest() {
}

$Class* NullTest::load$($String* name, bool initialize) {
	$loadClass(NullTest, name, initialize, &_NullTest_ClassInfo_, allocate$NullTest);
	return class$;
}

$Class* NullTest::class$ = nullptr;