#include <COM/foo/content/text/plain.h>

#include <java/io/IOException.h>
#include <java/io/InputStream.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/StringBuffer.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/net/ContentHandler.h>
#include <java/net/URL.h>
#include <java/net/URLConnection.h>
#include <jcpp.h>

using $IOException = ::java::io::IOException;
using $InputStream = ::java::io::InputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $StringBuffer = ::java::lang::StringBuffer;
using $ContentHandler = ::java::net::ContentHandler;
using $URL = ::java::net::URL;
using $URLConnection = ::java::net::URLConnection;

namespace COM {
	namespace foo {
		namespace content {
			namespace text {

$MethodInfo _plain_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(plain::*)()>(&plain::init$))},
	{"getContent", "(Ljava/net/URLConnection;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _plain_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"COM.foo.content.text.plain",
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
	try {
		$var($InputStream, is, $nc(uc)->getInputStream());
		$var($StringBuffer, sb, $new($StringBuffer));
		int32_t c = 0;
		sb->append($$str({"[Content of "_s, $(uc->getURL()), "]\n\n"_s}));
		sb->append("[This opening message brought to you by your plain/text\n"_s);
		sb->append("content handler. To remove this content handler, delete the\n"_s);
		sb->append("COM.foo.content.text directory from your class path and\n"_s);
		sb->append("the java.content.handler.pkgs property from your HotJava\n"_s);
		sb->append("properties file.]\n"_s);
		sb->append("----------------------------------------------------------------\n\n"_s);
		while ((c = $nc(is)->read()) >= 0) {
			sb->append((char16_t)c);
		}
		$nc(is)->close();
		return $of(sb->toString());
	} catch ($IOException&) {
		$var($IOException, e, $catch());
		return $of($str({"Problem reading document: "_s, $($nc(uc)->getURL())}));
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
	} // foo
} // COM