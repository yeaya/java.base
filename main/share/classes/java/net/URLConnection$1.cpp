#include <java/net/URLConnection$1.h>
#include <java/net/FileNameMap.h>
#include <java/net/URLConnection.h>
#include <sun/net/www/MimeTable.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $MimeTable = ::sun::net::www::MimeTable;

namespace java {
	namespace net {

void URLConnection$1::init$() {
	$set(this, internalMap, $MimeTable::loadTable());
}

$String* URLConnection$1::getContentTypeFor($String* fileName) {
	return $nc(this->internalMap)->getContentTypeFor(fileName);
}

URLConnection$1::URLConnection$1() {
}

$Class* URLConnection$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"internalMap", "Ljava/net/FileNameMap;", nullptr, $PRIVATE, $field(URLConnection$1, internalMap)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(URLConnection$1, init$, void)},
		{"getContentTypeFor", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(URLConnection$1, getContentTypeFor, $String*, $String*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"java.net.URLConnection",
		"getFileNameMap",
		"()Ljava/net/FileNameMap;"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.net.URLConnection$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"java.net.URLConnection$1",
		"java.lang.Object",
		"java.net.FileNameMap",
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.net.URLConnection"
	};
	$loadClass(URLConnection$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(URLConnection$1);
	});
	return class$;
}

$Class* URLConnection$1::class$ = nullptr;

	} // net
} // java