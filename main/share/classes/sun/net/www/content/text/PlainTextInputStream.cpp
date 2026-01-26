#include <sun/net/www/content/text/PlainTextInputStream.h>

#include <java/io/FilterInputStream.h>
#include <java/io/InputStream.h>
#include <jcpp.h>

using $FilterInputStream = ::java::io::FilterInputStream;
using $InputStream = ::java::io::InputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace sun {
	namespace net {
		namespace www {
			namespace content {
				namespace text {

$MethodInfo _PlainTextInputStream_MethodInfo_[] = {
	{"<init>", "(Ljava/io/InputStream;)V", nullptr, 0, $method(PlainTextInputStream, init$, void, $InputStream*)},
	{}
};

$ClassInfo _PlainTextInputStream_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.net.www.content.text.PlainTextInputStream",
	"java.io.FilterInputStream",
	nullptr,
	nullptr,
	_PlainTextInputStream_MethodInfo_
};

$Object* allocate$PlainTextInputStream($Class* clazz) {
	return $of($alloc(PlainTextInputStream));
}

void PlainTextInputStream::init$($InputStream* is) {
	$FilterInputStream::init$(is);
}

PlainTextInputStream::PlainTextInputStream() {
}

$Class* PlainTextInputStream::load$($String* name, bool initialize) {
	$loadClass(PlainTextInputStream, name, initialize, &_PlainTextInputStream_ClassInfo_, allocate$PlainTextInputStream);
	return class$;
}

$Class* PlainTextInputStream::class$ = nullptr;

				} // text
			} // content
		} // www
	} // net
} // sun