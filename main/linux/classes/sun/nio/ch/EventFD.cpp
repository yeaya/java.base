#include <sun/nio/ch/EventFD.h>

#include <sun/nio/ch/FileDispatcherImpl.h>
#include <sun/nio/ch/IOUtil.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $FileDispatcherImpl = ::sun::nio::ch::FileDispatcherImpl;
using $IOUtil = ::sun::nio::ch::IOUtil;

namespace sun {
	namespace nio {
		namespace ch {

$FieldInfo _EventFD_FieldInfo_[] = {
	{"efd", "I", nullptr, $PRIVATE | $FINAL, $field(EventFD, efd$)},
	{}
};

$MethodInfo _EventFD_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(EventFD::*)()>(&EventFD::init$)), "java.io.IOException"},
	{"close", "()V", nullptr, 0, $method(static_cast<void(EventFD::*)()>(&EventFD::close)), "java.io.IOException"},
	{"efd", "()I", nullptr, 0, $method(static_cast<int32_t(EventFD::*)()>(&EventFD::efd))},
	{"eventfd0", "()I", nullptr, $PRIVATE | $STATIC | $NATIVE, $method(static_cast<int32_t(*)()>(&EventFD::eventfd0)), "java.io.IOException"},
	{"reset", "()V", nullptr, 0, $method(static_cast<void(EventFD::*)()>(&EventFD::reset)), "java.io.IOException"},
	{"set", "()V", nullptr, 0, $method(static_cast<void(EventFD::*)()>(&EventFD::set)), "java.io.IOException"},
	{"set0", "(I)I", nullptr, $PRIVATE | $STATIC | $NATIVE, $method(static_cast<int32_t(*)(int32_t)>(&EventFD::set0)), "java.io.IOException"},
	{}
};

#define _METHOD_INDEX_eventfd0 3
#define _METHOD_INDEX_set0 6

$ClassInfo _EventFD_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"sun.nio.ch.EventFD",
	"java.lang.Object",
	nullptr,
	_EventFD_FieldInfo_,
	_EventFD_MethodInfo_
};

$Object* allocate$EventFD($Class* clazz) {
	return $of($alloc(EventFD));
}

void EventFD::init$() {
	this->efd$ = eventfd0();
}

int32_t EventFD::efd() {
	return this->efd$;
}

void EventFD::set() {
	set0(this->efd$);
}

void EventFD::reset() {
	$IOUtil::drain(this->efd$);
}

void EventFD::close() {
	$FileDispatcherImpl::closeIntFD(this->efd$);
}

int32_t EventFD::eventfd0() {
	$init(EventFD);
	int32_t $ret = 0;
	$prepareNativeStatic(EventFD, eventfd0, int32_t);
	$ret = $invokeNativeStatic(EventFD, eventfd0);
	$finishNativeStatic();
	return $ret;
}

int32_t EventFD::set0(int32_t efd) {
	$init(EventFD);
	int32_t $ret = 0;
	$prepareNativeStatic(EventFD, set0, int32_t, int32_t efd);
	$ret = $invokeNativeStatic(EventFD, set0, efd);
	$finishNativeStatic();
	return $ret;
}

void clinit$EventFD($Class* class$) {
	{
		$IOUtil::load();
	}
}

EventFD::EventFD() {
}

$Class* EventFD::load$($String* name, bool initialize) {
	$loadClass(EventFD, name, initialize, &_EventFD_ClassInfo_, clinit$EventFD, allocate$EventFD);
	return class$;
}

$Class* EventFD::class$ = nullptr;

		} // ch
	} // nio
} // sun