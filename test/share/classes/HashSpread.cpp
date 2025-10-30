#include <HashSpread.h>

#include <java/lang/Error.h>
#include <java/lang/StringBuffer.h>
#include <java/net/InetAddress.h>
#include <java/net/UnknownHostException.h>
#include <java/util/Random.h>
#include <jcpp.h>

#undef MAX_SHORT
#undef MAX_VALUE
#undef MIN_SHORT
#undef MIN_VALUE

using $ClassInfo = ::java::lang::ClassInfo;
using $Double = ::java::lang::Double;
using $Error = ::java::lang::Error;
using $FieldInfo = ::java::lang::FieldInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $Short = ::java::lang::Short;
using $StringBuffer = ::java::lang::StringBuffer;
using $InetAddress = ::java::net::InetAddress;
using $UnknownHostException = ::java::net::UnknownHostException;
using $Random = ::java::util::Random;

$FieldInfo _HashSpread_FieldInfo_[] = {
	{"r", "Ljava/util/Random;", nullptr, $STATIC, $staticField(HashSpread, r)},
	{}
};

$MethodInfo _HashSpread_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(HashSpread::*)()>(&HashSpread::init$))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&HashSpread::main)), "java.lang.Exception"},
	{"randomIPv6Adress", "()Ljava/net/InetAddress;", nullptr, $STATIC, $method(static_cast<$InetAddress*(*)()>(&HashSpread::randomIPv6Adress))},
	{}
};

$ClassInfo _HashSpread_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"HashSpread",
	"java.lang.Object",
	nullptr,
	_HashSpread_FieldInfo_,
	_HashSpread_MethodInfo_
};

$Object* allocate$HashSpread($Class* clazz) {
	return $of($alloc(HashSpread));
}

$Random* HashSpread::r = nullptr;

void HashSpread::init$() {
}

$InetAddress* HashSpread::randomIPv6Adress() {
	$init(HashSpread);
	$useLocalCurrentObjectStackCache();
	$var($StringBuffer, sb, $new($StringBuffer));
	for (int32_t i = 0; i < 8; ++i) {
		if (i > 0) {
			sb->append(":"_s);
		}
		for (int32_t j = 0; j < 4; ++j) {
			int32_t v = $nc(HashSpread::r)->nextInt(16);
			if (v < 10) {
				sb->append($($Integer::toString(v)));
			} else {
				char16_t c = (char16_t)(u'A' + v - 10);
				sb->append(c);
			}
		}
	}
	try {
		return $InetAddress::getByName($(sb->toString()));
	} catch ($UnknownHostException& x) {
		$throwNew($Error, "Internal error in test"_s);
	}
	$shouldNotReachHere();
}

void HashSpread::main($StringArray* args) {
	$init(HashSpread);
	$useLocalCurrentObjectStackCache();
	int32_t iterations = 10000;
	if ($nc(args)->length > 0) {
		iterations = $Integer::parseInt(args->get(0));
	}
	int32_t MIN_SHORT = (int32_t)$Short::MIN_VALUE;
	int32_t MAX_SHORT = (int32_t)$Short::MAX_VALUE;
	int32_t narrow = 0;
	for (int32_t i = 0; i < iterations; ++i) {
		int32_t hc = $nc($(randomIPv6Adress()))->hashCode();
		if (hc >= MIN_SHORT && hc <= MAX_SHORT) {
			++narrow;
		}
	}
	double percent = (double)narrow / (double)iterations * 100.0;
	if (percent > 85.0) {
		$throwNew($RuntimeException, $$str({$$str(percent), " of hash codes were in "_s, $$str(MIN_SHORT), " to "_s, $$str(MAX_SHORT), " range."_s}));
	}
}

void clinit$HashSpread($Class* class$) {
	$assignStatic(HashSpread::r, $new($Random));
}

HashSpread::HashSpread() {
}

$Class* HashSpread::load$($String* name, bool initialize) {
	$loadClass(HashSpread, name, initialize, &_HashSpread_ClassInfo_, clinit$HashSpread, allocate$HashSpread);
	return class$;
}

$Class* HashSpread::class$ = nullptr;