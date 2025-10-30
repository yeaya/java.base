#include <sun/net/ProgressEvent.h>

#include <java/net/URL.h>
#include <java/util/EventObject.h>
#include <sun/net/ProgressSource$State.h>
#include <sun/net/ProgressSource.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $URL = ::java::net::URL;
using $EventObject = ::java::util::EventObject;
using $ProgressSource = ::sun::net::ProgressSource;
using $ProgressSource$State = ::sun::net::ProgressSource$State;

namespace sun {
	namespace net {

$FieldInfo _ProgressEvent_FieldInfo_[] = {
	{"url", "Ljava/net/URL;", nullptr, $PRIVATE, $field(ProgressEvent, url)},
	{"contentType", "Ljava/lang/String;", nullptr, $PRIVATE, $field(ProgressEvent, contentType)},
	{"method", "Ljava/lang/String;", nullptr, $PRIVATE, $field(ProgressEvent, method)},
	{"progress", "J", nullptr, $PRIVATE, $field(ProgressEvent, progress)},
	{"expected", "J", nullptr, $PRIVATE, $field(ProgressEvent, expected)},
	{"state", "Lsun/net/ProgressSource$State;", nullptr, $PRIVATE, $field(ProgressEvent, state)},
	{}
};

$MethodInfo _ProgressEvent_MethodInfo_[] = {
	{"<init>", "(Lsun/net/ProgressSource;Ljava/net/URL;Ljava/lang/String;Ljava/lang/String;Lsun/net/ProgressSource$State;JJ)V", nullptr, $PUBLIC, $method(static_cast<void(ProgressEvent::*)($ProgressSource*,$URL*,$String*,$String*,$ProgressSource$State*,int64_t,int64_t)>(&ProgressEvent::init$))},
	{"getContentType", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getExpected", "()J", nullptr, $PUBLIC},
	{"getMethod", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getProgress", "()J", nullptr, $PUBLIC},
	{"getState", "()Lsun/net/ProgressSource$State;", nullptr, $PUBLIC},
	{"getURL", "()Ljava/net/URL;", nullptr, $PUBLIC},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _ProgressEvent_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.net.ProgressEvent",
	"java.util.EventObject",
	nullptr,
	_ProgressEvent_FieldInfo_,
	_ProgressEvent_MethodInfo_
};

$Object* allocate$ProgressEvent($Class* clazz) {
	return $of($alloc(ProgressEvent));
}

void ProgressEvent::init$($ProgressSource* source, $URL* url, $String* method, $String* contentType, $ProgressSource$State* state, int64_t progress, int64_t expected) {
	$EventObject::init$(source);
	$set(this, url, url);
	$set(this, method, method);
	$set(this, contentType, contentType);
	this->progress = progress;
	this->expected = expected;
	$set(this, state, state);
}

$URL* ProgressEvent::getURL() {
	return this->url;
}

$String* ProgressEvent::getMethod() {
	return this->method;
}

$String* ProgressEvent::getContentType() {
	return this->contentType;
}

int64_t ProgressEvent::getProgress() {
	return this->progress;
}

int64_t ProgressEvent::getExpected() {
	return this->expected;
}

$ProgressSource$State* ProgressEvent::getState() {
	return this->state;
}

$String* ProgressEvent::toString() {
	$useLocalCurrentObjectStackCache();
	return $str({$($of(this)->getClass()->getName()), "[url="_s, this->url, ", method="_s, this->method, ", state="_s, this->state, ", content-type="_s, this->contentType, ", progress="_s, $$str(this->progress), ", expected="_s, $$str(this->expected), "]"_s});
}

ProgressEvent::ProgressEvent() {
}

$Class* ProgressEvent::load$($String* name, bool initialize) {
	$loadClass(ProgressEvent, name, initialize, &_ProgressEvent_ClassInfo_, allocate$ProgressEvent);
	return class$;
}

$Class* ProgressEvent::class$ = nullptr;

	} // net
} // sun