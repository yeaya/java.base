#include <java/time/zone/ZoneRulesException.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/Throwable.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/time/DateTimeException.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $DateTimeException = ::java::time::DateTimeException;

namespace java {
	namespace time {
		namespace zone {

$FieldInfo _ZoneRulesException_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(ZoneRulesException, serialVersionUID)},
	{}
};

$MethodInfo _ZoneRulesException_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(ZoneRulesException::*)($String*)>(&ZoneRulesException::init$))},
	{"<init>", "(Ljava/lang/String;Ljava/lang/Throwable;)V", nullptr, $PUBLIC, $method(static_cast<void(ZoneRulesException::*)($String*,$Throwable*)>(&ZoneRulesException::init$))},
	{}
};

$ClassInfo _ZoneRulesException_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.time.zone.ZoneRulesException",
	"java.time.DateTimeException",
	nullptr,
	_ZoneRulesException_FieldInfo_,
	_ZoneRulesException_MethodInfo_
};

$Object* allocate$ZoneRulesException($Class* clazz) {
	return $of($alloc(ZoneRulesException));
}

void ZoneRulesException::init$($String* message) {
	$DateTimeException::init$(message);
}

void ZoneRulesException::init$($String* message, $Throwable* cause) {
	$DateTimeException::init$(message, cause);
}

ZoneRulesException::ZoneRulesException() {
}

ZoneRulesException::ZoneRulesException(const ZoneRulesException& e) {
}

ZoneRulesException ZoneRulesException::wrapper$() {
	$pendingException(this);
	return *this;
}

void ZoneRulesException::throwWrapper$() {
	$pendingException(this);
	throw *this;
}

$Class* ZoneRulesException::load$($String* name, bool initialize) {
	$loadClass(ZoneRulesException, name, initialize, &_ZoneRulesException_ClassInfo_, allocate$ZoneRulesException);
	return class$;
}

$Class* ZoneRulesException::class$ = nullptr;

		} // zone
	} // time
} // java