#include <LastErrorString$Test.h>

#include <LastErrorString.h>
#include <java/io/IOException.h>
#include <jcpp.h>

using $LastErrorString = ::LastErrorString;
using $IOException = ::java::io::IOException;
using $PrintStream = ::java::io::PrintStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$FieldInfo _LastErrorString$Test_FieldInfo_[] = {
	{"name", "Ljava/lang/String;", nullptr, 0, $field(LastErrorString$Test, name)},
	{}
};

$MethodInfo _LastErrorString$Test_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(LastErrorString$Test::*)($String*)>(&LastErrorString$Test::init$))},
	{"go", "()V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"run", "()V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.io.IOException"},
	{}
};

$InnerClassInfo _LastErrorString$Test_InnerClassesInfo_[] = {
	{"LastErrorString$Test", "LastErrorString", "Test", $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _LastErrorString$Test_ClassInfo_ = {
	$ACC_SUPER | $ABSTRACT,
	"LastErrorString$Test",
	"java.lang.Object",
	nullptr,
	_LastErrorString$Test_FieldInfo_,
	_LastErrorString$Test_MethodInfo_,
	nullptr,
	nullptr,
	_LastErrorString$Test_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"LastErrorString"
};

$Object* allocate$LastErrorString$Test($Class* clazz) {
	return $of($alloc(LastErrorString$Test));
}

void LastErrorString$Test::init$($String* name) {
	$set(this, name, name);
}

void LastErrorString$Test::go() {
	$useLocalCurrentObjectStackCache();
	try {
		this->run();
	} catch ($IOException& x) {
		$nc($System::err)->println(this->name);
		$nc($System::err)->println($$str({"  "_s, x}));
		return;
	}
	$nc($System::err)->println($$str({"WARNING: No exception for "_s, this->name}));
}

LastErrorString$Test::LastErrorString$Test() {
}

$Class* LastErrorString$Test::load$($String* name, bool initialize) {
	$loadClass(LastErrorString$Test, name, initialize, &_LastErrorString$Test_ClassInfo_, allocate$LastErrorString$Test);
	return class$;
}

$Class* LastErrorString$Test::class$ = nullptr;