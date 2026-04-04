#include <LastErrorString$Test.h>
#include <LastErrorString.h>
#include <java/io/IOException.h>
#include <jcpp.h>

using $IOException = ::java::io::IOException;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

void LastErrorString$Test::init$($String* name) {
	$set(this, name, name);
}

void LastErrorString$Test::go() {
	$useLocalObjectStack();
	try {
		this->run();
	} catch ($IOException& x) {
		$nc($System::err)->println(this->name);
		$System::err->println($$str({"  "_s, x}));
		return;
	}
	$nc($System::err)->println($$str({"WARNING: No exception for "_s, this->name}));
}

LastErrorString$Test::LastErrorString$Test() {
}

$Class* LastErrorString$Test::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"name", "Ljava/lang/String;", nullptr, 0, $field(LastErrorString$Test, name)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(LastErrorString$Test, init$, void, $String*)},
		{"go", "()V", nullptr, $PUBLIC, $virtualMethod(LastErrorString$Test, go, void), "java.io.IOException"},
		{"run", "()V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(LastErrorString$Test, run, void), "java.io.IOException"},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"LastErrorString$Test", "LastErrorString", "Test", $STATIC | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER | $ABSTRACT,
		"LastErrorString$Test",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"LastErrorString"
	};
	$loadClass(LastErrorString$Test, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(LastErrorString$Test);
	});
	return class$;
}

$Class* LastErrorString$Test::class$ = nullptr;