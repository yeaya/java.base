#include <sun/security/util/Event.h>

#include <sun/security/util/Event$Reporter.h>
#include <sun/security/util/Event$ReporterCategory.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Event$Reporter = ::sun::security::util::Event$Reporter;
using $Event$ReporterCategory = ::sun::security::util::Event$ReporterCategory;

namespace sun {
	namespace security {
		namespace util {

$MethodInfo _Event_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(Event::*)()>(&Event::init$))},
	{"clearReportListener", "(Lsun/security/util/Event$ReporterCategory;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($Event$ReporterCategory*)>(&Event::clearReportListener))},
	{"report", "(Lsun/security/util/Event$ReporterCategory;Ljava/lang/String;[Ljava/lang/Object;)V", nullptr, $PUBLIC | $STATIC | $TRANSIENT, $method(static_cast<void(*)($Event$ReporterCategory*,$String*,$ObjectArray*)>(&Event::report))},
	{"setReportListener", "(Lsun/security/util/Event$ReporterCategory;Lsun/security/util/Event$Reporter;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($Event$ReporterCategory*,$Event$Reporter*)>(&Event::setReportListener))},
	{}
};

$InnerClassInfo _Event_InnerClassesInfo_[] = {
	{"sun.security.util.Event$Reporter", "sun.security.util.Event", "Reporter", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{"sun.security.util.Event$ReporterCategory", "sun.security.util.Event", "ReporterCategory", $PUBLIC | $STATIC | $FINAL | $ENUM},
	{}
};

$ClassInfo _Event_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"sun.security.util.Event",
	"java.lang.Object",
	nullptr,
	nullptr,
	_Event_MethodInfo_,
	nullptr,
	nullptr,
	_Event_InnerClassesInfo_,
	nullptr,
	nullptr,
	"sun.security.util.Event$Reporter,sun.security.util.Event$ReporterCategory"
};

$Object* allocate$Event($Class* clazz) {
	return $of($alloc(Event));
}

void Event::init$() {
}

void Event::setReportListener($Event$ReporterCategory* cat, $Event$Reporter* re) {
	$set($nc(cat), reporter, re);
}

void Event::clearReportListener($Event$ReporterCategory* cat) {
	$set($nc(cat), reporter, nullptr);
}

void Event::report($Event$ReporterCategory* cat, $String* type, $ObjectArray* args) {
	$var($Event$Reporter, currentReporter, $nc(cat)->reporter);
	if (currentReporter != nullptr) {
		currentReporter->handle(type, args);
	}
}

Event::Event() {
}

$Class* Event::load$($String* name, bool initialize) {
	$loadClass(Event, name, initialize, &_Event_ClassInfo_, allocate$Event);
	return class$;
}

$Class* Event::class$ = nullptr;

		} // util
	} // security
} // sun