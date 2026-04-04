#include <SubClass.h>
#include <SubClass$PW.h>
#include <java/io/PrintWriter.h>
#include <java/io/StringWriter.h>
#include <jcpp.h>

using $SubClass$PW = ::SubClass$PW;
using $PrintWriter = ::java::io::PrintWriter;
using $StringWriter = ::java::io::StringWriter;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

void SubClass::init$() {
}

void SubClass::main($StringArray* args) {
	$useLocalObjectStack();
	$var($StringWriter, sw, $new($StringWriter));
	$var($PrintWriter, pw, $new($SubClass$PW, sw));
	pw->println("Hello"_s);
	pw->close();
	$var($String, s, sw->toString());
	$nc($System::err)->print(s);
	if (!$nc(s)->equals($$str({"Hello[EOL]"_s, $($System::getProperty("line.separator"_s))}))) {
		$throwNew($Exception, "Subclass broken"_s);
	}
}

SubClass::SubClass() {
}

$Class* SubClass::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(SubClass, init$, void)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(SubClass, main, void, $StringArray*), "java.lang.Exception"},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"SubClass$PW", "SubClass", "PW", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"SubClass",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"SubClass$PW"
	};
	$loadClass(SubClass, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(SubClass);
	});
	return class$;
}

$Class* SubClass::class$ = nullptr;