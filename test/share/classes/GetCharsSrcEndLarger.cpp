#include <GetCharsSrcEndLarger.h>

#include <java/lang/StringBuffer.h>
#include <java/lang/StringIndexOutOfBoundsException.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $MethodInfo = ::java::lang::MethodInfo;
using $StringBuffer = ::java::lang::StringBuffer;
using $StringIndexOutOfBoundsException = ::java::lang::StringIndexOutOfBoundsException;

$MethodInfo _GetCharsSrcEndLarger_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(GetCharsSrcEndLarger::*)()>(&GetCharsSrcEndLarger::init$))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&GetCharsSrcEndLarger::main)), "java.lang.Exception"},
	{}
};

$ClassInfo _GetCharsSrcEndLarger_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"GetCharsSrcEndLarger",
	"java.lang.Object",
	nullptr,
	nullptr,
	_GetCharsSrcEndLarger_MethodInfo_
};

$Object* allocate$GetCharsSrcEndLarger($Class* clazz) {
	return $of($alloc(GetCharsSrcEndLarger));
}

void GetCharsSrcEndLarger::init$() {
}

void GetCharsSrcEndLarger::main($StringArray* args) {
	$useLocalCurrentObjectStackCache();
	bool exceptionOccurred = false;
	try {
		$$new($StringBuffer, "abc"_s)->getChars(1, 0, $$new($chars, 10), 0);
	} catch ($StringIndexOutOfBoundsException& sioobe) {
		exceptionOccurred = true;
	}
	if (!exceptionOccurred) {
		$throwNew($Exception, "StringBuffer.getChars() must throw an exception if srcBegin > srcEnd"_s);
	}
}

GetCharsSrcEndLarger::GetCharsSrcEndLarger() {
}

$Class* GetCharsSrcEndLarger::load$($String* name, bool initialize) {
	$loadClass(GetCharsSrcEndLarger, name, initialize, &_GetCharsSrcEndLarger_ClassInfo_, allocate$GetCharsSrcEndLarger);
	return class$;
}

$Class* GetCharsSrcEndLarger::class$ = nullptr;