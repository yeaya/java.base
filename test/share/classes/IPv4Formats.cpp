#include <IPv4Formats.h>

#include <java/net/InetAddress.h>
#include <java/net/UnknownHostException.h>
#include <jcpp.h>

using $StringArray2 = $Array<::java::lang::String, 2>;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $InetAddress = ::java::net::InetAddress;
using $UnknownHostException = ::java::net::UnknownHostException;

$MethodInfo _IPv4Formats_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(IPv4Formats, init$, void)},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(IPv4Formats, main, void, $StringArray*)},
	{}
};

$ClassInfo _IPv4Formats_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"IPv4Formats",
	"java.lang.Object",
	nullptr,
	nullptr,
	_IPv4Formats_MethodInfo_
};

$Object* allocate$IPv4Formats($Class* clazz) {
	return $of($alloc(IPv4Formats));
}

void IPv4Formats::init$() {
}

void IPv4Formats::main($StringArray* args) {
	$useLocalCurrentObjectStackCache();
	$var($InetAddress, ad1, nullptr);
	$var($InetAddress, ad2, nullptr);
	$var($StringArray2, adds, $new($StringArray2, {
		$$new($StringArray, {
			"0"_s,
			"0.0.0.0"_s
		}),
		$$new($StringArray, {
			"126.1"_s,
			"126.0.0.1"_s
		}),
		$$new($StringArray, {
			"128.50.65534"_s,
			"128.50.255.254"_s
		}),
		$$new($StringArray, {
			"192.168.1.2"_s,
			"192.168.1.2"_s
		}),
		$$new($StringArray, {
			"invalidhost.invalid"_s,
			($String*)nullptr
		}),
		$$new($StringArray, {
			"1024.1.2.3"_s,
			($String*)nullptr
		}),
		$$new($StringArray, {
			"128.14.66000"_s,
			($String*)nullptr
		})
	}));
	for (int32_t i = 0; i < adds->length; ++i) {
		if ($nc(adds->get(i))->get(1) != nullptr) {
			try {
				$assign(ad1, $InetAddress::getByName($nc(adds->get(i))->get(0)));
				$assign(ad2, $InetAddress::getByName($nc(adds->get(i))->get(1)));
			} catch ($UnknownHostException& ue) {
				$throwNew($RuntimeException, $$str({"Wrong conversion: "_s, $nc(adds->get(i))->get(0), " should be "_s, $nc(adds->get(i))->get(1), " But throws "_s, ue}));
			}
			if (!$nc(ad1)->equals(ad2)) {
				$throwNew($RuntimeException, $$str({"Wrong conversion: "_s, $nc(adds->get(i))->get(0), " should be "_s, $nc(adds->get(i))->get(1), " But is "_s, ad1}));
			}
		} else {
			try {
				$assign(ad1, $InetAddress::getByName($nc(adds->get(i))->get(0)));
				$throwNew($RuntimeException, $$str({$nc(adds->get(i))->get(0), " should throw UnknownHostException!"_s}));
			} catch ($UnknownHostException& e) {
			}
		}
	}
}

IPv4Formats::IPv4Formats() {
}

$Class* IPv4Formats::load$($String* name, bool initialize) {
	$loadClass(IPv4Formats, name, initialize, &_IPv4Formats_ClassInfo_, allocate$IPv4Formats);
	return class$;
}

$Class* IPv4Formats::class$ = nullptr;