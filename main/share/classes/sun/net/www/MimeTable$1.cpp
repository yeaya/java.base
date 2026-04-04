#include <sun/net/www/MimeTable$1.h>
#include <jdk/internal/util/StaticProperty.h>
#include <sun/net/www/MimeTable.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $StaticProperty = ::jdk::internal::util::StaticProperty;
using $MimeTable = ::sun::net::www::MimeTable;

namespace sun {
	namespace net {
		namespace www {

void MimeTable$1::init$() {
}

$Object* MimeTable$1::run() {
	$useLocalObjectStack();
	$init($MimeTable);
	$assignStatic($MimeTable::tempFileTemplate, $System::getProperty("content.types.temp.file.template"_s, "/tmp/%s"_s));
	$assignStatic($MimeTable::mailcapLocations, $new($StringArray, {
		$($System::getProperty("user.mailcap"_s)),
		$$str({$($StaticProperty::userHome()), "/.mailcap"_s}),
		"/etc/mailcap"_s,
		"/usr/etc/mailcap"_s,
		"/usr/local/etc/mailcap"_s
	}));
	return nullptr;
}

MimeTable$1::MimeTable$1() {
}

$Class* MimeTable$1::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(MimeTable$1, init$, void)},
		{"run", "()Ljava/lang/Void;", nullptr, $PUBLIC, $virtualMethod(MimeTable$1, run, $Object*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"sun.net.www.MimeTable",
		nullptr,
		nullptr
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.net.www.MimeTable$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.net.www.MimeTable$1",
		"java.lang.Object",
		"java.security.PrivilegedAction",
		nullptr,
		methodInfos$$,
		"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljava/lang/Void;>;",
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.net.www.MimeTable"
	};
	$loadClass(MimeTable$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(MimeTable$1);
	});
	return class$;
}

$Class* MimeTable$1::class$ = nullptr;

		} // www
	} // net
} // sun