#include <NullTest.h>
#include <java/io/IOException.h>
#include <java/nio/channels/Channel.h>
#include <java/nio/channels/spi/SelectorProvider.h>
#include <jcpp.h>

using $IOException = ::java::io::IOException;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $Channel = ::java::nio::channels::Channel;
using $SelectorProvider = ::java::nio::channels::spi::SelectorProvider;

void NullTest::init$() {
}

void NullTest::main($StringArray* args) {
	$useLocalObjectStack();
	$var($Channel, c1, nullptr);
	$var($Channel, c2, nullptr);
	try {
		$assign(c1, $$nc($SelectorProvider::provider())->inheritedChannel());
		$assign(c2, $System::inheritedChannel());
	} catch ($IOException& ioe) {
		$throwNew($RuntimeException, $$str({"Unexpected IOException: "_s, ioe}));
	}
	if (c1 != nullptr || c2 != nullptr) {
		$throwNew($RuntimeException, "Channel returned - unexpected"_s);
	}
}

NullTest::NullTest() {
}

$Class* NullTest::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(NullTest, init$, void)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(NullTest, main, void, $StringArray*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"NullTest",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(NullTest, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(NullTest);
	});
	return class$;
}

$Class* NullTest::class$ = nullptr;