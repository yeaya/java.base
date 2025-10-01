#include <Resources.h>

#include <java/io/PrintStream.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/Runtime.h>
#include <java/lang/String.h>
#include <java/lang/System.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $PrintStream = ::java::io::PrintStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runtime = ::java::lang::Runtime;

$FieldInfo _Resources_FieldInfo_[] = {
	{"out", "Ljava/io/PrintStream;", nullptr, $STATIC, $staticField(Resources, out)},
	{}
};

$MethodInfo _Resources_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(Resources::*)()>(&Resources::init$))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&Resources::main)), "java.lang.Exception"},
	{}
};

$ClassInfo _Resources_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"Resources",
	"java.lang.Object",
	nullptr,
	_Resources_FieldInfo_,
	_Resources_MethodInfo_
};

$Object* allocate$Resources($Class* clazz) {
	return $of($alloc(Resources));
}

$PrintStream* Resources::out = nullptr;

void Resources::init$() {
}

void Resources::main($StringArray* args) {
	$init(Resources);
	$var($Runtime, rt, $Runtime::getRuntime());
	$nc(Resources::out)->println($$str({$$str($nc(rt)->freeMemory()), " bytes free"_s}));
	$nc(Resources::out)->println($$str({$$str($nc(rt)->totalMemory()), "  bytes in use"_s}));
	$nc(Resources::out)->println($$str({$$str($nc(rt)->maxMemory()), " bytes max"_s}));
	$nc(Resources::out)->println($$str({$$str($nc(rt)->availableProcessors()), " processors"_s}));
}

void clinit$Resources($Class* class$) {
	$init($System);
	$assignStatic(Resources::out, $System::err);
}

Resources::Resources() {
}

$Class* Resources::load$($String* name, bool initialize) {
	$loadClass(Resources, name, initialize, &_Resources_ClassInfo_, clinit$Resources, allocate$Resources);
	return class$;
}

$Class* Resources::class$ = nullptr;