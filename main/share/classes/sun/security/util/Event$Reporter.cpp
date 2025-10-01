#include <sun/security/util/Event$Reporter.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <sun/security/util/Event.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Event = ::sun::security::util::Event;

namespace sun {
	namespace security {
		namespace util {

$MethodInfo _Event$Reporter_MethodInfo_[] = {
	{"handle", "(Ljava/lang/String;[Ljava/lang/Object;)V", nullptr, $PUBLIC | $TRANSIENT | $ABSTRACT},
	{}
};

$InnerClassInfo _Event$Reporter_InnerClassesInfo_[] = {
	{"sun.security.util.Event$Reporter", "sun.security.util.Event", "Reporter", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _Event$Reporter_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"sun.security.util.Event$Reporter",
	nullptr,
	nullptr,
	nullptr,
	_Event$Reporter_MethodInfo_,
	nullptr,
	nullptr,
	_Event$Reporter_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.security.util.Event"
};

$Object* allocate$Event$Reporter($Class* clazz) {
	return $of($alloc(Event$Reporter));
}

$Class* Event$Reporter::load$($String* name, bool initialize) {
	$loadClass(Event$Reporter, name, initialize, &_Event$Reporter_ClassInfo_, allocate$Event$Reporter);
	return class$;
}

$Class* Event$Reporter::class$ = nullptr;

		} // util
	} // security
} // sun