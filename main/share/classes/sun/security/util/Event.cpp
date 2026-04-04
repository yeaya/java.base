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
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PRIVATE, $method(Event, init$, void)},
		{"clearReportListener", "(Lsun/security/util/Event$ReporterCategory;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(Event, clearReportListener, void, $Event$ReporterCategory*)},
		{"report", "(Lsun/security/util/Event$ReporterCategory;Ljava/lang/String;[Ljava/lang/Object;)V", nullptr, $PUBLIC | $STATIC | $TRANSIENT, $staticMethod(Event, report, void, $Event$ReporterCategory*, $String*, $ObjectArray*)},
		{"setReportListener", "(Lsun/security/util/Event$ReporterCategory;Lsun/security/util/Event$Reporter;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(Event, setReportListener, void, $Event$ReporterCategory*, $Event$Reporter*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.security.util.Event$Reporter", "sun.security.util.Event", "Reporter", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
		{"sun.security.util.Event$ReporterCategory", "sun.security.util.Event", "ReporterCategory", $PUBLIC | $STATIC | $FINAL | $ENUM},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER,
		"sun.security.util.Event",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"sun.security.util.Event$Reporter,sun.security.util.Event$ReporterCategory"
	};
	$loadClass(Event, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Event);
	});
	return class$;
}

$Class* Event::class$ = nullptr;

		} // util
	} // security
} // sun