#include <Substring.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/RuntimeException.h>
#include <java/lang/String.h>
#include <java/lang/StringBuffer.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $StringBuffer = ::java::lang::StringBuffer;

$MethodInfo _Substring_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(Substring::*)()>(&Substring::init$))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&Substring::main))},
	{}
};

$ClassInfo _Substring_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"Substring",
	"java.lang.Object",
	nullptr,
	nullptr,
	_Substring_MethodInfo_
};

$Object* allocate$Substring($Class* clazz) {
	return $of($alloc(Substring));
}

void Substring::init$() {
}

void Substring::main($StringArray* args) {
	$var($StringBuffer, buffer, $new($StringBuffer));
	buffer->append("Guten Morgen!"_s);
	if ($nc($(buffer->substring(0)))->length() != 13) {
		$throwNew($RuntimeException);
	}
}

Substring::Substring() {
}

$Class* Substring::load$($String* name, bool initialize) {
	$loadClass(Substring, name, initialize, &_Substring_ClassInfo_, allocate$Substring);
	return class$;
}

$Class* Substring::class$ = nullptr;