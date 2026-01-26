#include <SetLength.h>

#include <java/lang/StringBuffer.h>
#include <jcpp.h>

using $PrintStream = ::java::io::PrintStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $MethodInfo = ::java::lang::MethodInfo;
using $StringBuffer = ::java::lang::StringBuffer;

$MethodInfo _SetLength_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(SetLength, init$, void)},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(SetLength, main, void, $StringArray*), "java.lang.Exception"},
	{}
};

$ClassInfo _SetLength_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"SetLength",
	"java.lang.Object",
	nullptr,
	nullptr,
	_SetLength_MethodInfo_
};

$Object* allocate$SetLength($Class* clazz) {
	return $of($alloc(SetLength));
}

void SetLength::init$() {
}

void SetLength::main($StringArray* argv) {
	$useLocalCurrentObjectStackCache();
	$var($StringBuffer, active, $new($StringBuffer));
	active->append("first one"_s);
	$var($String, a, active->toString());
	active->setLength(0);
	active->append("second"_s);
	$var($String, b, active->toString());
	active->setLength(0);
	$nc($System::out)->println($$str({"first: "_s, a}));
	$nc($System::out)->println($$str({"second: "_s, b}));
	if (!$nc(a)->equals("first one"_s)) {
		$throwNew($Exception, "StringBuffer.setLength() overwrote string"_s);
	}
}

SetLength::SetLength() {
}

$Class* SetLength::load$($String* name, bool initialize) {
	$loadClass(SetLength, name, initialize, &_SetLength_ClassInfo_, allocate$SetLength);
	return class$;
}

$Class* SetLength::class$ = nullptr;