#include <sun/net/www/MimeTable$DefaultInstanceHolder$1.h>
#include <sun/net/www/MimeTable$DefaultInstanceHolder.h>
#include <sun/net/www/MimeTable.h>
#include <sun/net/www/URLConnection.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $MimeTable = ::sun::net::www::MimeTable;
using $URLConnection = ::sun::net::www::URLConnection;

namespace sun {
	namespace net {
		namespace www {

void MimeTable$DefaultInstanceHolder$1::init$() {
}

$Object* MimeTable$DefaultInstanceHolder$1::run() {
	$var($MimeTable, instance, $new($MimeTable));
	$URLConnection::setFileNameMap(instance);
	return instance;
}

MimeTable$DefaultInstanceHolder$1::MimeTable$DefaultInstanceHolder$1() {
}

$Class* MimeTable$DefaultInstanceHolder$1::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(MimeTable$DefaultInstanceHolder$1, init$, void)},
		{"run", "()Lsun/net/www/MimeTable;", nullptr, $PUBLIC, $virtualMethod(MimeTable$DefaultInstanceHolder$1, run, $Object*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"sun.net.www.MimeTable$DefaultInstanceHolder",
		"getDefaultInstance",
		"()Lsun/net/www/MimeTable;"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.net.www.MimeTable$DefaultInstanceHolder", "sun.net.www.MimeTable", "DefaultInstanceHolder", $PRIVATE | $STATIC},
		{"sun.net.www.MimeTable$DefaultInstanceHolder$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.net.www.MimeTable$DefaultInstanceHolder$1",
		"java.lang.Object",
		"java.security.PrivilegedAction",
		nullptr,
		methodInfos$$,
		"Ljava/lang/Object;Ljava/security/PrivilegedAction<Lsun/net/www/MimeTable;>;",
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.net.www.MimeTable"
	};
	$loadClass(MimeTable$DefaultInstanceHolder$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(MimeTable$DefaultInstanceHolder$1);
	});
	return class$;
}

$Class* MimeTable$DefaultInstanceHolder$1::class$ = nullptr;

		} // www
	} // net
} // sun