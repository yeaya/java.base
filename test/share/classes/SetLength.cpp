#include <SetLength.h>

#include <java/io/PrintStream.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Exception.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/StringBuffer.h>
#include <java/lang/System.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $PrintStream = ::java::io::PrintStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $MethodInfo = ::java::lang::MethodInfo;
using $StringBuffer = ::java::lang::StringBuffer;

$MethodInfo _SetLength_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(SetLength::*)()>(&SetLength::init$))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&SetLength::main)), "java.lang.Exception"},
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
	$var($StringBuffer, active, $new($StringBuffer));
	active->append("first one"_s);
	$var($String, a, active->toString());
	active->setLength(0);
	active->append("second"_s);
	$var($String, b, active->toString());
	active->setLength(0);
	$init($System);
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