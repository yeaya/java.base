#include <RestoreURL.h>
#include <java/io/ByteArrayInputStream.h>
#include <java/io/ByteArrayOutputStream.h>
#include <java/io/ObjectInputStream.h>
#include <java/io/ObjectOutputStream.h>
#include <java/net/URL.h>
#include <jcpp.h>

using $ByteArrayInputStream = ::java::io::ByteArrayInputStream;
using $ByteArrayOutputStream = ::java::io::ByteArrayOutputStream;
using $ObjectInputStream = ::java::io::ObjectInputStream;
using $ObjectOutputStream = ::java::io::ObjectOutputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $MethodInfo = ::java::lang::MethodInfo;
using $URL = ::java::net::URL;

void RestoreURL::init$() {
}

void RestoreURL::main($StringArray* args) {
	$useLocalObjectStack();
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
	if ((path == nullptr) || !path->equals($(origUrl->getPath()))) {
		$throwNew($Exception, "path not restored"_s);
	}
	if ((query == nullptr) || !query->equals($(origUrl->getQuery()))) {
		$throwNew($Exception, "query not restored"_s);
	}
}

RestoreURL::RestoreURL() {
}

$Class* RestoreURL::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(RestoreURL, init$, void)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(RestoreURL, main, void, $StringArray*), "java.lang.Exception"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"RestoreURL",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(RestoreURL, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(RestoreURL);
	});
	return class$;
}

$Class* RestoreURL::class$ = nullptr;