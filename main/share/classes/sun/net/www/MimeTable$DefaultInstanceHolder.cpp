#include <sun/net/www/MimeTable$DefaultInstanceHolder.h>

#include <java/security/AccessController.h>
#include <java/security/PrivilegedAction.h>
#include <sun/net/www/MimeTable$DefaultInstanceHolder$1.h>
#include <sun/net/www/MimeTable.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AccessController = ::java::security::AccessController;
using $PrivilegedAction = ::java::security::PrivilegedAction;
using $MimeTable = ::sun::net::www::MimeTable;
using $MimeTable$DefaultInstanceHolder$1 = ::sun::net::www::MimeTable$DefaultInstanceHolder$1;

namespace sun {
	namespace net {
		namespace www {

$FieldInfo _MimeTable$DefaultInstanceHolder_FieldInfo_[] = {
	{"defaultInstance", "Lsun/net/www/MimeTable;", nullptr, $STATIC | $FINAL, $staticField(MimeTable$DefaultInstanceHolder, defaultInstance)},
	{}
};

$MethodInfo _MimeTable$DefaultInstanceHolder_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(MimeTable$DefaultInstanceHolder, init$, void)},
	{"getDefaultInstance", "()Lsun/net/www/MimeTable;", nullptr, $STATIC, $staticMethod(MimeTable$DefaultInstanceHolder, getDefaultInstance, $MimeTable*)},
	{}
};

$InnerClassInfo _MimeTable$DefaultInstanceHolder_InnerClassesInfo_[] = {
	{"sun.net.www.MimeTable$DefaultInstanceHolder", "sun.net.www.MimeTable", "DefaultInstanceHolder", $PRIVATE | $STATIC},
	{"sun.net.www.MimeTable$DefaultInstanceHolder$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _MimeTable$DefaultInstanceHolder_ClassInfo_ = {
	$ACC_SUPER,
	"sun.net.www.MimeTable$DefaultInstanceHolder",
	"java.lang.Object",
	nullptr,
	_MimeTable$DefaultInstanceHolder_FieldInfo_,
	_MimeTable$DefaultInstanceHolder_MethodInfo_,
	nullptr,
	nullptr,
	_MimeTable$DefaultInstanceHolder_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.net.www.MimeTable"
};

$Object* allocate$MimeTable$DefaultInstanceHolder($Class* clazz) {
	return $of($alloc(MimeTable$DefaultInstanceHolder));
}

$MimeTable* MimeTable$DefaultInstanceHolder::defaultInstance = nullptr;

void MimeTable$DefaultInstanceHolder::init$() {
}

$MimeTable* MimeTable$DefaultInstanceHolder::getDefaultInstance() {
	$init(MimeTable$DefaultInstanceHolder);
	$beforeCallerSensitive();
	return $cast($MimeTable, $AccessController::doPrivileged(static_cast<$PrivilegedAction*>($$new($MimeTable$DefaultInstanceHolder$1))));
}

void clinit$MimeTable$DefaultInstanceHolder($Class* class$) {
	$assignStatic(MimeTable$DefaultInstanceHolder::defaultInstance, MimeTable$DefaultInstanceHolder::getDefaultInstance());
}

MimeTable$DefaultInstanceHolder::MimeTable$DefaultInstanceHolder() {
}

$Class* MimeTable$DefaultInstanceHolder::load$($String* name, bool initialize) {
	$loadClass(MimeTable$DefaultInstanceHolder, name, initialize, &_MimeTable$DefaultInstanceHolder_ClassInfo_, clinit$MimeTable$DefaultInstanceHolder, allocate$MimeTable$DefaultInstanceHolder);
	return class$;
}

$Class* MimeTable$DefaultInstanceHolder::class$ = nullptr;

		} // www
	} // net
} // sun