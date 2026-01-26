#include <com/foo/content/text/Plain2.h>

#include <java/io/IOException.h>
#include <java/io/InputStream.h>
#include <java/lang/StringBuffer.h>
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
using $URLConnection = ::java::net::URLConnection;

namespace com {
	namespace foo {
		namespace content {
			namespace text {

$MethodInfo _Plain2_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(Plain2, init$, void)},
	{"getContent", "(Ljava/net/URLConnection;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(Plain2, getContent, $Object*, $URLConnection*)},
	{}
};

$ClassInfo _Plain2_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.foo.content.text.Plain2",
	"java.net.ContentHandler",
	nullptr,
	nullptr,
	_Plain2_MethodInfo_
};

$Object* allocate$Plain2($Class* clazz) {
	return $of($alloc(Plain2));
}

void Plain2::init$() {
	$ContentHandler::init$();
}

$Object* Plain2::getContent($URLConnection* uc) {
	$useLocalCurrentObjectStackCache();
	try {
		$var($InputStream, is, $nc(uc)->getInputStream());
		$var($StringBuffer, sb, $new($StringBuffer));
		int32_t c = 0;
		sb->append($$str({"[Content of "_s, $(uc->getURL()), "]\n\n"_s}));
		sb->append("[This opening message brought to you by your plain/text\n"_s);
		sb->append("content handler. To remove this content handler, delete the\n"_s);
		sb->append("com.foo.content.text directory from your class path and\n"_s);
		sb->append("the java.content.handler.pkgs property from your HotJava\n"_s);
		sb->append("properties file.]\n"_s);
		sb->append("----------------------------------------------------------------\n\n"_s);
		while ((c = $nc(is)->read()) >= 0) {
			sb->append((char16_t)c);
		}
		$nc(is)->close();
		return $of(sb->toString());
	} catch ($IOException& e) {
		return $of($str({"Problem reading document: "_s, $($nc(uc)->getURL())}));
	}
	$shouldNotReachHere();
}

Plain2::Plain2() {
}

$Class* Plain2::load$($String* name, bool initialize) {
	$loadClass(Plain2, name, initialize, &_Plain2_ClassInfo_, allocate$Plain2);
	return class$;
}

$Class* Plain2::class$ = nullptr;

			} // text
		} // content
	} // foo
} // com