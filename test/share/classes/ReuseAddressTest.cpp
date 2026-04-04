#include <ReuseAddressTest.h>
#include <java/io/IOException.h>
#include <java/lang/SecurityException.h>
#include <java/net/DatagramSocket.h>
#include <java/net/InetAddress.h>
#include <java/net/InetSocketAddress.h>
#include <java/net/MulticastSocket.h>
#include <java/net/SocketAddress.h>
#include <java/net/SocketException.h>
#include <jcpp.h>

#undef MAX_VALUE
#undef MIN_VALUE

using $IOException = ::java::io::IOException;
using $ClassInfo = ::java::lang::ClassInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $SecurityException = ::java::lang::SecurityException;
using $DatagramSocket = ::java::net::DatagramSocket;
using $InetAddress = ::java::net::InetAddress;
using $InetSocketAddress = ::java::net::InetSocketAddress;
using $MulticastSocket = ::java::net::MulticastSocket;
using $SocketAddress = ::java::net::SocketAddress;
using $SocketException = ::java::net::SocketException;

void ReuseAddressTest::init$() {
}

$String* ReuseAddressTest::getInfo($DatagramSocket* soc) {
	$useLocalObjectStack();
	if (soc == nullptr) {
		return nullptr;
	}
	$var($StringBuilder, var$0, $new($StringBuilder));
	var$0->append("localPort: "_s);
	var$0->append($nc(soc)->getLocalPort());
	var$0->append("; localAddress: "_s);
	var$0->append($(soc->getLocalAddress()));
	var$0->append("; remotePort: "_s);
	var$0->append(soc->getPort());
	var$0->append("; remoteAddress: "_s);
	var$0->append($(soc->getInetAddress()));
	var$0->append("; isClosed: "_s);
	var$0->append(soc->isClosed());
	var$0->append("; isBound: "_s);
	var$0->append(soc->isBound());
	return $str(var$0);
}

$InetSocketAddress* ReuseAddressTest::createSocketAddress(int32_t testMcastPort) {
	$useLocalObjectStack();
	$var($InetAddress, localAddress, $InetAddress::getLocalHost());
	$var($InetSocketAddress, localSocketAddress, $new($InetSocketAddress, localAddress, testMcastPort));
	return localSocketAddress;
}

void ReuseAddressTest::main($StringArray* argv) {
	$var(ReuseAddressTest, test, $new(ReuseAddressTest));
	test->DatagramSocket0029();
	test->DatagramSocket0030();
	test->DatagramSocket0031();
	test->DatagramSocket0032();
	test->DatagramSocket0034();
	test->DatagramSocket0035();
	test->DatagramSocket2028();
	test->DatagramSocket2029();
	test->DatagramSocket2030();
}

void ReuseAddressTest::DatagramSocket0029() {
	$useLocalObjectStack();
	$var($String, testCaseID, "DatagramSocket0029"_s);
	$nc($System::out)->println($$str({" >> "_s, testCaseID, ": public void setReuseAddress(boolean on) throws SocketException"_s}));
	$var($DatagramSocket, ds, nullptr);
	$var($Throwable, var$0, nullptr);
	try {
		try {
			$assign(ds, $new($DatagramSocket, ($SocketAddress*)nullptr));
			ds->setReuseAddress(false);
			if (ds->getReuseAddress() == true) {
				$throwNew($RuntimeException, "SO_REUSEADDR is not set to false"_s);
			}
		} catch ($IOException& e) {
			e->printStackTrace($System::out);
			$throwNew($RuntimeException, $$str({"unexpected: "_s, e}));
		} catch ($SecurityException& e) {
			$System::out->println("Security restriction"_s);
		}
	} catch ($Throwable& var$1) {
		$assign(var$0, var$1);
	} /*finally*/ {
		if (ds != nullptr) {
			ds->close();
		}
	}
	if (var$0 != nullptr) {
		$throw(var$0);
	}
	$System::out->println("OKAY"_s);
}

void ReuseAddressTest::DatagramSocket0030() {
	$useLocalObjectStack();
	$var($String, testCaseID, "DatagramSocket0030"_s);
	$nc($System::out)->println($$str({" >> "_s, testCaseID, ": public void setReuseAddress(boolean on) throws SocketException"_s}));
	$var($MulticastSocket, ms1, nullptr);
	$var($MulticastSocket, ms2, nullptr);
	$var($Throwable, var$0, nullptr);
	try {
		try {
			$var($InetSocketAddress, addr, createSocketAddress(0));
			$assign(ms1, $new($MulticastSocket, ($SocketAddress*)nullptr));
			ms1->setReuseAddress(true);
			if (!ms1->getReuseAddress()) {
				$System::out->println("Cannot check:  safety for SO_REUSEADDR option is not guaranteed"_s);
			}
			try {
				ms1->bind(addr);
			} catch ($SocketException& e) {
				$throwNew($RuntimeException, $$str({"cannot bind first socket to "_s, addr, " unexpected "_s, e}));
			}
			$assign(addr, createSocketAddress(ms1->getLocalPort()));
			$assign(ms2, $new($MulticastSocket, ($SocketAddress*)nullptr));
			ms2->setReuseAddress(true);
			if (!ms2->getReuseAddress()) {
				$System::out->println("Cannot check:  safety for SO_REUSEADDR option is not guaranteed"_s);
			}
			try {
				ms2->bind(addr);
			} catch ($SocketException& e) {
				$throwNew($RuntimeException, $$str({"cannot bind second socket to "_s, addr, " unexpected "_s, e}));
			}
			int32_t var$4 = ms1->getLocalPort();
			bool var$3 = var$4 != $nc(addr)->getPort();
			bool var$2 = var$3 || !ms1->isBound();
			if (!var$2) {
				int32_t var$5 = ms2->getLocalPort();
				var$2 = var$5 != addr->getPort();
			}
			bool var$1 = var$2;
			if (var$1 || !ms2->isBound()) {
				$System::out->println($$str({"bind() fails with: "_s, addr}));
				$System::out->println($$str({"  ms1 ["_s, $(getInfo(ms1)), "]"_s}));
				$System::out->println($$str({"  ms2 ["_s, $(getInfo(ms2)), "]"_s}));
				$System::out->println($$str({"  getReuseAddress(): "_s, $$str(ms2->getReuseAddress())}));
				$throwNew($RuntimeException, $$str({"bind() fails with: "_s, addr}));
			}
		} catch ($IOException& e) {
			e->printStackTrace($System::out);
			$throwNew($RuntimeException, $$str({"unexpected: "_s, e}));
		} catch ($SecurityException& e) {
			$System::out->println("Security restriction"_s);
		}
	} catch ($Throwable& var$6) {
		$assign(var$0, var$6);
	} /*finally*/ {
		if (ms1 != nullptr) {
			ms1->close();
		}
		if (ms2 != nullptr) {
			ms2->close();
		}
	}
	if (var$0 != nullptr) {
		$throw(var$0);
	}
	$System::out->println("OKAY"_s);
}

void ReuseAddressTest::DatagramSocket0031() {
	$useLocalObjectStack();
	$var($String, testCaseID, "DatagramSocket0031"_s);
	$nc($System::out)->println($$str({" >> "_s, testCaseID, ": public void setReuseAddress(boolean on) throws SocketException"_s}));
	$var($MulticastSocket, ms1, nullptr);
	$var($MulticastSocket, ms2, nullptr);
	$var($Throwable, var$0, nullptr);
	try {
		try {
			$var($InetSocketAddress, addr, createSocketAddress(0));
			$assign(ms1, $new($MulticastSocket, ($SocketAddress*)nullptr));
			try {
				ms1->bind(addr);
			} catch ($SocketException& e) {
				$throwNew($RuntimeException, $$str({"cannot bind first socket to "_s, addr, " unexpected "_s, e}));
			}
			$assign(addr, createSocketAddress(ms1->getLocalPort()));
			$assign(ms2, $new($MulticastSocket, ($SocketAddress*)nullptr));
			ms2->setReuseAddress(false);
			try {
				ms2->bind(addr);
				$System::out->println("No exceptions: "_s);
				$System::out->println($$str({"  addr: "_s, addr}));
				$System::out->println($$str({"  ms1 ["_s, $(getInfo(ms1)), "]"_s}));
				$System::out->println($$str({"  ms2 ["_s, $(getInfo(ms2)), "]"_s}));
				$System::out->println($$str({"  getReuseAddress(): "_s, $$str(ms2->getReuseAddress())}));
				$throwNew($RuntimeException, $$str({"no exceptions from bind() with "_s, addr}));
			} catch ($SocketException& e) {
			}
		} catch ($IOException& e) {
			e->printStackTrace($System::out);
			$throwNew($RuntimeException, $$str({"unexpected: "_s, e}));
		} catch ($SecurityException& e) {
			$System::out->println("Security restriction"_s);
		}
	} catch ($Throwable& var$1) {
		$assign(var$0, var$1);
	} /*finally*/ {
		if (ms1 != nullptr) {
			ms1->close();
		}
		if (ms2 != nullptr) {
			ms2->close();
		}
	}
	if (var$0 != nullptr) {
		$throw(var$0);
	}
	$System::out->println("OKAY"_s);
}

void ReuseAddressTest::DatagramSocket0032() {
	$useLocalObjectStack();
	$var($String, testCaseID, "DatagramSocket0032"_s);
	$nc($System::out)->println($$str({" >> "_s, testCaseID, ": public void setReuseAddress(boolean on) throws SocketException"_s}));
	$var($DatagramSocket, ds1, nullptr);
	$var($DatagramSocket, ds2, nullptr);
	$var($Throwable, var$0, nullptr);
	try {
		try {
			$var($InetSocketAddress, isa1, createSocketAddress(0));
			$var($InetAddress, addr, $nc(isa1)->getAddress());
			$var($InetAddress, wildcard, $InetAddress::getByName("0.0.0.0"_s));
			bool var$1 = $nc(addr)->equals(wildcard);
			if (var$1 || addr->isLoopbackAddress()) {
				$System::out->println("Cannot check: addresses are equal"_s);
			}
			$assign(ds1, $new($DatagramSocket, ($SocketAddress*)nullptr));
			ds1->setReuseAddress(true);
			if (!ds1->getReuseAddress()) {
				$System::out->println("Cannot check:  safety for SO_REUSEADDR option is not guaranteed"_s);
			}
			ds1->bind(isa1);
			$var($InetSocketAddress, isa2, $new($InetSocketAddress, wildcard, ds1->getLocalPort()));
			$assign(ds2, $new($DatagramSocket, ($SocketAddress*)nullptr));
			ds2->setReuseAddress(true);
			if (!ds2->getReuseAddress()) {
				$System::out->println("Cannot check:  safety for SO_REUSEADDR option is not guaranteed"_s);
			}
			try {
				ds2->bind(isa2);
			} catch ($SocketException& e) {
				$throwNew($RuntimeException, $$str({"cannot bind second socket to "_s, isa2, " unexpected "_s, e}));
			}
			int32_t var$4 = ds1->getLocalPort();
			bool var$3 = var$4 != ds2->getLocalPort();
			bool var$2 = var$3 || !ds1->isBound();
			if (var$2 || !ds2->isBound()) {
				$System::out->println($$str({"bind() fails with: "_s, addr}));
				$System::out->println($$str({"  ds1 ["_s, $(getInfo(ds1)), "]"_s}));
				$System::out->println($$str({"  ds2 ["_s, $(getInfo(ds2)), "]"_s}));
				$System::out->println($$str({"  getReuseAddress(): "_s, $$str(ds2->getReuseAddress())}));
				$throwNew($RuntimeException, $$str({"bind() fails with: "_s, addr}));
			}
		} catch ($IOException& e) {
			e->printStackTrace($System::out);
			$throwNew($RuntimeException, $$str({"unexpected: "_s, e}));
		} catch ($SecurityException& e) {
			$System::out->println("Security restriction"_s);
		}
	} catch ($Throwable& var$5) {
		$assign(var$0, var$5);
	} /*finally*/ {
		if (ds1 != nullptr) {
			ds1->close();
		}
		if (ds2 != nullptr) {
			ds2->close();
		}
	}
	if (var$0 != nullptr) {
		$throw(var$0);
	}
	$System::out->println("OKAY"_s);
}

void ReuseAddressTest::DatagramSocket2028() {
	$useLocalObjectStack();
	$var($String, testCaseID, "DatagramSocket2028"_s);
	$nc($System::out)->println($$str({" >> "_s, testCaseID, ": public int getTrafficClass() throws SocketException"_s}));
	$var($DatagramSocket, ds, nullptr);
	$var($Throwable, var$0, nullptr);
	try {
		try {
			$assign(ds, $new($DatagramSocket));
			int32_t tc = ds->getTrafficClass();
			if (tc < 0 || tc > 255) {
				$throwNew($RuntimeException, $$str({"getTrafficClass() returns: "_s, $$str(tc)}));
			}
		} catch ($SecurityException& e) {
			$System::out->println($$str({"Security restriction: "_s, e}));
		} catch ($SocketException& e) {
			e->printStackTrace($System::out);
			$throwNew($RuntimeException, $$str({"Unexpected exception : "_s, e}));
		}
	} catch ($Throwable& var$1) {
		$assign(var$0, var$1);
	} /*finally*/ {
		if (ds != nullptr) {
			ds->close();
		}
	}
	if (var$0 != nullptr) {
		$throw(var$0);
	}
	$System::out->println("OKAY"_s);
}

void ReuseAddressTest::DatagramSocket2029() {
	$useLocalObjectStack();
	$var($String, testCaseID, "DatagramSocket2029"_s);
	$nc($System::out)->println($$str({" >> "_s, testCaseID, ": public void setTrafficClass(int tc) throws SocketException"_s}));
	$var($DatagramSocket, ds, nullptr);
	try {
		$assign(ds, $new($DatagramSocket));
	} catch ($SecurityException& e) {
		$System::out->println($$str({"Security restriction: "_s, e}));
	} catch ($IOException& e) {
		e->printStackTrace($System::out);
		$throwNew($RuntimeException, $$str({"cannot create socket: "_s, e}));
	}
	$var($ints, values, $new($ints, {
		$Integer::MIN_VALUE,
		$Integer::MIN_VALUE + 1,
		-1000,
		-2,
		-1,
		256,
		257,
		1000,
		50000,
		$Integer::MAX_VALUE - 1,
		$Integer::MAX_VALUE
	}));
	for (int32_t i = 0; i < values->length; ++i) {
		try {
			$nc(ds)->setTrafficClass(values->get(i));
			$System::out->println($$str({"No exception with: "_s, $$str(values->get(i))}));
			$System::out->println($$str({"getTrafficClass() returns: "_s, $$str(ds->getTrafficClass())}));
			ds->close();
			$throwNew($RuntimeException, $$str({"setTrafficClass() fails with : "_s, $$str(values->get(i))}));
		} catch ($SocketException& e) {
			$nc(ds)->close();
			e->printStackTrace($System::out);
			$throwNew($RuntimeException, $$str({"setTrafficClass() throws : "_s, e}));
		} catch ($IllegalArgumentException& e) {
		}
	}
	$System::out->println("OKAY"_s);
}

void ReuseAddressTest::DatagramSocket2030() {
	$useLocalObjectStack();
	$var($String, testCaseID, "DatagramSocket2030"_s);
	$nc($System::out)->println($$str({" >> "_s, testCaseID, ": public void setTrafficClass(int tc) throws SocketException"_s}));
	$var($DatagramSocket, ds, nullptr);
	try {
		$assign(ds, $new($DatagramSocket));
	} catch ($SecurityException& e) {
		$System::out->println($$str({"Security restriction: "_s, e}));
	} catch ($IOException& e) {
		e->printStackTrace($System::out);
		$throwNew($RuntimeException, $$str({"cannot create socket: "_s, e}));
	}
	for (int32_t i = 0; i <= 255; ++i) {
		try {
			$nc(ds)->setTrafficClass(i);
		} catch ($SocketException& e) {
		}
	}
	$System::out->println("OKAY"_s);
}

void ReuseAddressTest::DatagramSocket0034() {
	$useLocalObjectStack();
	$var($String, testCaseID, "DatagramSocket0034"_s);
	$nc($System::out)->println($$str({" >> "_s, testCaseID, ": public void setBroadcast(boolean on) throws SocketException"_s}));
	$var($DatagramSocket, ds, nullptr);
	$var($Throwable, var$0, nullptr);
	try {
		try {
			$assign(ds, $new($DatagramSocket));
			ds->setBroadcast(false);
			if (ds->getBroadcast() == true) {
				$throwNew($RuntimeException, "SO_BROADCAST is not set to false"_s);
			}
		} catch ($IOException& e) {
			e->printStackTrace($System::out);
			$throwNew($RuntimeException, $$str({"unexpected: "_s, e}));
		} catch ($SecurityException& e) {
			$System::out->println("Security restriction"_s);
		}
	} catch ($Throwable& var$1) {
		$assign(var$0, var$1);
	} /*finally*/ {
		if (ds != nullptr) {
			ds->close();
		}
	}
	if (var$0 != nullptr) {
		$throw(var$0);
	}
	$System::out->println("OKAY"_s);
}

void ReuseAddressTest::DatagramSocket0035() {
	$useLocalObjectStack();
	$var($String, testCaseID, "DatagramSocket0035"_s);
	$nc($System::out)->println($$str({" >> "_s, testCaseID, ": public void setBroadcast(boolean on) throws SocketException"_s}));
	$var($DatagramSocket, ds, nullptr);
	$var($Throwable, var$0, nullptr);
	try {
		try {
			$assign(ds, $new($DatagramSocket));
			ds->setBroadcast(true);
			if (ds->getBroadcast() == false) {
				$throwNew($RuntimeException, "SO_BROADCAST is not set to true"_s);
			}
		} catch ($IOException& e) {
			e->printStackTrace($System::out);
			$throwNew($RuntimeException, $$str({"unexpected: "_s, e}));
		} catch ($SecurityException& e) {
			$System::out->println("Security restriction"_s);
		}
	} catch ($Throwable& var$1) {
		$assign(var$0, var$1);
	} /*finally*/ {
		if (ds != nullptr) {
			ds->close();
		}
	}
	if (var$0 != nullptr) {
		$throw(var$0);
	}
	$System::out->println("OKAY"_s);
}

ReuseAddressTest::ReuseAddressTest() {
}

$Class* ReuseAddressTest::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(ReuseAddressTest, init$, void)},
		{"DatagramSocket0029", "()V", nullptr, $PUBLIC, $virtualMethod(ReuseAddressTest, DatagramSocket0029, void), "java.lang.Exception"},
		{"DatagramSocket0030", "()V", nullptr, $PUBLIC, $virtualMethod(ReuseAddressTest, DatagramSocket0030, void), "java.lang.Exception"},
		{"DatagramSocket0031", "()V", nullptr, $PUBLIC, $virtualMethod(ReuseAddressTest, DatagramSocket0031, void), "java.lang.Exception"},
		{"DatagramSocket0032", "()V", nullptr, $PUBLIC, $virtualMethod(ReuseAddressTest, DatagramSocket0032, void), "java.lang.Exception"},
		{"DatagramSocket0034", "()V", nullptr, $PUBLIC, $virtualMethod(ReuseAddressTest, DatagramSocket0034, void), "java.lang.Exception"},
		{"DatagramSocket0035", "()V", nullptr, $PUBLIC, $virtualMethod(ReuseAddressTest, DatagramSocket0035, void), "java.lang.Exception"},
		{"DatagramSocket2028", "()V", nullptr, $PUBLIC, $virtualMethod(ReuseAddressTest, DatagramSocket2028, void), "java.lang.Exception"},
		{"DatagramSocket2029", "()V", nullptr, $PUBLIC, $virtualMethod(ReuseAddressTest, DatagramSocket2029, void), "java.lang.Exception"},
		{"DatagramSocket2030", "()V", nullptr, $PUBLIC, $virtualMethod(ReuseAddressTest, DatagramSocket2030, void), "java.lang.Exception"},
		{"createSocketAddress", "(I)Ljava/net/InetSocketAddress;", nullptr, $STATIC, $staticMethod(ReuseAddressTest, createSocketAddress, $InetSocketAddress*, int32_t), "java.lang.Exception"},
		{"getInfo", "(Ljava/net/DatagramSocket;)Ljava/lang/String;", nullptr, 0, $virtualMethod(ReuseAddressTest, getInfo, $String*, $DatagramSocket*)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(ReuseAddressTest, main, void, $StringArray*), "java.lang.Exception"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"ReuseAddressTest",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(ReuseAddressTest, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ReuseAddressTest);
	});
	return class$;
}

$Class* ReuseAddressTest::class$ = nullptr;