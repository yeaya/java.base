#include <sun/net/www/content/text/Generic.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <sun/net/www/content/text/plain.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $plain = ::sun::net::www::content::text::plain;

namespace sun {
	namespace net {
		namespace www {
			namespace content {
				namespace text {

$MethodInfo _Generic_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(Generic::*)()>(&Generic::init$))},
	{}
};

$ClassInfo _Generic_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.net.www.content.text.Generic",
	"sun.net.www.content.text.plain",
	nullptr,
	nullptr,
	_Generic_MethodInfo_
};

$Object* allocate$Generic($Class* clazz) {
	return $of($alloc(Generic));
}

void Generic::init$() {
	$plain::init$();
}

Generic::Generic() {
}

$Class* Generic::load$($String* name, bool initialize) {
	$loadClass(Generic, name, initialize, &_Generic_ClassInfo_, allocate$Generic);
	return class$;
}

$Class* Generic::class$ = nullptr;

				} // text
			} // content
		} // www
	} // net
} // sun