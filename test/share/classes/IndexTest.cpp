#include <IndexTest.h>

#include <java/lang/CharSequence.h>
#include <java/net/InetAddress.h>
#include <java/net/NetworkInterface.h>
#include <java/util/ArrayList.h>
#include <java/util/Arrays.h>
#include <java/util/Collections.h>
#include <java/util/Enumeration.h>
#include <java/util/Iterator.h>
#include <jcpp.h>

#undef MAX_VALUE

using $PrintStream = ::java::io::PrintStream;
using $Boolean = ::java::lang::Boolean;
using $CharSequence = ::java::lang::CharSequence;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $InetAddress = ::java::net::InetAddress;
using $NetworkInterface = ::java::net::NetworkInterface;
using $ArrayList = ::java::util::ArrayList;
using $Arrays = ::java::util::Arrays;
using $Collections = ::java::util::Collections;
using $Enumeration = ::java::util::Enumeration;
using $Iterator = ::java::util::Iterator;

$FieldInfo _IndexTest_FieldInfo_[] = {
	{"isWindows", "Z", nullptr, $STATIC | $FINAL, $staticField(IndexTest, isWindows)},
	{}
};

$MethodInfo _IndexTest_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(IndexTest, init$, void)},
	{"displayInterfaceInformation", "(Ljava/net/NetworkInterface;)V", nullptr, $STATIC, $staticMethod(IndexTest, displayInterfaceInformation, void, $NetworkInterface*), "java.net.SocketException"},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(IndexTest, main, void, $StringArray*), "java.lang.Exception"},
	{}
};

$ClassInfo _IndexTest_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"IndexTest",
	"java.lang.Object",
	nullptr,
	_IndexTest_FieldInfo_,
	_IndexTest_MethodInfo_
};

$Object* allocate$IndexTest($Class* clazz) {
	return $of($alloc(IndexTest));
}

bool IndexTest::isWindows = false;

void IndexTest::init$() {
}

void IndexTest::main($StringArray* args) {
	$init(IndexTest);
	$useLocalCurrentObjectStackCache();
	$var($Enumeration, netifs, $NetworkInterface::getNetworkInterfaces());
	$var($NetworkInterface, nif, nullptr);
	while ($nc(netifs)->hasMoreElements()) {
		$assign(nif, $cast($NetworkInterface, netifs->nextElement()));
		$var($String, dName, $nc(nif)->getDisplayName());
		if (IndexTest::isWindows && dName != nullptr && dName->contains("Teredo"_s)) {
			continue;
		}
		int32_t index = nif->getIndex();
		if (index >= 0) {
			$var($NetworkInterface, nif2, $NetworkInterface::getByIndex(index));
			if (!nif->equals(nif2)) {
				$nc($System::out)->printf("%nExpected interfaces to be the same, but got:%n"_s, $$new($ObjectArray, 0));
				displayInterfaceInformation(nif);
				displayInterfaceInformation(nif2);
				$throwNew($RuntimeException, "both interfaces should be equal"_s);
			}
		}
	}
	try {
		$assign(nif, $NetworkInterface::getByIndex(-1));
		$nc($System::out)->printf("%ngetByIndex(-1) should have thrown, but instead returned:%n"_s, $$new($ObjectArray, 0));
		displayInterfaceInformation(nif);
		$throwNew($RuntimeException, "Should have thrown IllegalArgumentException"_s);
	} catch ($IllegalArgumentException& e) {
	}
	$assign(nif, $NetworkInterface::getByIndex($Integer::MAX_VALUE - 1));
	if (nif != nullptr) {
		$nc($System::out)->printf("%ngetByIndex(MAX_VALUE - 1), expected null, got:%n"_s, $$new($ObjectArray, 0));
		displayInterfaceInformation(nif);
		$throwNew($RuntimeException, "getByIndex() should have returned null"_s);
	}
}

void IndexTest::displayInterfaceInformation($NetworkInterface* netint) {
	$init(IndexTest);
	$useLocalCurrentObjectStackCache();
	$nc($System::out)->printf("Display name: %s%n"_s, $$new($ObjectArray, {$($of($nc(netint)->getDisplayName()))}));
	$nc($System::out)->printf("Name: %s%n"_s, $$new($ObjectArray, {$($of($nc(netint)->getName()))}));
	$var($Enumeration, inetAddresses, $nc(netint)->getInetAddresses());
	{
		$var($Iterator, i$, $nc($($Collections::list(inetAddresses)))->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($InetAddress, inetAddress, $cast($InetAddress, i$->next()));
			$nc($System::out)->printf("InetAddress: %s%n"_s, $$new($ObjectArray, {$of(inetAddress)}));
		}
	}
	$nc($System::out)->printf("Up? %s%n"_s, $$new($ObjectArray, {$($of($Boolean::valueOf(netint->isUp())))}));
	$nc($System::out)->printf("Loopback? %s%n"_s, $$new($ObjectArray, {$($of($Boolean::valueOf(netint->isLoopback())))}));
	$nc($System::out)->printf("PointToPoint? %s%n"_s, $$new($ObjectArray, {$($of($Boolean::valueOf(netint->isPointToPoint())))}));
	$nc($System::out)->printf("Supports multicast? %s%n"_s, $$new($ObjectArray, {$($of($Boolean::valueOf(netint->supportsMulticast())))}));
	$nc($System::out)->printf("Virtual? %s%n"_s, $$new($ObjectArray, {$($of($Boolean::valueOf(netint->isVirtual())))}));
	$nc($System::out)->printf("Hardware address: %s%n"_s, $$new($ObjectArray, {$($of($Arrays::toString($(netint->getHardwareAddress()))))}));
	$nc($System::out)->printf("MTU: %s%n"_s, $$new($ObjectArray, {$($of($Integer::valueOf(netint->getMTU())))}));
	$nc($System::out)->printf("Index: %s%n"_s, $$new($ObjectArray, {$($of($Integer::valueOf(netint->getIndex())))}));
	$nc($System::out)->printf("%n"_s, $$new($ObjectArray, 0));
}

void clinit$IndexTest($Class* class$) {
	IndexTest::isWindows = $nc($($System::getProperty("os.name"_s)))->startsWith("Windows"_s);
}

IndexTest::IndexTest() {
}

$Class* IndexTest::load$($String* name, bool initialize) {
	$loadClass(IndexTest, name, initialize, &_IndexTest_ClassInfo_, clinit$IndexTest, allocate$IndexTest);
	return class$;
}

$Class* IndexTest::class$ = nullptr;