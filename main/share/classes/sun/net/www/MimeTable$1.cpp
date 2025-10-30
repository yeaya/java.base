#include <sun/net/www/MimeTable$1.h>

#include <jdk/internal/util/StaticProperty.h>
#include <sun/net/www/MimeTable.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $PrivilegedAction = ::java::security::PrivilegedAction;
using $StaticProperty = ::jdk::internal::util::StaticProperty;
using $MimeTable = ::sun::net::www::MimeTable;

namespace sun {
	namespace net {
		namespace www {

$MethodInfo _MimeTable$1_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(MimeTable$1::*)()>(&MimeTable$1::init$))},
	{"run", "()Ljava/lang/Void;", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _MimeTable$1_EnclosingMethodInfo_ = {
	"sun.net.www.MimeTable",
	nullptr,
	nullptr
};

$InnerClassInfo _MimeTable$1_InnerClassesInfo_[] = {
	{"sun.net.www.MimeTable$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _MimeTable$1_ClassInfo_ = {
	$ACC_SUPER,
	"sun.net.www.MimeTable$1",
	"java.lang.Object",
	"java.security.PrivilegedAction",
	nullptr,
	_MimeTable$1_MethodInfo_,
	"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljava/lang/Void;>;",
	&_MimeTable$1_EnclosingMethodInfo_,
	_MimeTable$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.net.www.MimeTable"
};

$Object* allocate$MimeTable$1($Class* clazz) {
	return $of($alloc(MimeTable$1));
}

void MimeTable$1::init$() {
}

$Object* MimeTable$1::run() {
	$useLocalCurrentObjectStackCache();
	$init($MimeTable);
	$assignStatic($MimeTable::tempFileTemplate, $System::getProperty("content.types.temp.file.template"_s, "/tmp/%s"_s));
	$assignStatic($MimeTable::mailcapLocations, $new($StringArray, {
		$($System::getProperty("user.mailcap"_s)),
		$$str({$($StaticProperty::userHome()), "/.mailcap"_s}),
		"/etc/mailcap"_s,
		"/usr/etc/mailcap"_s,
		"/usr/local/etc/mailcap"_s
	}));
	return $of(nullptr);
}

MimeTable$1::MimeTable$1() {
}

$Class* MimeTable$1::load$($String* name, bool initialize) {
	$loadClass(MimeTable$1, name, initialize, &_MimeTable$1_ClassInfo_, allocate$MimeTable$1);
	return class$;
}

$Class* MimeTable$1::class$ = nullptr;

		} // www
	} // net
} // sun