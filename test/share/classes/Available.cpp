#include <Available.h>

#include <java/io/InputStream.h>
#include <jcpp.h>

using $InputStream = ::java::io::InputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;

$MethodInfo _Available_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(Available::*)()>(&Available::init$))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&Available::main)), "java.lang.Exception"},
	{}
};

$ClassInfo _Available_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"Available",
	"java.lang.Object",
	nullptr,
	nullptr,
	_Available_MethodInfo_
};

$Object* allocate$Available($Class* clazz) {
	return $of($alloc(Available));
}

void Available::init$() {
}

void Available::main($StringArray* args) {
	int32_t bytesAvailable = $nc($System::in)->available();
	if (bytesAvailable != 0) {
		$throwNew($RuntimeException, "System.in.available returned non-zero"_s);
	}
}

Available::Available() {
}

$Class* Available::load$($String* name, bool initialize) {
	$loadClass(Available, name, initialize, &_Available_ClassInfo_, allocate$Available);
	return class$;
}

$Class* Available::class$ = nullptr;