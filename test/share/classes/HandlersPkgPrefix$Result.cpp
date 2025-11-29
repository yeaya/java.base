#include <HandlersPkgPrefix$Result.h>

#include <HandlersPkgPrefix.h>
#include <java/net/URL.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $URL = ::java::net::URL;

$FieldInfo _HandlersPkgPrefix$Result_FieldInfo_[] = {
	{"protocol", "Ljava/lang/String;", nullptr, $FINAL, $field(HandlersPkgPrefix$Result, protocol)},
	{"url", "Ljava/net/URL;", nullptr, $FINAL, $field(HandlersPkgPrefix$Result, url)},
	{"exception", "Ljava/lang/Exception;", nullptr, $FINAL, $field(HandlersPkgPrefix$Result, exception)},
	{}
};

$MethodInfo _HandlersPkgPrefix$Result_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;Ljava/net/URL;Ljava/lang/Exception;)V", nullptr, 0, $method(static_cast<void(HandlersPkgPrefix$Result::*)($String*,$URL*,$Exception*)>(&HandlersPkgPrefix$Result::init$))},
	{}
};

$InnerClassInfo _HandlersPkgPrefix$Result_InnerClassesInfo_[] = {
	{"HandlersPkgPrefix$Result", "HandlersPkgPrefix", "Result", $STATIC},
	{}
};

$ClassInfo _HandlersPkgPrefix$Result_ClassInfo_ = {
	$ACC_SUPER,
	"HandlersPkgPrefix$Result",
	"java.lang.Object",
	nullptr,
	_HandlersPkgPrefix$Result_FieldInfo_,
	_HandlersPkgPrefix$Result_MethodInfo_,
	nullptr,
	nullptr,
	_HandlersPkgPrefix$Result_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"HandlersPkgPrefix"
};

$Object* allocate$HandlersPkgPrefix$Result($Class* clazz) {
	return $of($alloc(HandlersPkgPrefix$Result));
}

void HandlersPkgPrefix$Result::init$($String* protocol, $URL* url, $Exception* exception) {
	$set(this, protocol, protocol);
	$set(this, url, url);
	$set(this, exception, exception);
}

HandlersPkgPrefix$Result::HandlersPkgPrefix$Result() {
}

$Class* HandlersPkgPrefix$Result::load$($String* name, bool initialize) {
	$loadClass(HandlersPkgPrefix$Result, name, initialize, &_HandlersPkgPrefix$Result_ClassInfo_, allocate$HandlersPkgPrefix$Result);
	return class$;
}

$Class* HandlersPkgPrefix$Result::class$ = nullptr;