#include <sun/net/www/MimeTable$DefaultInstanceHolder$1.h>

#include <java/net/FileNameMap.h>
#include <sun/net/www/MimeTable$DefaultInstanceHolder.h>
#include <sun/net/www/MimeTable.h>
#include <sun/net/www/URLConnection.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $FileNameMap = ::java::net::FileNameMap;
using $MimeTable = ::sun::net::www::MimeTable;
using $URLConnection = ::sun::net::www::URLConnection;

namespace sun {
	namespace net {
		namespace www {

$MethodInfo _MimeTable$DefaultInstanceHolder$1_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(MimeTable$DefaultInstanceHolder$1::*)()>(&MimeTable$DefaultInstanceHolder$1::init$))},
	{"run", "()Lsun/net/www/MimeTable;", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _MimeTable$DefaultInstanceHolder$1_EnclosingMethodInfo_ = {
	"sun.net.www.MimeTable$DefaultInstanceHolder",
	"getDefaultInstance",
	"()Lsun/net/www/MimeTable;"
};

$InnerClassInfo _MimeTable$DefaultInstanceHolder$1_InnerClassesInfo_[] = {
	{"sun.net.www.MimeTable$DefaultInstanceHolder", "sun.net.www.MimeTable", "DefaultInstanceHolder", $PRIVATE | $STATIC},
	{"sun.net.www.MimeTable$DefaultInstanceHolder$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _MimeTable$DefaultInstanceHolder$1_ClassInfo_ = {
	$ACC_SUPER,
	"sun.net.www.MimeTable$DefaultInstanceHolder$1",
	"java.lang.Object",
	"java.security.PrivilegedAction",
	nullptr,
	_MimeTable$DefaultInstanceHolder$1_MethodInfo_,
	"Ljava/lang/Object;Ljava/security/PrivilegedAction<Lsun/net/www/MimeTable;>;",
	&_MimeTable$DefaultInstanceHolder$1_EnclosingMethodInfo_,
	_MimeTable$DefaultInstanceHolder$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.net.www.MimeTable"
};

$Object* allocate$MimeTable$DefaultInstanceHolder$1($Class* clazz) {
	return $of($alloc(MimeTable$DefaultInstanceHolder$1));
}

void MimeTable$DefaultInstanceHolder$1::init$() {
}

$Object* MimeTable$DefaultInstanceHolder$1::run() {
	$var($MimeTable, instance, $new($MimeTable));
	$URLConnection::setFileNameMap(instance);
	return $of(instance);
}

MimeTable$DefaultInstanceHolder$1::MimeTable$DefaultInstanceHolder$1() {
}

$Class* MimeTable$DefaultInstanceHolder$1::load$($String* name, bool initialize) {
	$loadClass(MimeTable$DefaultInstanceHolder$1, name, initialize, &_MimeTable$DefaultInstanceHolder$1_ClassInfo_, allocate$MimeTable$DefaultInstanceHolder$1);
	return class$;
}

$Class* MimeTable$DefaultInstanceHolder$1::class$ = nullptr;

		} // www
	} // net
} // sun