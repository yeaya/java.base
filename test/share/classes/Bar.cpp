#include <Bar.h>

#include <jcpp.h>

using $PrintStream = ::java::io::PrintStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$FieldInfo _Bar_FieldInfo_[] = {
	{"obj", "Ljava/lang/Object;", nullptr, $STATIC, $staticField(Bar, obj)},
	{}
};

$MethodInfo _Bar_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(Bar::*)()>(&Bar::init$))},
	{}
};

$ClassInfo _Bar_ClassInfo_ = {
	$ACC_SUPER,
	"Bar",
	"java.lang.Object",
	nullptr,
	_Bar_FieldInfo_,
	_Bar_MethodInfo_
};

$Object* allocate$Bar($Class* clazz) {
	return $of($alloc(Bar));
}

$Object* Bar::obj = nullptr;

void Bar::init$() {
}

void clinit$Bar($Class* class$) {
	{
		$nc($System::out)->println("Bar.<clinit> called"_s);
	}
	$assignStatic(Bar::obj, $new($Object));
}

Bar::Bar() {
}

$Class* Bar::load$($String* name, bool initialize) {
	$loadClass(Bar, name, initialize, &_Bar_ClassInfo_, clinit$Bar, allocate$Bar);
	return class$;
}

$Class* Bar::class$ = nullptr;