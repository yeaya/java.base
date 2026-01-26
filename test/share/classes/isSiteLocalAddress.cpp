#include <isSiteLocalAddress.h>

#include <java/net/InetAddress.h>
#include <java/util/Iterator.h>
#include <java/util/Vector.h>
#include <jcpp.h>

using $StringArray2 = $Array<::java::lang::String, 2>;
using $PrintStream = ::java::io::PrintStream;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $InetAddress = ::java::net::InetAddress;
using $Iterator = ::java::util::Iterator;
using $Vector = ::java::util::Vector;

$MethodInfo _isSiteLocalAddress_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(isSiteLocalAddress, init$, void)},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(isSiteLocalAddress, main, void, $StringArray*), "java.lang.Exception"},
	{}
};

$ClassInfo _isSiteLocalAddress_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"isSiteLocalAddress",
	"java.lang.Object",
	nullptr,
	nullptr,
	_isSiteLocalAddress_MethodInfo_
};

$Object* allocate$isSiteLocalAddress($Class* clazz) {
	return $of($alloc(isSiteLocalAddress));
}

void isSiteLocalAddress::init$() {
}

void isSiteLocalAddress::main($StringArray* args) {
	$useLocalCurrentObjectStackCache();
	$var($StringArray2, addrs, $new($StringArray2, {
		$$new($StringArray, {
			"9.255.255.255"_s,
			"false"_s
		}),
		$$new($StringArray, {
			"10.0.0.0"_s,
			"true"_s
		}),
		$$new($StringArray, {
			"10.255.255.255"_s,
			"true"_s
		}),
		$$new($StringArray, {
			"11.0.0.0"_s,
			"false"_s
		}),
		$$new($StringArray, {
			"172.15.255.255"_s,
			"false"_s
		}),
		$$new($StringArray, {
			"172.16.0.0"_s,
			"true"_s
		}),
		$$new($StringArray, {
			"172.30.1.2"_s,
			"true"_s
		}),
		$$new($StringArray, {
			"172.31.255.255"_s,
			"true"_s
		}),
		$$new($StringArray, {
			"172.32.0.0"_s,
			"false"_s
		}),
		$$new($StringArray, {
			"192.167.255.255"_s,
			"false"_s
		}),
		$$new($StringArray, {
			"192.168.0.0"_s,
			"true"_s
		}),
		$$new($StringArray, {
			"192.168.255.255"_s,
			"true"_s
		}),
		$$new($StringArray, {
			"192.169.0.0"_s,
			"false"_s
		})
	}));
	$var($Vector, v, $new($Vector));
	for (int32_t i = 0; i < addrs->length; ++i) {
		$var($InetAddress, addr, $InetAddress::getByName($nc(addrs->get(i))->get(0)));
		bool result = $$new($Boolean, $nc(addrs->get(i))->get(1))->booleanValue();
		if ($nc(addr)->isSiteLocalAddress() != result) {
			v->add(addrs->get(i));
		}
	}
	$var($Iterator, itr, v->iterator());
	while ($nc(itr)->hasNext()) {
		$var($StringArray, entry, $cast($StringArray, itr->next()));
		$nc($System::out)->println($$str({$nc(entry)->get(0), " should return "_s, entry->get(1), " when calling isSiteLocalAddress()"_s}));
	}
	if (v->size() > 0) {
		$throwNew($RuntimeException, "InetAddress.isSiteLocalAddress() test failed"_s);
	}
}

isSiteLocalAddress::isSiteLocalAddress() {
}

$Class* isSiteLocalAddress::load$($String* name, bool initialize) {
	$loadClass(isSiteLocalAddress, name, initialize, &_isSiteLocalAddress_ClassInfo_, allocate$isSiteLocalAddress);
	return class$;
}

$Class* isSiteLocalAddress::class$ = nullptr;