#include <Reset.h>

#include <java/io/InputStream.h>
#include <java/io/StreamTokenizer.h>
#include <java/io/StringBufferInputStream.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Exception.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $InputStream = ::java::io::InputStream;
using $StreamTokenizer = ::java::io::StreamTokenizer;
using $StringBufferInputStream = ::java::io::StringBufferInputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $MethodInfo = ::java::lang::MethodInfo;

$MethodInfo _Reset_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(Reset::*)()>(&Reset::init$))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&Reset::main)), "java.lang.Exception"},
	{}
};

$ClassInfo _Reset_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"Reset",
	"java.lang.Object",
	nullptr,
	nullptr,
	_Reset_MethodInfo_
};

$Object* allocate$Reset($Class* clazz) {
	return $of($alloc(Reset));
}

void Reset::init$() {
}

void Reset::main($StringArray* argv) {
	$useLocalCurrentObjectStackCache();
	$var($StringBufferInputStream, in, $new($StringBufferInputStream, "[ #"_s));
	$var($StreamTokenizer, scan, $new($StreamTokenizer, static_cast<$InputStream*>(in)));
	scan->nextToken();
	scan->nextToken();
	in->reset();
	int32_t token = scan->nextToken();
	if (token != u'[') {
		$throwNew($Exception, $$str({"Test failed: should get token [, but get "_s, $$str(token)}));
	}
}

Reset::Reset() {
}

$Class* Reset::load$($String* name, bool initialize) {
	$loadClass(Reset, name, initialize, &_Reset_ClassInfo_, allocate$Reset);
	return class$;
}

$Class* Reset::class$ = nullptr;