#include <B6529759.h>

#include <B6529759$a.h>
#include <java/net/URL.h>
#include <java/net/URLStreamHandler.h>
#include <jcpp.h>

using $B6529759$a = ::B6529759$a;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $URL = ::java::net::URL;
using $URLStreamHandler = ::java::net::URLStreamHandler;

$MethodInfo _B6529759_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(B6529759, init$, void)},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(B6529759, main, void, $StringArray*)},
	{}
};

$InnerClassInfo _B6529759_InnerClassesInfo_[] = {
	{"B6529759$a", "B6529759", "a", $STATIC},
	{}
};

$ClassInfo _B6529759_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"B6529759",
	"java.lang.Object",
	nullptr,
	nullptr,
	_B6529759_MethodInfo_,
	nullptr,
	nullptr,
	_B6529759_InnerClassesInfo_,
	nullptr,
	nullptr,
	"B6529759$a"
};

$Object* allocate$B6529759($Class* clazz) {
	return $of($alloc(B6529759));
}

void B6529759::init$() {
}

void B6529759::main($StringArray* args) {
	try {
		$new($URL, ($URL*)nullptr, "a:"_s, static_cast<$URLStreamHandler*>($$new($B6529759$a)));
	} catch ($Exception& e) {
		if (e->getCause() == nullptr) {
			e->printStackTrace();
			$throwNew($RuntimeException, "Failed: Exception has no cause"_s);
		}
	}
}

B6529759::B6529759() {
}

$Class* B6529759::load$($String* name, bool initialize) {
	$loadClass(B6529759, name, initialize, &_B6529759_ClassInfo_, allocate$B6529759);
	return class$;
}

$Class* B6529759::class$ = nullptr;