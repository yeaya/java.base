#include <B6463990.h>

#include <java/net/URLDecoder.h>
#include <jcpp.h>

using $PrintStream = ::java::io::PrintStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $URLDecoder = ::java::net::URLDecoder;

$MethodInfo _B6463990_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(B6463990::*)()>(&B6463990::init$))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&B6463990::main))},
	{}
};

$ClassInfo _B6463990_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"B6463990",
	"java.lang.Object",
	nullptr,
	nullptr,
	_B6463990_MethodInfo_
};

$Object* allocate$B6463990($Class* clazz) {
	return $of($alloc(B6463990));
}

void B6463990::init$() {
}

void B6463990::main($StringArray* args) {
	bool except = false;
	try {
		$var($String, s, $URLDecoder::decode("%-1"_s, "iso-8859-1"_s));
		$nc($System::out)->println((int32_t)$nc(s)->charAt(0));
	} catch ($Exception& e) {
		except = true;
	}
	if (!except) {
		$throwNew($RuntimeException, "IllegalArgumentException not thrown!"_s);
	}
}

B6463990::B6463990() {
}

$Class* B6463990::load$($String* name, bool initialize) {
	$loadClass(B6463990, name, initialize, &_B6463990_ClassInfo_, allocate$B6463990);
	return class$;
}

$Class* B6463990::class$ = nullptr;