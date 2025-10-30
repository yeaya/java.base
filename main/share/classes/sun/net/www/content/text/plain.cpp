#include <sun/net/www/content/text/plain.h>

#include <java/io/IOException.h>
#include <java/io/InputStream.h>
#include <java/net/ContentHandler.h>
#include <java/net/URLConnection.h>
#include <sun/net/www/content/text/PlainTextInputStream.h>
#include <jcpp.h>

using $IOException = ::java::io::IOException;
using $InputStream = ::java::io::InputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ContentHandler = ::java::net::ContentHandler;
using $URLConnection = ::java::net::URLConnection;
using $PlainTextInputStream = ::sun::net::www::content::text::PlainTextInputStream;

namespace sun {
	namespace net {
		namespace www {
			namespace content {
				namespace text {

$MethodInfo _plain_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(plain::*)()>(&plain::init$))},
	{"getContent", "(Ljava/net/URLConnection;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _plain_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.net.www.content.text.plain",
	"java.net.ContentHandler",
	nullptr,
	nullptr,
	_plain_MethodInfo_
};

$Object* allocate$plain($Class* clazz) {
	return $of($alloc(plain));
}

void plain::init$() {
	$ContentHandler::init$();
}

$Object* plain::getContent($URLConnection* uc) {
	$useLocalCurrentObjectStackCache();
	try {
		$var($InputStream, is, $nc(uc)->getInputStream());
		return $of($new($PlainTextInputStream, $(uc->getInputStream())));
	} catch ($IOException& e) {
		return $of($str({"Error reading document:\n"_s, $(e->toString())}));
	}
	$shouldNotReachHere();
}

plain::plain() {
}

$Class* plain::load$($String* name, bool initialize) {
	$loadClass(plain, name, initialize, &_plain_ClassInfo_, allocate$plain);
	return class$;
}

$Class* plain::class$ = nullptr;

				} // text
			} // content
		} // www
	} // net
} // sun