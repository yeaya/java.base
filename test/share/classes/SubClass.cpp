#include <SubClass.h>

#include <SubClass$PW.h>
#include <java/io/PrintWriter.h>
#include <java/io/StringWriter.h>
#include <java/io/Writer.h>
#include <jcpp.h>

using $SubClass$PW = ::SubClass$PW;
using $PrintStream = ::java::io::PrintStream;
using $PrintWriter = ::java::io::PrintWriter;
using $StringWriter = ::java::io::StringWriter;
using $Writer = ::java::io::Writer;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$MethodInfo _SubClass_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(SubClass, init$, void)},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(SubClass, main, void, $StringArray*), "java.lang.Exception"},
	{}
};

$InnerClassInfo _SubClass_InnerClassesInfo_[] = {
	{"SubClass$PW", "SubClass", "PW", $STATIC},
	{}
};

$ClassInfo _SubClass_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"SubClass",
	"java.lang.Object",
	nullptr,
	nullptr,
	_SubClass_MethodInfo_,
	nullptr,
	nullptr,
	_SubClass_InnerClassesInfo_,
	nullptr,
	nullptr,
	"SubClass$PW"
};

$Object* allocate$SubClass($Class* clazz) {
	return $of($alloc(SubClass));
}

void SubClass::init$() {
}

void SubClass::main($StringArray* args) {
	$useLocalCurrentObjectStackCache();
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
	$loadClass(SubClass, name, initialize, &_SubClass_ClassInfo_, allocate$SubClass);
	return class$;
}

$Class* SubClass::class$ = nullptr;