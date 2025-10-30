#include <RestoreURL.h>

#include <java/io/ByteArrayInputStream.h>
#include <java/io/ByteArrayOutputStream.h>
#include <java/io/InputStream.h>
#include <java/io/ObjectInputStream.h>
#include <java/io/ObjectOutputStream.h>
#include <java/io/OutputStream.h>
#include <java/net/URL.h>
#include <jcpp.h>

using $ByteArrayInputStream = ::java::io::ByteArrayInputStream;
using $ByteArrayOutputStream = ::java::io::ByteArrayOutputStream;
using $InputStream = ::java::io::InputStream;
using $ObjectInputStream = ::java::io::ObjectInputStream;
using $ObjectOutputStream = ::java::io::ObjectOutputStream;
using $OutputStream = ::java::io::OutputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $MethodInfo = ::java::lang::MethodInfo;
using $URL = ::java::net::URL;

$MethodInfo _RestoreURL_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(RestoreURL::*)()>(&RestoreURL::init$))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&RestoreURL::main)), "java.lang.Exception"},
	{}
};

$ClassInfo _RestoreURL_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"RestoreURL",
	"java.lang.Object",
	nullptr,
	nullptr,
	_RestoreURL_MethodInfo_
};

$Object* allocate$RestoreURL($Class* clazz) {
	return $of($alloc(RestoreURL));
}

void RestoreURL::init$() {
}

void RestoreURL::main($StringArray* args) {
	$useLocalCurrentObjectStackCache();
	$var($URL, origUrl, $new($URL, "http://localhost/my_path?my_query"_s));
	$var($ByteArrayOutputStream, out, $new($ByteArrayOutputStream));
	$var($ObjectOutputStream, oos, $new($ObjectOutputStream, out));
	oos->writeObject(origUrl);
	oos->close();
	$var($ObjectInputStream, ois, $new($ObjectInputStream, $$new($ByteArrayInputStream, $(out->toByteArray()))));
	$var($URL, restoredUrl, $cast($URL, ois->readObject()));
	ois->close();
	$var($String, path, $nc(restoredUrl)->getPath());
	$var($String, query, restoredUrl->getQuery());
	if ((path == nullptr) || !$nc(path)->equals($(origUrl->getPath()))) {
		$throwNew($Exception, "path not restored"_s);
	}
	if ((query == nullptr) || !$nc(query)->equals($(origUrl->getQuery()))) {
		$throwNew($Exception, "query not restored"_s);
	}
}

RestoreURL::RestoreURL() {
}

$Class* RestoreURL::load$($String* name, bool initialize) {
	$loadClass(RestoreURL, name, initialize, &_RestoreURL_ClassInfo_, allocate$RestoreURL);
	return class$;
}

$Class* RestoreURL::class$ = nullptr;